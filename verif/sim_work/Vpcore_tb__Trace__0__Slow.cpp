// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpcore_tb__Syms.h"


VL_ATTR_COLD void Vpcore_tb___024root__trace_init_sub__TOP__0(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+2084,"reset", false,-1);
    tracep->pushNamePrefix("pcore_tb ");
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+2084,"reset", false,-1);
    tracep->declBit(c+1,"irq_ext", false,-1);
    tracep->declBit(c+2,"irq_soft", false,-1);
    tracep->declBit(c+3,"uart_rx", false,-1);
    tracep->declBit(c+427,"uart_tx", false,-1);
    tracep->declBit(c+1831,"spi_clk", false,-1);
    tracep->declBit(c+428,"spi_cs", false,-1);
    tracep->declBit(c+429,"spi_mosi", false,-1);
    tracep->declBit(c+4,"spi_miso", false,-1);
    tracep->declArray(c+5,"firmware", false,-1, 1023,0);
    tracep->declArray(c+37,"max_cycles", false,-1, 1023,0);
    tracep->declArray(c+70,"main_time", false,-1, 1023,0);
    tracep->declBit(c+2085,"sig_en", false,-1);
    tracep->declBit(c+2086,"halt_en", false,-1);
    tracep->declArray(c+2124,"signature_file", false,-1, 1023,0);
    tracep->declBus(c+69,"write_sig", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+1,"irq_ext_i", false,-1);
    tracep->declBit(c+2,"irq_soft_i", false,-1);
    tracep->declBit(c+3,"uart_rxd_i", false,-1);
    tracep->declBit(c+427,"uart_txd_o", false,-1);
    tracep->declBit(c+1831,"spi_clk_o", false,-1);
    tracep->declBit(c+428,"spi_cs_o", false,-1);
    tracep->declBit(c+4,"spi_miso_i", false,-1);
    tracep->declBit(c+429,"spi_mosi_o", false,-1);
    tracep->pushNamePrefix("debug_port_i ");
    tracep->declBus(c+2156,"reg_data", false,-1, 31,0);
    tracep->declBus(c+2157,"reg_addr", false,-1, 4,0);
    tracep->declBit(c+2158,"reg_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2icache ");
    tracep->declBus(c+1067,"addr", false,-1, 31,0);
    tracep->declBit(c+1068,"req", false,-1);
    tracep->declBit(c+1144,"req_kill", false,-1);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2if ");
    tracep->declBus(c+1146,"r_data", false,-1, 31,0);
    tracep->declBit(c+1147,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2dcache ");
    tracep->declBus(c+1845,"paddr", false,-1, 31,0);
    tracep->declBit(c+1846,"r_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2mmu ");
    tracep->declBus(c+1148,"r_data", false,-1, 31,0);
    tracep->declBit(c+1149,"r_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus ");
    tracep->declBus(c+1150,"addr", false,-1, 31,0);
    tracep->declBus(c+1151,"w_data", false,-1, 31,0);
    tracep->declBus(c+1152,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1153,"ld_req", false,-1);
    tracep->declBit(c+1154,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu ");
    tracep->declBus(c+1155,"r_data", false,-1, 31,0);
    tracep->declBit(c+1156,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2peri ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core2pipe ");
    tracep->declBus(c+430,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+431,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+432,"timer_irq", false,-1);
    tracep->declBit(c+433,"soft_irq", false,-1);
    tracep->declBit(c+434,"uart_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2csr ");
    tracep->declBus(c+1115,"timer_val", false,-1, 31,0);
    tracep->declBit(c+1116,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1162,"dmem_sel", false,-1);
    tracep->declBit(c+1163,"uart_sel", false,-1);
    tracep->declBit(c+1164,"clint_sel", false,-1);
    tracep->declBit(c+1165,"plic_sel", false,-1);
    tracep->declBit(c+1166,"bmem_sel", false,-1);
    tracep->declBit(c+1167,"uart_ns_sel", false,-1);
    tracep->declBit(c+1168,"spi_sel", false,-1);
    tracep->declBit(c+1119,"dcache_flush", false,-1);
    tracep->declBit(c+2159,"uart_ns_rxd_i", false,-1);
    tracep->declBit(c+435,"uart_ns_txd_o", false,-1);
    tracep->declBit(c+436,"irq_uart", false,-1);
    tracep->declBit(c+437,"irq_ns_uart", false,-1);
    tracep->declBit(c+438,"irq_spi", false,-1);
    tracep->declBit(c+439,"irq_clint_timer", false,-1);
    tracep->declBit(c+440,"irq_plic_target_0", false,-1);
    tracep->declBit(c+441,"irq_plic_target_1", false,-1);
    tracep->pushNamePrefix("dcache2dbus ");
    tracep->declBus(c+1169,"r_data", false,-1, 31,0);
    tracep->declBit(c+1170,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus ");
    tracep->declBus(c+102,"r_data", false,-1, 31,0);
    tracep->declBit(c+103,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus ");
    tracep->declBus(c+104,"r_data", false,-1, 31,0);
    tracep->declBit(c+105,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus ");
    tracep->declBus(c+106,"r_data", false,-1, 31,0);
    tracep->declBit(c+107,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bmem2dbus ");
    tracep->declBus(c+442,"r_data", false,-1, 31,0);
    tracep->declBit(c+443,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uartns2dbus ");
    tracep->declBus(c+108,"r_data", false,-1, 31,0);
    tracep->declBit(c+109,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus ");
    tracep->declBus(c+110,"r_data", false,-1, 31,0);
    tracep->declBit(c+111,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("dbus2clint_i ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus_o ");
    tracep->declBus(c+104,"r_data", false,-1, 31,0);
    tracep->declBit(c+105,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1164,"clint_sel_i", false,-1);
    tracep->pushNamePrefix("clint2csr_o ");
    tracep->declBus(c+1115,"timer_val", false,-1, 31,0);
    tracep->declBit(c+1116,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+439,"clint_timer_irq_o", false,-1);
    tracep->declBus(c+2087,"r_data", false,-1, 31,0);
    tracep->declBus(c+1171,"w_data", false,-1, 31,0);
    tracep->declBus(c+1172,"addr_offset", false,-1, 15,0);
    tracep->declBit(c+1173,"r_req", false,-1);
    tracep->declBit(c+1174,"w_req", false,-1);
    tracep->declQuad(c+1117,"mtime_ff", false,-1, 63,0);
    tracep->declQuad(c+2088,"mtime_next", false,-1, 63,0);
    tracep->declQuad(c+444,"mtimecmp_ff", false,-1, 63,0);
    tracep->declQuad(c+1175,"mtimecmp_next", false,-1, 63,0);
    tracep->declBit(c+1177,"mtime_lo_wr_flag", false,-1);
    tracep->declBit(c+1178,"mtime_hi_wr_flag", false,-1);
    tracep->declBit(c+1179,"mtimecmp_lo_wr_flag", false,-1);
    tracep->declBit(c+1180,"mtimecmp_hi_wr_flag", false,-1);
    tracep->declBit(c+439,"timer_overflow_ff", false,-1);
    tracep->declBit(c+2090,"timer_overflow_next", false,-1);
    tracep->declBit(c+2091,"mtime_select_ff", false,-1);
    tracep->pushNamePrefix("clint2csr ");
    tracep->declBus(c+1115,"timer_val", false,-1, 31,0);
    tracep->declBit(c+1116,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+446,"timer_clk_ff", false,-1);
    tracep->declBit(c+447,"timer_clk_next", false,-1);
    tracep->declBus(c+448,"timer_prescaler_ff", false,-1, 6,0);
    tracep->declBus(c+449,"timer_prescaler_next", false,-1, 6,0);
    tracep->pushNamePrefix("clint2dbus_ff ");
    tracep->declBus(c+104,"r_data", false,-1, 31,0);
    tracep->declBit(c+105,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core_top_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("if2icache_o ");
    tracep->declBus(c+1067,"addr", false,-1, 31,0);
    tracep->declBit(c+1068,"req", false,-1);
    tracep->declBit(c+1144,"req_kill", false,-1);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2if_i ");
    tracep->declBus(c+1146,"r_data", false,-1, 31,0);
    tracep->declBit(c+1147,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2mmu_i ");
    tracep->declBus(c+1148,"r_data", false,-1, 31,0);
    tracep->declBit(c+1149,"r_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2dcache_o ");
    tracep->declBus(c+1845,"paddr", false,-1, 31,0);
    tracep->declBit(c+1846,"r_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus_o ");
    tracep->declBus(c+1150,"addr", false,-1, 31,0);
    tracep->declBus(c+1151,"w_data", false,-1, 31,0);
    tracep->declBus(c+1152,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1153,"ld_req", false,-1);
    tracep->declBit(c+1154,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_i ");
    tracep->declBus(c+1155,"r_data", false,-1, 31,0);
    tracep->declBit(c+1156,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1119,"dcache_flush_o", false,-1);
    tracep->pushNamePrefix("clint2csr_i ");
    tracep->declBus(c+1115,"timer_val", false,-1, 31,0);
    tracep->declBit(c+1116,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core2pipe_i ");
    tracep->declBus(c+430,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+431,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+432,"timer_irq", false,-1);
    tracep->declBit(c+433,"soft_irq", false,-1);
    tracep->declBit(c+434,"uart_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("debug_port_i ");
    tracep->declBus(c+2156,"reg_data", false,-1, 31,0);
    tracep->declBus(c+2157,"reg_addr", false,-1, 4,0);
    tracep->declBit(c+2158,"reg_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2mmu ");
    tracep->declBus(c+1847,"i_vaddr", false,-1, 31,0);
    tracep->declBit(c+2160,"i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2if ");
    tracep->declQuad(c+1069,"i_paddr", false,-1, 33,0);
    tracep->declBit(c+1071,"i_hit", false,-1);
    tracep->declBit(c+1072,"i_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2mmu ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+1181,"lsu_flush", false,-1);
    tracep->declBit(c+1182,"d_req", false,-1);
    tracep->declBit(c+1183,"st_req", false,-1);
    tracep->declBit(c+1120,"is_amo", false,-1);
    tracep->declBus(c+113,"d_vaddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2lsu ");
    tracep->declQuad(c+1184,"d_paddr", false,-1, 33,0);
    tracep->declBit(c+1186,"d_hit", false,-1);
    tracep->declBit(c+1187,"ld_page_fault", false,-1);
    tracep->declBit(c+1188,"st_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("lsu2mmu_i ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+1181,"lsu_flush", false,-1);
    tracep->declBit(c+1182,"d_req", false,-1);
    tracep->declBit(c+1183,"st_req", false,-1);
    tracep->declBit(c+1120,"is_amo", false,-1);
    tracep->declBus(c+113,"d_vaddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2lsu_o ");
    tracep->declQuad(c+1184,"d_paddr", false,-1, 33,0);
    tracep->declBit(c+1186,"d_hit", false,-1);
    tracep->declBit(c+1187,"ld_page_fault", false,-1);
    tracep->declBit(c+1188,"st_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2mmu_i ");
    tracep->declBus(c+1847,"i_vaddr", false,-1, 31,0);
    tracep->declBit(c+2160,"i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2if_o ");
    tracep->declQuad(c+1069,"i_paddr", false,-1, 33,0);
    tracep->declBit(c+1071,"i_hit", false,-1);
    tracep->declBit(c+1072,"i_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2mmu_i ");
    tracep->declBus(c+1148,"r_data", false,-1, 31,0);
    tracep->declBit(c+1149,"r_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2dcache_o ");
    tracep->declBus(c+1845,"paddr", false,-1, 31,0);
    tracep->declBit(c+1846,"r_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2mmu ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+1181,"lsu_flush", false,-1);
    tracep->declBit(c+1182,"d_req", false,-1);
    tracep->declBit(c+1183,"st_req", false,-1);
    tracep->declBit(c+1120,"is_amo", false,-1);
    tracep->declBus(c+113,"d_vaddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2lsu ");
    tracep->declQuad(c+1184,"d_paddr", false,-1, 33,0);
    tracep->declBit(c+1186,"d_hit", false,-1);
    tracep->declBit(c+1187,"ld_page_fault", false,-1);
    tracep->declBit(c+1188,"st_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2mmu ");
    tracep->declBus(c+1847,"i_vaddr", false,-1, 31,0);
    tracep->declBit(c+2160,"i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2if ");
    tracep->declQuad(c+1069,"i_paddr", false,-1, 33,0);
    tracep->declBit(c+1071,"i_hit", false,-1);
    tracep->declBit(c+1072,"i_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2mmu ");
    tracep->declBus(c+1148,"r_data", false,-1, 31,0);
    tracep->declBit(c+1149,"r_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2dcache ");
    tracep->declBus(c+1845,"paddr", false,-1, 31,0);
    tracep->declBit(c+1846,"r_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2ptw ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+1181,"flush_req", false,-1);
    tracep->declBus(c+113,"dtlb_vaddr", false,-1, 31,0);
    tracep->declBit(c+1189,"dtlb_req", false,-1);
    tracep->declBit(c+1190,"dtlb_hit", false,-1);
    tracep->declBit(c+1183,"is_store", false,-1);
    tracep->declBus(c+1847,"itlb_vaddr", false,-1, 31,0);
    tracep->declBit(c+451,"itlb_req", false,-1);
    tracep->declBit(c+1848,"itlb_hit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ptw2mmu ");
    tracep->declBit(c+453,"ptw_active", false,-1);
    tracep->declBit(c+454,"iwalk_active", false,-1);
    tracep->declBit(c+455,"pte_error", false,-1);
    tracep->declBit(c+456,"access_exc", false,-1);
    tracep->declBus(c+457,"vaddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2itlb ");
    tracep->declBus(c+1849,"vpage_addr", false,-1, 19,0);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+2160,"tlb_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2dtlb ");
    tracep->declBus(c+114,"vpage_addr", false,-1, 19,0);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+1182,"tlb_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("itlb2mmu ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1850,"ppn", false,-1, 21,0);
    tracep->declBus(c+1851,"rsw", false,-1, 1,0);
    tracep->declBit(c+1852,"d", false,-1);
    tracep->declBit(c+1853,"a", false,-1);
    tracep->declBit(c+1854,"g", false,-1);
    tracep->declBit(c+1855,"u", false,-1);
    tracep->declBit(c+1856,"x", false,-1);
    tracep->declBit(c+1857,"w", false,-1);
    tracep->declBit(c+1858,"r", false,-1);
    tracep->declBit(c+1859,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1860,"hit", false,-1);
    tracep->declBit(c+1861,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dtlb2mmu ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1191,"ppn", false,-1, 21,0);
    tracep->declBus(c+1192,"rsw", false,-1, 1,0);
    tracep->declBit(c+1193,"d", false,-1);
    tracep->declBit(c+1194,"a", false,-1);
    tracep->declBit(c+1195,"g", false,-1);
    tracep->declBit(c+1196,"u", false,-1);
    tracep->declBit(c+1197,"x", false,-1);
    tracep->declBit(c+1198,"w", false,-1);
    tracep->declBit(c+1199,"r", false,-1);
    tracep->declBit(c+1200,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1201,"hit", false,-1);
    tracep->declBit(c+1202,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ptw2tlb ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+458,"ppn", false,-1, 21,0);
    tracep->declBus(c+459,"rsw", false,-1, 1,0);
    tracep->declBit(c+460,"d", false,-1);
    tracep->declBit(c+461,"a", false,-1);
    tracep->declBit(c+462,"g", false,-1);
    tracep->declBit(c+463,"u", false,-1);
    tracep->declBit(c+464,"x", false,-1);
    tracep->declBit(c+465,"w", false,-1);
    tracep->declBit(c+466,"r", false,-1);
    tracep->declBit(c+467,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+468,"vpn", false,-1, 19,0);
    tracep->declBit(c+469,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+470,"itlb_update", false,-1);
    tracep->declBit(c+1203,"ld_page_fault", false,-1);
    tracep->declBit(c+1204,"st_page_fault", false,-1);
    tracep->declBit(c+471,"i_page_fault", false,-1);
    tracep->declBit(c+1205,"dtlb_update", false,-1);
    tracep->pushNamePrefix("dtlb_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("ptw2tlb_i ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+458,"ppn", false,-1, 21,0);
    tracep->declBus(c+459,"rsw", false,-1, 1,0);
    tracep->declBit(c+460,"d", false,-1);
    tracep->declBit(c+461,"a", false,-1);
    tracep->declBit(c+462,"g", false,-1);
    tracep->declBit(c+463,"u", false,-1);
    tracep->declBit(c+464,"x", false,-1);
    tracep->declBit(c+465,"w", false,-1);
    tracep->declBit(c+466,"r", false,-1);
    tracep->declBit(c+467,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+468,"vpn", false,-1, 19,0);
    tracep->declBit(c+469,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1205,"tlb_update_i", false,-1);
    tracep->pushNamePrefix("mmu2tlb_i ");
    tracep->declBus(c+114,"vpage_addr", false,-1, 19,0);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+1182,"tlb_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tlb2mmu_o ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1191,"ppn", false,-1, 21,0);
    tracep->declBus(c+1192,"rsw", false,-1, 1,0);
    tracep->declBit(c+1193,"d", false,-1);
    tracep->declBit(c+1194,"a", false,-1);
    tracep->declBit(c+1195,"g", false,-1);
    tracep->declBit(c+1196,"u", false,-1);
    tracep->declBit(c+1197,"x", false,-1);
    tracep->declBit(c+1198,"w", false,-1);
    tracep->declBit(c+1199,"r", false,-1);
    tracep->declBit(c+1200,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1201,"hit", false,-1);
    tracep->declBit(c+1202,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2tlb ");
    tracep->declBus(c+114,"vpage_addr", false,-1, 19,0);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+1182,"tlb_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tlb2mmu ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1191,"ppn", false,-1, 21,0);
    tracep->declBus(c+1192,"rsw", false,-1, 1,0);
    tracep->declBit(c+1193,"d", false,-1);
    tracep->declBit(c+1194,"a", false,-1);
    tracep->declBit(c+1195,"g", false,-1);
    tracep->declBit(c+1196,"u", false,-1);
    tracep->declBit(c+1197,"x", false,-1);
    tracep->declBit(c+1198,"w", false,-1);
    tracep->declBit(c+1199,"r", false,-1);
    tracep->declBit(c+1200,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1201,"hit", false,-1);
    tracep->declBit(c+1202,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ptw2tlb ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+458,"ppn", false,-1, 21,0);
    tracep->declBus(c+459,"rsw", false,-1, 1,0);
    tracep->declBit(c+460,"d", false,-1);
    tracep->declBit(c+461,"a", false,-1);
    tracep->declBit(c+462,"g", false,-1);
    tracep->declBit(c+463,"u", false,-1);
    tracep->declBit(c+464,"x", false,-1);
    tracep->declBit(c+465,"w", false,-1);
    tracep->declBit(c+466,"r", false,-1);
    tracep->declBit(c+467,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+468,"vpn", false,-1, 19,0);
    tracep->declBit(c+469,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+115,"vpn_0", false,-1, 9,0);
    tracep->declBus(c+116,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+117,"r_index", false,-1, 3,0);
    tracep->declBus(c+1206,"w_index", false,-1, 3,0);
    tracep->pushNamePrefix("tlb_array_ff");
    tracep->pushNamePrefix("[0] ");
    tracep->declBus(c+472,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+473,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+474,"valid", false,-1);
    tracep->declBit(c+475,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+476,"ppn", false,-1, 21,0);
    tracep->declBus(c+477,"rsw", false,-1, 1,0);
    tracep->declBit(c+478,"d", false,-1);
    tracep->declBit(c+479,"a", false,-1);
    tracep->declBit(c+480,"g", false,-1);
    tracep->declBit(c+481,"u", false,-1);
    tracep->declBit(c+482,"x", false,-1);
    tracep->declBit(c+483,"w", false,-1);
    tracep->declBit(c+484,"r", false,-1);
    tracep->declBit(c+485,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1] ");
    tracep->declBus(c+486,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+487,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+488,"valid", false,-1);
    tracep->declBit(c+489,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+490,"ppn", false,-1, 21,0);
    tracep->declBus(c+491,"rsw", false,-1, 1,0);
    tracep->declBit(c+492,"d", false,-1);
    tracep->declBit(c+493,"a", false,-1);
    tracep->declBit(c+494,"g", false,-1);
    tracep->declBit(c+495,"u", false,-1);
    tracep->declBit(c+496,"x", false,-1);
    tracep->declBit(c+497,"w", false,-1);
    tracep->declBit(c+498,"r", false,-1);
    tracep->declBit(c+499,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2] ");
    tracep->declBus(c+500,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+501,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+502,"valid", false,-1);
    tracep->declBit(c+503,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+504,"ppn", false,-1, 21,0);
    tracep->declBus(c+505,"rsw", false,-1, 1,0);
    tracep->declBit(c+506,"d", false,-1);
    tracep->declBit(c+507,"a", false,-1);
    tracep->declBit(c+508,"g", false,-1);
    tracep->declBit(c+509,"u", false,-1);
    tracep->declBit(c+510,"x", false,-1);
    tracep->declBit(c+511,"w", false,-1);
    tracep->declBit(c+512,"r", false,-1);
    tracep->declBit(c+513,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3] ");
    tracep->declBus(c+514,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+515,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+516,"valid", false,-1);
    tracep->declBit(c+517,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+518,"ppn", false,-1, 21,0);
    tracep->declBus(c+519,"rsw", false,-1, 1,0);
    tracep->declBit(c+520,"d", false,-1);
    tracep->declBit(c+521,"a", false,-1);
    tracep->declBit(c+522,"g", false,-1);
    tracep->declBit(c+523,"u", false,-1);
    tracep->declBit(c+524,"x", false,-1);
    tracep->declBit(c+525,"w", false,-1);
    tracep->declBit(c+526,"r", false,-1);
    tracep->declBit(c+527,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4] ");
    tracep->declBus(c+528,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+529,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+530,"valid", false,-1);
    tracep->declBit(c+531,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+532,"ppn", false,-1, 21,0);
    tracep->declBus(c+533,"rsw", false,-1, 1,0);
    tracep->declBit(c+534,"d", false,-1);
    tracep->declBit(c+535,"a", false,-1);
    tracep->declBit(c+536,"g", false,-1);
    tracep->declBit(c+537,"u", false,-1);
    tracep->declBit(c+538,"x", false,-1);
    tracep->declBit(c+539,"w", false,-1);
    tracep->declBit(c+540,"r", false,-1);
    tracep->declBit(c+541,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5] ");
    tracep->declBus(c+542,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+543,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+544,"valid", false,-1);
    tracep->declBit(c+545,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+546,"ppn", false,-1, 21,0);
    tracep->declBus(c+547,"rsw", false,-1, 1,0);
    tracep->declBit(c+548,"d", false,-1);
    tracep->declBit(c+549,"a", false,-1);
    tracep->declBit(c+550,"g", false,-1);
    tracep->declBit(c+551,"u", false,-1);
    tracep->declBit(c+552,"x", false,-1);
    tracep->declBit(c+553,"w", false,-1);
    tracep->declBit(c+554,"r", false,-1);
    tracep->declBit(c+555,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6] ");
    tracep->declBus(c+556,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+557,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+558,"valid", false,-1);
    tracep->declBit(c+559,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+560,"ppn", false,-1, 21,0);
    tracep->declBus(c+561,"rsw", false,-1, 1,0);
    tracep->declBit(c+562,"d", false,-1);
    tracep->declBit(c+563,"a", false,-1);
    tracep->declBit(c+564,"g", false,-1);
    tracep->declBit(c+565,"u", false,-1);
    tracep->declBit(c+566,"x", false,-1);
    tracep->declBit(c+567,"w", false,-1);
    tracep->declBit(c+568,"r", false,-1);
    tracep->declBit(c+569,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7] ");
    tracep->declBus(c+570,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+571,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+572,"valid", false,-1);
    tracep->declBit(c+573,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+574,"ppn", false,-1, 21,0);
    tracep->declBus(c+575,"rsw", false,-1, 1,0);
    tracep->declBit(c+576,"d", false,-1);
    tracep->declBit(c+577,"a", false,-1);
    tracep->declBit(c+578,"g", false,-1);
    tracep->declBit(c+579,"u", false,-1);
    tracep->declBit(c+580,"x", false,-1);
    tracep->declBit(c+581,"w", false,-1);
    tracep->declBit(c+582,"r", false,-1);
    tracep->declBit(c+583,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[8] ");
    tracep->declBus(c+584,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+585,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+586,"valid", false,-1);
    tracep->declBit(c+587,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+588,"ppn", false,-1, 21,0);
    tracep->declBus(c+589,"rsw", false,-1, 1,0);
    tracep->declBit(c+590,"d", false,-1);
    tracep->declBit(c+591,"a", false,-1);
    tracep->declBit(c+592,"g", false,-1);
    tracep->declBit(c+593,"u", false,-1);
    tracep->declBit(c+594,"x", false,-1);
    tracep->declBit(c+595,"w", false,-1);
    tracep->declBit(c+596,"r", false,-1);
    tracep->declBit(c+597,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[9] ");
    tracep->declBus(c+598,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+599,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+600,"valid", false,-1);
    tracep->declBit(c+601,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+602,"ppn", false,-1, 21,0);
    tracep->declBus(c+603,"rsw", false,-1, 1,0);
    tracep->declBit(c+604,"d", false,-1);
    tracep->declBit(c+605,"a", false,-1);
    tracep->declBit(c+606,"g", false,-1);
    tracep->declBit(c+607,"u", false,-1);
    tracep->declBit(c+608,"x", false,-1);
    tracep->declBit(c+609,"w", false,-1);
    tracep->declBit(c+610,"r", false,-1);
    tracep->declBit(c+611,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[10] ");
    tracep->declBus(c+612,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+613,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+614,"valid", false,-1);
    tracep->declBit(c+615,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+616,"ppn", false,-1, 21,0);
    tracep->declBus(c+617,"rsw", false,-1, 1,0);
    tracep->declBit(c+618,"d", false,-1);
    tracep->declBit(c+619,"a", false,-1);
    tracep->declBit(c+620,"g", false,-1);
    tracep->declBit(c+621,"u", false,-1);
    tracep->declBit(c+622,"x", false,-1);
    tracep->declBit(c+623,"w", false,-1);
    tracep->declBit(c+624,"r", false,-1);
    tracep->declBit(c+625,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[11] ");
    tracep->declBus(c+626,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+627,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+628,"valid", false,-1);
    tracep->declBit(c+629,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+630,"ppn", false,-1, 21,0);
    tracep->declBus(c+631,"rsw", false,-1, 1,0);
    tracep->declBit(c+632,"d", false,-1);
    tracep->declBit(c+633,"a", false,-1);
    tracep->declBit(c+634,"g", false,-1);
    tracep->declBit(c+635,"u", false,-1);
    tracep->declBit(c+636,"x", false,-1);
    tracep->declBit(c+637,"w", false,-1);
    tracep->declBit(c+638,"r", false,-1);
    tracep->declBit(c+639,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[12] ");
    tracep->declBus(c+640,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+641,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+642,"valid", false,-1);
    tracep->declBit(c+643,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+644,"ppn", false,-1, 21,0);
    tracep->declBus(c+645,"rsw", false,-1, 1,0);
    tracep->declBit(c+646,"d", false,-1);
    tracep->declBit(c+647,"a", false,-1);
    tracep->declBit(c+648,"g", false,-1);
    tracep->declBit(c+649,"u", false,-1);
    tracep->declBit(c+650,"x", false,-1);
    tracep->declBit(c+651,"w", false,-1);
    tracep->declBit(c+652,"r", false,-1);
    tracep->declBit(c+653,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[13] ");
    tracep->declBus(c+654,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+655,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+656,"valid", false,-1);
    tracep->declBit(c+657,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+658,"ppn", false,-1, 21,0);
    tracep->declBus(c+659,"rsw", false,-1, 1,0);
    tracep->declBit(c+660,"d", false,-1);
    tracep->declBit(c+661,"a", false,-1);
    tracep->declBit(c+662,"g", false,-1);
    tracep->declBit(c+663,"u", false,-1);
    tracep->declBit(c+664,"x", false,-1);
    tracep->declBit(c+665,"w", false,-1);
    tracep->declBit(c+666,"r", false,-1);
    tracep->declBit(c+667,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[14] ");
    tracep->declBus(c+668,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+669,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+670,"valid", false,-1);
    tracep->declBit(c+671,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+672,"ppn", false,-1, 21,0);
    tracep->declBus(c+673,"rsw", false,-1, 1,0);
    tracep->declBit(c+674,"d", false,-1);
    tracep->declBit(c+675,"a", false,-1);
    tracep->declBit(c+676,"g", false,-1);
    tracep->declBit(c+677,"u", false,-1);
    tracep->declBit(c+678,"x", false,-1);
    tracep->declBit(c+679,"w", false,-1);
    tracep->declBit(c+680,"r", false,-1);
    tracep->declBit(c+681,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[15] ");
    tracep->declBus(c+682,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+683,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+684,"valid", false,-1);
    tracep->declBit(c+685,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+686,"ppn", false,-1, 21,0);
    tracep->declBus(c+687,"rsw", false,-1, 1,0);
    tracep->declBit(c+688,"d", false,-1);
    tracep->declBit(c+689,"a", false,-1);
    tracep->declBit(c+690,"g", false,-1);
    tracep->declBit(c+691,"u", false,-1);
    tracep->declBit(c+692,"x", false,-1);
    tracep->declBit(c+693,"w", false,-1);
    tracep->declBit(c+694,"r", false,-1);
    tracep->declBit(c+695,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tlb_array_next");
    tracep->pushNamePrefix("[0] ");
    tracep->declBus(c+1207,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1208,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1209,"valid", false,-1);
    tracep->declBit(c+1210,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1211,"ppn", false,-1, 21,0);
    tracep->declBus(c+1212,"rsw", false,-1, 1,0);
    tracep->declBit(c+1213,"d", false,-1);
    tracep->declBit(c+1214,"a", false,-1);
    tracep->declBit(c+1215,"g", false,-1);
    tracep->declBit(c+1216,"u", false,-1);
    tracep->declBit(c+1217,"x", false,-1);
    tracep->declBit(c+1218,"w", false,-1);
    tracep->declBit(c+1219,"r", false,-1);
    tracep->declBit(c+1220,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1] ");
    tracep->declBus(c+1221,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1222,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1223,"valid", false,-1);
    tracep->declBit(c+1224,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1225,"ppn", false,-1, 21,0);
    tracep->declBus(c+1226,"rsw", false,-1, 1,0);
    tracep->declBit(c+1227,"d", false,-1);
    tracep->declBit(c+1228,"a", false,-1);
    tracep->declBit(c+1229,"g", false,-1);
    tracep->declBit(c+1230,"u", false,-1);
    tracep->declBit(c+1231,"x", false,-1);
    tracep->declBit(c+1232,"w", false,-1);
    tracep->declBit(c+1233,"r", false,-1);
    tracep->declBit(c+1234,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2] ");
    tracep->declBus(c+1235,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1236,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1237,"valid", false,-1);
    tracep->declBit(c+1238,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1239,"ppn", false,-1, 21,0);
    tracep->declBus(c+1240,"rsw", false,-1, 1,0);
    tracep->declBit(c+1241,"d", false,-1);
    tracep->declBit(c+1242,"a", false,-1);
    tracep->declBit(c+1243,"g", false,-1);
    tracep->declBit(c+1244,"u", false,-1);
    tracep->declBit(c+1245,"x", false,-1);
    tracep->declBit(c+1246,"w", false,-1);
    tracep->declBit(c+1247,"r", false,-1);
    tracep->declBit(c+1248,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3] ");
    tracep->declBus(c+1249,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1250,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1251,"valid", false,-1);
    tracep->declBit(c+1252,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1253,"ppn", false,-1, 21,0);
    tracep->declBus(c+1254,"rsw", false,-1, 1,0);
    tracep->declBit(c+1255,"d", false,-1);
    tracep->declBit(c+1256,"a", false,-1);
    tracep->declBit(c+1257,"g", false,-1);
    tracep->declBit(c+1258,"u", false,-1);
    tracep->declBit(c+1259,"x", false,-1);
    tracep->declBit(c+1260,"w", false,-1);
    tracep->declBit(c+1261,"r", false,-1);
    tracep->declBit(c+1262,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4] ");
    tracep->declBus(c+1263,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1264,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1265,"valid", false,-1);
    tracep->declBit(c+1266,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1267,"ppn", false,-1, 21,0);
    tracep->declBus(c+1268,"rsw", false,-1, 1,0);
    tracep->declBit(c+1269,"d", false,-1);
    tracep->declBit(c+1270,"a", false,-1);
    tracep->declBit(c+1271,"g", false,-1);
    tracep->declBit(c+1272,"u", false,-1);
    tracep->declBit(c+1273,"x", false,-1);
    tracep->declBit(c+1274,"w", false,-1);
    tracep->declBit(c+1275,"r", false,-1);
    tracep->declBit(c+1276,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5] ");
    tracep->declBus(c+1277,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1278,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1279,"valid", false,-1);
    tracep->declBit(c+1280,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1281,"ppn", false,-1, 21,0);
    tracep->declBus(c+1282,"rsw", false,-1, 1,0);
    tracep->declBit(c+1283,"d", false,-1);
    tracep->declBit(c+1284,"a", false,-1);
    tracep->declBit(c+1285,"g", false,-1);
    tracep->declBit(c+1286,"u", false,-1);
    tracep->declBit(c+1287,"x", false,-1);
    tracep->declBit(c+1288,"w", false,-1);
    tracep->declBit(c+1289,"r", false,-1);
    tracep->declBit(c+1290,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6] ");
    tracep->declBus(c+1291,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1292,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1293,"valid", false,-1);
    tracep->declBit(c+1294,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1295,"ppn", false,-1, 21,0);
    tracep->declBus(c+1296,"rsw", false,-1, 1,0);
    tracep->declBit(c+1297,"d", false,-1);
    tracep->declBit(c+1298,"a", false,-1);
    tracep->declBit(c+1299,"g", false,-1);
    tracep->declBit(c+1300,"u", false,-1);
    tracep->declBit(c+1301,"x", false,-1);
    tracep->declBit(c+1302,"w", false,-1);
    tracep->declBit(c+1303,"r", false,-1);
    tracep->declBit(c+1304,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7] ");
    tracep->declBus(c+1305,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1306,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1307,"valid", false,-1);
    tracep->declBit(c+1308,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1309,"ppn", false,-1, 21,0);
    tracep->declBus(c+1310,"rsw", false,-1, 1,0);
    tracep->declBit(c+1311,"d", false,-1);
    tracep->declBit(c+1312,"a", false,-1);
    tracep->declBit(c+1313,"g", false,-1);
    tracep->declBit(c+1314,"u", false,-1);
    tracep->declBit(c+1315,"x", false,-1);
    tracep->declBit(c+1316,"w", false,-1);
    tracep->declBit(c+1317,"r", false,-1);
    tracep->declBit(c+1318,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[8] ");
    tracep->declBus(c+1319,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1320,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1321,"valid", false,-1);
    tracep->declBit(c+1322,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1323,"ppn", false,-1, 21,0);
    tracep->declBus(c+1324,"rsw", false,-1, 1,0);
    tracep->declBit(c+1325,"d", false,-1);
    tracep->declBit(c+1326,"a", false,-1);
    tracep->declBit(c+1327,"g", false,-1);
    tracep->declBit(c+1328,"u", false,-1);
    tracep->declBit(c+1329,"x", false,-1);
    tracep->declBit(c+1330,"w", false,-1);
    tracep->declBit(c+1331,"r", false,-1);
    tracep->declBit(c+1332,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[9] ");
    tracep->declBus(c+1333,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1334,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1335,"valid", false,-1);
    tracep->declBit(c+1336,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1337,"ppn", false,-1, 21,0);
    tracep->declBus(c+1338,"rsw", false,-1, 1,0);
    tracep->declBit(c+1339,"d", false,-1);
    tracep->declBit(c+1340,"a", false,-1);
    tracep->declBit(c+1341,"g", false,-1);
    tracep->declBit(c+1342,"u", false,-1);
    tracep->declBit(c+1343,"x", false,-1);
    tracep->declBit(c+1344,"w", false,-1);
    tracep->declBit(c+1345,"r", false,-1);
    tracep->declBit(c+1346,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[10] ");
    tracep->declBus(c+1347,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1348,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1349,"valid", false,-1);
    tracep->declBit(c+1350,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1351,"ppn", false,-1, 21,0);
    tracep->declBus(c+1352,"rsw", false,-1, 1,0);
    tracep->declBit(c+1353,"d", false,-1);
    tracep->declBit(c+1354,"a", false,-1);
    tracep->declBit(c+1355,"g", false,-1);
    tracep->declBit(c+1356,"u", false,-1);
    tracep->declBit(c+1357,"x", false,-1);
    tracep->declBit(c+1358,"w", false,-1);
    tracep->declBit(c+1359,"r", false,-1);
    tracep->declBit(c+1360,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[11] ");
    tracep->declBus(c+1361,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1362,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1363,"valid", false,-1);
    tracep->declBit(c+1364,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1365,"ppn", false,-1, 21,0);
    tracep->declBus(c+1366,"rsw", false,-1, 1,0);
    tracep->declBit(c+1367,"d", false,-1);
    tracep->declBit(c+1368,"a", false,-1);
    tracep->declBit(c+1369,"g", false,-1);
    tracep->declBit(c+1370,"u", false,-1);
    tracep->declBit(c+1371,"x", false,-1);
    tracep->declBit(c+1372,"w", false,-1);
    tracep->declBit(c+1373,"r", false,-1);
    tracep->declBit(c+1374,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[12] ");
    tracep->declBus(c+1375,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1376,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1377,"valid", false,-1);
    tracep->declBit(c+1378,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1379,"ppn", false,-1, 21,0);
    tracep->declBus(c+1380,"rsw", false,-1, 1,0);
    tracep->declBit(c+1381,"d", false,-1);
    tracep->declBit(c+1382,"a", false,-1);
    tracep->declBit(c+1383,"g", false,-1);
    tracep->declBit(c+1384,"u", false,-1);
    tracep->declBit(c+1385,"x", false,-1);
    tracep->declBit(c+1386,"w", false,-1);
    tracep->declBit(c+1387,"r", false,-1);
    tracep->declBit(c+1388,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[13] ");
    tracep->declBus(c+1389,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1390,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1391,"valid", false,-1);
    tracep->declBit(c+1392,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1393,"ppn", false,-1, 21,0);
    tracep->declBus(c+1394,"rsw", false,-1, 1,0);
    tracep->declBit(c+1395,"d", false,-1);
    tracep->declBit(c+1396,"a", false,-1);
    tracep->declBit(c+1397,"g", false,-1);
    tracep->declBit(c+1398,"u", false,-1);
    tracep->declBit(c+1399,"x", false,-1);
    tracep->declBit(c+1400,"w", false,-1);
    tracep->declBit(c+1401,"r", false,-1);
    tracep->declBit(c+1402,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[14] ");
    tracep->declBus(c+1403,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1404,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1405,"valid", false,-1);
    tracep->declBit(c+1406,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1407,"ppn", false,-1, 21,0);
    tracep->declBus(c+1408,"rsw", false,-1, 1,0);
    tracep->declBit(c+1409,"d", false,-1);
    tracep->declBit(c+1410,"a", false,-1);
    tracep->declBit(c+1411,"g", false,-1);
    tracep->declBit(c+1412,"u", false,-1);
    tracep->declBit(c+1413,"x", false,-1);
    tracep->declBit(c+1414,"w", false,-1);
    tracep->declBit(c+1415,"r", false,-1);
    tracep->declBit(c+1416,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[15] ");
    tracep->declBus(c+1417,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1418,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1419,"valid", false,-1);
    tracep->declBit(c+1420,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1421,"ppn", false,-1, 21,0);
    tracep->declBus(c+1422,"rsw", false,-1, 1,0);
    tracep->declBit(c+1423,"d", false,-1);
    tracep->declBit(c+1424,"a", false,-1);
    tracep->declBit(c+1425,"g", false,-1);
    tracep->declBit(c+1426,"u", false,-1);
    tracep->declBit(c+1427,"x", false,-1);
    tracep->declBit(c+1428,"w", false,-1);
    tracep->declBit(c+1429,"r", false,-1);
    tracep->declBit(c+1430,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+118,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("itlb_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("ptw2tlb_i ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+458,"ppn", false,-1, 21,0);
    tracep->declBus(c+459,"rsw", false,-1, 1,0);
    tracep->declBit(c+460,"d", false,-1);
    tracep->declBit(c+461,"a", false,-1);
    tracep->declBit(c+462,"g", false,-1);
    tracep->declBit(c+463,"u", false,-1);
    tracep->declBit(c+464,"x", false,-1);
    tracep->declBit(c+465,"w", false,-1);
    tracep->declBit(c+466,"r", false,-1);
    tracep->declBit(c+467,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+468,"vpn", false,-1, 19,0);
    tracep->declBit(c+469,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+470,"tlb_update_i", false,-1);
    tracep->pushNamePrefix("mmu2tlb_i ");
    tracep->declBus(c+1849,"vpage_addr", false,-1, 19,0);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+2160,"tlb_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tlb2mmu_o ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1850,"ppn", false,-1, 21,0);
    tracep->declBus(c+1851,"rsw", false,-1, 1,0);
    tracep->declBit(c+1852,"d", false,-1);
    tracep->declBit(c+1853,"a", false,-1);
    tracep->declBit(c+1854,"g", false,-1);
    tracep->declBit(c+1855,"u", false,-1);
    tracep->declBit(c+1856,"x", false,-1);
    tracep->declBit(c+1857,"w", false,-1);
    tracep->declBit(c+1858,"r", false,-1);
    tracep->declBit(c+1859,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1860,"hit", false,-1);
    tracep->declBit(c+1861,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2tlb ");
    tracep->declBus(c+1849,"vpage_addr", false,-1, 19,0);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+2160,"tlb_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tlb2mmu ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1850,"ppn", false,-1, 21,0);
    tracep->declBus(c+1851,"rsw", false,-1, 1,0);
    tracep->declBit(c+1852,"d", false,-1);
    tracep->declBit(c+1853,"a", false,-1);
    tracep->declBit(c+1854,"g", false,-1);
    tracep->declBit(c+1855,"u", false,-1);
    tracep->declBit(c+1856,"x", false,-1);
    tracep->declBit(c+1857,"w", false,-1);
    tracep->declBit(c+1858,"r", false,-1);
    tracep->declBit(c+1859,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1860,"hit", false,-1);
    tracep->declBit(c+1861,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ptw2tlb ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+458,"ppn", false,-1, 21,0);
    tracep->declBus(c+459,"rsw", false,-1, 1,0);
    tracep->declBit(c+460,"d", false,-1);
    tracep->declBit(c+461,"a", false,-1);
    tracep->declBit(c+462,"g", false,-1);
    tracep->declBit(c+463,"u", false,-1);
    tracep->declBit(c+464,"x", false,-1);
    tracep->declBit(c+465,"w", false,-1);
    tracep->declBit(c+466,"r", false,-1);
    tracep->declBit(c+467,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+468,"vpn", false,-1, 19,0);
    tracep->declBit(c+469,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1862,"vpn_0", false,-1, 9,0);
    tracep->declBus(c+1863,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1864,"r_index", false,-1, 1,0);
    tracep->declBus(c+1431,"w_index", false,-1, 1,0);
    tracep->pushNamePrefix("tlb_array_ff");
    tracep->pushNamePrefix("[0] ");
    tracep->declBus(c+696,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+697,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+698,"valid", false,-1);
    tracep->declBit(c+699,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+700,"ppn", false,-1, 21,0);
    tracep->declBus(c+701,"rsw", false,-1, 1,0);
    tracep->declBit(c+702,"d", false,-1);
    tracep->declBit(c+703,"a", false,-1);
    tracep->declBit(c+704,"g", false,-1);
    tracep->declBit(c+705,"u", false,-1);
    tracep->declBit(c+706,"x", false,-1);
    tracep->declBit(c+707,"w", false,-1);
    tracep->declBit(c+708,"r", false,-1);
    tracep->declBit(c+709,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1] ");
    tracep->declBus(c+710,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+711,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+712,"valid", false,-1);
    tracep->declBit(c+713,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+714,"ppn", false,-1, 21,0);
    tracep->declBus(c+715,"rsw", false,-1, 1,0);
    tracep->declBit(c+716,"d", false,-1);
    tracep->declBit(c+717,"a", false,-1);
    tracep->declBit(c+718,"g", false,-1);
    tracep->declBit(c+719,"u", false,-1);
    tracep->declBit(c+720,"x", false,-1);
    tracep->declBit(c+721,"w", false,-1);
    tracep->declBit(c+722,"r", false,-1);
    tracep->declBit(c+723,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2] ");
    tracep->declBus(c+724,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+725,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+726,"valid", false,-1);
    tracep->declBit(c+727,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+728,"ppn", false,-1, 21,0);
    tracep->declBus(c+729,"rsw", false,-1, 1,0);
    tracep->declBit(c+730,"d", false,-1);
    tracep->declBit(c+731,"a", false,-1);
    tracep->declBit(c+732,"g", false,-1);
    tracep->declBit(c+733,"u", false,-1);
    tracep->declBit(c+734,"x", false,-1);
    tracep->declBit(c+735,"w", false,-1);
    tracep->declBit(c+736,"r", false,-1);
    tracep->declBit(c+737,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3] ");
    tracep->declBus(c+738,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+739,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+740,"valid", false,-1);
    tracep->declBit(c+741,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+742,"ppn", false,-1, 21,0);
    tracep->declBus(c+743,"rsw", false,-1, 1,0);
    tracep->declBit(c+744,"d", false,-1);
    tracep->declBit(c+745,"a", false,-1);
    tracep->declBit(c+746,"g", false,-1);
    tracep->declBit(c+747,"u", false,-1);
    tracep->declBit(c+748,"x", false,-1);
    tracep->declBit(c+749,"w", false,-1);
    tracep->declBit(c+750,"r", false,-1);
    tracep->declBit(c+751,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tlb_array_next");
    tracep->pushNamePrefix("[0] ");
    tracep->declBus(c+1432,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1433,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1434,"valid", false,-1);
    tracep->declBit(c+1435,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1436,"ppn", false,-1, 21,0);
    tracep->declBus(c+1437,"rsw", false,-1, 1,0);
    tracep->declBit(c+1438,"d", false,-1);
    tracep->declBit(c+1439,"a", false,-1);
    tracep->declBit(c+1440,"g", false,-1);
    tracep->declBit(c+1441,"u", false,-1);
    tracep->declBit(c+1442,"x", false,-1);
    tracep->declBit(c+1443,"w", false,-1);
    tracep->declBit(c+1444,"r", false,-1);
    tracep->declBit(c+1445,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1] ");
    tracep->declBus(c+1446,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1447,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1448,"valid", false,-1);
    tracep->declBit(c+1449,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1450,"ppn", false,-1, 21,0);
    tracep->declBus(c+1451,"rsw", false,-1, 1,0);
    tracep->declBit(c+1452,"d", false,-1);
    tracep->declBit(c+1453,"a", false,-1);
    tracep->declBit(c+1454,"g", false,-1);
    tracep->declBit(c+1455,"u", false,-1);
    tracep->declBit(c+1456,"x", false,-1);
    tracep->declBit(c+1457,"w", false,-1);
    tracep->declBit(c+1458,"r", false,-1);
    tracep->declBit(c+1459,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2] ");
    tracep->declBus(c+1460,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1461,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1462,"valid", false,-1);
    tracep->declBit(c+1463,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1464,"ppn", false,-1, 21,0);
    tracep->declBus(c+1465,"rsw", false,-1, 1,0);
    tracep->declBit(c+1466,"d", false,-1);
    tracep->declBit(c+1467,"a", false,-1);
    tracep->declBit(c+1468,"g", false,-1);
    tracep->declBit(c+1469,"u", false,-1);
    tracep->declBit(c+1470,"x", false,-1);
    tracep->declBit(c+1471,"w", false,-1);
    tracep->declBit(c+1472,"r", false,-1);
    tracep->declBit(c+1473,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3] ");
    tracep->declBus(c+1474,"vpn_1", false,-1, 9,0);
    tracep->declBus(c+1475,"vpn_0", false,-1, 9,0);
    tracep->declBit(c+1476,"valid", false,-1);
    tracep->declBit(c+1477,"page_4M", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+1478,"ppn", false,-1, 21,0);
    tracep->declBus(c+1479,"rsw", false,-1, 1,0);
    tracep->declBit(c+1480,"d", false,-1);
    tracep->declBit(c+1481,"a", false,-1);
    tracep->declBit(c+1482,"g", false,-1);
    tracep->declBit(c+1483,"u", false,-1);
    tracep->declBit(c+1484,"x", false,-1);
    tracep->declBit(c+1485,"w", false,-1);
    tracep->declBit(c+1486,"r", false,-1);
    tracep->declBit(c+1487,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+119,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ptw_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("mmu2ptw_i ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+1181,"flush_req", false,-1);
    tracep->declBus(c+113,"dtlb_vaddr", false,-1, 31,0);
    tracep->declBit(c+1189,"dtlb_req", false,-1);
    tracep->declBit(c+1190,"dtlb_hit", false,-1);
    tracep->declBit(c+1183,"is_store", false,-1);
    tracep->declBus(c+1847,"itlb_vaddr", false,-1, 31,0);
    tracep->declBit(c+451,"itlb_req", false,-1);
    tracep->declBit(c+1848,"itlb_hit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ptw2mmu_o ");
    tracep->declBit(c+453,"ptw_active", false,-1);
    tracep->declBit(c+454,"iwalk_active", false,-1);
    tracep->declBit(c+455,"pte_error", false,-1);
    tracep->declBit(c+456,"access_exc", false,-1);
    tracep->declBus(c+457,"vaddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ptw2tlb_o ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+458,"ppn", false,-1, 21,0);
    tracep->declBus(c+459,"rsw", false,-1, 1,0);
    tracep->declBit(c+460,"d", false,-1);
    tracep->declBit(c+461,"a", false,-1);
    tracep->declBit(c+462,"g", false,-1);
    tracep->declBit(c+463,"u", false,-1);
    tracep->declBit(c+464,"x", false,-1);
    tracep->declBit(c+465,"w", false,-1);
    tracep->declBit(c+466,"r", false,-1);
    tracep->declBit(c+467,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+468,"vpn", false,-1, 19,0);
    tracep->declBit(c+469,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+470,"itlb_update_o", false,-1);
    tracep->declBit(c+1205,"dtlb_update_o", false,-1);
    tracep->pushNamePrefix("dcache2ptw_i ");
    tracep->declBus(c+1148,"r_data", false,-1, 31,0);
    tracep->declBit(c+1149,"r_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ptw2dcache_o ");
    tracep->declBus(c+1845,"paddr", false,-1, 31,0);
    tracep->declBit(c+1846,"r_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2ptw ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+1181,"flush_req", false,-1);
    tracep->declBus(c+113,"dtlb_vaddr", false,-1, 31,0);
    tracep->declBit(c+1189,"dtlb_req", false,-1);
    tracep->declBit(c+1190,"dtlb_hit", false,-1);
    tracep->declBit(c+1183,"is_store", false,-1);
    tracep->declBus(c+1847,"itlb_vaddr", false,-1, 31,0);
    tracep->declBit(c+451,"itlb_req", false,-1);
    tracep->declBit(c+1848,"itlb_hit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ptw2mmu ");
    tracep->declBit(c+453,"ptw_active", false,-1);
    tracep->declBit(c+454,"iwalk_active", false,-1);
    tracep->declBit(c+455,"pte_error", false,-1);
    tracep->declBit(c+456,"access_exc", false,-1);
    tracep->declBus(c+457,"vaddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ptw2tlb ");
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+458,"ppn", false,-1, 21,0);
    tracep->declBus(c+459,"rsw", false,-1, 1,0);
    tracep->declBit(c+460,"d", false,-1);
    tracep->declBit(c+461,"a", false,-1);
    tracep->declBit(c+462,"g", false,-1);
    tracep->declBit(c+463,"u", false,-1);
    tracep->declBit(c+464,"x", false,-1);
    tracep->declBit(c+465,"w", false,-1);
    tracep->declBit(c+466,"r", false,-1);
    tracep->declBit(c+467,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+468,"vpn", false,-1, 19,0);
    tracep->declBit(c+469,"page_4M", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2ptw ");
    tracep->declBus(c+1148,"r_data", false,-1, 31,0);
    tracep->declBit(c+1149,"r_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ptw2dcache ");
    tracep->declBus(c+1845,"paddr", false,-1, 31,0);
    tracep->declBit(c+1846,"r_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+752,"ptw_state_ff", false,-1, 2,0);
    tracep->declBus(c+1865,"ptw_state_next", false,-1, 2,0);
    tracep->declBit(c+753,"ptw_lvl_ff", false,-1);
    tracep->declBit(c+754,"ptw_lvl_next", false,-1);
    tracep->pushNamePrefix("pte ");
    tracep->declBus(c+755,"ppn", false,-1, 21,0);
    tracep->declBus(c+756,"rsw", false,-1, 1,0);
    tracep->declBit(c+757,"d", false,-1);
    tracep->declBit(c+758,"a", false,-1);
    tracep->declBit(c+759,"g", false,-1);
    tracep->declBit(c+760,"u", false,-1);
    tracep->declBit(c+761,"x", false,-1);
    tracep->declBit(c+762,"w", false,-1);
    tracep->declBit(c+763,"r", false,-1);
    tracep->declBit(c+764,"v", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+765,"r_data_ff", false,-1, 31,0);
    tracep->declBit(c+766,"r_data_valid_ff", false,-1);
    tracep->declBit(c+470,"itlb_update", false,-1);
    tracep->declBit(c+1205,"dtlb_update", false,-1);
    tracep->declBit(c+1866,"itlb_miss", false,-1);
    tracep->declBit(c+1488,"dtlb_miss", false,-1);
    tracep->declBit(c+767,"iwalk_active_ff", false,-1);
    tracep->declBit(c+1867,"iwalk_active_next", false,-1);
    tracep->declBit(c+768,"gmap_bit_ff", false,-1);
    tracep->declBit(c+769,"gmap_bit_next", false,-1);
    tracep->declBus(c+770,"vaddr_ff", false,-1, 31,0);
    tracep->declBus(c+1868,"vaddr_next", false,-1, 31,0);
    tracep->declQuad(c+771,"ptw_paddr_ff", false,-1, 33,0);
    tracep->declQuad(c+1869,"ptw_paddr_next", false,-1, 33,0);
    tracep->declBit(c+773,"r_req_ff", false,-1);
    tracep->declBit(c+1871,"r_req_next", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pipeline_top_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("if2icache_o ");
    tracep->declBus(c+1067,"addr", false,-1, 31,0);
    tracep->declBit(c+1068,"req", false,-1);
    tracep->declBit(c+1144,"req_kill", false,-1);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2if_i ");
    tracep->declBus(c+1146,"r_data", false,-1, 31,0);
    tracep->declBit(c+1147,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2lsu_i ");
    tracep->declQuad(c+1184,"d_paddr", false,-1, 33,0);
    tracep->declBit(c+1186,"d_hit", false,-1);
    tracep->declBit(c+1187,"ld_page_fault", false,-1);
    tracep->declBit(c+1188,"st_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2mmu_o ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+1181,"lsu_flush", false,-1);
    tracep->declBit(c+1182,"d_req", false,-1);
    tracep->declBit(c+1183,"st_req", false,-1);
    tracep->declBit(c+1120,"is_amo", false,-1);
    tracep->declBus(c+113,"d_vaddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2mmu_o ");
    tracep->declBus(c+1847,"i_vaddr", false,-1, 31,0);
    tracep->declBit(c+2160,"i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2if_i ");
    tracep->declQuad(c+1069,"i_paddr", false,-1, 33,0);
    tracep->declBit(c+1071,"i_hit", false,-1);
    tracep->declBit(c+1072,"i_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus_o ");
    tracep->declBus(c+1150,"addr", false,-1, 31,0);
    tracep->declBus(c+1151,"w_data", false,-1, 31,0);
    tracep->declBus(c+1152,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1153,"ld_req", false,-1);
    tracep->declBit(c+1154,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_i ");
    tracep->declBus(c+1155,"r_data", false,-1, 31,0);
    tracep->declBit(c+1156,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1119,"dcache_flush_o", false,-1);
    tracep->pushNamePrefix("clint2csr_i ");
    tracep->declBus(c+1115,"timer_val", false,-1, 31,0);
    tracep->declBit(c+1116,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core2pipe_i ");
    tracep->declBus(c+430,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+431,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+432,"timer_irq", false,-1);
    tracep->declBit(c+433,"soft_irq", false,-1);
    tracep->declBit(c+434,"uart_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("debug_port_i ");
    tracep->declBus(c+2156,"reg_data", false,-1, 31,0);
    tracep->declBus(c+2157,"reg_addr", false,-1, 4,0);
    tracep->declBit(c+2158,"reg_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data ");
    tracep->declBus(c+1872,"instr", false,-1, 31,0);
    tracep->declBus(c+120,"pc", false,-1, 31,0);
    tracep->declBus(c+1847,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1873,"exc_code", false,-1, 3,0);
    tracep->declBit(c+2161,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data_next ");
    tracep->declBus(c+1874,"instr", false,-1, 31,0);
    tracep->declBus(c+1875,"pc", false,-1, 31,0);
    tracep->declBus(c+1876,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1877,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1878,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl ");
    tracep->declBit(c+1879,"exc_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_next ");
    tracep->declBit(c+1880,"exc_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl ");
    tracep->declBus(c+1881,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+1882,"alu_m_ops", false,-1, 3,0);
    tracep->declBus(c+1883,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1884,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1885,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+1886,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+1887,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+1888,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+1889,"alu_opr1_sel", false,-1);
    tracep->declBit(c+1890,"alu_opr2_sel", false,-1);
    tracep->declBit(c+1891,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+1892,"csr_opr_sel", false,-1);
    tracep->declBus(c+1893,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1894,"exc_req", false,-1);
    tracep->declBit(c+1895,"rd_wr_req", false,-1);
    tracep->declBit(c+1896,"jump_req", false,-1);
    tracep->declBit(c+1897,"branch_req", false,-1);
    tracep->declBit(c+1898,"fence_i_req", false,-1);
    tracep->declBit(c+1899,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_next ");
    tracep->declBus(c+1900,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+1901,"alu_m_ops", false,-1, 3,0);
    tracep->declBus(c+1902,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1903,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1904,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+1905,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+1906,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+1907,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+1908,"alu_opr1_sel", false,-1);
    tracep->declBit(c+1909,"alu_opr2_sel", false,-1);
    tracep->declBit(c+1910,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+1911,"csr_opr_sel", false,-1);
    tracep->declBus(c+1912,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1913,"exc_req", false,-1);
    tracep->declBit(c+1914,"rd_wr_req", false,-1);
    tracep->declBit(c+1915,"jump_req", false,-1);
    tracep->declBit(c+1916,"branch_req", false,-1);
    tracep->declBit(c+1917,"fence_i_req", false,-1);
    tracep->declBit(c+1918,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data ");
    tracep->declBus(c+1919,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1920,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1921,"instr", false,-1, 31,0);
    tracep->declBus(c+1922,"pc", false,-1, 31,0);
    tracep->declBus(c+1923,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1924,"imm", false,-1, 31,0);
    tracep->declBus(c+1925,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1926,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data_next ");
    tracep->declBus(c+1927,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1928,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1929,"instr", false,-1, 31,0);
    tracep->declBus(c+1930,"pc", false,-1, 31,0);
    tracep->declBus(c+1931,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1932,"imm", false,-1, 31,0);
    tracep->declBus(c+1933,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1934,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl ");
    tracep->declBus(c+121,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+122,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+123,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+124,"st_ops", false,-1, 1,0);
    tracep->declBus(c+125,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+126,"rd_wr_req", false,-1);
    tracep->declBit(c+127,"jump_req", false,-1);
    tracep->declBit(c+128,"branch_req", false,-1);
    tracep->declBit(c+129,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_next ");
    tracep->declBus(c+1489,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1490,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+1491,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1492,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1493,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1494,"rd_wr_req", false,-1);
    tracep->declBit(c+1495,"jump_req", false,-1);
    tracep->declBit(c+1496,"branch_req", false,-1);
    tracep->declBit(c+1497,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data ");
    tracep->declBus(c+1498,"alu_result", false,-1, 31,0);
    tracep->declBus(c+130,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1499,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data_next ");
    tracep->declBus(c+1500,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1501,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1502,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cext2if ");
    tracep->declBus(c+1935,"instr", false,-1, 31,0);
    tracep->declBus(c+1936,"pc_aligned", false,-1, 31,0);
    tracep->declBit(c+1937,"stall", false,-1);
    tracep->declBit(c+1938,"is_comp", false,-1);
    tracep->declBit(c+1939,"illegal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2cext ");
    tracep->declBus(c+1503,"instr_un", false,-1, 31,0);
    tracep->declBus(c+1504,"pc_ff", false,-1, 31,0);
    tracep->declBit(c+1505,"icache_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2mul ");
    tracep->declBus(c+1506,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+1507,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+131,"alu_m_ops", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data ");
    tracep->declBus(c+132,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+133,"pc", false,-1, 31,0);
    tracep->declBus(c+134,"instr", false,-1, 31,0);
    tracep->declBus(c+418,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+135,"exc_code", false,-1, 3,0);
    tracep->declBit(c+136,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data_next ");
    tracep->declBus(c+1508,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+1509,"pc", false,-1, 31,0);
    tracep->declBus(c+1510,"instr", false,-1, 31,0);
    tracep->declBus(c+1511,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+1512,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1513,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl ");
    tracep->declBus(c+137,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+138,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+139,"exc_req", false,-1);
    tracep->declBit(c+140,"csr_rd_req", false,-1);
    tracep->declBit(c+141,"csr_wr_req", false,-1);
    tracep->declBit(c+142,"fence_i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_next ");
    tracep->declBus(c+1514,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+1515,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+1516,"exc_req", false,-1);
    tracep->declBit(c+1517,"csr_rd_req", false,-1);
    tracep->declBit(c+1518,"csr_wr_req", false,-1);
    tracep->declBit(c+1519,"fence_i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data ");
    tracep->declBus(c+113,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+143,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl ");
    tracep->declBus(c+1121,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1122,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1520,"ld_page_fault", false,-1);
    tracep->declBit(c+1521,"st_page_fault", false,-1);
    tracep->declBit(c+1522,"dcache_flush_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2lsu_data ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+144,"dcache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data ");
    tracep->declBus(c+1523,"w_data", false,-1, 31,0);
    tracep->declBus(c+2092,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl ");
    tracep->declBit(c+774,"amo_done", false,-1);
    tracep->declBit(c+1524,"ld_req", false,-1);
    tracep->declBit(c+1525,"st_req", false,-1);
    tracep->declBit(c+1526,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data ");
    tracep->declBus(c+1527,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+1528,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+1529,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl ");
    tracep->declBus(c+1530,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1531,"is_amo", false,-1);
    tracep->declBit(c+1532,"amo_flush", false,-1);
    tracep->declBit(c+1533,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus ");
    tracep->declBus(c+1150,"addr", false,-1, 31,0);
    tracep->declBus(c+1151,"w_data", false,-1, 31,0);
    tracep->declBus(c+1152,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1153,"ld_req", false,-1);
    tracep->declBit(c+1154,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu ");
    tracep->declBus(c+1155,"r_data", false,-1, 31,0);
    tracep->declBit(c+1156,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2icache ");
    tracep->declBus(c+1067,"addr", false,-1, 31,0);
    tracep->declBit(c+1068,"req", false,-1);
    tracep->declBit(c+1144,"req_kill", false,-1);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2if ");
    tracep->declBus(c+1146,"r_data", false,-1, 31,0);
    tracep->declBit(c+1147,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl ");
    tracep->declBus(c+2093,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+2094,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data ");
    tracep->declBus(c+2095,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2096,"pc_next", false,-1, 31,0);
    tracep->declBus(c+2097,"r_data", false,-1, 31,0);
    tracep->declBus(c+2098,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data ");
    tracep->declBus(c+1534,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul2wrb ");
    tracep->declBus(c+1535,"alu_m_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data_next ");
    tracep->declBus(c+1536,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1537,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1538,"r_data", false,-1, 31,0);
    tracep->declBus(c+1539,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_next ");
    tracep->declBus(c+1540,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1541,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_next ");
    tracep->declBus(c+1534,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul2wrb_next ");
    tracep->declBus(c+1542,"alu_m_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb ");
    tracep->declBus(c+1543,"pc_new", false,-1, 31,0);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb ");
    tracep->declBus(c+775,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb ");
    tracep->declBus(c+1544,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb ");
    tracep->declBus(c+145,"rd_data", false,-1, 31,0);
    tracep->declBus(c+146,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+147,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+113,"lsu2exe_fb_alu_result", false,-1, 31,0);
    tracep->declBus(c+148,"wrb2exe_fb_rd_data", false,-1, 31,0);
    tracep->declBit(c+1545,"if2fwd_stall", false,-1);
    tracep->pushNamePrefix("exe2fwd ");
    tracep->declBus(c+149,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+150,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+419,"new_pc_req", false,-1);
    tracep->declBit(c+151,"use_rs1", false,-1);
    tracep->declBit(c+152,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2fwd ");
    tracep->declBus(c+153,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+154,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd ");
    tracep->declBus(c+1123,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1124,"rd_wr_req", false,-1);
    tracep->declBit(c+1546,"lsu_req", false,-1);
    tracep->declBit(c+2099,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd ");
    tracep->declBit(c+1547,"new_pc_req", false,-1);
    tracep->declBit(c+1548,"irq_flush_lsu", false,-1);
    tracep->declBit(c+1549,"wfi_req", false,-1);
    tracep->declBit(c+155,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul2fwd ");
    tracep->declBit(c+776,"mul_req", false,-1);
    tracep->declBit(c+777,"mul_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe ");
    tracep->declBit(c+1550,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+1551,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+1552,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+1553,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if ");
    tracep->declBit(c+1554,"exe_new_pc_req", false,-1);
    tracep->declBit(c+1555,"csr_new_pc_req", false,-1);
    tracep->declBit(c+1556,"wfi_req", false,-1);
    tracep->declBit(c+1557,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr ");
    tracep->declBit(c+156,"pipe_stall", false,-1);
    tracep->declBit(c+420,"irq_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu ");
    tracep->declBit(c+1558,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2ptop ");
    tracep->declBit(c+1559,"if2id_pipe_flush", false,-1);
    tracep->declBit(c+1560,"if2id_pipe_stall", false,-1);
    tracep->declBit(c+1561,"id2exe_pipe_flush", false,-1);
    tracep->declBit(c+1562,"id2exe_pipe_stall", false,-1);
    tracep->declBit(c+1563,"exe2lsu_pipe_stall", false,-1);
    tracep->declBit(c+1564,"exe2lsu_pipe_flush", false,-1);
    tracep->declBit(c+1565,"lsu2wrb_pipe_flush", false,-1);
    tracep->declBit(c+1566,"pipe_fwd_wrb_rs1", false,-1);
    tracep->declBit(c+1567,"pipe_fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2mmu ");
    tracep->declBus(c+1847,"i_vaddr", false,-1, 31,0);
    tracep->declBit(c+2160,"i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2if ");
    tracep->declQuad(c+1069,"i_paddr", false,-1, 33,0);
    tracep->declBit(c+1071,"i_hit", false,-1);
    tracep->declBit(c+1072,"i_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2mmu ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+1181,"lsu_flush", false,-1);
    tracep->declBit(c+1182,"d_req", false,-1);
    tracep->declBit(c+1183,"st_req", false,-1);
    tracep->declBit(c+1120,"is_amo", false,-1);
    tracep->declBus(c+113,"d_vaddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2lsu ");
    tracep->declQuad(c+1184,"d_paddr", false,-1, 33,0);
    tracep->declBit(c+1186,"d_hit", false,-1);
    tracep->declBit(c+1187,"ld_page_fault", false,-1);
    tracep->declBit(c+1188,"st_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data_pipe_ff ");
    tracep->declBus(c+157,"instr", false,-1, 31,0);
    tracep->declBus(c+158,"pc", false,-1, 31,0);
    tracep->declBus(c+159,"pc_next", false,-1, 31,0);
    tracep->declBus(c+160,"exc_code", false,-1, 3,0);
    tracep->declBit(c+161,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_pipe_ff ");
    tracep->declBit(c+162,"exc_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data_pipe_ff ");
    tracep->declBus(c+163,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+164,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+165,"instr", false,-1, 31,0);
    tracep->declBus(c+166,"pc", false,-1, 31,0);
    tracep->declBus(c+167,"pc_next", false,-1, 31,0);
    tracep->declBus(c+168,"imm", false,-1, 31,0);
    tracep->declBus(c+169,"exc_code", false,-1, 3,0);
    tracep->declBit(c+170,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_pipe_ff ");
    tracep->declBus(c+171,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+172,"alu_m_ops", false,-1, 3,0);
    tracep->declBus(c+173,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+174,"st_ops", false,-1, 1,0);
    tracep->declBus(c+175,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+176,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+177,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+178,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+179,"alu_opr1_sel", false,-1);
    tracep->declBit(c+180,"alu_opr2_sel", false,-1);
    tracep->declBit(c+181,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+182,"csr_opr_sel", false,-1);
    tracep->declBus(c+183,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+184,"exc_req", false,-1);
    tracep->declBit(c+185,"rd_wr_req", false,-1);
    tracep->declBit(c+186,"jump_req", false,-1);
    tracep->declBit(c+187,"branch_req", false,-1);
    tracep->declBit(c+188,"fence_i_req", false,-1);
    tracep->declBit(c+189,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data_pipe_ff ");
    tracep->declBus(c+190,"alu_result", false,-1, 31,0);
    tracep->declBus(c+191,"pc_next", false,-1, 31,0);
    tracep->declBus(c+192,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_pipe_ff ");
    tracep->declBus(c+1125,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1126,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+1127,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1128,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1129,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1130,"rd_wr_req", false,-1);
    tracep->declBit(c+1131,"jump_req", false,-1);
    tracep->declBit(c+1132,"branch_req", false,-1);
    tracep->declBit(c+1133,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data_pipe_ff ");
    tracep->declBus(c+193,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+194,"pc", false,-1, 31,0);
    tracep->declBus(c+195,"instr", false,-1, 31,0);
    tracep->declBus(c+196,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+197,"exc_code", false,-1, 3,0);
    tracep->declBit(c+198,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_pipe_ff ");
    tracep->declBus(c+199,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+200,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+201,"exc_req", false,-1);
    tracep->declBit(c+202,"csr_rd_req", false,-1);
    tracep->declBit(c+203,"csr_wr_req", false,-1);
    tracep->declBit(c+204,"fence_i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data_pipe_ff ");
    tracep->declBus(c+205,"alu_result", false,-1, 31,0);
    tracep->declBus(c+206,"pc_next", false,-1, 31,0);
    tracep->declBus(c+207,"r_data", false,-1, 31,0);
    tracep->declBus(c+208,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_pipe_ff ");
    tracep->declBus(c+209,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+210,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_pipe_ff ");
    tracep->declBus(c+211,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul2wrb_pipe_ff ");
    tracep->declBus(c+212,"alu_m_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("lsu2amo_data_i ");
    tracep->declBus(c+1527,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+1528,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+1529,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl_i ");
    tracep->declBus(c+1530,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1531,"is_amo", false,-1);
    tracep->declBit(c+1532,"amo_flush", false,-1);
    tracep->declBit(c+1533,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data_o ");
    tracep->declBus(c+1523,"w_data", false,-1, 31,0);
    tracep->declBus(c+2092,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl_o ");
    tracep->declBit(c+774,"amo_done", false,-1);
    tracep->declBit(c+1524,"ld_req", false,-1);
    tracep->declBit(c+1525,"st_req", false,-1);
    tracep->declBit(c+1526,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data ");
    tracep->declBus(c+1527,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+1528,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+1529,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl ");
    tracep->declBus(c+1530,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1531,"is_amo", false,-1);
    tracep->declBit(c+1532,"amo_flush", false,-1);
    tracep->declBit(c+1533,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data ");
    tracep->declBus(c+1523,"w_data", false,-1, 31,0);
    tracep->declBus(c+2092,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl ");
    tracep->declBit(c+774,"amo_done", false,-1);
    tracep->declBit(c+1524,"ld_req", false,-1);
    tracep->declBit(c+1525,"st_req", false,-1);
    tracep->declBit(c+1526,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1568,"ld_req", false,-1);
    tracep->declBit(c+1569,"st_req", false,-1);
    tracep->declBit(c+1570,"rd_wr_req", false,-1);
    tracep->declBus(c+1523,"w_data", false,-1, 31,0);
    tracep->declBus(c+2092,"amo_wrb_data", false,-1, 31,0);
    tracep->declBus(c+1134,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1135,"is_amo", false,-1);
    tracep->declBit(c+1136,"is_lr", false,-1);
    tracep->declBus(c+2162,"amo_buffer_data_ff", false,-1, 31,0);
    tracep->declBus(c+778,"amo_buffer_addr_ff", false,-1, 31,0);
    tracep->declBus(c+213,"amo_operand_a", false,-1, 31,0);
    tracep->declBus(c+213,"amo_operand_a_ff", false,-1, 31,0);
    tracep->declBus(c+214,"amo_operand_b", false,-1, 31,0);
    tracep->declBus(c+1137,"amo_result", false,-1, 31,0);
    tracep->declBit(c+779,"amo_done", false,-1);
    tracep->declBit(c+215,"a_slt_b", false,-1);
    tracep->declBit(c+216,"a_uslt_b", false,-1);
    tracep->declBit(c+1138,"is_sc", false,-1);
    tracep->declBit(c+1571,"sc_pass", false,-1);
    tracep->declBit(c+780,"amo_reserve_ff", false,-1);
    tracep->declBit(c+1572,"amo_save", false,-1);
    tracep->declBit(c+781,"sc_wrb_ff", false,-1);
    tracep->declBit(c+1573,"sc_wrb_next", false,-1);
    tracep->declBus(c+782,"state", false,-1, 2,0);
    tracep->declBus(c+1574,"state_next", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("c_top ");
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+2084,"reset", false,-1);
    tracep->declBit(c+2163,"br_taken_i", false,-1);
    tracep->pushNamePrefix("if2cext_i ");
    tracep->declBus(c+1503,"instr_un", false,-1, 31,0);
    tracep->declBus(c+1504,"pc_ff", false,-1, 31,0);
    tracep->declBit(c+1505,"icache_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cext2if_o ");
    tracep->declBus(c+1935,"instr", false,-1, 31,0);
    tracep->declBus(c+1936,"pc_aligned", false,-1, 31,0);
    tracep->declBit(c+1937,"stall", false,-1);
    tracep->declBit(c+1938,"is_comp", false,-1);
    tracep->declBit(c+1939,"illegal", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+217,"pc_misalign", false,-1);
    tracep->declBus(c+1940,"instruction", false,-1, 31,0);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+1940,"inst", false,-1, 31,0);
    tracep->declBit(c+1575,"pc", false,-1);
    tracep->declBit(c+217,"pc_misalign", false,-1);
    tracep->declBit(c+1941,"next_comp16", false,-1);
    tracep->declBus(c+1872,"compressed_inst_out", false,-1, 31,0);
    tracep->declBit(c+1942,"illegal_inst", false,-1);
    tracep->declBus(c+1943,"comp_opcode", false,-1, 1,0);
    tracep->declBus(c+1944,"comp_load_i_type", false,-1, 11,0);
    tracep->declBus(c+1945,"comp_imm_stack_store", false,-1, 11,0);
    tracep->declBus(c+1946,"comp_imm_load_store", false,-1, 11,0);
    tracep->declBus(c+1947,"imm_Li", false,-1, 11,0);
    tracep->declBus(c+1947,"comp_i_tpye", false,-1, 11,0);
    tracep->declBus(c+1948,"rs2", false,-1, 4,0);
    tracep->declBus(c+1949,"rs1", false,-1, 4,0);
    tracep->declBus(c+1949,"rd", false,-1, 4,0);
    tracep->declBus(c+1950,"imm_jump", false,-1, 19,0);
    tracep->declBus(c+1951,"imm_LUI", false,-1, 19,0);
    tracep->declBus(c+1952,"imm_LUI_addi_16_sp", false,-1, 19,0);
    tracep->declBus(c+1953,"comp_func3", false,-1, 2,0);
    tracep->declBus(c+1954,"comp_rs1", false,-1, 4,0);
    tracep->declBus(c+1955,"comp_rs2", false,-1, 4,0);
    tracep->declBus(c+1955,"comp_rd", false,-1, 4,0);
    tracep->declBus(c+1956,"comp_inst", false,-1, 15,0);
    tracep->declBit(c+1957,"illegal", false,-1);
    tracep->declBus(c+1948,"imm_sLLI", false,-1, 4,0);
    tracep->declBus(c+1958,"imm", false,-1, 7,0);
    tracep->declBus(c+1959,"comp_imm_branch", false,-1, 11,0);
    tracep->declBus(c+1960,"comp_addi_14_sp", false,-1, 11,0);
    tracep->declBus(c+1947,"imm_ANDI", false,-1, 11,0);
    tracep->declBus(c+1961,"inst_load", false,-1, 31,0);
    tracep->declBus(c+1962,"inst_store", false,-1, 31,0);
    tracep->declBus(c+1963,"inst_load_stack", false,-1, 31,0);
    tracep->declBus(c+1964,"inst_store_stack", false,-1, 31,0);
    tracep->declBus(c+1965,"inst_jal", false,-1, 31,0);
    tracep->declBus(c+1966,"inst_j", false,-1, 31,0);
    tracep->declBus(c+1967,"inst_jalr", false,-1, 31,0);
    tracep->declBus(c+1968,"inst_jr", false,-1, 31,0);
    tracep->declBus(c+1969,"inst_branch_not", false,-1, 31,0);
    tracep->declBus(c+1970,"inst_branch_equal", false,-1, 31,0);
    tracep->declBus(c+1971,"inst_LI", false,-1, 31,0);
    tracep->declBus(c+1972,"inst_LUI", false,-1, 31,0);
    tracep->declBus(c+2164,"inst_r_type", false,-1, 31,0);
    tracep->declBus(c+2165,"inst_r_comp_type", false,-1, 31,0);
    tracep->declBus(c+2166,"inst_nop", false,-1, 31,0);
    tracep->declBus(c+1973,"inst_i_type", false,-1, 31,0);
    tracep->declBus(c+1974,"inst_addi_16_sp", false,-1, 31,0);
    tracep->declBus(c+1975,"inst_addi_14_sp", false,-1, 31,0);
    tracep->declBus(c+1976,"inst_SLLI", false,-1, 31,0);
    tracep->declBus(c+1977,"inst_sRLI", false,-1, 31,0);
    tracep->declBus(c+1978,"inst_sRAI", false,-1, 31,0);
    tracep->declBus(c+1979,"inst_ADD", false,-1, 31,0);
    tracep->declBus(c+1980,"inst_ANDI", false,-1, 31,0);
    tracep->declBus(c+1981,"inst_MV", false,-1, 31,0);
    tracep->declBus(c+1982,"inst_AND", false,-1, 31,0);
    tracep->declBus(c+1983,"inst_OR", false,-1, 31,0);
    tracep->declBus(c+1984,"inst_XOR", false,-1, 31,0);
    tracep->declBus(c+1985,"inst_SUB", false,-1, 31,0);
    tracep->declBus(c+2167,"inst_E_Break", false,-1, 31,0);
    tracep->declBus(c+2168,"load_opcode", false,-1, 6,0);
    tracep->declBus(c+2169,"store_opcode", false,-1, 6,0);
    tracep->declBus(c+2170,"R_type_opcode", false,-1, 6,0);
    tracep->declBus(c+2171,"I_type_opcode", false,-1, 6,0);
    tracep->declBus(c+2172,"Jal_opcode", false,-1, 6,0);
    tracep->declBus(c+2173,"B_type_opcode", false,-1, 6,0);
    tracep->declBus(c+2174,"Jalr_opcode", false,-1, 6,0);
    tracep->declBus(c+2175,"LUI_opcode", false,-1, 6,0);
    tracep->declBus(c+2176,"AUIPC_opcode", false,-1, 6,0);
    tracep->declBus(c+2177,"instr_opcode", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("misalign ");
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+2084,"reset", false,-1);
    tracep->declBit(c+2163,"sel_for_branch", false,-1);
    tracep->declBit(c+1576,"icache_valid", false,-1);
    tracep->declBus(c+1577,"inst_in", false,-1, 31,0);
    tracep->declBus(c+1578,"pc_in", false,-1, 31,0);
    tracep->declBit(c+218,"stall_pc", false,-1);
    tracep->declBit(c+217,"pc_misaligned_o", false,-1);
    tracep->declBus(c+1579,"pc_out", false,-1, 31,0);
    tracep->declBus(c+1940,"inst_out", false,-1, 31,0);
    tracep->declBus(c+219,"upper_16", false,-1, 15,0);
    tracep->declBus(c+1080,"conc_32_misallign", false,-1, 31,0);
    tracep->declBit(c+1580,"is_missaligned", false,-1);
    tracep->declBit(c+220,"next_misaligned", false,-1);
    tracep->declBus(c+221,"current_state", false,-1, 1,0);
    tracep->declBus(c+421,"next_state", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("exe2csr_data_i ");
    tracep->declBus(c+193,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+194,"pc", false,-1, 31,0);
    tracep->declBus(c+195,"instr", false,-1, 31,0);
    tracep->declBus(c+196,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+197,"exc_code", false,-1, 3,0);
    tracep->declBit(c+198,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_i ");
    tracep->declBus(c+199,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+200,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+201,"exc_req", false,-1);
    tracep->declBit(c+202,"csr_rd_req", false,-1);
    tracep->declBit(c+203,"csr_wr_req", false,-1);
    tracep->declBit(c+204,"fence_i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data_i ");
    tracep->declBus(c+113,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+143,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl_i ");
    tracep->declBus(c+1121,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1122,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1520,"ld_page_fault", false,-1);
    tracep->declBit(c+1521,"st_page_fault", false,-1);
    tracep->declBit(c+1522,"dcache_flush_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2lsu_data_o ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+144,"dcache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2csr_i ");
    tracep->declBus(c+1115,"timer_val", false,-1, 31,0);
    tracep->declBit(c+1116,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pipe2csr_i ");
    tracep->declBus(c+430,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+431,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+432,"timer_irq", false,-1);
    tracep->declBit(c+433,"soft_irq", false,-1);
    tracep->declBit(c+434,"uart_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_o ");
    tracep->declBus(c+1534,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr_i ");
    tracep->declBit(c+156,"pipe_stall", false,-1);
    tracep->declBit(c+420,"irq_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd_o ");
    tracep->declBit(c+1547,"new_pc_req", false,-1);
    tracep->declBit(c+1548,"irq_flush_lsu", false,-1);
    tracep->declBit(c+1549,"wfi_req", false,-1);
    tracep->declBit(c+155,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb_o ");
    tracep->declBus(c+775,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb_o ");
    tracep->declBus(c+1543,"pc_new", false,-1, 31,0);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data ");
    tracep->declBus(c+193,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+194,"pc", false,-1, 31,0);
    tracep->declBus(c+195,"instr", false,-1, 31,0);
    tracep->declBus(c+196,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+197,"exc_code", false,-1, 3,0);
    tracep->declBit(c+198,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl ");
    tracep->declBus(c+199,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+200,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+201,"exc_req", false,-1);
    tracep->declBit(c+202,"csr_rd_req", false,-1);
    tracep->declBit(c+203,"csr_wr_req", false,-1);
    tracep->declBit(c+204,"fence_i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data ");
    tracep->declBus(c+113,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+143,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl ");
    tracep->declBus(c+1121,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1122,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1520,"ld_page_fault", false,-1);
    tracep->declBit(c+1521,"st_page_fault", false,-1);
    tracep->declBit(c+1522,"dcache_flush_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2lsu_data ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+144,"dcache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data ");
    tracep->declBus(c+1534,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb ");
    tracep->declBus(c+1543,"pc_new", false,-1, 31,0);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb ");
    tracep->declBus(c+775,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd ");
    tracep->declBit(c+1547,"new_pc_req", false,-1);
    tracep->declBit(c+1548,"irq_flush_lsu", false,-1);
    tracep->declBit(c+1549,"wfi_req", false,-1);
    tracep->declBit(c+155,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr ");
    tracep->declBit(c+156,"pipe_stall", false,-1);
    tracep->declBit(c+420,"irq_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2csr ");
    tracep->declBus(c+1115,"timer_val", false,-1, 31,0);
    tracep->declBit(c+1116,"flag", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1581,"csr_rdata", false,-1, 31,0);
    tracep->declBus(c+1582,"csr_wdata", false,-1, 31,0);
    tracep->declBit(c+1583,"csr_rd_exc_req", false,-1);
    tracep->declBit(c+222,"csr_wr_exc_req", false,-1);
    tracep->declBit(c+783,"csr_satp_exc_req", false,-1);
    tracep->declBus(c+2178,"csr_rd_exc_code", false,-1, 3,0);
    tracep->declBus(c+2179,"csr_wr_exc_code", false,-1, 3,0);
    tracep->declBit(c+1584,"csr_exc_req", false,-1);
    tracep->declBit(c+1585,"exc_req", false,-1);
    tracep->declBus(c+1586,"exc_code", false,-1, 3,0);
    tracep->declBus(c+784,"csr_pc_ff", false,-1, 31,0);
    tracep->declBus(c+1587,"csr_pc_next", false,-1, 31,0);
    tracep->declBit(c+223,"pipe_stall_flush", false,-1);
    tracep->declBus(c+785,"csr_mcycle_ff", false,-1, 31,0);
    tracep->declBus(c+1588,"csr_mcycle_next", false,-1, 31,0);
    tracep->declBus(c+786,"csr_mcycleh_ff", false,-1, 31,0);
    tracep->declBus(c+1589,"csr_mcycleh_next", false,-1, 31,0);
    tracep->declBus(c+787,"csr_minstret_ff", false,-1, 31,0);
    tracep->declBus(c+1590,"csr_minstret_next", false,-1, 31,0);
    tracep->declBus(c+788,"csr_minstreth_ff", false,-1, 31,0);
    tracep->declBus(c+1591,"csr_minstreth_next", false,-1, 31,0);
    tracep->declBus(c+789,"csr_mcounteren_ff", false,-1, 31,0);
    tracep->declBus(c+1592,"csr_mcounteren_next", false,-1, 31,0);
    tracep->pushNamePrefix("csr_mcountinhibit_ff ");
    tracep->declBus(c+790,"warl1", false,-1, 27,0);
    tracep->declBit(c+791,"hpm3", false,-1);
    tracep->declBit(c+792,"ir", false,-1);
    tracep->declBit(c+793,"warl0", false,-1);
    tracep->declBit(c+794,"cy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mcountinhibit_next ");
    tracep->declBus(c+1593,"warl1", false,-1, 27,0);
    tracep->declBit(c+1594,"hpm3", false,-1);
    tracep->declBit(c+1595,"ir", false,-1);
    tracep->declBit(c+1596,"warl0", false,-1);
    tracep->declBit(c+1597,"cy", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mstatus_ff ");
    tracep->declBit(c+795,"sd", false,-1);
    tracep->declBus(c+796,"wpri3", false,-1, 7,0);
    tracep->declBit(c+797,"tsr", false,-1);
    tracep->declBit(c+798,"tw", false,-1);
    tracep->declBit(c+799,"tvm", false,-1);
    tracep->declBit(c+800,"mxr", false,-1);
    tracep->declBit(c+801,"sum", false,-1);
    tracep->declBit(c+802,"mprv", false,-1);
    tracep->declBus(c+803,"xs", false,-1, 1,0);
    tracep->declBus(c+804,"fs", false,-1, 1,0);
    tracep->declBus(c+805,"mpp", false,-1, 1,0);
    tracep->declBus(c+806,"vs", false,-1, 1,0);
    tracep->declBit(c+807,"spp", false,-1);
    tracep->declBit(c+808,"mpie", false,-1);
    tracep->declBit(c+809,"ube", false,-1);
    tracep->declBit(c+810,"spie", false,-1);
    tracep->declBit(c+811,"wpri2", false,-1);
    tracep->declBit(c+812,"mie", false,-1);
    tracep->declBit(c+813,"wpri1", false,-1);
    tracep->declBit(c+814,"sie", false,-1);
    tracep->declBit(c+815,"wpri0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mstatus_next ");
    tracep->declBit(c+1598,"sd", false,-1);
    tracep->declBus(c+1599,"wpri3", false,-1, 7,0);
    tracep->declBit(c+1600,"tsr", false,-1);
    tracep->declBit(c+1601,"tw", false,-1);
    tracep->declBit(c+1602,"tvm", false,-1);
    tracep->declBit(c+1603,"mxr", false,-1);
    tracep->declBit(c+1604,"sum", false,-1);
    tracep->declBit(c+1605,"mprv", false,-1);
    tracep->declBus(c+1606,"xs", false,-1, 1,0);
    tracep->declBus(c+1607,"fs", false,-1, 1,0);
    tracep->declBus(c+1608,"mpp", false,-1, 1,0);
    tracep->declBus(c+1609,"vs", false,-1, 1,0);
    tracep->declBit(c+1610,"spp", false,-1);
    tracep->declBit(c+1611,"mpie", false,-1);
    tracep->declBit(c+1612,"ube", false,-1);
    tracep->declBit(c+1613,"spie", false,-1);
    tracep->declBit(c+1614,"wpri2", false,-1);
    tracep->declBit(c+1615,"mie", false,-1);
    tracep->declBit(c+1616,"wpri1", false,-1);
    tracep->declBit(c+1617,"sie", false,-1);
    tracep->declBit(c+1618,"wpri0", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+816,"csr_medeleg_ff", false,-1, 31,0);
    tracep->declBus(c+1619,"csr_medeleg_next", false,-1, 31,0);
    tracep->declBus(c+817,"csr_mideleg_ff", false,-1, 31,0);
    tracep->declBus(c+1620,"csr_mideleg_next", false,-1, 31,0);
    tracep->pushNamePrefix("csr_mie_ff ");
    tracep->declBus(c+818,"warl7", false,-1, 14,0);
    tracep->declBit(c+819,"uart", false,-1);
    tracep->declBus(c+820,"warl6", false,-1, 3,0);
    tracep->declBit(c+821,"meie", false,-1);
    tracep->declBit(c+822,"warl5", false,-1);
    tracep->declBit(c+823,"seie", false,-1);
    tracep->declBit(c+824,"warl4", false,-1);
    tracep->declBit(c+825,"mtie", false,-1);
    tracep->declBit(c+826,"warl3", false,-1);
    tracep->declBit(c+827,"stie", false,-1);
    tracep->declBit(c+828,"warl2", false,-1);
    tracep->declBit(c+829,"msie", false,-1);
    tracep->declBit(c+830,"warl1", false,-1);
    tracep->declBit(c+831,"ssie", false,-1);
    tracep->declBit(c+832,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mie_next ");
    tracep->declBus(c+1621,"warl7", false,-1, 14,0);
    tracep->declBit(c+1622,"uart", false,-1);
    tracep->declBus(c+1623,"warl6", false,-1, 3,0);
    tracep->declBit(c+1624,"meie", false,-1);
    tracep->declBit(c+1625,"warl5", false,-1);
    tracep->declBit(c+1626,"seie", false,-1);
    tracep->declBit(c+1627,"warl4", false,-1);
    tracep->declBit(c+1628,"mtie", false,-1);
    tracep->declBit(c+1629,"warl3", false,-1);
    tracep->declBit(c+1630,"stie", false,-1);
    tracep->declBit(c+1631,"warl2", false,-1);
    tracep->declBit(c+1632,"msie", false,-1);
    tracep->declBit(c+1633,"warl1", false,-1);
    tracep->declBit(c+1634,"ssie", false,-1);
    tracep->declBit(c+1635,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mtvec_ff ");
    tracep->declBus(c+833,"base", false,-1, 29,0);
    tracep->declBus(c+834,"mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mtvec_next ");
    tracep->declBus(c+1636,"base", false,-1, 29,0);
    tracep->declBus(c+1637,"mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+835,"csr_mscratch_ff", false,-1, 31,0);
    tracep->declBus(c+2100,"csr_mscratch_next", false,-1, 31,0);
    tracep->declBus(c+836,"csr_mepc_ff", false,-1, 31,0);
    tracep->declBus(c+1638,"csr_mepc_next", false,-1, 31,0);
    tracep->declBus(c+837,"csr_mcause_ff", false,-1, 31,0);
    tracep->declBus(c+1639,"csr_mcause_next", false,-1, 31,0);
    tracep->declBus(c+838,"csr_mtval_ff", false,-1, 31,0);
    tracep->declBus(c+2101,"csr_mtval_next", false,-1, 31,0);
    tracep->pushNamePrefix("csr_mip_ff ");
    tracep->declBus(c+839,"warl7", false,-1, 14,0);
    tracep->declBit(c+840,"uart", false,-1);
    tracep->declBus(c+841,"warl6", false,-1, 3,0);
    tracep->declBit(c+842,"meip", false,-1);
    tracep->declBit(c+843,"warl5", false,-1);
    tracep->declBit(c+844,"seip", false,-1);
    tracep->declBit(c+845,"warl4", false,-1);
    tracep->declBit(c+846,"mtip", false,-1);
    tracep->declBit(c+847,"warl3", false,-1);
    tracep->declBit(c+848,"stip", false,-1);
    tracep->declBit(c+849,"warl2", false,-1);
    tracep->declBit(c+850,"msip", false,-1);
    tracep->declBit(c+851,"warl1", false,-1);
    tracep->declBit(c+852,"ssip", false,-1);
    tracep->declBit(c+853,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_mip_next ");
    tracep->declBus(c+1640,"warl7", false,-1, 14,0);
    tracep->declBit(c+1641,"uart", false,-1);
    tracep->declBus(c+1642,"warl6", false,-1, 3,0);
    tracep->declBit(c+1643,"meip", false,-1);
    tracep->declBit(c+1644,"warl5", false,-1);
    tracep->declBit(c+1645,"seip", false,-1);
    tracep->declBit(c+1646,"warl4", false,-1);
    tracep->declBit(c+1647,"mtip", false,-1);
    tracep->declBit(c+1648,"warl3", false,-1);
    tracep->declBit(c+1649,"stip", false,-1);
    tracep->declBit(c+1650,"warl2", false,-1);
    tracep->declBit(c+1651,"msip", false,-1);
    tracep->declBit(c+1652,"warl1", false,-1);
    tracep->declBit(c+1653,"ssip", false,-1);
    tracep->declBit(c+1654,"warl0", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_stvec_ff ");
    tracep->declBus(c+854,"base", false,-1, 29,0);
    tracep->declBus(c+855,"mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_stvec_next ");
    tracep->declBus(c+1655,"base", false,-1, 29,0);
    tracep->declBus(c+1656,"mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+856,"csr_sscratch_ff", false,-1, 31,0);
    tracep->declBus(c+2102,"csr_sscratch_next", false,-1, 31,0);
    tracep->declBus(c+857,"csr_sepc_ff", false,-1, 31,0);
    tracep->declBus(c+2103,"csr_sepc_next", false,-1, 31,0);
    tracep->declBus(c+858,"csr_scause_ff", false,-1, 31,0);
    tracep->declBus(c+1043,"csr_scause_next", false,-1, 31,0);
    tracep->declBus(c+859,"csr_stval_ff", false,-1, 31,0);
    tracep->declBus(c+2104,"csr_stval_next", false,-1, 31,0);
    tracep->pushNamePrefix("csr_satp_ff ");
    tracep->declBus(c+860,"mode", false,-1, 0,0);
    tracep->declBus(c+861,"asid", false,-1, 8,0);
    tracep->declBus(c+862,"ppn", false,-1, 21,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr_satp_next ");
    tracep->declBus(c+1657,"mode", false,-1, 0,0);
    tracep->declBus(c+1658,"asid", false,-1, 8,0);
    tracep->declBus(c+1659,"ppn", false,-1, 21,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+863,"csr_scounteren_ff", false,-1, 31,0);
    tracep->declBus(c+1660,"csr_scounteren_next", false,-1, 31,0);
    tracep->declBus(c+1661,"sip_mask", false,-1, 31,0);
    tracep->declBit(c+224,"csr_mcycle_wr_flag", false,-1);
    tracep->declBit(c+225,"csr_mcycleh_wr_flag", false,-1);
    tracep->declBit(c+226,"csr_minstret_wr_flag", false,-1);
    tracep->declBit(c+227,"csr_minstreth_wr_flag", false,-1);
    tracep->declBit(c+228,"csr_mcounteren_wr_flag", false,-1);
    tracep->declBit(c+229,"csr_mcountinhibit_wr_flag", false,-1);
    tracep->declBit(c+230,"csr_mstatus_wr_flag", false,-1);
    tracep->declBit(c+231,"csr_medeleg_wr_flag", false,-1);
    tracep->declBit(c+232,"csr_mideleg_wr_flag", false,-1);
    tracep->declBit(c+233,"csr_mie_wr_flag", false,-1);
    tracep->declBit(c+234,"csr_mtvec_wr_flag", false,-1);
    tracep->declBit(c+235,"csr_mscratch_wr_flag", false,-1);
    tracep->declBit(c+236,"csr_mepc_wr_flag", false,-1);
    tracep->declBit(c+237,"csr_mcause_wr_flag", false,-1);
    tracep->declBit(c+238,"csr_mtval_wr_flag", false,-1);
    tracep->declBit(c+239,"csr_mip_wr_flag", false,-1);
    tracep->declBit(c+240,"csr_sstatus_wr_flag", false,-1);
    tracep->declBit(c+241,"csr_sscratch_wr_flag", false,-1);
    tracep->declBit(c+242,"csr_sie_wr_flag", false,-1);
    tracep->declBit(c+243,"csr_stvec_wr_flag", false,-1);
    tracep->declBit(c+244,"csr_sepc_wr_flag", false,-1);
    tracep->declBit(c+2180,"csr_scause_wr_flag", false,-1);
    tracep->declBit(c+245,"csr_stval_wr_flag", false,-1);
    tracep->declBit(c+246,"csr_sip_wr_flag", false,-1);
    tracep->declBit(c+247,"csr_satp_wr_flag", false,-1);
    tracep->declBit(c+248,"csr_scounteren_wr_flag", false,-1);
    tracep->declBus(c+864,"priv_mode_ff", false,-1, 1,0);
    tracep->declBus(c+1662,"priv_mode_next", false,-1, 1,0);
    tracep->declBus(c+1663,"trap_priv_mode", false,-1, 1,0);
    tracep->declBit(c+1664,"irq_delegated_req", false,-1);
    tracep->declBit(c+1665,"exc_delegated_req", false,-1);
    tracep->pushNamePrefix("pipe2csr ");
    tracep->declBus(c+430,"csr_mhartid", false,-1, 31,0);
    tracep->declBus(c+431,"ext_irq", false,-1, 1,0);
    tracep->declBit(c+432,"timer_irq", false,-1);
    tracep->declBit(c+433,"soft_irq", false,-1);
    tracep->declBit(c+434,"uart_irq", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1666,"irq_code", false,-1, 3,0);
    tracep->declBus(c+1667,"m_mode_new_pc", false,-1, 31,0);
    tracep->declBus(c+1668,"s_mode_new_pc", false,-1, 31,0);
    tracep->declBit(c+1669,"m_irq_req", false,-1);
    tracep->declBit(c+865,"s_irq_req", false,-1);
    tracep->declBit(c+1670,"irq_req", false,-1);
    tracep->declBit(c+1671,"meip_irq_req", false,-1);
    tracep->declBit(c+1672,"mtip_irq_req", false,-1);
    tracep->declBit(c+1673,"msip_irq_req", false,-1);
    tracep->declBit(c+2181,"uart_irq_req", false,-1);
    tracep->declBit(c+866,"timer_irq_ff", false,-1);
    tracep->declBit(c+867,"ext_irq0_ff", false,-1);
    tracep->declBit(c+868,"ext_irq1_ff", false,-1);
    tracep->declBit(c+1674,"irq_accept_flag", false,-1);
    tracep->declBit(c+869,"m_mode_global_ie", false,-1);
    tracep->declBit(c+1675,"m_mode_exc_req", false,-1);
    tracep->declBit(c+1676,"m_mode_irq_req", false,-1);
    tracep->declBit(c+1677,"m_mode_pc_req", false,-1);
    tracep->declBit(c+2180,"m_mode_misalign_exc_req", false,-1);
    tracep->declBit(c+1678,"m_mode_lsu_pf_exc_req", false,-1);
    tracep->declBit(c+1679,"m_mode_ileg_inst_exc_req", false,-1);
    tracep->declBit(c+422,"m_mode_i_pf_exc_req", false,-1);
    tracep->declBit(c+1680,"m_mode_break_exc_req", false,-1);
    tracep->declBit(c+2182,"ms_mode_ecall_req", false,-1);
    tracep->declBit(c+1681,"mret_pc_req", false,-1);
    tracep->declBit(c+870,"s_mode_global_ie", false,-1);
    tracep->declBit(c+1665,"s_mode_exc_req", false,-1);
    tracep->declBit(c+1682,"s_mode_irq_req", false,-1);
    tracep->declBit(c+1683,"s_mode_pc_req", false,-1);
    tracep->declBit(c+871,"s_mode_enabled", false,-1);
    tracep->declBit(c+2180,"s_mode_misalign_exc_req", false,-1);
    tracep->declBit(c+1684,"u_mode_ecall_req", false,-1);
    tracep->declBit(c+1685,"sret_pc_req", false,-1);
    tracep->declBit(c+1686,"st_pf_exc_req", false,-1);
    tracep->declBit(c+1687,"ld_pf_exc_req", false,-1);
    tracep->declBit(c+249,"i_pf_exc_req", false,-1);
    tracep->declBit(c+1688,"lsu_pf_exc_req", false,-1);
    tracep->declBit(c+1689,"break_exc_req", false,-1);
    tracep->declBit(c+250,"sret_req", false,-1);
    tracep->declBit(c+251,"mret_req", false,-1);
    tracep->declBit(c+252,"sfence_vma_req", false,-1);
    tracep->declBit(c+253,"wfi_req", false,-1);
    tracep->declBit(c+872,"wfi_ff", false,-1);
    tracep->declBit(c+1690,"wfi_next", false,-1);
    tracep->declBit(c+873,"en_vaddr", false,-1);
    tracep->declBus(c+113,"ld_st_addr", false,-1, 31,0);
    tracep->declBit(c+1139,"ld_ops", false,-1);
    tracep->declBit(c+1140,"st_ops", false,-1);
    tracep->declBit(c+1141,"is_ld_st_ops", false,-1);
    tracep->declBit(c+2180,"ld_misalign_exc_req", false,-1);
    tracep->declBit(c+2180,"st_misalign_exc_req", false,-1);
    tracep->declBit(c+1691,"csr_mcycle_inc", false,-1);
    tracep->declBit(c+1692,"csr_mcycleh_inc", false,-1);
    tracep->declBit(c+1693,"csr_minstret_inc", false,-1);
    tracep->declBit(c+1694,"csr_minstreth_inc", false,-1);
    tracep->declBit(c+1695,"is_not_ebreak", false,-1);
    tracep->declBit(c+1696,"is_not_ecall", false,-1);
    tracep->declBit(c+1697,"satp_mode", false,-1);
    tracep->declBit(c+1698,"csr_vaddr_iflush_req", false,-1);
    tracep->declBit(c+1699,"icache_flush_req", false,-1);
    tracep->declBus(c+874,"time_low_ff", false,-1, 31,0);
    tracep->declBus(c+2105,"time_low_next", false,-1, 31,0);
    tracep->declBus(c+875,"time_high_ff", false,-1, 31,0);
    tracep->declBus(c+2106,"time_high_next", false,-1, 31,0);
    tracep->declBit(c+876,"seip_irq_req", false,-1);
    tracep->declBit(c+877,"stip_irq_req", false,-1);
    tracep->declBit(c+878,"ssip_irq_req", false,-1);
    tracep->declBit(c+254,"fence_i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("if2id_data_i ");
    tracep->declBus(c+157,"instr", false,-1, 31,0);
    tracep->declBus(c+158,"pc", false,-1, 31,0);
    tracep->declBus(c+159,"pc_next", false,-1, 31,0);
    tracep->declBus(c+160,"exc_code", false,-1, 3,0);
    tracep->declBit(c+161,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_i ");
    tracep->declBit(c+162,"exc_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data_o ");
    tracep->declBus(c+1919,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1920,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1921,"instr", false,-1, 31,0);
    tracep->declBus(c+1922,"pc", false,-1, 31,0);
    tracep->declBus(c+1923,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1924,"imm", false,-1, 31,0);
    tracep->declBus(c+1925,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1926,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_o ");
    tracep->declBus(c+1881,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+1882,"alu_m_ops", false,-1, 3,0);
    tracep->declBus(c+1883,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1884,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1885,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+1886,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+1887,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+1888,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+1889,"alu_opr1_sel", false,-1);
    tracep->declBit(c+1890,"alu_opr2_sel", false,-1);
    tracep->declBit(c+1891,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+1892,"csr_opr_sel", false,-1);
    tracep->declBus(c+1893,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1894,"exc_req", false,-1);
    tracep->declBit(c+1895,"rd_wr_req", false,-1);
    tracep->declBit(c+1896,"jump_req", false,-1);
    tracep->declBit(c+1897,"branch_req", false,-1);
    tracep->declBit(c+1898,"fence_i_req", false,-1);
    tracep->declBit(c+1899,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb_i ");
    tracep->declBus(c+775,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb_i ");
    tracep->declBus(c+145,"rd_data", false,-1, 31,0);
    tracep->declBus(c+146,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+147,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("debug_port_i ");
    tracep->declBus(c+2156,"reg_data", false,-1, 31,0);
    tracep->declBus(c+2157,"reg_addr", false,-1, 4,0);
    tracep->declBit(c+2158,"reg_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+255,"id2rf_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+256,"id2rf_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+257,"instr_codeword", false,-1, 31,0);
    tracep->declBus(c+2107,"rf2id_rs1_data", false,-1, 31,0);
    tracep->declBus(c+2108,"rf2id_rs2_data", false,-1, 31,0);
    tracep->declBit(c+1986,"illegal_instr", false,-1);
    tracep->declBus(c+258,"funct3_opcode", false,-1, 2,0);
    tracep->declBus(c+259,"funct7_opcode", false,-1, 6,0);
    tracep->declBus(c+256,"funct5_opcode", false,-1, 4,0);
    tracep->declBus(c+256,"shift_amt", false,-1, 4,0);
    tracep->pushNamePrefix("if2id_ctrl ");
    tracep->declBit(c+162,"exc_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data ");
    tracep->declBus(c+157,"instr", false,-1, 31,0);
    tracep->declBus(c+158,"pc", false,-1, 31,0);
    tracep->declBus(c+159,"pc_next", false,-1, 31,0);
    tracep->declBus(c+160,"exc_code", false,-1, 3,0);
    tracep->declBit(c+161,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl ");
    tracep->declBus(c+1881,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+1882,"alu_m_ops", false,-1, 3,0);
    tracep->declBus(c+1883,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1884,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1885,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+1886,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+1887,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+1888,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+1889,"alu_opr1_sel", false,-1);
    tracep->declBit(c+1890,"alu_opr2_sel", false,-1);
    tracep->declBit(c+1891,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+1892,"csr_opr_sel", false,-1);
    tracep->declBus(c+1893,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+1894,"exc_req", false,-1);
    tracep->declBit(c+1895,"rd_wr_req", false,-1);
    tracep->declBit(c+1896,"jump_req", false,-1);
    tracep->declBit(c+1897,"branch_req", false,-1);
    tracep->declBit(c+1898,"fence_i_req", false,-1);
    tracep->declBit(c+1899,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data ");
    tracep->declBus(c+1919,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+1920,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+1921,"instr", false,-1, 31,0);
    tracep->declBus(c+1922,"pc", false,-1, 31,0);
    tracep->declBus(c+1923,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1924,"imm", false,-1, 31,0);
    tracep->declBus(c+1925,"exc_code", false,-1, 3,0);
    tracep->declBit(c+1926,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2id_fb ");
    tracep->declBus(c+775,"priv_mode", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+260,"instr_opcode", false,-1, 4,0);
    tracep->pushNamePrefix("rf_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBus(c+255,"id2rf_rs1_addr_i", false,-1, 4,0);
    tracep->declBus(c+256,"id2rf_rs2_addr_i", false,-1, 4,0);
    tracep->declBus(c+2107,"rf2id_rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+2108,"rf2id_rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+261,"id2rf_rd_wr_req_i", false,-1);
    tracep->declBus(c+262,"id2rf_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+148,"id2rf_rd_data_i", false,-1, 31,0);
    tracep->pushNamePrefix("debug_port_i ");
    tracep->declBus(c+2156,"reg_data", false,-1, 31,0);
    tracep->declBus(c+2157,"reg_addr", false,-1, 4,0);
    tracep->declBit(c+2158,"reg_wr_req", false,-1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1081+i*1,"register_file", true,(i+0), 31,0);
    }
    tracep->declBit(c+263,"rs1_addr_valid", false,-1);
    tracep->declBit(c+264,"rs2_addr_valid", false,-1);
    tracep->declBit(c+265,"rf_wr_valid", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("execute_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("id2exe_data_i ");
    tracep->declBus(c+163,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+164,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+165,"instr", false,-1, 31,0);
    tracep->declBus(c+166,"pc", false,-1, 31,0);
    tracep->declBus(c+167,"pc_next", false,-1, 31,0);
    tracep->declBus(c+168,"imm", false,-1, 31,0);
    tracep->declBus(c+169,"exc_code", false,-1, 3,0);
    tracep->declBit(c+170,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_ctrl_i ");
    tracep->declBus(c+171,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+172,"alu_m_ops", false,-1, 3,0);
    tracep->declBus(c+173,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+174,"st_ops", false,-1, 1,0);
    tracep->declBus(c+175,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+176,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+177,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+178,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+179,"alu_opr1_sel", false,-1);
    tracep->declBit(c+180,"alu_opr2_sel", false,-1);
    tracep->declBit(c+181,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+182,"csr_opr_sel", false,-1);
    tracep->declBus(c+183,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+184,"exc_req", false,-1);
    tracep->declBit(c+185,"rd_wr_req", false,-1);
    tracep->declBit(c+186,"jump_req", false,-1);
    tracep->declBit(c+187,"branch_req", false,-1);
    tracep->declBit(c+188,"fence_i_req", false,-1);
    tracep->declBit(c+189,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2mul_o ");
    tracep->declBus(c+1506,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+1507,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+131,"alu_m_ops", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data_o ");
    tracep->declBus(c+1498,"alu_result", false,-1, 31,0);
    tracep->declBus(c+130,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1499,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_o ");
    tracep->declBus(c+121,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+122,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+123,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+124,"st_ops", false,-1, 1,0);
    tracep->declBus(c+125,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+126,"rd_wr_req", false,-1);
    tracep->declBit(c+127,"jump_req", false,-1);
    tracep->declBit(c+128,"branch_req", false,-1);
    tracep->declBit(c+129,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data_o ");
    tracep->declBus(c+132,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+133,"pc", false,-1, 31,0);
    tracep->declBus(c+134,"instr", false,-1, 31,0);
    tracep->declBus(c+418,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+135,"exc_code", false,-1, 3,0);
    tracep->declBit(c+136,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl_o ");
    tracep->declBus(c+137,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+138,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+139,"exc_req", false,-1);
    tracep->declBit(c+140,"csr_rd_req", false,-1);
    tracep->declBit(c+141,"csr_wr_req", false,-1);
    tracep->declBit(c+142,"fence_i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe_i ");
    tracep->declBit(c+1550,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+1551,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+1552,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+1553,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2fwd_o ");
    tracep->declBus(c+149,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+150,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+419,"new_pc_req", false,-1);
    tracep->declBit(c+151,"use_rs1", false,-1);
    tracep->declBit(c+152,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb_o ");
    tracep->declBus(c+1544,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+113,"lsu2exe_fb_alu_result_i", false,-1, 31,0);
    tracep->declBus(c+148,"wrb2exe_fb_rd_data_i", false,-1, 31,0);
    tracep->pushNamePrefix("id2exe_ctrl ");
    tracep->declBus(c+171,"alu_i_ops", false,-1, 3,0);
    tracep->declBus(c+172,"alu_m_ops", false,-1, 3,0);
    tracep->declBus(c+173,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+174,"st_ops", false,-1, 1,0);
    tracep->declBus(c+175,"branch_ops", false,-1, 2,0);
    tracep->declBus(c+176,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+177,"amo_ops", false,-1, 3,0);
    tracep->declBus(c+178,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+179,"alu_opr1_sel", false,-1);
    tracep->declBit(c+180,"alu_opr2_sel", false,-1);
    tracep->declBit(c+181,"alu_cmp_opr2_sel", false,-1);
    tracep->declBit(c+182,"csr_opr_sel", false,-1);
    tracep->declBus(c+183,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+184,"exc_req", false,-1);
    tracep->declBit(c+185,"rd_wr_req", false,-1);
    tracep->declBit(c+186,"jump_req", false,-1);
    tracep->declBit(c+187,"branch_req", false,-1);
    tracep->declBit(c+188,"fence_i_req", false,-1);
    tracep->declBit(c+189,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id2exe_data ");
    tracep->declBus(c+163,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+164,"rs2_data", false,-1, 31,0);
    tracep->declBus(c+165,"instr", false,-1, 31,0);
    tracep->declBus(c+166,"pc", false,-1, 31,0);
    tracep->declBus(c+167,"pc_next", false,-1, 31,0);
    tracep->declBus(c+168,"imm", false,-1, 31,0);
    tracep->declBus(c+169,"exc_code", false,-1, 3,0);
    tracep->declBit(c+170,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl ");
    tracep->declBus(c+121,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+122,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+123,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+124,"st_ops", false,-1, 1,0);
    tracep->declBus(c+125,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+126,"rd_wr_req", false,-1);
    tracep->declBit(c+127,"jump_req", false,-1);
    tracep->declBit(c+128,"branch_req", false,-1);
    tracep->declBit(c+129,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data ");
    tracep->declBus(c+1498,"alu_result", false,-1, 31,0);
    tracep->declBus(c+130,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1499,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_ctrl ");
    tracep->declBus(c+137,"csr_ops", false,-1, 1,0);
    tracep->declBus(c+138,"sys_ops", false,-1, 2,0);
    tracep->declBit(c+139,"exc_req", false,-1);
    tracep->declBit(c+140,"csr_rd_req", false,-1);
    tracep->declBit(c+141,"csr_wr_req", false,-1);
    tracep->declBit(c+142,"fence_i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2csr_data ");
    tracep->declBus(c+132,"csr_addr", false,-1, 11,0);
    tracep->declBus(c+133,"pc", false,-1, 31,0);
    tracep->declBus(c+134,"instr", false,-1, 31,0);
    tracep->declBus(c+418,"csr_wdata", false,-1, 31,0);
    tracep->declBus(c+135,"exc_code", false,-1, 3,0);
    tracep->declBit(c+136,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2mul ");
    tracep->declBus(c+1506,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+1507,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+131,"alu_m_ops", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb ");
    tracep->declBus(c+1544,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+266,"alu_i_operator", false,-1, 3,0);
    tracep->declBus(c+267,"branch_ops", false,-1, 2,0);
    tracep->pushNamePrefix("exe2fwd ");
    tracep->declBus(c+149,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+150,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+419,"new_pc_req", false,-1);
    tracep->declBit(c+151,"use_rs1", false,-1);
    tracep->declBit(c+152,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe ");
    tracep->declBit(c+1550,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+1551,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+1552,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+1553,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+113,"lsu2exe_fb_alu_result", false,-1, 31,0);
    tracep->declBus(c+148,"wrb2exe_fb_rd_data", false,-1, 31,0);
    tracep->declBus(c+1700,"operand_rs1_data", false,-1, 31,0);
    tracep->declBus(c+1499,"operand_rs2_data", false,-1, 31,0);
    tracep->declBus(c+1701,"alu_adder_output", false,-1, 31,0);
    tracep->declBus(c+1506,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+1507,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+1498,"alu_result", false,-1, 31,0);
    tracep->declBus(c+1700,"cmp_operand_1", false,-1, 31,0);
    tracep->declBus(c+1702,"cmp_operand_2", false,-1, 31,0);
    tracep->declQuad(c+1703,"cmp_output", false,-1, 32,0);
    tracep->declBit(c+1705,"cmp_not_zero", false,-1);
    tracep->declBit(c+1706,"cmp_neg", false,-1);
    tracep->declBit(c+1707,"cmp_overflow", false,-1);
    tracep->declBit(c+423,"branch_res", false,-1);
    tracep->declBit(c+268,"fence_i_req", false,-1);
    tracep->declBus(c+1708,"shift_amt", false,-1, 4,0);
    tracep->declBus(c+269,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+270,"rs2_addr", false,-1, 4,0);
    tracep->declBus(c+271,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fetch_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("if2icache_o ");
    tracep->declBus(c+1067,"addr", false,-1, 31,0);
    tracep->declBit(c+1068,"req", false,-1);
    tracep->declBit(c+1144,"req_kill", false,-1);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2if_i ");
    tracep->declBus(c+1146,"r_data", false,-1, 31,0);
    tracep->declBit(c+1147,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2mmu_o ");
    tracep->declBus(c+1847,"i_vaddr", false,-1, 31,0);
    tracep->declBit(c+2160,"i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2if_i ");
    tracep->declQuad(c+1069,"i_paddr", false,-1, 33,0);
    tracep->declBit(c+1071,"i_hit", false,-1);
    tracep->declBit(c+1072,"i_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data_o ");
    tracep->declBus(c+1872,"instr", false,-1, 31,0);
    tracep->declBus(c+120,"pc", false,-1, 31,0);
    tracep->declBus(c+1847,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1873,"exc_code", false,-1, 3,0);
    tracep->declBit(c+2161,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl_o ");
    tracep->declBit(c+1879,"exc_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb_i ");
    tracep->declBus(c+1544,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb_i ");
    tracep->declBus(c+1543,"pc_new", false,-1, 31,0);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if_i ");
    tracep->declBit(c+1554,"exe_new_pc_req", false,-1);
    tracep->declBit(c+1555,"csr_new_pc_req", false,-1);
    tracep->declBit(c+1556,"wfi_req", false,-1);
    tracep->declBit(c+1557,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1545,"if2fwd_stall_o", false,-1);
    tracep->pushNamePrefix("cext2if_i ");
    tracep->declBus(c+1935,"instr", false,-1, 31,0);
    tracep->declBus(c+1936,"pc_aligned", false,-1, 31,0);
    tracep->declBit(c+1937,"stall", false,-1);
    tracep->declBit(c+1938,"is_comp", false,-1);
    tracep->declBit(c+1939,"illegal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2cext_o ");
    tracep->declBus(c+1503,"instr_un", false,-1, 31,0);
    tracep->declBus(c+1504,"pc_ff", false,-1, 31,0);
    tracep->declBit(c+1505,"icache_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2if ");
    tracep->declBus(c+1146,"r_data", false,-1, 31,0);
    tracep->declBit(c+1147,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2mmu ");
    tracep->declBus(c+1847,"i_vaddr", false,-1, 31,0);
    tracep->declBit(c+2160,"i_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2if ");
    tracep->declQuad(c+1069,"i_paddr", false,-1, 33,0);
    tracep->declBit(c+1071,"i_hit", false,-1);
    tracep->declBit(c+1072,"i_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_data ");
    tracep->declBus(c+1872,"instr", false,-1, 31,0);
    tracep->declBus(c+120,"pc", false,-1, 31,0);
    tracep->declBus(c+1847,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1873,"exc_code", false,-1, 3,0);
    tracep->declBit(c+2161,"instr_flushed", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if2id_ctrl ");
    tracep->declBit(c+1879,"exc_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2if_fb ");
    tracep->declBus(c+1544,"pc_new", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2if_fb ");
    tracep->declBus(c+1543,"pc_new", false,-1, 31,0);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2if ");
    tracep->declBit(c+1554,"exe_new_pc_req", false,-1);
    tracep->declBit(c+1555,"csr_new_pc_req", false,-1);
    tracep->declBit(c+1556,"wfi_req", false,-1);
    tracep->declBit(c+1557,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1987,"exc_code_next", false,-1, 3,0);
    tracep->declBus(c+879,"exc_code_ff", false,-1, 3,0);
    tracep->declBit(c+1988,"exc_req_next", false,-1);
    tracep->declBit(c+880,"exc_req_ff", false,-1);
    tracep->declBus(c+120,"pc_ff", false,-1, 31,0);
    tracep->declBus(c+1847,"pc_next", false,-1, 31,0);
    tracep->declBus(c+1989,"incr", false,-1, 2,0);
    tracep->declBit(c+424,"if_stall", false,-1);
    tracep->declBit(c+1990,"pc_misaligned", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("forward_stall_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("wrb2fwd_i ");
    tracep->declBus(c+153,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+154,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd_i ");
    tracep->declBus(c+1123,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1124,"rd_wr_req", false,-1);
    tracep->declBit(c+1546,"lsu_req", false,-1);
    tracep->declBit(c+2099,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul2fwd_i ");
    tracep->declBit(c+776,"mul_req", false,-1);
    tracep->declBit(c+777,"mul_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2fwd_i ");
    tracep->declBus(c+149,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+150,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+419,"new_pc_req", false,-1);
    tracep->declBit(c+151,"use_rs1", false,-1);
    tracep->declBit(c+152,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd_i ");
    tracep->declBit(c+1547,"new_pc_req", false,-1);
    tracep->declBit(c+1548,"irq_flush_lsu", false,-1);
    tracep->declBit(c+1549,"wfi_req", false,-1);
    tracep->declBit(c+155,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1545,"if2fwd_stall_i", false,-1);
    tracep->pushNamePrefix("fwd2if_o ");
    tracep->declBit(c+1554,"exe_new_pc_req", false,-1);
    tracep->declBit(c+1555,"csr_new_pc_req", false,-1);
    tracep->declBit(c+1556,"wfi_req", false,-1);
    tracep->declBit(c+1557,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe_o ");
    tracep->declBit(c+1550,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+1551,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+1552,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+1553,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr_o ");
    tracep->declBit(c+156,"pipe_stall", false,-1);
    tracep->declBit(c+420,"irq_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu_o ");
    tracep->declBit(c+1558,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2ptop_o ");
    tracep->declBit(c+1559,"if2id_pipe_flush", false,-1);
    tracep->declBit(c+1560,"if2id_pipe_stall", false,-1);
    tracep->declBit(c+1561,"id2exe_pipe_flush", false,-1);
    tracep->declBit(c+1562,"id2exe_pipe_stall", false,-1);
    tracep->declBit(c+1563,"exe2lsu_pipe_stall", false,-1);
    tracep->declBit(c+1564,"exe2lsu_pipe_flush", false,-1);
    tracep->declBit(c+1565,"lsu2wrb_pipe_flush", false,-1);
    tracep->declBit(c+1566,"pipe_fwd_wrb_rs1", false,-1);
    tracep->declBit(c+1567,"pipe_fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd ");
    tracep->declBus(c+1123,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1124,"rd_wr_req", false,-1);
    tracep->declBit(c+1546,"lsu_req", false,-1);
    tracep->declBit(c+2099,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2fwd ");
    tracep->declBus(c+153,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+154,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2fwd ");
    tracep->declBus(c+149,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+150,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+419,"new_pc_req", false,-1);
    tracep->declBit(c+151,"use_rs1", false,-1);
    tracep->declBit(c+152,"use_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2fwd ");
    tracep->declBit(c+1547,"new_pc_req", false,-1);
    tracep->declBit(c+1548,"irq_flush_lsu", false,-1);
    tracep->declBit(c+1549,"wfi_req", false,-1);
    tracep->declBit(c+155,"csr_read_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul2fwd ");
    tracep->declBit(c+776,"mul_req", false,-1);
    tracep->declBit(c+777,"mul_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+272,"rs1_valid", false,-1);
    tracep->declBit(c+273,"rs2_valid", false,-1);
    tracep->declBit(c+1142,"lsu2rs1_hazard", false,-1);
    tracep->declBit(c+1143,"lsu2rs2_hazard", false,-1);
    tracep->declBit(c+2109,"ld_use_rs1_hazard", false,-1);
    tracep->declBit(c+2110,"ld_use_rs2_hazard", false,-1);
    tracep->declBit(c+1709,"ld_use_hazard", false,-1);
    tracep->declBit(c+1710,"lsu_mul_csr_req", false,-1);
    tracep->declBit(c+1711,"if_id_exe_stall", false,-1);
    tracep->declBit(c+1712,"lsu_mul_stall", false,-1);
    tracep->declBit(c+1713,"lsu_flush", false,-1);
    tracep->declBit(c+274,"lsu_stall_ff", false,-1);
    tracep->declBit(c+1714,"lsu_stall_next", false,-1);
    tracep->declBit(c+881,"mul_stall_ff", false,-1);
    tracep->declBit(c+882,"mul_stall_next", false,-1);
    tracep->declBit(c+275,"lsu_mul_stall_ff", false,-1);
    tracep->declBit(c+1715,"id_exe_flush", false,-1);
    tracep->declBit(c+1716,"exe_new_pc_req", false,-1);
    tracep->declBit(c+1545,"if2fwd_stall", false,-1);
    tracep->pushNamePrefix("fwd2if ");
    tracep->declBit(c+1554,"exe_new_pc_req", false,-1);
    tracep->declBit(c+1555,"csr_new_pc_req", false,-1);
    tracep->declBit(c+1556,"wfi_req", false,-1);
    tracep->declBit(c+1557,"if_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2exe ");
    tracep->declBit(c+1550,"fwd_wrb_rs1", false,-1);
    tracep->declBit(c+1551,"fwd_wrb_rs2", false,-1);
    tracep->declBit(c+1552,"fwd_lsu_rs1", false,-1);
    tracep->declBit(c+1553,"fwd_lsu_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2csr ");
    tracep->declBit(c+156,"pipe_stall", false,-1);
    tracep->declBit(c+420,"irq_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu ");
    tracep->declBit(c+1558,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2ptop ");
    tracep->declBit(c+1559,"if2id_pipe_flush", false,-1);
    tracep->declBit(c+1560,"if2id_pipe_stall", false,-1);
    tracep->declBit(c+1561,"id2exe_pipe_flush", false,-1);
    tracep->declBit(c+1562,"id2exe_pipe_stall", false,-1);
    tracep->declBit(c+1563,"exe2lsu_pipe_stall", false,-1);
    tracep->declBit(c+1564,"exe2lsu_pipe_flush", false,-1);
    tracep->declBit(c+1565,"lsu2wrb_pipe_flush", false,-1);
    tracep->declBit(c+1566,"pipe_fwd_wrb_rs1", false,-1);
    tracep->declBit(c+1567,"pipe_fwd_wrb_rs2", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("exe2lsu_data_i ");
    tracep->declBus(c+190,"alu_result", false,-1, 31,0);
    tracep->declBus(c+191,"pc_next", false,-1, 31,0);
    tracep->declBus(c+192,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl_i ");
    tracep->declBus(c+1125,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1126,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+1127,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1128,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1129,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1130,"rd_wr_req", false,-1);
    tracep->declBit(c+1131,"jump_req", false,-1);
    tracep->declBit(c+1132,"branch_req", false,-1);
    tracep->declBit(c+1133,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2lsu_data_i ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+144,"dcache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data_o ");
    tracep->declBus(c+113,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+143,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl_o ");
    tracep->declBus(c+1121,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1122,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1520,"ld_page_fault", false,-1);
    tracep->declBit(c+1521,"st_page_fault", false,-1);
    tracep->declBit(c+1522,"dcache_flush_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data_i ");
    tracep->declBus(c+1523,"w_data", false,-1, 31,0);
    tracep->declBus(c+2092,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl_i ");
    tracep->declBit(c+774,"amo_done", false,-1);
    tracep->declBit(c+1524,"ld_req", false,-1);
    tracep->declBit(c+1525,"st_req", false,-1);
    tracep->declBit(c+1526,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data_o ");
    tracep->declBus(c+1527,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+1528,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+1529,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl_o ");
    tracep->declBus(c+1530,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1531,"is_amo", false,-1);
    tracep->declBit(c+1532,"amo_flush", false,-1);
    tracep->declBit(c+1533,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data_o ");
    tracep->declBus(c+2095,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2096,"pc_next", false,-1, 31,0);
    tracep->declBus(c+2097,"r_data", false,-1, 31,0);
    tracep->declBus(c+2098,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_o ");
    tracep->declBus(c+2093,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+2094,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+113,"lsu2exe_fb_alu_result_o", false,-1, 31,0);
    tracep->pushNamePrefix("lsu2fwd_o ");
    tracep->declBus(c+1123,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1124,"rd_wr_req", false,-1);
    tracep->declBit(c+1546,"lsu_req", false,-1);
    tracep->declBit(c+2099,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd2lsu_i ");
    tracep->declBit(c+1558,"lsu_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_i ");
    tracep->declBus(c+1155,"r_data", false,-1, 31,0);
    tracep->declBit(c+1156,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus_o ");
    tracep->declBus(c+1150,"addr", false,-1, 31,0);
    tracep->declBus(c+1151,"w_data", false,-1, 31,0);
    tracep->declBus(c+1152,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1153,"ld_req", false,-1);
    tracep->declBit(c+1154,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1119,"dcache_flush_o", false,-1);
    tracep->pushNamePrefix("mmu2lsu_i ");
    tracep->declQuad(c+1184,"d_paddr", false,-1, 33,0);
    tracep->declBit(c+1186,"d_hit", false,-1);
    tracep->declBit(c+1187,"ld_page_fault", false,-1);
    tracep->declBit(c+1188,"st_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2mmu_o ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+1181,"lsu_flush", false,-1);
    tracep->declBit(c+1182,"d_req", false,-1);
    tracep->declBit(c+1183,"st_req", false,-1);
    tracep->declBit(c+1120,"is_amo", false,-1);
    tracep->declBus(c+113,"d_vaddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_data ");
    tracep->declBus(c+190,"alu_result", false,-1, 31,0);
    tracep->declBus(c+191,"pc_next", false,-1, 31,0);
    tracep->declBus(c+192,"rs2_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2lsu_ctrl ");
    tracep->declBus(c+1125,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+1126,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBus(c+1127,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1128,"st_ops", false,-1, 1,0);
    tracep->declBus(c+1129,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1130,"rd_wr_req", false,-1);
    tracep->declBit(c+1131,"jump_req", false,-1);
    tracep->declBit(c+1132,"branch_req", false,-1);
    tracep->declBit(c+1133,"fence_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data ");
    tracep->declBus(c+2095,"alu_result", false,-1, 31,0);
    tracep->declBus(c+2096,"pc_next", false,-1, 31,0);
    tracep->declBus(c+2097,"r_data", false,-1, 31,0);
    tracep->declBus(c+2098,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl ");
    tracep->declBus(c+2093,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+2094,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus ");
    tracep->declBus(c+1150,"addr", false,-1, 31,0);
    tracep->declBus(c+1151,"w_data", false,-1, 31,0);
    tracep->declBus(c+1152,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1153,"ld_req", false,-1);
    tracep->declBit(c+1154,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu ");
    tracep->declBus(c+1155,"r_data", false,-1, 31,0);
    tracep->declBit(c+1156,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_data ");
    tracep->declBus(c+113,"dbus_addr", false,-1, 31,0);
    tracep->declBus(c+143,"pc_next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2csr_ctrl ");
    tracep->declBus(c+1121,"ld_ops", false,-1, 2,0);
    tracep->declBus(c+1122,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1520,"ld_page_fault", false,-1);
    tracep->declBit(c+1521,"st_page_fault", false,-1);
    tracep->declBit(c+1522,"dcache_flush_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2lsu_data ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+144,"dcache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_data ");
    tracep->declBus(c+1523,"w_data", false,-1, 31,0);
    tracep->declBus(c+2092,"amo_wrb_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("amo2lsu_ctrl ");
    tracep->declBit(c+774,"amo_done", false,-1);
    tracep->declBit(c+1524,"ld_req", false,-1);
    tracep->declBit(c+1525,"st_req", false,-1);
    tracep->declBit(c+1526,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_data ");
    tracep->declBus(c+1527,"lsu_addr", false,-1, 31,0);
    tracep->declBus(c+1528,"rs2_operand", false,-1, 31,0);
    tracep->declBus(c+1529,"r_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2amo_ctrl ");
    tracep->declBus(c+1530,"amo_ops", false,-1, 3,0);
    tracep->declBit(c+1531,"is_amo", false,-1);
    tracep->declBit(c+1532,"amo_flush", false,-1);
    tracep->declBit(c+1533,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2fwd ");
    tracep->declBus(c+1123,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+1124,"rd_wr_req", false,-1);
    tracep->declBit(c+1546,"lsu_req", false,-1);
    tracep->declBit(c+2099,"lsu_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2mmu ");
    tracep->declBus(c+450,"satp_ppn", false,-1, 21,0);
    tracep->declBit(c+451,"en_vaddr", false,-1);
    tracep->declBit(c+451,"en_ld_st_vaddr", false,-1);
    tracep->declBit(c+452,"mxr", false,-1);
    tracep->declBit(c+112,"tlb_flush", false,-1);
    tracep->declBit(c+1181,"lsu_flush", false,-1);
    tracep->declBit(c+1182,"d_req", false,-1);
    tracep->declBit(c+1183,"st_req", false,-1);
    tracep->declBit(c+1120,"is_amo", false,-1);
    tracep->declBus(c+113,"d_vaddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2lsu ");
    tracep->declQuad(c+1184,"d_paddr", false,-1, 33,0);
    tracep->declBit(c+1186,"d_hit", false,-1);
    tracep->declBit(c+1187,"ld_page_fault", false,-1);
    tracep->declBit(c+1188,"st_page_fault", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+113,"ld_st_addr", false,-1, 31,0);
    tracep->declBus(c+1717,"rdata_word", false,-1, 31,0);
    tracep->declBus(c+1718,"rdata_hword", false,-1, 15,0);
    tracep->declBus(c+1719,"rdata_byte", false,-1, 7,0);
    tracep->declBit(c+1720,"ld_req", false,-1);
    tracep->declBus(c+1121,"ld_ops", false,-1, 2,0);
    tracep->declBit(c+1721,"st_req", false,-1);
    tracep->declBit(c+1135,"is_amo", false,-1);
    tracep->declBit(c+1119,"dcache_flush_req", false,-1);
    tracep->declBit(c+1722,"lsu_amo_req", false,-1);
    tracep->declBit(c+2111,"lsu_amo_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("muldiv_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("exe2mul_i ");
    tracep->declBus(c+1506,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+1507,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+131,"alu_m_ops", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1712,"fwd2mul_stall_i", false,-1);
    tracep->declBit(c+1723,"fwd2mul_flush_i", false,-1);
    tracep->pushNamePrefix("mul2fwd_o ");
    tracep->declBit(c+776,"mul_req", false,-1);
    tracep->declBit(c+777,"mul_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul2wrb_o ");
    tracep->declBus(c+1535,"alu_m_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("exe2mul ");
    tracep->declBus(c+1506,"alu_operand_1", false,-1, 31,0);
    tracep->declBus(c+1507,"alu_operand_2", false,-1, 31,0);
    tracep->declBus(c+131,"alu_m_ops", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul2fwd ");
    tracep->declBit(c+776,"mul_req", false,-1);
    tracep->declBit(c+777,"mul_ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul2wrb ");
    tracep->declBus(c+1535,"alu_m_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+131,"alu_m_ops", false,-1, 3,0);
    tracep->declBus(c+2112,"alu_m_ops_next", false,-1, 3,0);
    tracep->declBus(c+883,"alu_m_ops_ff", false,-1, 3,0);
    tracep->declBus(c+1506,"alu_opr_1", false,-1, 31,0);
    tracep->declBus(c+425,"alu_m_opr_1", false,-1, 31,0);
    tracep->declBus(c+1724,"alu_m_opr1_next", false,-1, 31,0);
    tracep->declBus(c+884,"alu_m_opr1_ff", false,-1, 31,0);
    tracep->declBus(c+1507,"alu_opr_2", false,-1, 31,0);
    tracep->declBus(c+426,"alu_m_opr_2", false,-1, 31,0);
    tracep->declBus(c+1725,"alu_m_opr2_next", false,-1, 31,0);
    tracep->declBus(c+885,"alu_m_opr2_ff", false,-1, 31,0);
    tracep->declBit(c+1044,"alu_m_opr1_sign_next", false,-1);
    tracep->declBit(c+886,"alu_m_opr1_sign_ff", false,-1);
    tracep->declBit(c+1045,"alu_m_opr2_sign_next", false,-1);
    tracep->declBit(c+887,"alu_m_opr2_sign_ff", false,-1);
    tracep->declBit(c+888,"alu_m_req", false,-1);
    tracep->declBit(c+1726,"alu_m_ack_next", false,-1);
    tracep->declBit(c+889,"alu_m_ack_ff", false,-1);
    tracep->declBus(c+1727,"alu_m_result_next", false,-1, 31,0);
    tracep->declQuad(c+890,"mult", false,-1, 63,0);
    tracep->declQuad(c+892,"mult_ss", false,-1, 63,0);
    tracep->declQuad(c+2183,"mult_su", false,-1, 63,0);
    tracep->declQuad(c+1728,"mult_su_int", false,-1, 63,0);
    tracep->declBus(c+2185,"div", false,-1, 31,0);
    tracep->declBus(c+276,"div_u", false,-1, 31,0);
    tracep->declBus(c+2186,"rem", false,-1, 31,0);
    tracep->declBus(c+277,"rem_u", false,-1, 31,0);
    tracep->declBit(c+278,"div_done", false,-1);
    tracep->declBit(c+2187,"div_valid", false,-1);
    tracep->pushNamePrefix("divider_module ");
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+2084,"rst", false,-1);
    tracep->declBit(c+1046,"start_i", false,-1);
    tracep->declBus(c+884,"opr1_i", false,-1, 31,0);
    tracep->declBus(c+885,"opr2_i", false,-1, 31,0);
    tracep->declBit(c+278,"done_o", false,-1);
    tracep->declBus(c+276,"quo_o", false,-1, 31,0);
    tracep->declBus(c+277,"rem_o", false,-1, 31,0);
    tracep->declBit(c+279,"busy_ff", false,-1);
    tracep->declBit(c+278,"done_ff", false,-1);
    tracep->declBus(c+280,"opr2_ff", false,-1, 31,0);
    tracep->declBus(c+276,"quo_ff", false,-1, 31,0);
    tracep->declBus(c+281,"quo_next", false,-1, 31,0);
    tracep->declQuad(c+282,"acc_ff", false,-1, 32,0);
    tracep->declQuad(c+284,"acc_next", false,-1, 32,0);
    tracep->declQuad(c+286,"rem_ff", false,-1, 32,0);
    tracep->declBus(c+288,"counter", false,-1, 4,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("writeback_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("lsu2wrb_data_i ");
    tracep->declBus(c+205,"alu_result", false,-1, 31,0);
    tracep->declBus(c+206,"pc_next", false,-1, 31,0);
    tracep->declBus(c+207,"r_data", false,-1, 31,0);
    tracep->declBus(c+208,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl_i ");
    tracep->declBus(c+209,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+210,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data_i ");
    tracep->declBus(c+211,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul2wrb_i ");
    tracep->declBus(c+212,"alu_m_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb_o ");
    tracep->declBus(c+145,"rd_data", false,-1, 31,0);
    tracep->declBus(c+146,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+147,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+148,"wrb2exe_fb_rd_data_o", false,-1, 31,0);
    tracep->pushNamePrefix("wrb2fwd_o ");
    tracep->declBus(c+153,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+154,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_data ");
    tracep->declBus(c+205,"alu_result", false,-1, 31,0);
    tracep->declBus(c+206,"pc_next", false,-1, 31,0);
    tracep->declBus(c+207,"r_data", false,-1, 31,0);
    tracep->declBus(c+208,"rd_addr", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2wrb_ctrl ");
    tracep->declBus(c+209,"rd_wrb_sel", false,-1, 2,0);
    tracep->declBit(c+210,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr2wrb_data ");
    tracep->declBus(c+211,"csr_rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul2wrb ");
    tracep->declBus(c+212,"alu_m_result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wrb2id_fb ");
    tracep->declBus(c+145,"rd_data", false,-1, 31,0);
    tracep->declBus(c+146,"rd_addr", false,-1, 4,0);
    tracep->declBit(c+147,"rd_wr_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+148,"wrb_rd_data", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dbus_interconnect_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("lsu2dbus_i ");
    tracep->declBus(c+1150,"addr", false,-1, 31,0);
    tracep->declBus(c+1151,"w_data", false,-1, 31,0);
    tracep->declBus(c+1152,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1153,"ld_req", false,-1);
    tracep->declBit(c+1154,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2lsu_o ");
    tracep->declBus(c+1155,"r_data", false,-1, 31,0);
    tracep->declBit(c+1156,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1119,"dcache_flush_i", false,-1);
    tracep->pushNamePrefix("dcache2dbus_i ");
    tracep->declBus(c+1169,"r_data", false,-1, 31,0);
    tracep->declBit(c+1170,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus_i ");
    tracep->declBus(c+102,"r_data", false,-1, 31,0);
    tracep->declBit(c+103,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("clint2dbus_i ");
    tracep->declBus(c+104,"r_data", false,-1, 31,0);
    tracep->declBit(c+105,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_i ");
    tracep->declBus(c+106,"r_data", false,-1, 31,0);
    tracep->declBit(c+107,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bmem2dbus_i ");
    tracep->declBus(c+442,"r_data", false,-1, 31,0);
    tracep->declBit(c+443,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uartns2dbus_i ");
    tracep->declBus(c+108,"r_data", false,-1, 31,0);
    tracep->declBit(c+109,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_i ");
    tracep->declBus(c+110,"r_data", false,-1, 31,0);
    tracep->declBit(c+111,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1162,"dmem_sel_o", false,-1);
    tracep->declBit(c+1163,"uart_sel_o", false,-1);
    tracep->declBit(c+1164,"clint_sel_o", false,-1);
    tracep->declBit(c+1165,"plic_sel_o", false,-1);
    tracep->declBit(c+1166,"bmem_sel_o", false,-1);
    tracep->declBit(c+1167,"uart_ns_sel_o", false,-1);
    tracep->declBit(c+1168,"spi_sel_o", false,-1);
    tracep->pushNamePrefix("dbus2peri_o ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu2dbus ");
    tracep->declBus(c+1150,"addr", false,-1, 31,0);
    tracep->declBus(c+1151,"w_data", false,-1, 31,0);
    tracep->declBus(c+1152,"st_ops", false,-1, 1,0);
    tracep->declBit(c+1153,"ld_req", false,-1);
    tracep->declBit(c+1154,"st_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2peri ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1730,"dbus_addr", false,-1, 31,0);
    tracep->declBit(c+1731,"ld_req", false,-1);
    tracep->declBit(c+1732,"st_req", false,-1);
    tracep->declBit(c+1733,"dbus_req", false,-1);
    tracep->declBit(c+1734,"dmem_addr_match", false,-1);
    tracep->declBit(c+1735,"uart_addr_match", false,-1);
    tracep->declBit(c+1736,"clint_addr_match", false,-1);
    tracep->declBit(c+1737,"plic_addr_match", false,-1);
    tracep->declBit(c+1738,"bmem_addr_match", false,-1);
    tracep->declBit(c+1739,"uart_ns_addr_match", false,-1);
    tracep->declBit(c+1740,"spi_addr_match", false,-1);
    tracep->declBit(c+1162,"dmem_sel", false,-1);
    tracep->declBit(c+1163,"uart_sel", false,-1);
    tracep->declBit(c+1164,"clint_sel", false,-1);
    tracep->declBit(c+1165,"plic_sel", false,-1);
    tracep->declBit(c+1166,"bmem_sel", false,-1);
    tracep->declBit(c+1167,"uart_ns_sel", false,-1);
    tracep->declBit(c+1168,"spi_sel", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_top_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("if2icache_i ");
    tracep->declBus(c+1067,"addr", false,-1, 31,0);
    tracep->declBit(c+1068,"req", false,-1);
    tracep->declBit(c+1144,"req_kill", false,-1);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2if_o ");
    tracep->declBus(c+1146,"r_data", false,-1, 31,0);
    tracep->declBit(c+1147,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2dcache_i ");
    tracep->declBus(c+1845,"paddr", false,-1, 31,0);
    tracep->declBit(c+1846,"r_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2mmu_o ");
    tracep->declBus(c+1148,"r_data", false,-1, 31,0);
    tracep->declBit(c+1149,"r_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2peri_i ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2dbus_o ");
    tracep->declBus(c+1169,"r_data", false,-1, 31,0);
    tracep->declBit(c+1170,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bmem2dbus_o ");
    tracep->declBus(c+442,"r_data", false,-1, 31,0);
    tracep->declBit(c+443,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1119,"dcache_flush_i", false,-1);
    tracep->declBit(c+1162,"dmem_sel_i", false,-1);
    tracep->declBit(c+1166,"bmem_sel_i", false,-1);
    tracep->pushNamePrefix("if2icache ");
    tracep->declBus(c+1067,"addr", false,-1, 31,0);
    tracep->declBit(c+1068,"req", false,-1);
    tracep->declBit(c+1144,"req_kill", false,-1);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2if ");
    tracep->declBus(c+289,"r_data", false,-1, 31,0);
    tracep->declBit(c+290,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bmem2if ");
    tracep->declBus(c+894,"r_data", false,-1, 31,0);
    tracep->declBit(c+895,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2mem ");
    tracep->declBus(c+1991,"addr", false,-1, 31,0);
    tracep->declBit(c+1992,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2icache ");
    tracep->declArray(c+1741,"r_data", false,-1, 127,0);
    tracep->declBit(c+1745,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mmu2dcache ");
    tracep->declBus(c+1845,"paddr", false,-1, 31,0);
    tracep->declBit(c+1846,"r_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2mmu ");
    tracep->declBus(c+1148,"r_data", false,-1, 31,0);
    tracep->declBit(c+1149,"r_valid", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2peri ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2dbus ");
    tracep->declBus(c+1169,"r_data", false,-1, 31,0);
    tracep->declBit(c+1170,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bmem2dbus ");
    tracep->declBus(c+442,"r_data", false,-1, 31,0);
    tracep->declBit(c+443,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsummu2dcache ");
    tracep->declBus(c+1993,"addr", false,-1, 31,0);
    tracep->declBus(c+1994,"w_data", false,-1, 31,0);
    tracep->declBus(c+1995,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1996,"w_en", false,-1);
    tracep->declBit(c+1997,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2lsummu ");
    tracep->declBus(c+291,"r_data", false,-1, 31,0);
    tracep->declBit(c+292,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2dcache ");
    tracep->declArray(c+1746,"r_data", false,-1, 127,0);
    tracep->declBit(c+1750,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2mem ");
    tracep->declBus(c+1998,"addr", false,-1, 31,0);
    tracep->declArray(c+1999,"w_data", false,-1, 127,0);
    tracep->declBit(c+2003,"req", false,-1);
    tracep->declBit(c+2004,"w_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+2005,"cache_arbiter_state_next", false,-1, 1,0);
    tracep->declBus(c+896,"cache_arbiter_state_ff", false,-1, 1,0);
    tracep->declBus(c+2006,"mem_arbiter_state_next", false,-1, 1,0);
    tracep->declBus(c+897,"mem_arbiter_state_ff", false,-1, 1,0);
    tracep->pushNamePrefix("mem2cache ");
    tracep->declArray(c+293,"r_data", false,-1, 127,0);
    tracep->declBit(c+297,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache2mem ");
    tracep->declBus(c+2007,"addr", false,-1, 31,0);
    tracep->declArray(c+2008,"w_data", false,-1, 127,0);
    tracep->declBit(c+2012,"req", false,-1);
    tracep->declBit(c+2013,"w_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1162,"dmem_sel", false,-1);
    tracep->declBit(c+1166,"bmem_sel", false,-1);
    tracep->declBit(c+1073,"bmem_iaddr_match", false,-1);
    tracep->pushNamePrefix("bmem_interface_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("if2bmem_i ");
    tracep->declBus(c+1067,"addr", false,-1, 31,0);
    tracep->declBit(c+1068,"req", false,-1);
    tracep->declBit(c+1144,"req_kill", false,-1);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bmem2if_o ");
    tracep->declBus(c+894,"r_data", false,-1, 31,0);
    tracep->declBit(c+895,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2bmem_i ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bmem2dbus_o ");
    tracep->declBus(c+442,"r_data", false,-1, 31,0);
    tracep->declBit(c+443,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1166,"bmem_d_sel_i", false,-1);
    tracep->declBit(c+1073,"bmem_iaddr_match_i", false,-1);
    tracep->pushNamePrefix("if2bmem ");
    tracep->declBus(c+1067,"addr", false,-1, 31,0);
    tracep->declBit(c+1068,"req", false,-1);
    tracep->declBit(c+1144,"req_kill", false,-1);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bmem2if_ff ");
    tracep->declBus(c+894,"r_data", false,-1, 31,0);
    tracep->declBit(c+895,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bmem2if_next ");
    tracep->declBus(c+2014,"r_data", false,-1, 31,0);
    tracep->declBit(c+2015,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dbus2bmem ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bmem2dbus_ff ");
    tracep->declBus(c+442,"r_data", false,-1, 31,0);
    tracep->declBit(c+443,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bmem2dbus_next ");
    tracep->declBus(c+2016,"r_data", false,-1, 31,0);
    tracep->declBit(c+2017,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1067,"bmem_i_addr", false,-1, 31,0);
    tracep->declBus(c+1751,"bmem_d_addr", false,-1, 31,0);
    tracep->declBus(c+2113,"bmem_rd_addr", false,-1, 31,0);
    tracep->declBus(c+2018,"bmem_rdata", false,-1, 31,0);
    tracep->declBit(c+2019,"bmem_i_sel", false,-1);
    tracep->declBit(c+1752,"bmem_d_sel", false,-1);
    tracep->declBit(c+1073,"bmem_iaddr_match", false,-1);
    tracep->declBit(c+2114,"bmem_req", false,-1);
    tracep->pushNamePrefix("bmem_module ");
    tracep->declBus(c+2113,"if2bmem_addr_i", false,-1, 31,0);
    tracep->declBit(c+2114,"if2bmem_req_i", false,-1);
    tracep->declBus(c+2018,"bmem2if_data_o", false,-1, 31,0);
    tracep->declBus(c+2188,"BMEM_SIZE", false,-1, 31,0);
    tracep->declBus(c+2189,"BMEM_ADDR_BUS_SIZE", false,-1, 31,0);
    tracep->declBus(c+2115,"if2bmem_addr", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("icache_top_module ");
    tracep->declBit(c+2083,"clk_i", false,-1);
    tracep->declBit(c+2084,"rst_ni", false,-1);
    tracep->declBit(c+1074,"imem_sel_i", false,-1);
    tracep->pushNamePrefix("if2icache_i ");
    tracep->declBus(c+1067,"addr", false,-1, 31,0);
    tracep->declBit(c+1068,"req", false,-1);
    tracep->declBit(c+1144,"req_kill", false,-1);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2if_o ");
    tracep->declBus(c+289,"r_data", false,-1, 31,0);
    tracep->declBit(c+290,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2icache_i ");
    tracep->declArray(c+1741,"r_data", false,-1, 127,0);
    tracep->declBit(c+1745,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2mem_o ");
    tracep->declBus(c+1991,"addr", false,-1, 31,0);
    tracep->declBit(c+1992,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+2020,"cache_hit", false,-1);
    tracep->declBit(c+2021,"cache_rw", false,-1);
    tracep->pushNamePrefix("if2icache ");
    tracep->declBus(c+1067,"addr", false,-1, 31,0);
    tracep->declBit(c+1068,"req", false,-1);
    tracep->declBit(c+1144,"req_kill", false,-1);
    tracep->declBit(c+1145,"icache_flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2icache ");
    tracep->declArray(c+1741,"r_data", false,-1, 127,0);
    tracep->declBit(c+1745,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2if ");
    tracep->declBus(c+289,"r_data", false,-1, 31,0);
    tracep->declBit(c+290,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache2mem ");
    tracep->declBus(c+1991,"addr", false,-1, 31,0);
    tracep->declBit(c+1992,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache_controller_module ");
    tracep->declBit(c+2083,"clk_i", false,-1);
    tracep->declBit(c+2084,"rst_ni", false,-1);
    tracep->declBit(c+2020,"cache_hit_i", false,-1);
    tracep->declBit(c+2021,"cache_rw_o", false,-1);
    tracep->declBit(c+1074,"imem_sel_i", false,-1);
    tracep->declBit(c+1075,"if2icache_req_i", false,-1);
    tracep->declBit(c+1753,"if2icache_req_kill_i", false,-1);
    tracep->declBit(c+298,"icache2if_ack_o", false,-1);
    tracep->declBit(c+1754,"mem2icache_ack_i", false,-1);
    tracep->declBit(c+2022,"icache2mem_req_o", false,-1);
    tracep->declBus(c+299,"icache_state_ff", false,-1, 31,0);
    tracep->declBus(c+2023,"icache_state_next", false,-1, 31,0);
    tracep->declBit(c+2024,"icache2if_ack", false,-1);
    tracep->declBit(c+2024,"icache_hit", false,-1);
    tracep->declBit(c+2025,"icache_miss", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache_datapath_module ");
    tracep->declBit(c+2083,"clk_i", false,-1);
    tracep->declBit(c+2084,"rst_ni", false,-1);
    tracep->declBit(c+1699,"icache_flush", false,-1);
    tracep->declBit(c+2021,"cache_rw_i", false,-1);
    tracep->declBit(c+2020,"cache_hit_o", false,-1);
    tracep->declBus(c+1067,"if2icache_addr_i", false,-1, 31,0);
    tracep->declBus(c+289,"icache2if_data_o", false,-1, 31,0);
    tracep->declArray(c+1755,"mem2icache_data_i", false,-1, 127,0);
    tracep->declBus(c+1067,"icache2mem_addr_o", false,-1, 31,0);
    tracep->pushNamePrefix("icache_rd_buf ");
    tracep->declBus(c+2026,"tag", false,-1, 20,0);
    tracep->declBit(c+2027,"valid", false,-1);
    tracep->declArray(c+2028,"data_line", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("icache_wr_buff ");
    tracep->declBus(c+2032,"tag", false,-1, 20,0);
    tracep->declBit(c+2033,"valid", false,-1);
    tracep->declArray(c+2034,"data_line", false,-1, 127,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+289,"icache2if_data_ff", false,-1, 31,0);
    tracep->declBus(c+1076,"icache2if_data_next", false,-1, 31,0);
    tracep->declBus(c+1077,"addr_tag", false,-1, 20,0);
    tracep->declBus(c+1078,"addr_offset", false,-1, 1,0);
    tracep->declBus(c+1079,"addr_index", false,-1, 6,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+300,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("main_mem_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("cache2mem_i ");
    tracep->declBus(c+2007,"addr", false,-1, 31,0);
    tracep->declArray(c+2008,"w_data", false,-1, 127,0);
    tracep->declBit(c+2012,"req", false,-1);
    tracep->declBit(c+2013,"w_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2cache_o ");
    tracep->declArray(c+293,"r_data", false,-1, 127,0);
    tracep->declBit(c+297,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2cache ");
    tracep->declArray(c+293,"r_data", false,-1, 127,0);
    tracep->declBit(c+297,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache2mem ");
    tracep->declBus(c+2007,"addr", false,-1, 31,0);
    tracep->declArray(c+2008,"w_data", false,-1, 127,0);
    tracep->declBit(c+2012,"req", false,-1);
    tracep->declBit(c+2013,"w_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+2038,"mem_addr", false,-1, 27,0);
    tracep->declBit(c+2039,"mem_wen", false,-1);
    tracep->declBit(c+2040,"mem_req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_dcache_top_module ");
    tracep->declBit(c+2083,"clk_i", false,-1);
    tracep->declBit(c+2084,"rst_ni", false,-1);
    tracep->declBit(c+2041,"dmem_sel_i", false,-1);
    tracep->declBit(c+1119,"dcache_flush_i", false,-1);
    tracep->pushNamePrefix("lsummu2dcache_i ");
    tracep->declBus(c+1993,"addr", false,-1, 31,0);
    tracep->declBus(c+1994,"w_data", false,-1, 31,0);
    tracep->declBus(c+1995,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1996,"w_en", false,-1);
    tracep->declBit(c+1997,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2lsummu_o ");
    tracep->declBus(c+291,"r_data", false,-1, 31,0);
    tracep->declBit(c+292,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2dcache_i ");
    tracep->declArray(c+1746,"r_data", false,-1, 127,0);
    tracep->declBit(c+1750,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2mem_o ");
    tracep->declBus(c+1998,"addr", false,-1, 31,0);
    tracep->declArray(c+1999,"w_data", false,-1, 127,0);
    tracep->declBit(c+2003,"req", false,-1);
    tracep->declBit(c+2004,"w_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+2042,"cache_hit", false,-1);
    tracep->declBit(c+2043,"cache_evict_req", false,-1);
    tracep->declBit(c+2044,"cache_wr", false,-1);
    tracep->declBit(c+1759,"cache_line_wr", false,-1);
    tracep->declBit(c+1760,"cache_line_clean", false,-1);
    tracep->declBit(c+2045,"cache_wrb_req", false,-1);
    tracep->declBus(c+301,"evict_index", false,-1, 3,0);
    tracep->pushNamePrefix("lsummu2dcache ");
    tracep->declBus(c+1993,"addr", false,-1, 31,0);
    tracep->declBus(c+1994,"w_data", false,-1, 31,0);
    tracep->declBus(c+1995,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1996,"w_en", false,-1);
    tracep->declBit(c+1997,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2lsummu ");
    tracep->declBus(c+291,"r_data", false,-1, 31,0);
    tracep->declBit(c+292,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem2dcache ");
    tracep->declArray(c+1746,"r_data", false,-1, 127,0);
    tracep->declBit(c+1750,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dcache2mem ");
    tracep->declBus(c+1998,"addr", false,-1, 31,0);
    tracep->declArray(c+1999,"w_data", false,-1, 127,0);
    tracep->declBit(c+2003,"req", false,-1);
    tracep->declBit(c+2004,"w_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_dcache_controller_module ");
    tracep->declBit(c+2083,"clk_i", false,-1);
    tracep->declBit(c+2084,"rst_ni", false,-1);
    tracep->declBit(c+2042,"cache_hit_i", false,-1);
    tracep->declBit(c+2043,"cache_evict_req_i", false,-1);
    tracep->declBit(c+1119,"dcache_flush_i", false,-1);
    tracep->declBit(c+2044,"cache_wr_o", false,-1);
    tracep->declBit(c+1759,"cache_line_wr_o", false,-1);
    tracep->declBit(c+1760,"cache_line_clean_o", false,-1);
    tracep->declBit(c+2045,"cache_wrb_req_o", false,-1);
    tracep->declBus(c+301,"evict_index_o", false,-1, 3,0);
    tracep->declBit(c+2046,"lsummu2dcache_req_i", false,-1);
    tracep->declBit(c+2047,"lsummu2dcache_wr_i", false,-1);
    tracep->declBit(c+302,"dcache2lsummu_ack_o", false,-1);
    tracep->declBit(c+1761,"mem2dcache_ack_i", false,-1);
    tracep->declBit(c+2048,"dcache2mem_req_o", false,-1);
    tracep->declBit(c+2049,"dcache2mem_wr_o", false,-1);
    tracep->declBit(c+2041,"dmem_sel_i", false,-1);
    tracep->declBus(c+303,"dcache_state_ff", false,-1, 2,0);
    tracep->declBus(c+2050,"dcache_state_next", false,-1, 2,0);
    tracep->declBus(c+2051,"evict_index_next", false,-1, 3,0);
    tracep->declBus(c+301,"evict_index_ff", false,-1, 3,0);
    tracep->declBit(c+2047,"lsummu2dcache_wr", false,-1);
    tracep->declBit(c+302,"dcache2lsummu_ack", false,-1);
    tracep->declBit(c+2052,"dcache_hit", false,-1);
    tracep->declBit(c+2053,"dcache_miss", false,-1);
    tracep->declBit(c+2043,"dcache_evict", false,-1);
    tracep->declBit(c+2049,"dcache2mem_wr", false,-1);
    tracep->declBit(c+2048,"dcache2mem_req", false,-1);
    tracep->declBit(c+2045,"cache_wrb_req", false,-1);
    tracep->declBit(c+2044,"cache_wr", false,-1);
    tracep->declBit(c+1759,"cache_line_wr", false,-1);
    tracep->declBit(c+1760,"cache_line_clean", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wb_dcache_datapath_module ");
    tracep->declBit(c+2083,"clk_i", false,-1);
    tracep->declBit(c+2084,"rst_ni", false,-1);
    tracep->declBit(c+2044,"cache_wr_i", false,-1);
    tracep->declBit(c+1759,"cache_line_wr_i", false,-1);
    tracep->declBit(c+1760,"cache_line_clean_i", false,-1);
    tracep->declBit(c+2045,"cache_wrb_req_i", false,-1);
    tracep->declBus(c+301,"evict_index_i", false,-1, 3,0);
    tracep->declBit(c+2042,"cache_hit_o", false,-1);
    tracep->declBit(c+2043,"cache_evict_req_o", false,-1);
    tracep->declBit(c+1119,"dcache_flush_i", false,-1);
    tracep->declBus(c+2054,"lsummu2dcache_addr_i", false,-1, 31,0);
    tracep->declBus(c+2055,"lsummu2dcache_wdata_i", false,-1, 31,0);
    tracep->declBus(c+2056,"sel_byte_i", false,-1, 3,0);
    tracep->declBus(c+304,"dcache2lsummu_data_o", false,-1, 31,0);
    tracep->declArray(c+1762,"mem2dcache_data_i", false,-1, 127,0);
    tracep->declArray(c+2057,"dcache2mem_data_o", false,-1, 127,0);
    tracep->declBus(c+2061,"dcache2mem_addr_o", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+305+i*4,"cache_data_ram", true,(i+0), 127,0);
    }
    tracep->pushNamePrefix("cache_tag_ram");
    tracep->pushNamePrefix("[0] ");
    tracep->declBus(c+369,"tag", false,-1, 23,0);
    tracep->declBit(c+370,"valid", false,-1);
    tracep->declBit(c+371,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1] ");
    tracep->declBus(c+372,"tag", false,-1, 23,0);
    tracep->declBit(c+373,"valid", false,-1);
    tracep->declBit(c+374,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2] ");
    tracep->declBus(c+375,"tag", false,-1, 23,0);
    tracep->declBit(c+376,"valid", false,-1);
    tracep->declBit(c+377,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3] ");
    tracep->declBus(c+378,"tag", false,-1, 23,0);
    tracep->declBit(c+379,"valid", false,-1);
    tracep->declBit(c+380,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[4] ");
    tracep->declBus(c+381,"tag", false,-1, 23,0);
    tracep->declBit(c+382,"valid", false,-1);
    tracep->declBit(c+383,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[5] ");
    tracep->declBus(c+384,"tag", false,-1, 23,0);
    tracep->declBit(c+385,"valid", false,-1);
    tracep->declBit(c+386,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[6] ");
    tracep->declBus(c+387,"tag", false,-1, 23,0);
    tracep->declBit(c+388,"valid", false,-1);
    tracep->declBit(c+389,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[7] ");
    tracep->declBus(c+390,"tag", false,-1, 23,0);
    tracep->declBit(c+391,"valid", false,-1);
    tracep->declBit(c+392,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[8] ");
    tracep->declBus(c+393,"tag", false,-1, 23,0);
    tracep->declBit(c+394,"valid", false,-1);
    tracep->declBit(c+395,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[9] ");
    tracep->declBus(c+396,"tag", false,-1, 23,0);
    tracep->declBit(c+397,"valid", false,-1);
    tracep->declBit(c+398,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[10] ");
    tracep->declBus(c+399,"tag", false,-1, 23,0);
    tracep->declBit(c+400,"valid", false,-1);
    tracep->declBit(c+401,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[11] ");
    tracep->declBus(c+402,"tag", false,-1, 23,0);
    tracep->declBit(c+403,"valid", false,-1);
    tracep->declBit(c+404,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[12] ");
    tracep->declBus(c+405,"tag", false,-1, 23,0);
    tracep->declBit(c+406,"valid", false,-1);
    tracep->declBit(c+407,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[13] ");
    tracep->declBus(c+408,"tag", false,-1, 23,0);
    tracep->declBit(c+409,"valid", false,-1);
    tracep->declBit(c+410,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[14] ");
    tracep->declBus(c+411,"tag", false,-1, 23,0);
    tracep->declBit(c+412,"valid", false,-1);
    tracep->declBit(c+413,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[15] ");
    tracep->declBus(c+414,"tag", false,-1, 23,0);
    tracep->declBit(c+415,"valid", false,-1);
    tracep->declBit(c+416,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declArray(c+2057,"cache_line_read", false,-1, 127,0);
    tracep->declArray(c+2062,"cache_line_write", false,-1, 127,0);
    tracep->pushNamePrefix("cache_tag_read ");
    tracep->declBus(c+2066,"tag", false,-1, 23,0);
    tracep->declBit(c+2067,"valid", false,-1);
    tracep->declBit(c+2068,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("cache_tag_write ");
    tracep->declBus(c+2069,"tag", false,-1, 23,0);
    tracep->declBit(c+2160,"valid", false,-1);
    tracep->declBit(c+2161,"dirty", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+2070,"cache_word_read", false,-1, 31,0);
    tracep->declBus(c+2071,"cache_word_write", false,-1, 31,0);
    tracep->declBus(c+2055,"lsummu2dcache_wdata", false,-1, 31,0);
    tracep->declBus(c+2056,"sel_byte", false,-1, 3,0);
    tracep->declBus(c+2061,"dcache2mem_addr", false,-1, 31,0);
    tracep->declBus(c+304,"dcache2lsummu_data_ff", false,-1, 31,0);
    tracep->declBus(c+2070,"dcache2lsummu_data_next", false,-1, 31,0);
    tracep->declBus(c+2072,"addr_tag", false,-1, 23,0);
    tracep->declBus(c+2073,"addr_offset", false,-1, 1,0);
    tracep->declBus(c+2074,"addr_index", false,-1, 3,0);
    tracep->declBus(c+301,"evict_index", false,-1, 3,0);
    tracep->declBit(c+1119,"dcache_flush", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+417,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("plic_top_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("dbus2plic_i ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_o ");
    tracep->declBus(c+106,"r_data", false,-1, 31,0);
    tracep->declBit(c+107,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1165,"plic_sel_i", false,-1);
    tracep->declBus(c+2190,"edge_select_i", false,-1, 1,0);
    tracep->declBus(c+898,"irq_src_i", false,-1, 1,0);
    tracep->declBus(c+899,"irq_targets_o", false,-1, 1,0);
    tracep->pushNamePrefix("regs2gateway ");
    tracep->declBus(c+1766,"claim_req", false,-1, 1,0);
    tracep->declBus(c+1767,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+1768,"[0]", false,-1, 1,0);
    tracep->declBus(c+1769,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+900,"irq_pending", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio_th");
    tracep->declBus(c+901,"[0]", false,-1, 2,0);
    tracep->declBus(c+902,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_prio");
    tracep->declBus(c+903,"[0]", false,-1, 2,0);
    tracep->declBus(c+904,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_ie");
    tracep->declBus(c+905,"[0]", false,-1, 1,0);
    tracep->declBus(c+906,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("claim_idx");
    tracep->declBus(c+907,"[0]", false,-1, 1,0);
    tracep->declBus(c+908,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("plic_target_module ");
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBus(c+900,"irq_pending_i", false,-1, 1,0);
    tracep->declBus(c+905,"regs_ie_i", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio_i");
    tracep->declBus(c+903,"[0]", false,-1, 2,0);
    tracep->declBus(c+904,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+901,"regs_prio_th_i", false,-1, 2,0);
    tracep->declBit(c+440,"irq_req_o", false,-1);
    tracep->declBus(c+909,"irq_idx_o", false,-1, 1,0);
    tracep->declBus(c+900,"irq_pending", false,-1, 1,0);
    tracep->declBus(c+905,"regs_ie", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio");
    tracep->declBus(c+903,"[0]", false,-1, 2,0);
    tracep->declBus(c+904,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+910,"prio_th", false,-1, 2,0);
    tracep->declBit(c+440,"irq_req_ff", false,-1);
    tracep->declBit(c+911,"irq_req_next", false,-1);
    tracep->declBus(c+909,"irq_idx_ff", false,-1, 1,0);
    tracep->declBus(c+912,"irq_idx_next", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2191,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("plic_target_module ");
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBus(c+900,"irq_pending_i", false,-1, 1,0);
    tracep->declBus(c+906,"regs_ie_i", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio_i");
    tracep->declBus(c+903,"[0]", false,-1, 2,0);
    tracep->declBus(c+904,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+902,"regs_prio_th_i", false,-1, 2,0);
    tracep->declBit(c+441,"irq_req_o", false,-1);
    tracep->declBus(c+913,"irq_idx_o", false,-1, 1,0);
    tracep->declBus(c+900,"irq_pending", false,-1, 1,0);
    tracep->declBus(c+906,"regs_ie", false,-1, 1,0);
    tracep->pushNamePrefix("regs_prio");
    tracep->declBus(c+903,"[0]", false,-1, 2,0);
    tracep->declBus(c+904,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+914,"prio_th", false,-1, 2,0);
    tracep->declBit(c+441,"irq_req_ff", false,-1);
    tracep->declBit(c+915,"irq_req_next", false,-1);
    tracep->declBus(c+913,"irq_idx_ff", false,-1, 1,0);
    tracep->declBus(c+916,"irq_idx_next", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2191,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("plic_gateway_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBus(c+898,"irq_src_i", false,-1, 1,0);
    tracep->declBus(c+2190,"edge_select_i", false,-1, 1,0);
    tracep->pushNamePrefix("regs2gateway_i ");
    tracep->declBus(c+1766,"claim_req", false,-1, 1,0);
    tracep->declBus(c+1767,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+1768,"[0]", false,-1, 1,0);
    tracep->declBus(c+1769,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("claim_idx_i");
    tracep->declBus(c+907,"[0]", false,-1, 1,0);
    tracep->declBus(c+908,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+900,"irq_pending_o", false,-1, 1,0);
    tracep->pushNamePrefix("regs2gateway ");
    tracep->declBus(c+1766,"claim_req", false,-1, 1,0);
    tracep->declBus(c+1767,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+1768,"[0]", false,-1, 1,0);
    tracep->declBus(c+1769,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+900,"irq_pending_ff", false,-1, 1,0);
    tracep->declBus(c+1770,"irq_pending_next", false,-1, 1,0);
    tracep->declBus(c+917,"irq_active_ff", false,-1, 1,0);
    tracep->declBus(c+1771,"irq_active_next", false,-1, 1,0);
    tracep->declBus(c+1772,"irq_set_pending", false,-1, 1,0);
    tracep->declBus(c+1773,"irq_set_active", false,-1, 1,0);
    tracep->declBus(c+918,"irq_req", false,-1, 1,0);
    tracep->declBus(c+919,"irq_src_ff", false,-1, 1,0);
    tracep->declBus(c+898,"irq_src_next", false,-1, 1,0);
    tracep->declBus(c+1774,"claim", false,-1, 1,0);
    tracep->declBus(c+1775,"complete", false,-1, 1,0);
    tracep->pushNamePrefix("claim_idx");
    tracep->declBus(c+907,"[0]", false,-1, 1,0);
    tracep->declBus(c+908,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+1776,"[0]", false,-1, 1,0);
    tracep->declBus(c+1777,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2192,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+2192,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("plic_regs_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("dbus2plic_i ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_o ");
    tracep->declBus(c+106,"r_data", false,-1, 31,0);
    tracep->declBit(c+107,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1165,"plic_sel_i", false,-1);
    tracep->pushNamePrefix("regs_ie_o");
    tracep->declBus(c+905,"[0]", false,-1, 1,0);
    tracep->declBus(c+906,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_prio_o");
    tracep->declBus(c+903,"[0]", false,-1, 2,0);
    tracep->declBus(c+904,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs_prio_th_o");
    tracep->declBus(c+901,"[0]", false,-1, 2,0);
    tracep->declBus(c+902,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+900,"irq_pending_i", false,-1, 1,0);
    tracep->pushNamePrefix("claim_idx_i");
    tracep->declBus(c+907,"[0]", false,-1, 1,0);
    tracep->declBus(c+908,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs2gateway_o ");
    tracep->declBus(c+1766,"claim_req", false,-1, 1,0);
    tracep->declBus(c+1767,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+1768,"[0]", false,-1, 1,0);
    tracep->declBus(c+1769,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regs2gateway ");
    tracep->declBus(c+1766,"claim_req", false,-1, 1,0);
    tracep->declBus(c+1767,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+1768,"[0]", false,-1, 1,0);
    tracep->declBus(c+1769,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1778,"claim_req", false,-1, 1,0);
    tracep->declBus(c+1779,"complete_req", false,-1, 1,0);
    tracep->pushNamePrefix("complete_idx");
    tracep->declBus(c+1776,"[0]", false,-1, 1,0);
    tracep->declBus(c+1777,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1780,"reg_addr", false,-1, 23,0);
    tracep->declBit(c+1781,"reg_rd_req", false,-1);
    tracep->declBit(c+1782,"reg_wr_req", false,-1);
    tracep->declBus(c+1783,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+1171,"reg_w_data", false,-1, 31,0);
    tracep->declBus(c+1784,"prio_th_reg_wr_flag", false,-1, 1,0);
    tracep->declBus(c+1785,"prio_reg_wr_flag", false,-1, 1,0);
    tracep->declBus(c+1786,"ie_reg_wr_flag", false,-1, 1,0);
    tracep->pushNamePrefix("plic_reg_prio_th_ff");
    tracep->declBus(c+901,"[0]", false,-1, 2,0);
    tracep->declBus(c+902,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_prio_th_next");
    tracep->declBus(c+1787,"[0]", false,-1, 2,0);
    tracep->declBus(c+1788,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_prio_ff");
    tracep->declBus(c+903,"[0]", false,-1, 2,0);
    tracep->declBus(c+904,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_prio_next");
    tracep->declBus(c+1789,"[0]", false,-1, 2,0);
    tracep->declBus(c+1790,"[1]", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_ie_ff");
    tracep->declBus(c+905,"[0]", false,-1, 1,0);
    tracep->declBus(c+906,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic_reg_ie_next");
    tracep->declBus(c+1047,"[0]", false,-1, 1,0);
    tracep->declBus(c+1048,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->declBus(c+900,"plic_reg_irq_pending", false,-1, 1,0);
    tracep->pushNamePrefix("claim_idx");
    tracep->declBus(c+907,"[0]", false,-1, 1,0);
    tracep->declBus(c+908,"[1]", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("plic2dbus_ff ");
    tracep->declBus(c+106,"r_data", false,-1, 31,0);
    tracep->declBit(c+107,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2192,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+2192,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+2192,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("spi_top_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("dbus2spi_i ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_o ");
    tracep->declBus(c+110,"r_data", false,-1, 31,0);
    tracep->declBit(c+111,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1168,"spi_sel_i", false,-1);
    tracep->declBit(c+438,"spi_irq_o", false,-1);
    tracep->declBit(c+1831,"spi_clk_o", false,-1);
    tracep->declBit(c+428,"spi_cs_o", false,-1);
    tracep->declBit(c+4,"spi_miso_i", false,-1);
    tracep->declBit(c+429,"spi_mosi_o", false,-1);
    tracep->declBus(c+920,"spi_reg_cs_default", false,-1, 1,0);
    tracep->declBus(c+921,"spi_reg_cs_id", false,-1, 1,0);
    tracep->declBus(c+1832,"spi_clk_period", false,-1, 11,0);
    tracep->declBit(c+1833,"spi_clk_phase", false,-1);
    tracep->declBit(c+1834,"spi_clk_polarity", false,-1);
    tracep->declBus(c+922,"spi_cs_mode", false,-1, 1,0);
    tracep->declBus(c+923,"spi_c2t_time", false,-1, 7,0);
    tracep->declBus(c+924,"spi_t2c_time", false,-1, 7,0);
    tracep->declBus(c+925,"spi_inter_cs_time", false,-1, 7,0);
    tracep->declBus(c+926,"spi_inter_fr_time", false,-1, 7,0);
    tracep->declBus(c+1835,"spi_data_size", false,-1, 3,0);
    tracep->declBit(c+1836,"spi_busy", false,-1);
    tracep->declBit(c+927,"spi_tx_fifo_empty", false,-1);
    tracep->declBit(c+2193,"spi_mosi_fst_transmit", false,-1);
    tracep->declBit(c+2194,"spi_mosi_en", false,-1);
    tracep->declBit(c+2195,"spi_miso_en", false,-1);
    tracep->declBit(c+1837,"spi_tx_fifo_read", false,-1);
    tracep->declBit(c+2116,"spi_rx_fifo_write", false,-1);
    tracep->declBit(c+928,"spi_tx_fifo_full", false,-1);
    tracep->declBit(c+929,"spi_rx_fifo_empty", false,-1);
    tracep->declBus(c+930,"spi_rx_fifo_data", false,-1, 7,0);
    tracep->declBus(c+931,"spi_tx_fifo_data", false,-1, 7,0);
    tracep->declBit(c+1838,"spi_rx_fifo_enable", false,-1);
    tracep->declBit(c+1791,"spi_rx_fifo_read", false,-1);
    tracep->declBit(c+932,"spi_tx_fifo_write", false,-1);
    tracep->declBit(c+933,"spi_rx_fifo_mark", false,-1);
    tracep->declBit(c+934,"spi_tx_fifo_mark", false,-1);
    tracep->declBus(c+935,"spi_tx_water_mark", false,-1, 2,0);
    tracep->declBus(c+936,"spi_rx_water_mark", false,-1, 2,0);
    tracep->declBit(c+1839,"spi_shift_direct", false,-1);
    tracep->declBus(c+2117,"clock_cnt", false,-1, 11,0);
    tracep->declBus(c+1840,"state_ff", false,-1, 2,0);
    tracep->declBus(c+2118,"state_next", false,-1, 2,0);
    tracep->pushNamePrefix("spi_controller_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+1168,"spi_sel_i", false,-1);
    tracep->declBit(c+428,"spi_cs_o", false,-1);
    tracep->declBus(c+920,"reg_cs_default_ff", false,-1, 1,0);
    tracep->declBus(c+921,"reg_cs_id_ff", false,-1, 1,0);
    tracep->declBus(c+1832,"spi_clk_period", false,-1, 11,0);
    tracep->declBit(c+1833,"spi_clk_phase", false,-1);
    tracep->declBit(c+1834,"spi_clk_polarity", false,-1);
    tracep->declBus(c+922,"spi_cs_mode", false,-1, 1,0);
    tracep->declBus(c+923,"c2t_time", false,-1, 7,0);
    tracep->declBus(c+924,"t2c_time", false,-1, 7,0);
    tracep->declBus(c+925,"inter_cs_time", false,-1, 7,0);
    tracep->declBus(c+926,"inter_frame_time", false,-1, 7,0);
    tracep->declBus(c+1835,"spi_data_size", false,-1, 3,0);
    tracep->declBit(c+1836,"spi_busy", false,-1);
    tracep->declBit(c+927,"tx_fifo_empty", false,-1);
    tracep->declBit(c+1837,"tx_fifo_read", false,-1);
    tracep->declBit(c+2116,"rx_fifo_write", false,-1);
    tracep->declBit(c+1831,"spi_clk_o", false,-1);
    tracep->declBus(c+2117,"clock_cnt_o", false,-1, 11,0);
    tracep->declBus(c+1840,"state_ff_o", false,-1, 2,0);
    tracep->declBus(c+2118,"state_next_o", false,-1, 2,0);
    tracep->declBus(c+937,"c2t_delay", false,-1, 8,0);
    tracep->declBus(c+938,"t2c_delay", false,-1, 8,0);
    tracep->declBus(c+939,"count_intercs", false,-1, 7,0);
    tracep->declBus(c+940,"count_interfr", false,-1, 7,0);
    tracep->declBus(c+2119,"data_cnt", false,-1, 4,0);
    tracep->declBus(c+2117,"clock_cnt", false,-1, 11,0);
    tracep->declBus(c+941,"count_up", false,-1, 1,0);
    tracep->declBus(c+1841,"max_data_count", false,-1, 4,0);
    tracep->declBit(c+1831,"spi_clk", false,-1);
    tracep->declBus(c+942,"spi_slave_sel", false,-1, 1,0);
    tracep->declBus(c+1840,"state_ff", false,-1, 2,0);
    tracep->declBus(c+2118,"state_next", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi_datapath_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+4,"miso_r", false,-1);
    tracep->declBit(c+429,"mosi_r", false,-1);
    tracep->declBit(c+1831,"spi_clk_i", false,-1);
    tracep->declBus(c+2117,"clock_cnt", false,-1, 11,0);
    tracep->declBus(c+1840,"state_ff_i", false,-1, 2,0);
    tracep->declBus(c+2118,"state_next_i", false,-1, 2,0);
    tracep->declBit(c+1837,"tx_fifo_read", false,-1);
    tracep->declBit(c+2116,"rx_fifo_write", false,-1);
    tracep->declBit(c+927,"tx_fifo_empty", false,-1);
    tracep->declBit(c+1839,"spi_shift_direct", false,-1);
    tracep->declBus(c+935,"tx_water_mark", false,-1, 2,0);
    tracep->declBus(c+936,"rx_water_mark", false,-1, 2,0);
    tracep->declBit(c+933,"rx_fifo_mark", false,-1);
    tracep->declBit(c+934,"tx_fifo_mark", false,-1);
    tracep->declBit(c+1833,"spi_clk_phase", false,-1);
    tracep->declBus(c+1832,"spi_clk_period", false,-1, 11,0);
    tracep->declBit(c+1791,"rx_fifo_read", false,-1);
    tracep->declBit(c+1838,"rx_fifo_enable", false,-1);
    tracep->declBit(c+932,"tx_fifo_write", false,-1);
    tracep->declBus(c+931,"tx_fifo_data", false,-1, 7,0);
    tracep->declBit(c+928,"tx_fifo_full", false,-1);
    tracep->declBit(c+929,"rx_fifo_empty", false,-1);
    tracep->declBus(c+930,"rx_fifo_data", false,-1, 7,0);
    tracep->declBus(c+943,"rx_shift_data", false,-1, 7,0);
    tracep->declBus(c+944,"tx_shift_data", false,-1, 7,0);
    tracep->declBus(c+945,"tx_fifo_count", false,-1, 3,0);
    tracep->declBus(c+946,"rx_fifo_count", false,-1, 3,0);
    tracep->declBus(c+947,"reg_tx_data", false,-1, 7,0);
    tracep->declBit(c+1831,"spi_clk", false,-1);
    tracep->declBus(c+1840,"state_ff", false,-1, 2,0);
    tracep->declBus(c+2118,"state_next", false,-1, 2,0);
    tracep->pushNamePrefix("rx_fifo ");
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBus(c+943,"data_in", false,-1, 7,0);
    tracep->declBus(c+930,"data_out", false,-1, 7,0);
    tracep->declBus(c+946,"data_count", false,-1, 3,0);
    tracep->declBit(c+1838,"fifo_en", false,-1);
    tracep->declBit(c+1791,"fifo_read", false,-1);
    tracep->declBit(c+2116,"fifo_write", false,-1);
    tracep->declBit(c+948,"fifo_full", false,-1);
    tracep->declBit(c+929,"fifo_empty", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+949+i*1,"fifo_buffer", true,(i+0), 7,0);
    }
    tracep->declBus(c+957,"read_ptr", false,-1, 2,0);
    tracep->declBus(c+958,"write_ptr", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+959,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("tx_fifo ");
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBus(c+931,"data_in", false,-1, 7,0);
    tracep->declBus(c+947,"data_out", false,-1, 7,0);
    tracep->declBus(c+945,"data_count", false,-1, 3,0);
    tracep->declBit(c+2196,"fifo_en", false,-1);
    tracep->declBit(c+1837,"fifo_read", false,-1);
    tracep->declBit(c+932,"fifo_write", false,-1);
    tracep->declBit(c+928,"fifo_full", false,-1);
    tracep->declBit(c+927,"fifo_empty", false,-1);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+960+i*1,"fifo_buffer", true,(i+0), 7,0);
    }
    tracep->declBus(c+968,"read_ptr", false,-1, 2,0);
    tracep->declBus(c+969,"write_ptr", false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+970,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("spi_regs_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+438,"spi_irq_o", false,-1);
    tracep->declBit(c+1836,"spi_busy", false,-1);
    tracep->declBus(c+1832,"spi_clk_period", false,-1, 11,0);
    tracep->declBit(c+1833,"spi_clk_phase", false,-1);
    tracep->declBit(c+1834,"spi_clk_polarity", false,-1);
    tracep->declBus(c+922,"reg_cs_mode_ff", false,-1, 1,0);
    tracep->declBus(c+923,"c2t_time", false,-1, 7,0);
    tracep->declBus(c+924,"t2c_time", false,-1, 7,0);
    tracep->declBus(c+925,"inter_cs_time", false,-1, 7,0);
    tracep->declBus(c+926,"inter_frame_time", false,-1, 7,0);
    tracep->declBus(c+1835,"spi_data_size", false,-1, 3,0);
    tracep->declBus(c+920,"reg_cs_default_ff", false,-1, 1,0);
    tracep->declBus(c+921,"reg_cs_id_ff", false,-1, 1,0);
    tracep->declBit(c+928,"tx_fifo_full", false,-1);
    tracep->declBit(c+929,"rx_fifo_empty", false,-1);
    tracep->declBus(c+930,"rx_fifo_data", false,-1, 7,0);
    tracep->declBus(c+931,"reg_tx_data_ff", false,-1, 7,0);
    tracep->declBit(c+1838,"rx_fifo_enable", false,-1);
    tracep->declBit(c+1791,"rx_fifo_read", false,-1);
    tracep->declBit(c+932,"tx_fifo_write", false,-1);
    tracep->declBit(c+933,"rx_fifo_mark", false,-1);
    tracep->declBit(c+934,"tx_fifo_mark", false,-1);
    tracep->declBus(c+935,"tx_water_mark", false,-1, 2,0);
    tracep->declBus(c+936,"rx_water_mark", false,-1, 2,0);
    tracep->declBit(c+1839,"spi_shift_direct", false,-1);
    tracep->pushNamePrefix("dbus2spi_i ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("spi2dbus_o ");
    tracep->declBus(c+110,"r_data", false,-1, 31,0);
    tracep->declBit(c+111,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1168,"spi_sel_i", false,-1);
    tracep->pushNamePrefix("dbus2spi ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+1792,"reg_addr", false,-1, 7,0);
    tracep->declBit(c+1793,"reg_rd_req", false,-1);
    tracep->declBit(c+1794,"reg_wr_req", false,-1);
    tracep->declBus(c+2120,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+1171,"reg_w_data", false,-1, 31,0);
    tracep->declBus(c+2121,"reg_sck_div_next", false,-1, 11,0);
    tracep->declBus(c+1842,"reg_sck_div_ff", false,-1, 11,0);
    tracep->declBus(c+2122,"reg_sck_mode_next", false,-1, 1,0);
    tracep->declBus(c+1843,"reg_sck_mode_ff", false,-1, 1,0);
    tracep->declBus(c+1049,"reg_cs_id_next", false,-1, 1,0);
    tracep->declBus(c+1050,"reg_cs_default_next", false,-1, 1,0);
    tracep->declBus(c+1051,"reg_cs_mode_next", false,-1, 1,0);
    tracep->declBus(c+1052,"reg_delay0_next", false,-1, 15,0);
    tracep->declBus(c+971,"reg_delay0_ff", false,-1, 15,0);
    tracep->declBus(c+1053,"reg_delay1_next", false,-1, 15,0);
    tracep->declBus(c+972,"reg_delay1_ff", false,-1, 15,0);
    tracep->declBus(c+2123,"reg_fmt_next", false,-1, 7,0);
    tracep->declBus(c+1844,"reg_fmt_ff", false,-1, 7,0);
    tracep->declBus(c+1054,"reg_tx_data_next", false,-1, 7,0);
    tracep->declBus(c+2197,"reg_rx_data_next", false,-1, 7,0);
    tracep->declBus(c+2198,"reg_rx_data_ff", false,-1, 7,0);
    tracep->declBus(c+1055,"reg_tx_mark_next", false,-1, 2,0);
    tracep->declBus(c+935,"reg_tx_mark_ff", false,-1, 2,0);
    tracep->declBus(c+1056,"reg_rx_mark_next", false,-1, 2,0);
    tracep->declBus(c+936,"reg_rx_mark_ff", false,-1, 2,0);
    tracep->declBus(c+1057,"reg_intr_enable_next", false,-1, 1,0);
    tracep->declBus(c+973,"reg_intr_enable_ff", false,-1, 1,0);
    tracep->declBus(c+974,"reg_intr_pend_next", false,-1, 1,0);
    tracep->declBus(c+975,"reg_intr_pend_ff", false,-1, 1,0);
    tracep->declBit(c+1795,"spi_sel_sdiv", false,-1);
    tracep->declBit(c+1796,"spi_sel_ckmode", false,-1);
    tracep->declBit(c+1797,"spi_sel_csid", false,-1);
    tracep->declBit(c+1798,"spi_sel_csdef", false,-1);
    tracep->declBit(c+1799,"spi_sel_csmode", false,-1);
    tracep->declBit(c+1800,"spi_sel_del0", false,-1);
    tracep->declBit(c+1801,"spi_sel_del1", false,-1);
    tracep->declBit(c+1802,"spi_sel_fmt", false,-1);
    tracep->declBit(c+1803,"spi_sel_txdata", false,-1);
    tracep->declBit(c+1804,"spi_sel_txmark", false,-1);
    tracep->declBit(c+1805,"spi_sel_rxmark", false,-1);
    tracep->declBit(c+1806,"spi_sel_ie", false,-1);
    tracep->pushNamePrefix("spi2dbus_ff ");
    tracep->declBus(c+110,"r_data", false,-1, 31,0);
    tracep->declBit(c+111,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uart_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("dbus2uart_i ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus_o ");
    tracep->declBus(c+102,"r_data", false,-1, 31,0);
    tracep->declBit(c+103,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1163,"uart_sel_i", false,-1);
    tracep->declBit(c+436,"uart_irq_o", false,-1);
    tracep->declBit(c+3,"uart_rxd_i", false,-1);
    tracep->declBit(c+427,"uart_txd_o", false,-1);
    tracep->declBus(c+1807,"reg_addr", false,-1, 5,0);
    tracep->declBit(c+1808,"reg_rd_req", false,-1);
    tracep->declBit(c+1809,"reg_wr_req", false,-1);
    tracep->declBus(c+1810,"reg_r_data", false,-1, 31,0);
    tracep->declBus(c+1811,"reg_w_data", false,-1, 31,0);
    tracep->declBit(c+1812,"tx_valid_next", false,-1);
    tracep->declBit(c+976,"tx_valid_ff", false,-1);
    tracep->declBit(c+976,"tx_valid", false,-1);
    tracep->declBit(c+977,"tx_ready", false,-1);
    tracep->declBit(c+978,"rx_valid", false,-1);
    tracep->declBit(c+979,"frame_err", false,-1);
    tracep->declBit(c+1813,"rx_empty", false,-1);
    tracep->declBus(c+980,"uart_rx_byte", false,-1, 7,0);
    tracep->declBus(c+981,"uart_tx_byte", false,-1, 7,0);
    tracep->declBit(c+2196,"two_stop_bits", false,-1);
    tracep->declBus(c+982,"uart_reg_rx_ff", false,-1, 7,0);
    tracep->declBus(c+983,"uart_reg_rx_next", false,-1, 7,0);
    tracep->declBus(c+981,"uart_reg_tx_ff", false,-1, 7,0);
    tracep->declBus(c+1058,"uart_reg_tx_next", false,-1, 7,0);
    tracep->declBus(c+984,"uart_reg_baud_ff", false,-1, 7,0);
    tracep->declBus(c+1059,"uart_reg_baud_next", false,-1, 7,0);
    tracep->declBus(c+985,"uart_reg_txctrl_ff", false,-1, 19,0);
    tracep->declBus(c+1060,"uart_reg_txctrl_next", false,-1, 19,0);
    tracep->declBus(c+986,"uart_reg_rxctrl_ff", false,-1, 19,0);
    tracep->declBus(c+1061,"uart_reg_rxctrl_next", false,-1, 19,0);
    tracep->declBus(c+987,"uart_reg_status_ff", false,-1, 7,0);
    tracep->declBus(c+1814,"uart_reg_status_next", false,-1, 7,0);
    tracep->declBus(c+988,"uart_reg_int_mask_ff", false,-1, 7,0);
    tracep->declBus(c+1062,"uart_reg_int_mask_next", false,-1, 7,0);
    tracep->declBit(c+2180,"rx_reg_wr_flag", false,-1);
    tracep->declBit(c+1815,"tx_reg_wr_flag", false,-1);
    tracep->declBit(c+1816,"baud_reg_wr_flag", false,-1);
    tracep->declBit(c+1817,"txctrl_reg_wr_flag", false,-1);
    tracep->declBit(c+1818,"rxctrl_reg_wr_flag", false,-1);
    tracep->declBit(c+1819,"int_mask_reg_wr_flag", false,-1);
    tracep->pushNamePrefix("uart2dbus_ff ");
    tracep->declBus(c+102,"r_data", false,-1, 31,0);
    tracep->declBit(c+103,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_rx_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+3,"rx_pin_in", false,-1);
    tracep->declBus(c+984,"baud_div_i", false,-1, 7,0);
    tracep->declBus(c+980,"rx_data_o", false,-1, 7,0);
    tracep->declBit(c+978,"valid_o", false,-1);
    tracep->declBit(c+979,"frame_err_o", false,-1);
    tracep->declBus(c+989,"bit_count_ff", false,-1, 3,0);
    tracep->declBus(c+990,"bit_count_next", false,-1, 3,0);
    tracep->declBit(c+991,"rx_busy", false,-1);
    tracep->declBit(c+992,"sample_pulse", false,-1);
    tracep->declBit(c+993,"sbit_mid_point", false,-1);
    tracep->declBit(c+1113,"rx_pin_ff", false,-1);
    tracep->declBus(c+994,"sample_count_ff", false,-1, 7,0);
    tracep->declBus(c+995,"sample_count_next", false,-1, 7,0);
    tracep->declBus(c+996,"sbit_sample_count_ff", false,-1, 7,0);
    tracep->declBus(c+997,"sbit_sample_count_next", false,-1, 7,0);
    tracep->declBus(c+980,"shifter_ff", false,-1, 7,0);
    tracep->declBus(c+2075,"shifter_next", false,-1, 7,0);
    tracep->declBit(c+978,"valid_ff", false,-1);
    tracep->declBit(c+2076,"valid_next", false,-1);
    tracep->declBit(c+979,"frame_err_ff", false,-1);
    tracep->declBit(c+2077,"frame_err_next", false,-1);
    tracep->declBus(c+998,"state_ff", false,-1, 1,0);
    tracep->declBus(c+2078,"state_next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_tx_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBus(c+981,"tx_data_i", false,-1, 7,0);
    tracep->declBus(c+984,"baud_div_i", false,-1, 7,0);
    tracep->declBit(c+2196,"two_stop_bits", false,-1);
    tracep->declBit(c+976,"valid_i", false,-1);
    tracep->declBit(c+977,"ready_o", false,-1);
    tracep->declBit(c+427,"tx_pin_o", false,-1);
    tracep->declBus(c+999,"sample_count_ff", false,-1, 7,0);
    tracep->declBus(c+1000,"sample_count_next", false,-1, 7,0);
    tracep->declBus(c+1001,"bit_count_ff", false,-1, 3,0);
    tracep->declBus(c+1002,"bit_count_next", false,-1, 3,0);
    tracep->declBus(c+2199,"uart_frame_size", false,-1, 3,0);
    tracep->declBus(c+1003,"shifter_ff", false,-1, 8,0);
    tracep->declBus(c+1004,"shifter_next", false,-1, 8,0);
    tracep->declBit(c+1005,"sample_pulse", false,-1);
    tracep->declBit(c+1006,"tx_busy", false,-1);
    tracep->declBit(c+427,"tx_pin", false,-1);
    tracep->declBus(c+1007,"state_ff", false,-1, 1,0);
    tracep->declBus(c+1008,"state_next", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("uart_ns_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->pushNamePrefix("dbus2uart_i ");
    tracep->declBus(c+1157,"addr", false,-1, 31,0);
    tracep->declBus(c+1158,"w_data", false,-1, 31,0);
    tracep->declBus(c+1159,"sel_byte", false,-1, 3,0);
    tracep->declBit(c+1160,"w_en", false,-1);
    tracep->declBit(c+1161,"req", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart2dbus_o ");
    tracep->declBus(c+108,"r_data", false,-1, 31,0);
    tracep->declBit(c+109,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+1167,"uart_ns_sel_i", false,-1);
    tracep->declBit(c+437,"uart_ns_irq_o", false,-1);
    tracep->declBit(c+2159,"uart_ns_rxd_i", false,-1);
    tracep->declBit(c+435,"uart_ns_txd_o", false,-1);
    tracep->declBus(c+1820,"reg_addr", false,-1, 5,0);
    tracep->declBit(c+1821,"reg_rd_req", false,-1);
    tracep->declBit(c+1822,"reg_wr_req", false,-1);
    tracep->declBit(c+1823,"tx_valid_next", false,-1);
    tracep->declBit(c+1009,"tx_valid_ff", false,-1);
    tracep->declBit(c+1009,"tx_valid", false,-1);
    tracep->declBit(c+1010,"tx_ready", false,-1);
    tracep->declBit(c+1011,"rx_valid", false,-1);
    tracep->declBit(c+1012,"frame_err", false,-1);
    tracep->declBus(c+1013,"uart_rx_byte", false,-1, 7,0);
    tracep->declBus(c+1014,"uart_tx_byte", false,-1, 7,0);
    tracep->declBit(c+2196,"two_stop_bits", false,-1);
    tracep->declBus(c+1015,"uart_reg_rx_ff", false,-1, 7,0);
    tracep->declBus(c+1016,"uart_reg_rx_next", false,-1, 7,0);
    tracep->declBus(c+1014,"uart_reg_tx_ff", false,-1, 7,0);
    tracep->declBus(c+1063,"uart_reg_tx_next", false,-1, 7,0);
    tracep->declBus(c+1017,"uart_reg_baud_ff", false,-1, 7,0);
    tracep->declBus(c+1017,"uart_reg_baud_next", false,-1, 7,0);
    tracep->declBus(c+1018,"uart_reg_lctrl_ff", false,-1, 7,0);
    tracep->declBus(c+1064,"uart_reg_lctrl_next", false,-1, 7,0);
    tracep->declBus(c+1019,"uart_reg_ie_ff", false,-1, 7,0);
    tracep->declBus(c+1065,"uart_reg_ie_next", false,-1, 7,0);
    tracep->declBus(c+1020,"uart_reg_lstatus_ff", false,-1, 7,0);
    tracep->declBus(c+1021,"uart_reg_lstatus_next", false,-1, 7,0);
    tracep->declBus(c+1022,"uart_reg_scratch_ff", false,-1, 7,0);
    tracep->declBus(c+1066,"uart_reg_scratch_next", false,-1, 7,0);
    tracep->declBit(c+1824,"fifoctrl_reg_wr_flag", false,-1);
    tracep->declBit(c+1825,"tx_reg_wr_flag", false,-1);
    tracep->declBit(c+2180,"baud_reg_wr_flag", false,-1);
    tracep->declBit(c+1826,"ie_reg_wr_flag", false,-1);
    tracep->declBit(c+1827,"lctrl_reg_wr_flag", false,-1);
    tracep->declBit(c+1828,"scratch_reg_wr_flag", false,-1);
    tracep->declBus(c+1829,"reg_r_data", false,-1, 7,0);
    tracep->declBus(c+1830,"reg_w_data", false,-1, 31,0);
    tracep->pushNamePrefix("uart2dbus_ff ");
    tracep->declBus(c+108,"r_data", false,-1, 31,0);
    tracep->declBit(c+109,"ack", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_ns_rx_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBit(c+2159,"rx_pin_in", false,-1);
    tracep->declBus(c+1017,"baud_div_i", false,-1, 7,0);
    tracep->declBus(c+1013,"rx_data_o", false,-1, 7,0);
    tracep->declBit(c+1011,"valid_o", false,-1);
    tracep->declBit(c+1012,"frame_err_o", false,-1);
    tracep->declBus(c+1023,"bit_count_ff", false,-1, 3,0);
    tracep->declBus(c+1024,"bit_count_next", false,-1, 3,0);
    tracep->declBit(c+1025,"rx_busy", false,-1);
    tracep->declBit(c+1026,"sample_pulse", false,-1);
    tracep->declBit(c+1027,"sbit_mid_point", false,-1);
    tracep->declBit(c+1114,"rx_pin_ff", false,-1);
    tracep->declBus(c+1028,"sample_count_ff", false,-1, 7,0);
    tracep->declBus(c+1029,"sample_count_next", false,-1, 7,0);
    tracep->declBus(c+1030,"sbit_sample_count_ff", false,-1, 7,0);
    tracep->declBus(c+1031,"sbit_sample_count_next", false,-1, 7,0);
    tracep->declBus(c+1013,"shifter_ff", false,-1, 7,0);
    tracep->declBus(c+2079,"shifter_next", false,-1, 7,0);
    tracep->declBit(c+1011,"valid_ff", false,-1);
    tracep->declBit(c+2080,"valid_next", false,-1);
    tracep->declBit(c+1012,"frame_err_ff", false,-1);
    tracep->declBit(c+2081,"frame_err_next", false,-1);
    tracep->declBus(c+1032,"state_ff", false,-1, 1,0);
    tracep->declBus(c+2082,"state_next", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("uart_ns_tx_module ");
    tracep->declBit(c+2084,"rst_n", false,-1);
    tracep->declBit(c+2083,"clk", false,-1);
    tracep->declBus(c+1014,"tx_data_i", false,-1, 7,0);
    tracep->declBus(c+1017,"baud_div_i", false,-1, 7,0);
    tracep->declBit(c+2196,"two_stop_bits", false,-1);
    tracep->declBit(c+1009,"valid_i", false,-1);
    tracep->declBit(c+1010,"ready_o", false,-1);
    tracep->declBit(c+435,"tx_pin_o", false,-1);
    tracep->declBus(c+1033,"sample_count_ff", false,-1, 7,0);
    tracep->declBus(c+1034,"sample_count_next", false,-1, 7,0);
    tracep->declBus(c+1035,"bit_count_ff", false,-1, 3,0);
    tracep->declBus(c+1036,"bit_count_next", false,-1, 3,0);
    tracep->declBus(c+2199,"uart_frame_size", false,-1, 3,0);
    tracep->declBus(c+1037,"shifter_ff", false,-1, 8,0);
    tracep->declBus(c+1038,"shifter_next", false,-1, 8,0);
    tracep->declBit(c+1039,"sample_pulse", false,-1);
    tracep->declBit(c+1040,"tx_busy", false,-1);
    tracep->declBit(c+435,"tx_pin", false,-1);
    tracep->declBus(c+1041,"state_ff", false,-1, 1,0);
    tracep->declBus(c+1042,"state_next", false,-1, 1,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_init_sub__TOP____024unit__0(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2200,"CSR_MTVEC_BASE_ALIGN_VECTOR", false,-1, 31,0);
    tracep->declBus(c+2201,"CSR_MTVEC_BASE_ALIGN_DIRECT", false,-1, 31,0);
    tracep->declBus(c+2202,"MODE_BIT", false,-1, 31,0);
    tracep->declBus(c+2200,"CSR_STVEC_BASE_ALIGN_VECTOR", false,-1, 31,0);
    tracep->declBus(c+2201,"CSR_STVEC_BASE_ALIGN_DIRECT", false,-1, 31,0);
    tracep->declBus(c+2203,"EXC_CODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2204,"S_SOFT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+2205,"M_SOFT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+2206,"S_TIMER_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+2207,"M_TIMER_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+2208,"S_EXT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+2209,"M_EXT_INT_IDX", false,-1, 31,0);
    tracep->declBus(c+2192,"MIE_SSIP", false,-1, 31,0);
    tracep->declBus(c+2210,"MIE_MSIP", false,-1, 31,0);
    tracep->declBus(c+2211,"MIE_STIP", false,-1, 31,0);
    tracep->declBus(c+2212,"MIE_MTIP", false,-1, 31,0);
    tracep->declBus(c+2213,"MIE_SEIP", false,-1, 31,0);
    tracep->declBus(c+2214,"MIE_MEIP", false,-1, 31,0);
    tracep->declBus(c+2215,"MIE_MASK", false,-1, 31,0);
    tracep->declBus(c+2215,"MIP_MASK", false,-1, 31,0);
    tracep->declBus(c+2216,"SIE_MASK", false,-1, 31,0);
    tracep->declBus(c+2216,"SIP_MASK", false,-1, 31,0);
    tracep->declBus(c+2192,"SIE_SSIP", false,-1, 31,0);
    tracep->declBus(c+2192,"SIP_SSIP", false,-1, 31,0);
    tracep->declBus(c+2203,"IRQ_CODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2192,"STATUS_SIE", false,-1, 31,0);
    tracep->declBus(c+2211,"STATUS_SPIE", false,-1, 31,0);
    tracep->declBus(c+2217,"STATUS_UBE", false,-1, 31,0);
    tracep->declBus(c+2218,"STATUS_SPP", false,-1, 31,0);
    tracep->declBus(c+2219,"STATUS_VS", false,-1, 31,0);
    tracep->declBus(c+2220,"STATUS_FS", false,-1, 31,0);
    tracep->declBus(c+2221,"STATUS_XS", false,-1, 31,0);
    tracep->declBus(c+2222,"STATUS_SUM", false,-1, 31,0);
    tracep->declBus(c+2223,"STATUS_MXR", false,-1, 31,0);
    tracep->declBus(c+2224,"STATUS_SD", false,-1, 31,0);
    tracep->declBus(c+2225,"SSTATUS_READ_MASK", false,-1, 31,0);
    tracep->declBus(c+2226,"SSTATUS_WRITE_MASK", false,-1, 31,0);
    tracep->declBus(c+2227,"SATP_ASID_MASK", false,-1, 31,0);
    tracep->declBus(c+2228,"SATP_MODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2189,"SATP_ASID_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2229,"SATP_PPN_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2228,"MODE_SV32", false,-1, 31,0);
    tracep->declBus(c+2230,"TVEC_MODE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2231,"TVEC_BASE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2232,"DEPTH_FIFO", false,-1, 31,0);
    tracep->declBus(c+2205,"ADDR_FIFO", false,-1, 31,0);
    tracep->declBus(c+2232,"UART_DATA_SIZE", false,-1, 31,0);
    tracep->declBus(c+2205,"UART_DATA_BIT_COUNT", false,-1, 31,0);
    tracep->declBus(c+2232,"UART_BAUD_DIV_SIZE", false,-1, 31,0);
    tracep->declBus(c+2204,"UART_1STOP_BIT", false,-1, 31,0);
    tracep->declBus(c+2201,"UART_2STOP_BITS", false,-1, 31,0);
    tracep->declBus(c+2201,"UART_OVERSAMPLE", false,-1, 31,0);
    tracep->declBus(c+2233,"UART_SBIT_DATA_SIZE", false,-1, 31,0);
    tracep->declBus(c+2234,"UART_8DATA_1STOP_BITS", false,-1, 31,0);
    tracep->declBus(c+2235,"UART_8DATA_2STOP_BITS", false,-1, 31,0);
    tracep->declBus(c+2236,"UART_FRAME_BIT_COUNT", false,-1, 31,0);
    tracep->declBus(c+2237,"PLIC_SOURCE_COUNT", false,-1, 31,0);
    tracep->declBus(c+2237,"PLIC_TARGET_COUNT", false,-1, 31,0);
    tracep->declBus(c+2238,"PLIC_PRIO_LEVELS", false,-1, 31,0);
    tracep->declBus(c+2237,"PLIC_SOURCE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2239,"PLIC_PRIO_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2203,"TLB_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+2240,"DTLB_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+2203,"DTLB_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2241,"ICACHE_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2241,"ICACHE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2242,"ICACHE_LINE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2242,"ICACHE_NO_OF_SETS", false,-1, 31,0);
    tracep->declBus(c+2236,"ICACHE_OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+2243,"ICACHE_IDX_BITS", false,-1, 31,0);
    tracep->declBus(c+2244,"ICACHE_TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+2245,"ICACHE_TAG_LSB", false,-1, 31,0);
    tracep->declBus(c+2241,"DCACHE_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2241,"DCACHE_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2242,"DCACHE_LINE_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2246,"DCACHE_NO_OF_SETS", false,-1, 31,0);
    tracep->declBus(c+2236,"DCACHE_OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+2236,"DCACHE_IDX_BITS", false,-1, 31,0);
    tracep->declBus(c+2247,"DCACHE_TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+2248,"DCACHE_TAG_LSB", false,-1, 31,0);
    tracep->declBus(c+2246,"DDR2_DQ_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2230,"DDR2_DQS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2249,"DDR2_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2250,"DDR2_BA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2230,"DDR2_DM_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2251,"APP_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2250,"APP_CMD_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2242,"APP_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2246,"APP_MASK_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2252,"CMD_READ", false,-1, 2,0);
    tracep->declBus(c+2253,"CMD_WRITE", false,-1, 2,0);
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_init_top(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_init_top\n"); );
    // Body
    Vpcore_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("$unit ");
    Vpcore_tb___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpcore_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpcore_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpcore_tb___024root__trace_register(Vpcore_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vpcore_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vpcore_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vpcore_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_full_sub_0(Vpcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpcore_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_full_top_0\n"); );
    // Init
    Vpcore_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpcore_tb___024root*>(voidSelf);
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpcore_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpcore_tb___024root__trace_full_sub_0(Vpcore_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vpcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpcore_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_hc08fe011__0;
    VlWide<4>/*127:0*/ __Vtemp_h8cbeb7a5__0;
    VlWide<4>/*127:0*/ __Vtemp_h5628815a__0;
    VlWide<4>/*127:0*/ __Vtemp_h8cbeb7a5__1;
    VlWide<4>/*127:0*/ __Vtemp_h5628815a__1;
    VlWide<4>/*127:0*/ __Vtemp_h167b8e08__0;
    VlWide<4>/*127:0*/ __Vtemp_h3b9f4904__0;
    VlWide<4>/*127:0*/ __Vtemp_h2d981510__0;
    VlWide<4>/*127:0*/ __Vtemp_hfa4d1436__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->pcore_tb__DOT__irq_ext));
    bufp->fullBit(oldp+2,(vlSelf->pcore_tb__DOT__irq_soft));
    bufp->fullBit(oldp+3,(vlSelf->pcore_tb__DOT__uart_rx));
    bufp->fullBit(oldp+4,(vlSelf->pcore_tb__DOT__spi_miso));
    bufp->fullWData(oldp+5,(vlSelf->pcore_tb__DOT__firmware),1024);
    bufp->fullWData(oldp+37,(vlSelf->pcore_tb__DOT__max_cycles),1024);
    bufp->fullIData(oldp+69,(vlSelf->pcore_tb__DOT__write_sig),32);
    bufp->fullWData(oldp+70,(vlSelf->pcore_tb__DOT__main_time),1024);
    bufp->fullIData(oldp+102,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+103,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart2dbus_ff))));
    bufp->fullIData(oldp+104,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+105,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2dbus_ff))));
    bufp->fullIData(oldp+106,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+107,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic2dbus_ff))));
    bufp->fullIData(oldp+108,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+109,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart2dbus_ff))));
    bufp->fullIData(oldp+110,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+111,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi2dbus_ff))));
    bufp->fullBit(oldp+112,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sfence_vma_req));
    bufp->fullIData(oldp+113,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
    bufp->fullIData(oldp+114,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                               >> 0xcU)),20);
    bufp->fullSData(oldp+115,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                         >> 0xcU))),10);
    bufp->fullSData(oldp+116,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                               >> 0x16U)),10);
    bufp->fullCData(oldp+117,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U] 
                                       >> 0x16U))),4);
    bufp->fullIData(oldp+118,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+119,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+120,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_ff),32);
    bufp->fullCData(oldp+121,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                        >> 0xcU))),5);
    bufp->fullCData(oldp+122,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                             >> 6U)))),3);
    bufp->fullCData(oldp+123,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                             >> 0x1bU)))),3);
    bufp->fullCData(oldp+124,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                             >> 0x19U)))),2);
    bufp->fullCData(oldp+125,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                               >> 0x10U)))),4);
    bufp->fullBit(oldp+126,((1U & ((0U != (3U & (IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                         >> 0x14U))))
                                    ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                       >> 2U) : (IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                         >> 4U))))));
    bufp->fullBit(oldp+127,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                           >> 3U)))));
    bufp->fullBit(oldp+128,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                           >> 2U)))));
    bufp->fullBit(oldp+129,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff))));
    bufp->fullIData(oldp+130,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+131,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                               >> 0x1eU)))),4);
    bufp->fullSData(oldp+132,((0xfffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                          << 7U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                          >> 0x19U)))),12);
    bufp->fullIData(oldp+133,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+134,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+135,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+136,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U])));
    bufp->fullCData(oldp+137,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+138,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+139,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                   >> 3U))));
    bufp->fullBit(oldp+140,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                   >> 2U))));
    bufp->fullBit(oldp+141,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl) 
                                   >> 1U))));
    bufp->fullBit(oldp+142,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__exe2csr_ctrl))));
    bufp->fullIData(oldp+143,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
    bufp->fullBit(oldp+144,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))));
    bufp->fullIData(oldp+145,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb2id_fb 
                                       >> 6U))),32);
    bufp->fullCData(oldp+146,((0x1fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb2id_fb 
                                                >> 1U)))),5);
    bufp->fullBit(oldp+147,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb2id_fb))));
    bufp->fullIData(oldp+148,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__writeback_module__DOT__wrb_rd_data),32);
    bufp->fullCData(oldp+149,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+150,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                        >> 0x19U))),5);
    bufp->fullBit(oldp+151,((IData)((0ULL != (0x1004ULL 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff)))));
    bufp->fullBit(oldp+152,((IData)((0ULL != (0x6000804ULL 
                                              & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff)))));
    bufp->fullCData(oldp+153,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U])),5);
    bufp->fullBit(oldp+154,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))));
    bufp->fullBit(oldp+155,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 2U))));
    bufp->fullBit(oldp+156,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_stall_ff));
    bufp->fullIData(oldp+157,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+158,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+159,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+160,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+161,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[0U])));
    bufp->fullBit(oldp+162,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_pipe_ff));
    bufp->fullIData(oldp+163,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[6U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[5U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+164,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[5U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+165,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[4U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+166,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+167,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+168,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+169,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+170,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[0U])));
    bufp->fullCData(oldp+171,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                               >> 0x22U)))),4);
    bufp->fullCData(oldp+172,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                               >> 0x1eU)))),4);
    bufp->fullCData(oldp+173,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                             >> 0x1bU)))),3);
    bufp->fullCData(oldp+174,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                             >> 0x19U)))),2);
    bufp->fullCData(oldp+175,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                             >> 0x16U)))),3);
    bufp->fullCData(oldp+176,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                             >> 0x14U)))),2);
    bufp->fullCData(oldp+177,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                               >> 0x10U)))),4);
    bufp->fullCData(oldp+178,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                             >> 0xdU)))),3);
    bufp->fullBit(oldp+179,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                           >> 0xcU)))));
    bufp->fullBit(oldp+180,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                           >> 0xbU)))));
    bufp->fullBit(oldp+181,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                           >> 0xaU)))));
    bufp->fullBit(oldp+182,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                           >> 9U)))));
    bufp->fullCData(oldp+183,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                             >> 6U)))),3);
    bufp->fullBit(oldp+184,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                           >> 5U)))));
    bufp->fullBit(oldp+185,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                           >> 4U)))));
    bufp->fullBit(oldp+186,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                           >> 3U)))));
    bufp->fullBit(oldp+187,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                           >> 2U)))));
    bufp->fullBit(oldp+188,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                           >> 1U)))));
    bufp->fullBit(oldp+189,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff))));
    bufp->fullIData(oldp+190,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]),32);
    bufp->fullIData(oldp+191,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[1U]),32);
    bufp->fullIData(oldp+192,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
    bufp->fullSData(oldp+193,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                         >> 5U))),12);
    bufp->fullIData(oldp+194,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+195,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+196,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+197,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U] 
                                       >> 1U))),4);
    bufp->fullBit(oldp+198,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[0U])));
    bufp->fullCData(oldp+199,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 7U))),2);
    bufp->fullCData(oldp+200,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                     >> 4U))),3);
    bufp->fullBit(oldp+201,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 3U))));
    bufp->fullBit(oldp+202,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 2U))));
    bufp->fullBit(oldp+203,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff) 
                                   >> 1U))));
    bufp->fullBit(oldp+204,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))));
    bufp->fullIData(oldp+205,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+206,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[2U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[1U] 
                                             >> 5U))),32);
    bufp->fullIData(oldp+207,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[1U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+208,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U])),5);
    bufp->fullCData(oldp+209,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff) 
                                     >> 1U))),3);
    bufp->fullBit(oldp+210,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))));
    bufp->fullIData(oldp+211,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr2wrb_data_pipe_ff),32);
    bufp->fullIData(oldp+212,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__mul2wrb_pipe_ff),32);
    bufp->fullIData(oldp+213,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff),32);
    bufp->fullIData(oldp+214,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[0U]),32);
    bufp->fullBit(oldp+215,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_slt_b));
    bufp->fullBit(oldp+216,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__a_uslt_b));
    bufp->fullBit(oldp+217,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__pc_misalign));
    bufp->fullBit(oldp+218,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__stall_pc));
    bufp->fullSData(oldp+219,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__upper_16),16);
    bufp->fullBit(oldp+220,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_misaligned));
    bufp->fullCData(oldp+221,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state),2);
    bufp->fullBit(oldp+222,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_req));
    bufp->fullBit(oldp+223,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe_stall_flush));
    bufp->fullBit(oldp+224,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_wr_flag));
    bufp->fullBit(oldp+225,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_wr_flag));
    bufp->fullBit(oldp+226,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_wr_flag));
    bufp->fullBit(oldp+227,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_wr_flag));
    bufp->fullBit(oldp+228,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_wr_flag));
    bufp->fullBit(oldp+229,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_wr_flag));
    bufp->fullBit(oldp+230,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_wr_flag));
    bufp->fullBit(oldp+231,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_wr_flag));
    bufp->fullBit(oldp+232,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_wr_flag));
    bufp->fullBit(oldp+233,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_wr_flag));
    bufp->fullBit(oldp+234,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_wr_flag));
    bufp->fullBit(oldp+235,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag));
    bufp->fullBit(oldp+236,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_wr_flag));
    bufp->fullBit(oldp+237,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_wr_flag));
    bufp->fullBit(oldp+238,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag));
    bufp->fullBit(oldp+239,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_wr_flag));
    bufp->fullBit(oldp+240,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sstatus_wr_flag));
    bufp->fullBit(oldp+241,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_wr_flag));
    bufp->fullBit(oldp+242,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sie_wr_flag));
    bufp->fullBit(oldp+243,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_wr_flag));
    bufp->fullBit(oldp+244,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_wr_flag));
    bufp->fullBit(oldp+245,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_wr_flag));
    bufp->fullBit(oldp+246,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sip_wr_flag));
    bufp->fullBit(oldp+247,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_wr_flag));
    bufp->fullBit(oldp+248,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_wr_flag));
    bufp->fullBit(oldp+249,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__i_pf_exc_req));
    bufp->fullBit(oldp+250,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_req));
    bufp->fullBit(oldp+251,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_req));
    bufp->fullBit(oldp+252,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sfence_vma_req));
    bufp->fullBit(oldp+253,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_req));
    bufp->fullBit(oldp+254,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_pipe_ff))));
    bufp->fullCData(oldp+255,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+256,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 0x19U))),5);
    bufp->fullIData(oldp+257,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 5U))),32);
    bufp->fullCData(oldp+258,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                     >> 0x11U))),3);
    bufp->fullCData(oldp+259,((0x7fU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[3U] 
                                         << 2U) | (
                                                   vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                   >> 0x1eU)))),7);
    bufp->fullCData(oldp+260,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                        >> 7U))),5);
    bufp->fullBit(oldp+261,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))));
    bufp->fullCData(oldp+262,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U])),5);
    bufp->fullBit(oldp+263,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+264,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+265,(((0U != (0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_pipe_ff[0U])) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_pipe_ff))));
    bufp->fullCData(oldp+266,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                               >> 0x22U)))),4);
    bufp->fullCData(oldp+267,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                             >> 0x16U)))),3);
    bufp->fullBit(oldp+268,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                           >> 1U)))));
    bufp->fullCData(oldp+269,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+270,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                        >> 0x19U))),5);
    bufp->fullCData(oldp+271,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                        >> 0xcU))),5);
    bufp->fullBit(oldp+272,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                             >> 0x14U)))));
    bufp->fullBit(oldp+273,((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                             >> 0x19U)))));
    bufp->fullBit(oldp+274,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_ff));
    bufp->fullBit(oldp+275,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_stall_ff));
    bufp->fullIData(oldp+276,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_ff),32);
    bufp->fullIData(oldp+277,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__rem_ff)),32);
    bufp->fullBit(oldp+278,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__done_ff));
    bufp->fullBit(oldp+279,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__busy_ff));
    bufp->fullIData(oldp+280,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__opr2_ff),32);
    bufp->fullIData(oldp+281,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__quo_next),32);
    bufp->fullQData(oldp+282,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_ff),33);
    bufp->fullQData(oldp+284,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__acc_next),33);
    bufp->fullQData(oldp+286,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__rem_ff),33);
    bufp->fullCData(oldp+288,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__divider_module__DOT__counter),5);
    bufp->fullIData(oldp+289,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache2if_data_ff),32);
    bufp->fullBit(oldp+290,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2if_ack_o));
    bufp->fullIData(oldp+291,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu 
                                       >> 1U))),32);
    bufp->fullBit(oldp+292,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2lsummu))));
    __Vtemp_hc08fe011__0[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U] 
                                              >> 1U));
    __Vtemp_hc08fe011__0[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[1U] 
                                              >> 1U));
    __Vtemp_hc08fe011__0[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[2U] 
                                              >> 1U));
    __Vtemp_hc08fe011__0[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[4U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[3U] 
                                              >> 1U));
    bufp->fullWData(oldp+293,(__Vtemp_hc08fe011__0),128);
    bufp->fullBit(oldp+297,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__main_mem_module__DOT__mem2cache[0U])));
    bufp->fullBit(oldp+298,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2if_ack_o));
    bufp->fullIData(oldp+299,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_ff),32);
    bufp->fullIData(oldp+300,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+301,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_ff),4);
    bufp->fullBit(oldp+302,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2lsummu_ack));
    bufp->fullCData(oldp+303,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_ff),3);
    bufp->fullIData(oldp+304,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__dcache2lsummu_data_ff),32);
    bufp->fullWData(oldp+305,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[0]),128);
    bufp->fullWData(oldp+309,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[1]),128);
    bufp->fullWData(oldp+313,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[2]),128);
    bufp->fullWData(oldp+317,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[3]),128);
    bufp->fullWData(oldp+321,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[4]),128);
    bufp->fullWData(oldp+325,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[5]),128);
    bufp->fullWData(oldp+329,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[6]),128);
    bufp->fullWData(oldp+333,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[7]),128);
    bufp->fullWData(oldp+337,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[8]),128);
    bufp->fullWData(oldp+341,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[9]),128);
    bufp->fullWData(oldp+345,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[10]),128);
    bufp->fullWData(oldp+349,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[11]),128);
    bufp->fullWData(oldp+353,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[12]),128);
    bufp->fullWData(oldp+357,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[13]),128);
    bufp->fullWData(oldp+361,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[14]),128);
    bufp->fullWData(oldp+365,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_data_ram[15]),128);
    bufp->fullIData(oldp+369,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [0U] >> 2U))),24);
    bufp->fullBit(oldp+370,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [0U] >> 1U))));
    bufp->fullBit(oldp+371,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [0U])));
    bufp->fullIData(oldp+372,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [1U] >> 2U))),24);
    bufp->fullBit(oldp+373,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [1U] >> 1U))));
    bufp->fullBit(oldp+374,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [1U])));
    bufp->fullIData(oldp+375,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [2U] >> 2U))),24);
    bufp->fullBit(oldp+376,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [2U] >> 1U))));
    bufp->fullBit(oldp+377,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [2U])));
    bufp->fullIData(oldp+378,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [3U] >> 2U))),24);
    bufp->fullBit(oldp+379,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [3U] >> 1U))));
    bufp->fullBit(oldp+380,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [3U])));
    bufp->fullIData(oldp+381,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [4U] >> 2U))),24);
    bufp->fullBit(oldp+382,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [4U] >> 1U))));
    bufp->fullBit(oldp+383,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [4U])));
    bufp->fullIData(oldp+384,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [5U] >> 2U))),24);
    bufp->fullBit(oldp+385,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [5U] >> 1U))));
    bufp->fullBit(oldp+386,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [5U])));
    bufp->fullIData(oldp+387,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [6U] >> 2U))),24);
    bufp->fullBit(oldp+388,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [6U] >> 1U))));
    bufp->fullBit(oldp+389,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [6U])));
    bufp->fullIData(oldp+390,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [7U] >> 2U))),24);
    bufp->fullBit(oldp+391,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [7U] >> 1U))));
    bufp->fullBit(oldp+392,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [7U])));
    bufp->fullIData(oldp+393,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [8U] >> 2U))),24);
    bufp->fullBit(oldp+394,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [8U] >> 1U))));
    bufp->fullBit(oldp+395,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [8U])));
    bufp->fullIData(oldp+396,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [9U] >> 2U))),24);
    bufp->fullBit(oldp+397,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [9U] >> 1U))));
    bufp->fullBit(oldp+398,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [9U])));
    bufp->fullIData(oldp+399,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [0xaU] 
                                            >> 2U))),24);
    bufp->fullBit(oldp+400,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [0xaU] >> 1U))));
    bufp->fullBit(oldp+401,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [0xaU])));
    bufp->fullIData(oldp+402,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [0xbU] 
                                            >> 2U))),24);
    bufp->fullBit(oldp+403,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [0xbU] >> 1U))));
    bufp->fullBit(oldp+404,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [0xbU])));
    bufp->fullIData(oldp+405,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [0xcU] 
                                            >> 2U))),24);
    bufp->fullBit(oldp+406,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [0xcU] >> 1U))));
    bufp->fullBit(oldp+407,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [0xcU])));
    bufp->fullIData(oldp+408,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [0xdU] 
                                            >> 2U))),24);
    bufp->fullBit(oldp+409,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [0xdU] >> 1U))));
    bufp->fullBit(oldp+410,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [0xdU])));
    bufp->fullIData(oldp+411,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [0xeU] 
                                            >> 2U))),24);
    bufp->fullBit(oldp+412,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [0xeU] >> 1U))));
    bufp->fullBit(oldp+413,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [0xeU])));
    bufp->fullIData(oldp+414,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                            [0xfU] 
                                            >> 2U))),24);
    bufp->fullBit(oldp+415,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                                   [0xfU] >> 1U))));
    bufp->fullBit(oldp+416,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_ram
                             [0xfU])));
    bufp->fullIData(oldp+417,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+418,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                              >> 9U)))
                                ? (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_pipe_ff[3U] 
                                            >> 0x14U))
                                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data)),32);
    bufp->fullBit(oldp+419,((1U & ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                            >> 3U)) 
                                   | ((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                               >> 2U)) 
                                      & ((1U & (IData)(
                                                       (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                        >> 0x18U)))
                                          ? ((1U & (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                            >> 0x17U)))
                                              ? ((~ (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x16U))) 
                                                 & (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                            >> 0x20U)))
                                              : ((1U 
                                                  & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x16U)))
                                                  ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h2edbfac7__0)
                                                  : 
                                                 (~ (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                             >> 0x20U)))))
                                          : ((1U & (IData)(
                                                           (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                            >> 0x17U)))
                                              ? ((1U 
                                                  & (IData)(
                                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                             >> 0x16U)))
                                                  ? 
                                                 (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h2edbfac7__0))
                                                  : 
                                                 (0U 
                                                  != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                              : ((IData)(
                                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                          >> 0x16U)) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))))))))))));
    bufp->fullBit(oldp+420,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                             | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_stall_ff))));
    bufp->fullCData(oldp+421,(((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))
                                ? ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__is_missaligned)
                                    ? 1U : 0U) : ((1U 
                                                   == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))
                                                   ? 
                                                  ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__br_taken_i)
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U])
                                                     ? 2U
                                                     : 1U))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__current_state))
                                                    ? 
                                                   ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__br_taken_i)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__next_misaligned)
                                                      ? 1U
                                                      : 0U))
                                                    : 0U)))),2);
    bufp->fullBit(oldp+422,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                             & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__i_pf_exc_req))));
    bufp->fullBit(oldp+423,((1U & ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                  >> 0x18U)))
                                    ? ((1U & (IData)(
                                                     (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                      >> 0x17U)))
                                        ? ((~ (IData)(
                                                      (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                       >> 0x16U))) 
                                           & (IData)(
                                                     (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                      >> 0x20U)))
                                        : ((1U & (IData)(
                                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                          >> 0x16U)))
                                            ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h2edbfac7__0)
                                            : (~ (IData)(
                                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                                          >> 0x20U)))))
                                    : ((1U & (IData)(
                                                     (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                      >> 0x17U)))
                                        ? ((1U & (IData)(
                                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                          >> 0x16U)))
                                            ? (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT____VdfgExtracted_h2edbfac7__0))
                                            : (0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output)))
                                        : ((IData)(
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                    >> 0x16U)) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))))))))));
    bufp->fullBit(oldp+424,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall) 
                                   | ((~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if)) 
                                      | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__stall_pc))))));
    bufp->fullIData(oldp+425,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT____VdfgExtracted_hcd8ed81d__0) 
                                | (6U == (0xfU & (IData)(
                                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                          >> 0x1eU)))))
                                ? ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                    >> 0x1fU) ? ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1))
                                    : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)
                                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1)),32);
    bufp->fullIData(oldp+426,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT____VdfgExtracted_hcd8ed81d__0)
                                ? ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                    >> 0x1fU) ? ((IData)(1U) 
                                                 + 
                                                 (~ vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2))
                                    : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)
                                : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),32);
    bufp->fullBit(oldp+427,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__tx_pin));
    bufp->fullBit(oldp+428,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_slave_sel))));
    bufp->fullBit(oldp+429,(vlSelf->pcore_tb__DOT__spi_mosi));
    bufp->fullIData(oldp+430,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                       >> 5U))),32);
    bufp->fullCData(oldp+431,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                             >> 3U)))),2);
    bufp->fullBit(oldp+432,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                           >> 2U)))));
    bufp->fullBit(oldp+433,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr 
                                           >> 1U)))));
    bufp->fullBit(oldp+434,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__pipe2csr))));
    bufp->fullBit(oldp+435,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__tx_pin));
    bufp->fullBit(oldp+436,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_ff) 
                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_ff)))));
    bufp->fullBit(oldp+437,((0U != ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_ff) 
                                    & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_ff)))));
    bufp->fullBit(oldp+438,((1U & ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff)) 
                                    >> 1U) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff) 
                                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff))))));
    bufp->fullBit(oldp+439,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_overflow_ff));
    bufp->fullBit(oldp+440,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff));
    bufp->fullBit(oldp+441,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff));
    bufp->fullIData(oldp+442,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+443,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_ff))));
    bufp->fullQData(oldp+444,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff),64);
    bufp->fullBit(oldp+446,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_ff));
    bufp->fullBit(oldp+447,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_clk_next));
    bufp->fullCData(oldp+448,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_ff),7);
    bufp->fullCData(oldp+449,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__timer_prescaler_next),7);
    bufp->fullIData(oldp+450,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff)),22);
    bufp->fullBit(oldp+451,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__en_vaddr));
    bufp->fullBit(oldp+452,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x13U))));
    bufp->fullBit(oldp+453,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                                           >> 0x23U)))));
    bufp->fullBit(oldp+454,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                                           >> 0x22U)))));
    bufp->fullBit(oldp+455,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                                           >> 0x21U)))));
    bufp->fullBit(oldp+456,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu 
                                           >> 0x20U)))));
    bufp->fullIData(oldp+457,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw2mmu)),32);
    bufp->fullIData(oldp+458,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                               >> 0xaU)),22);
    bufp->fullCData(oldp+459,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                     >> 8U))),2);
    bufp->fullBit(oldp+460,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                   >> 7U))));
    bufp->fullBit(oldp+461,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                   >> 6U))));
    bufp->fullBit(oldp+462,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                   >> 5U))));
    bufp->fullBit(oldp+463,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                   >> 4U))));
    bufp->fullBit(oldp+464,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                   >> 3U))));
    bufp->fullBit(oldp+465,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                   >> 2U))));
    bufp->fullBit(oldp+466,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0 
                                   >> 1U))));
    bufp->fullBit(oldp+467,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT____VdfgExtracted_h753c7712__0)));
    bufp->fullIData(oldp+468,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff 
                               >> 0xcU)),20);
    bufp->fullBit(oldp+469,((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff)))));
    bufp->fullBit(oldp+470,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_update));
    bufp->fullBit(oldp+471,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__i_page_fault));
    bufp->fullSData(oldp+472,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                         >> 0xcU))),10);
    bufp->fullSData(oldp+473,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                         >> 2U))),10);
    bufp->fullBit(oldp+474,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+475,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U])));
    bufp->fullIData(oldp+476,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                               >> 0xaU)),22);
    bufp->fullCData(oldp+477,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                     >> 8U))),2);
    bufp->fullBit(oldp+478,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+479,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+480,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+481,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+482,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+483,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+484,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+485,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0U])));
    bufp->fullSData(oldp+486,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                         >> 2U))),10);
    bufp->fullSData(oldp+487,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                          << 8U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[2U] 
                                          >> 0x18U)))),10);
    bufp->fullBit(oldp+488,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[2U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+489,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[2U] 
                                   >> 0x16U))));
    bufp->fullIData(oldp+490,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[2U])),22);
    bufp->fullCData(oldp+491,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                               >> 0x1eU)),2);
    bufp->fullBit(oldp+492,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+493,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+494,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+495,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+496,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+497,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+498,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+499,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x16U))));
    bufp->fullSData(oldp+500,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                          << 8U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U] 
                                          >> 0x18U)))),10);
    bufp->fullSData(oldp+501,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U] 
                                         >> 0xeU))),10);
    bufp->fullBit(oldp+502,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+503,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+504,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[4U] 
                                             << 0xaU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                               >> 0x16U)))),22);
    bufp->fullCData(oldp+505,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                     >> 0x14U))),2);
    bufp->fullBit(oldp+506,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+507,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+508,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+509,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+510,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+511,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+512,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+513,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0xcU))));
    bufp->fullSData(oldp+514,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                         >> 0xeU))),10);
    bufp->fullSData(oldp+515,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                         >> 4U))),10);
    bufp->fullBit(oldp+516,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                   >> 3U))));
    bufp->fullBit(oldp+517,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                   >> 2U))));
    bufp->fullIData(oldp+518,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                             << 0x14U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                               >> 0xcU)))),22);
    bufp->fullCData(oldp+519,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                     >> 0xaU))),2);
    bufp->fullBit(oldp+520,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                   >> 9U))));
    bufp->fullBit(oldp+521,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                   >> 8U))));
    bufp->fullBit(oldp+522,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                   >> 7U))));
    bufp->fullBit(oldp+523,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                   >> 6U))));
    bufp->fullBit(oldp+524,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                   >> 5U))));
    bufp->fullBit(oldp+525,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                   >> 4U))));
    bufp->fullBit(oldp+526,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                   >> 3U))));
    bufp->fullBit(oldp+527,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[5U] 
                                   >> 2U))));
    bufp->fullSData(oldp+528,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                         >> 4U))),10);
    bufp->fullSData(oldp+529,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                          << 6U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U] 
                                          >> 0x1aU)))),10);
    bufp->fullBit(oldp+530,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+531,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U] 
                                   >> 0x18U))));
    bufp->fullIData(oldp+532,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U] 
                                            >> 2U))),22);
    bufp->fullCData(oldp+533,((3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[7U])),2);
    bufp->fullBit(oldp+534,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+535,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+536,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+537,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+538,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+539,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+540,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+541,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[6U] 
                                   >> 0x18U))));
    bufp->fullSData(oldp+542,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                          << 6U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U] 
                                          >> 0x1aU)))),10);
    bufp->fullSData(oldp+543,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U] 
                                         >> 0x10U))),10);
    bufp->fullBit(oldp+544,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+545,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U] 
                                   >> 0xeU))));
    bufp->fullIData(oldp+546,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[9U] 
                                             << 8U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                               >> 0x18U)))),22);
    bufp->fullCData(oldp+547,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                     >> 0x16U))),2);
    bufp->fullBit(oldp+548,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+549,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+550,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+551,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+552,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+553,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+554,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+555,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[8U] 
                                   >> 0xeU))));
    bufp->fullSData(oldp+556,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                         >> 0x10U))),10);
    bufp->fullSData(oldp+557,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                         >> 6U))),10);
    bufp->fullBit(oldp+558,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                   >> 5U))));
    bufp->fullBit(oldp+559,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                   >> 4U))));
    bufp->fullIData(oldp+560,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                             << 0x12U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                               >> 0xeU)))),22);
    bufp->fullCData(oldp+561,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                     >> 0xcU))),2);
    bufp->fullBit(oldp+562,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+563,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+564,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                   >> 9U))));
    bufp->fullBit(oldp+565,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                   >> 8U))));
    bufp->fullBit(oldp+566,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                   >> 7U))));
    bufp->fullBit(oldp+567,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                   >> 6U))));
    bufp->fullBit(oldp+568,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                   >> 5U))));
    bufp->fullBit(oldp+569,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xaU] 
                                   >> 4U))));
    bufp->fullSData(oldp+570,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                         >> 6U))),10);
    bufp->fullSData(oldp+571,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                          << 4U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
                                          >> 0x1cU)))),10);
    bufp->fullBit(oldp+572,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+573,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
                                   >> 0x1aU))));
    bufp->fullIData(oldp+574,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
                                            >> 4U))),22);
    bufp->fullCData(oldp+575,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
                                     >> 2U))),2);
    bufp->fullBit(oldp+576,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU] 
                                   >> 1U))));
    bufp->fullBit(oldp+577,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xcU])));
    bufp->fullBit(oldp+578,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+579,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+580,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+581,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+582,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+583,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xbU] 
                                   >> 0x1aU))));
    bufp->fullSData(oldp+584,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                          << 4U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU] 
                                          >> 0x1cU)))),10);
    bufp->fullSData(oldp+585,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU] 
                                         >> 0x12U))),10);
    bufp->fullBit(oldp+586,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+587,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU] 
                                   >> 0x10U))));
    bufp->fullIData(oldp+588,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xeU] 
                                             << 6U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                               >> 0x1aU)))),22);
    bufp->fullCData(oldp+589,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                     >> 0x18U))),2);
    bufp->fullBit(oldp+590,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+591,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+592,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+593,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+594,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+595,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+596,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+597,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xdU] 
                                   >> 0x10U))));
    bufp->fullSData(oldp+598,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                         >> 0x12U))),10);
    bufp->fullSData(oldp+599,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                         >> 8U))),10);
    bufp->fullBit(oldp+600,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                   >> 7U))));
    bufp->fullBit(oldp+601,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                   >> 6U))));
    bufp->fullIData(oldp+602,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                             << 0x10U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                               >> 0x10U)))),22);
    bufp->fullCData(oldp+603,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                     >> 0xeU))),2);
    bufp->fullBit(oldp+604,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+605,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+606,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+607,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+608,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                   >> 9U))));
    bufp->fullBit(oldp+609,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                   >> 8U))));
    bufp->fullBit(oldp+610,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                   >> 7U))));
    bufp->fullBit(oldp+611,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0xfU] 
                                   >> 6U))));
    bufp->fullSData(oldp+612,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                         >> 8U))),10);
    bufp->fullSData(oldp+613,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                          << 2U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                          >> 0x1eU)))),10);
    bufp->fullBit(oldp+614,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+615,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                   >> 0x1cU))));
    bufp->fullIData(oldp+616,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                            >> 6U))),22);
    bufp->fullCData(oldp+617,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                     >> 4U))),2);
    bufp->fullBit(oldp+618,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                   >> 3U))));
    bufp->fullBit(oldp+619,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                   >> 2U))));
    bufp->fullBit(oldp+620,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U] 
                                   >> 1U))));
    bufp->fullBit(oldp+621,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x11U])));
    bufp->fullBit(oldp+622,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+623,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+624,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+625,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x10U] 
                                   >> 0x1cU))));
    bufp->fullSData(oldp+626,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                          << 2U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U] 
                                          >> 0x1eU)))),10);
    bufp->fullSData(oldp+627,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U] 
                                         >> 0x14U))),10);
    bufp->fullBit(oldp+628,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+629,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U] 
                                   >> 0x12U))));
    bufp->fullIData(oldp+630,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x13U] 
                                             << 4U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                               >> 0x1cU)))),22);
    bufp->fullCData(oldp+631,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                     >> 0x1aU))),2);
    bufp->fullBit(oldp+632,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+633,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+634,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+635,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+636,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+637,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                   >> 0x14U))));
    bufp->fullBit(oldp+638,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+639,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x12U] 
                                   >> 0x12U))));
    bufp->fullSData(oldp+640,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                         >> 0x14U))),10);
    bufp->fullSData(oldp+641,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                         >> 0xaU))),10);
    bufp->fullBit(oldp+642,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                   >> 9U))));
    bufp->fullBit(oldp+643,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                   >> 8U))));
    bufp->fullIData(oldp+644,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                             << 0xeU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                               >> 0x12U)))),22);
    bufp->fullCData(oldp+645,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                     >> 0x10U))),2);
    bufp->fullBit(oldp+646,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+647,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+648,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+649,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+650,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+651,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                   >> 0xaU))));
    bufp->fullBit(oldp+652,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                   >> 9U))));
    bufp->fullBit(oldp+653,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x14U] 
                                   >> 8U))));
    bufp->fullSData(oldp+654,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                         >> 0xaU))),10);
    bufp->fullSData(oldp+655,((0x3ffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U])),10);
    bufp->fullBit(oldp+656,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+657,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                   >> 0x1eU))));
    bufp->fullIData(oldp+658,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                            >> 8U))),22);
    bufp->fullCData(oldp+659,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                     >> 6U))),2);
    bufp->fullBit(oldp+660,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                   >> 5U))));
    bufp->fullBit(oldp+661,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                   >> 4U))));
    bufp->fullBit(oldp+662,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                   >> 3U))));
    bufp->fullBit(oldp+663,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                   >> 2U))));
    bufp->fullBit(oldp+664,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U] 
                                   >> 1U))));
    bufp->fullBit(oldp+665,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x16U])));
    bufp->fullBit(oldp+666,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                             >> 0x1fU)));
    bufp->fullBit(oldp+667,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x15U] 
                                   >> 0x1eU))));
    bufp->fullSData(oldp+668,((0x3ffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U])),10);
    bufp->fullSData(oldp+669,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x18U] 
                               >> 0x16U)),10);
    bufp->fullBit(oldp+670,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x18U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+671,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x18U] 
                                   >> 0x14U))));
    bufp->fullIData(oldp+672,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x18U] 
                                             << 2U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                               >> 0x1eU)))),22);
    bufp->fullCData(oldp+673,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                     >> 0x1cU))),2);
    bufp->fullBit(oldp+674,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+675,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+676,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+677,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+678,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+679,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                   >> 0x16U))));
    bufp->fullBit(oldp+680,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                   >> 0x15U))));
    bufp->fullBit(oldp+681,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x17U] 
                                   >> 0x14U))));
    bufp->fullSData(oldp+682,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU] 
                               >> 0x16U)),10);
    bufp->fullSData(oldp+683,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU] 
                                         >> 0xcU))),10);
    bufp->fullBit(oldp+684,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+685,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU] 
                                   >> 0xaU))));
    bufp->fullIData(oldp+686,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x1aU] 
                                             << 0xcU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                               >> 0x14U)))),22);
    bufp->fullCData(oldp+687,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                     >> 0x12U))),2);
    bufp->fullBit(oldp+688,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+689,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+690,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+691,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+692,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+693,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                   >> 0xcU))));
    bufp->fullBit(oldp+694,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                   >> 0xbU))));
    bufp->fullBit(oldp+695,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_ff[0x19U] 
                                   >> 0xaU))));
    bufp->fullSData(oldp+696,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                         >> 0xcU))),10);
    bufp->fullSData(oldp+697,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                         >> 2U))),10);
    bufp->fullBit(oldp+698,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                   >> 1U))));
    bufp->fullBit(oldp+699,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U])));
    bufp->fullIData(oldp+700,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                               >> 0xaU)),22);
    bufp->fullCData(oldp+701,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                     >> 8U))),2);
    bufp->fullBit(oldp+702,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                   >> 7U))));
    bufp->fullBit(oldp+703,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+704,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+705,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                   >> 4U))));
    bufp->fullBit(oldp+706,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                   >> 3U))));
    bufp->fullBit(oldp+707,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                   >> 2U))));
    bufp->fullBit(oldp+708,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U] 
                                   >> 1U))));
    bufp->fullBit(oldp+709,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[0U])));
    bufp->fullSData(oldp+710,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                         >> 2U))),10);
    bufp->fullSData(oldp+711,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                          << 8U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[2U] 
                                          >> 0x18U)))),10);
    bufp->fullBit(oldp+712,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[2U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+713,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[2U] 
                                   >> 0x16U))));
    bufp->fullIData(oldp+714,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[2U])),22);
    bufp->fullCData(oldp+715,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                               >> 0x1eU)),2);
    bufp->fullBit(oldp+716,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+717,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+718,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+719,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+720,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x19U))));
    bufp->fullBit(oldp+721,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x18U))));
    bufp->fullBit(oldp+722,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x17U))));
    bufp->fullBit(oldp+723,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[1U] 
                                   >> 0x16U))));
    bufp->fullSData(oldp+724,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                          << 8U) | 
                                         (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U] 
                                          >> 0x18U)))),10);
    bufp->fullSData(oldp+725,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U] 
                                         >> 0xeU))),10);
    bufp->fullBit(oldp+726,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+727,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+728,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[4U] 
                                             << 0xaU) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                               >> 0x16U)))),22);
    bufp->fullCData(oldp+729,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                     >> 0x14U))),2);
    bufp->fullBit(oldp+730,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0x13U))));
    bufp->fullBit(oldp+731,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0x12U))));
    bufp->fullBit(oldp+732,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+733,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+734,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+735,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+736,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0xdU))));
    bufp->fullBit(oldp+737,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[3U] 
                                   >> 0xcU))));
    bufp->fullSData(oldp+738,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U] 
                                         >> 0xeU))),10);
    bufp->fullSData(oldp+739,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U] 
                                         >> 4U))),10);
    bufp->fullBit(oldp+740,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U] 
                                   >> 3U))));
    bufp->fullBit(oldp+741,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U] 
                                   >> 2U))));
    bufp->fullIData(oldp+742,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[6U] 
                                             << 0x14U) 
                                            | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                               >> 0xcU)))),22);
    bufp->fullCData(oldp+743,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                     >> 0xaU))),2);
    bufp->fullBit(oldp+744,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                   >> 9U))));
    bufp->fullBit(oldp+745,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                   >> 8U))));
    bufp->fullBit(oldp+746,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                   >> 7U))));
    bufp->fullBit(oldp+747,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                   >> 6U))));
    bufp->fullBit(oldp+748,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                   >> 5U))));
    bufp->fullBit(oldp+749,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                   >> 4U))));
    bufp->fullBit(oldp+750,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                   >> 3U))));
    bufp->fullBit(oldp+751,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_ff[5U] 
                                   >> 2U))));
    bufp->fullCData(oldp+752,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_ff),3);
    bufp->fullBit(oldp+753,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_ff));
    bufp->fullBit(oldp+754,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_lvl_next));
    bufp->fullIData(oldp+755,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                               >> 0xaU)),22);
    bufp->fullCData(oldp+756,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                     >> 8U))),2);
    bufp->fullBit(oldp+757,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+758,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+759,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+760,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+761,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+762,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+763,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+764,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff)));
    bufp->fullIData(oldp+765,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_ff),32);
    bufp->fullBit(oldp+766,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_data_valid_ff));
    bufp->fullBit(oldp+767,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_ff));
    bufp->fullBit(oldp+768,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_ff));
    bufp->fullBit(oldp+769,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__gmap_bit_next));
    bufp->fullIData(oldp+770,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_ff),32);
    bufp->fullQData(oldp+771,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_ff),34);
    bufp->fullBit(oldp+773,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_ff));
    bufp->fullBit(oldp+774,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
    bufp->fullCData(oldp+775,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
    bufp->fullBit(oldp+776,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))));
    bufp->fullBit(oldp+777,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_ff));
    bufp->fullIData(oldp+778,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_addr_ff),32);
    bufp->fullBit(oldp+779,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done));
    bufp->fullBit(oldp+780,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_reserve_ff));
    bufp->fullBit(oldp+781,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_ff));
    bufp->fullCData(oldp+782,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state),3);
    bufp->fullBit(oldp+783,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_exc_req));
    bufp->fullIData(oldp+784,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_ff),32);
    bufp->fullIData(oldp+785,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_ff),32);
    bufp->fullIData(oldp+786,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_ff),32);
    bufp->fullIData(oldp+787,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_ff),32);
    bufp->fullIData(oldp+788,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_ff),32);
    bufp->fullIData(oldp+789,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_ff),32);
    bufp->fullIData(oldp+790,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                               >> 4U)),28);
    bufp->fullBit(oldp+791,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+792,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+793,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+794,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_ff)));
    bufp->fullBit(oldp+795,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                             >> 0x1fU)));
    bufp->fullCData(oldp+796,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                        >> 0x17U))),8);
    bufp->fullBit(oldp+797,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x16U))));
    bufp->fullBit(oldp+798,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x15U))));
    bufp->fullBit(oldp+799,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x14U))));
    bufp->fullBit(oldp+800,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x13U))));
    bufp->fullBit(oldp+801,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x12U))));
    bufp->fullBit(oldp+802,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 0x11U))));
    bufp->fullCData(oldp+803,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 0xfU))),2);
    bufp->fullCData(oldp+804,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 0xdU))),2);
    bufp->fullCData(oldp+805,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 0xbU))),2);
    bufp->fullCData(oldp+806,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                     >> 9U))),2);
    bufp->fullBit(oldp+807,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 8U))));
    bufp->fullBit(oldp+808,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+809,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+810,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+811,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+812,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+813,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+814,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+815,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff)));
    bufp->fullIData(oldp+816,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_ff),32);
    bufp->fullIData(oldp+817,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_ff),32);
    bufp->fullSData(oldp+818,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                               >> 0x11U)),15);
    bufp->fullBit(oldp+819,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0x10U))));
    bufp->fullCData(oldp+820,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+821,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0xbU))));
    bufp->fullBit(oldp+822,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 0xaU))));
    bufp->fullBit(oldp+823,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 9U))));
    bufp->fullBit(oldp+824,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 8U))));
    bufp->fullBit(oldp+825,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+826,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+827,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+828,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+829,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+830,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+831,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+832,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_ff)));
    bufp->fullIData(oldp+833,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff 
                               >> 2U)),30);
    bufp->fullCData(oldp+834,((3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_ff)),2);
    bufp->fullIData(oldp+835,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff),32);
    bufp->fullIData(oldp+836,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_ff),32);
    bufp->fullIData(oldp+837,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_ff),32);
    bufp->fullIData(oldp+838,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff),32);
    bufp->fullSData(oldp+839,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                               >> 0x11U)),15);
    bufp->fullBit(oldp+840,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0x10U))));
    bufp->fullCData(oldp+841,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+842,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0xbU))));
    bufp->fullBit(oldp+843,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 0xaU))));
    bufp->fullBit(oldp+844,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 9U))));
    bufp->fullBit(oldp+845,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 8U))));
    bufp->fullBit(oldp+846,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 7U))));
    bufp->fullBit(oldp+847,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 6U))));
    bufp->fullBit(oldp+848,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 5U))));
    bufp->fullBit(oldp+849,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 4U))));
    bufp->fullBit(oldp+850,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 3U))));
    bufp->fullBit(oldp+851,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 2U))));
    bufp->fullBit(oldp+852,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff 
                                   >> 1U))));
    bufp->fullBit(oldp+853,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_ff)));
    bufp->fullIData(oldp+854,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff 
                               >> 2U)),30);
    bufp->fullCData(oldp+855,((3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_ff)),2);
    bufp->fullIData(oldp+856,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_ff),32);
    bufp->fullIData(oldp+857,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_ff),32);
    bufp->fullIData(oldp+858,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scause_ff),32);
    bufp->fullIData(oldp+859,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_ff),32);
    bufp->fullBit(oldp+860,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff 
                             >> 0x1fU)));
    bufp->fullSData(oldp+861,((0x1ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff 
                                         >> 0x16U))),9);
    bufp->fullIData(oldp+862,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_ff)),22);
    bufp->fullIData(oldp+863,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_ff),32);
    bufp->fullCData(oldp+864,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff),2);
    bufp->fullBit(oldp+865,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_irq_req));
    bufp->fullBit(oldp+866,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__timer_irq_ff));
    bufp->fullBit(oldp+867,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq0_ff));
    bufp->fullBit(oldp+868,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ext_irq1_ff));
    bufp->fullBit(oldp+869,((((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)) 
                              & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                 >> 3U)) | (3U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)))));
    bufp->fullBit(oldp+870,((((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)) 
                              & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_ff 
                                 >> 1U)) | (0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff)))));
    bufp->fullBit(oldp+871,((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_ff))));
    bufp->fullBit(oldp+872,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_ff));
    bufp->fullBit(oldp+873,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__en_vaddr));
    bufp->fullIData(oldp+874,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_ff),32);
    bufp->fullIData(oldp+875,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_ff),32);
    bufp->fullBit(oldp+876,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__seip_irq_req));
    bufp->fullBit(oldp+877,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__stip_irq_req));
    bufp->fullBit(oldp+878,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ssip_irq_req));
    bufp->fullCData(oldp+879,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_ff),4);
    bufp->fullBit(oldp+880,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_ff));
    bufp->fullBit(oldp+881,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_ff));
    bufp->fullBit(oldp+882,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__mul_stall_next));
    bufp->fullCData(oldp+883,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff),4);
    bufp->fullIData(oldp+884,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_ff),32);
    bufp->fullIData(oldp+885,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_ff),32);
    bufp->fullBit(oldp+886,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_ff));
    bufp->fullBit(oldp+887,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_sign_ff));
    bufp->fullBit(oldp+888,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff))));
    bufp->fullBit(oldp+889,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_ff));
    bufp->fullQData(oldp+890,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult),64);
    bufp->fullQData(oldp+892,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_ss),64);
    bufp->fullIData(oldp+894,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_ff 
                                       >> 1U))),32);
    bufp->fullBit(oldp+895,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_ff))));
    bufp->fullCData(oldp+896,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_ff),2);
    bufp->fullCData(oldp+897,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_ff),2);
    bufp->fullCData(oldp+898,(vlSelf->pcore_tb__DOT__dut__DOT____Vcellinp__plic_top_module__irq_src_i),2);
    bufp->fullCData(oldp+899,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_ff) 
                                << 1U) | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_ff))),2);
    bufp->fullCData(oldp+900,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_ff),2);
    bufp->fullCData(oldp+901,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff))),3);
    bufp->fullCData(oldp+902,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_ff) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+903,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff))),3);
    bufp->fullCData(oldp+904,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_ff) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+905,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff))),2);
    bufp->fullCData(oldp+906,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+907,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i))),2);
    bufp->fullCData(oldp+908,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT____Vcellinp__plic_regs_module__claim_idx_i) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+909,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
    bufp->fullCData(oldp+910,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__prio_th),3);
    bufp->fullBit(oldp+911,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_req_next));
    bufp->fullCData(oldp+912,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__0__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
    bufp->fullCData(oldp+913,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_ff),2);
    bufp->fullCData(oldp+914,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__prio_th),3);
    bufp->fullBit(oldp+915,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_req_next));
    bufp->fullCData(oldp+916,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__genblk1__BRA__1__KET____DOT__plic_target_module__DOT__irq_idx_next),2);
    bufp->fullCData(oldp+917,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_ff),2);
    bufp->fullCData(oldp+918,(vlSelf->pcore_tb__DOT__dut__DOT____Vcellinp__plic_top_module__irq_src_i),2);
    bufp->fullCData(oldp+919,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_src_ff),2);
    bufp->fullCData(oldp+920,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_default),2);
    bufp->fullCData(oldp+921,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_id),2);
    bufp->fullCData(oldp+922,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode),2);
    bufp->fullCData(oldp+923,((0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff))),8);
    bufp->fullCData(oldp+924,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff) 
                                        >> 8U))),8);
    bufp->fullCData(oldp+925,((0xffU & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff))),8);
    bufp->fullCData(oldp+926,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff) 
                                        >> 8U))),8);
    bufp->fullBit(oldp+927,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count))));
    bufp->fullBit(oldp+928,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count))));
    bufp->fullBit(oldp+929,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count))));
    bufp->fullCData(oldp+930,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_data),8);
    bufp->fullCData(oldp+931,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_data),8);
    bufp->fullBit(oldp+932,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_write));
    bufp->fullBit(oldp+933,(((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count)) 
                             > (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff))));
    bufp->fullBit(oldp+934,(((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count)) 
                             < (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff))));
    bufp->fullCData(oldp+935,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff),3);
    bufp->fullCData(oldp+936,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff),3);
    bufp->fullSData(oldp+937,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__c2t_delay),9);
    bufp->fullSData(oldp+938,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__t2c_delay),9);
    bufp->fullCData(oldp+939,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_intercs),8);
    bufp->fullCData(oldp+940,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_interfr),8);
    bufp->fullCData(oldp+941,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__count_up),2);
    bufp->fullCData(oldp+942,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_slave_sel),2);
    bufp->fullCData(oldp+943,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_shift_data),8);
    bufp->fullCData(oldp+944,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_shift_data),8);
    bufp->fullCData(oldp+945,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count),4);
    bufp->fullCData(oldp+946,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count),4);
    bufp->fullCData(oldp+947,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__reg_tx_data),8);
    bufp->fullBit(oldp+948,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count))));
    bufp->fullCData(oldp+949,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[0]),8);
    bufp->fullCData(oldp+950,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[1]),8);
    bufp->fullCData(oldp+951,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[2]),8);
    bufp->fullCData(oldp+952,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[3]),8);
    bufp->fullCData(oldp+953,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[4]),8);
    bufp->fullCData(oldp+954,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[5]),8);
    bufp->fullCData(oldp+955,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[6]),8);
    bufp->fullCData(oldp+956,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__fifo_buffer[7]),8);
    bufp->fullCData(oldp+957,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__read_ptr),3);
    bufp->fullCData(oldp+958,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__write_ptr),3);
    bufp->fullIData(oldp+959,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+960,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[0]),8);
    bufp->fullCData(oldp+961,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[1]),8);
    bufp->fullCData(oldp+962,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[2]),8);
    bufp->fullCData(oldp+963,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[3]),8);
    bufp->fullCData(oldp+964,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[4]),8);
    bufp->fullCData(oldp+965,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[5]),8);
    bufp->fullCData(oldp+966,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[6]),8);
    bufp->fullCData(oldp+967,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__fifo_buffer[7]),8);
    bufp->fullCData(oldp+968,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__read_ptr),3);
    bufp->fullCData(oldp+969,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__write_ptr),3);
    bufp->fullIData(oldp+970,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+971,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff),16);
    bufp->fullSData(oldp+972,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff),16);
    bufp->fullCData(oldp+973,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff),2);
    bufp->fullCData(oldp+974,(((((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__rx_fifo_count)) 
                                 > (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)) 
                                << 1U) | ((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_datapath_module__DOT__tx_fifo_count)) 
                                          < (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))),2);
    bufp->fullCData(oldp+975,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_pend_ff),2);
    bufp->fullBit(oldp+976,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_valid_ff));
    bufp->fullBit(oldp+977,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff))));
    bufp->fullBit(oldp+978,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_ff));
    bufp->fullBit(oldp+979,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_ff));
    bufp->fullCData(oldp+980,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_ff),8);
    bufp->fullCData(oldp+981,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_ff),8);
    bufp->fullCData(oldp+982,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rx_ff),8);
    bufp->fullCData(oldp+983,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_ff)
                                ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_ff)
                                : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rx_ff))),8);
    bufp->fullCData(oldp+984,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff),8);
    bufp->fullIData(oldp+985,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_txctrl_ff),20);
    bufp->fullIData(oldp+986,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rxctrl_ff),20);
    bufp->fullCData(oldp+987,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_ff),8);
    bufp->fullCData(oldp+988,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_ff),8);
    bufp->fullCData(oldp+989,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_ff),4);
    bufp->fullCData(oldp+990,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_next),4);
    bufp->fullBit(oldp+991,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__bit_count_ff))));
    bufp->fullBit(oldp+992,((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff))));
    bufp->fullBit(oldp+993,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_mid_point));
    bufp->fullCData(oldp+994,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_ff),8);
    bufp->fullCData(oldp+995,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sample_count_next),8);
    bufp->fullCData(oldp+996,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_ff),8);
    bufp->fullCData(oldp+997,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__sbit_sample_count_next),8);
    bufp->fullCData(oldp+998,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_ff),2);
    bufp->fullCData(oldp+999,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_ff),8);
    bufp->fullCData(oldp+1000,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_next),8);
    bufp->fullCData(oldp+1001,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff),4);
    bufp->fullCData(oldp+1002,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_next),4);
    bufp->fullSData(oldp+1003,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_ff),9);
    bufp->fullSData(oldp+1004,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__shifter_next),9);
    bufp->fullBit(oldp+1005,((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__sample_count_ff))));
    bufp->fullBit(oldp+1006,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__bit_count_ff))));
    bufp->fullCData(oldp+1007,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_ff),2);
    bufp->fullCData(oldp+1008,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_tx_module__DOT__state_next),2);
    bufp->fullBit(oldp+1009,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_valid_ff));
    bufp->fullBit(oldp+1010,((0U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff))));
    bufp->fullBit(oldp+1011,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_ff));
    bufp->fullBit(oldp+1012,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_ff));
    bufp->fullCData(oldp+1013,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_ff),8);
    bufp->fullCData(oldp+1014,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_ff),8);
    bufp->fullCData(oldp+1015,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_rx_ff),8);
    bufp->fullCData(oldp+1016,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_ff)
                                 ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_ff)
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_rx_ff))),8);
    bufp->fullCData(oldp+1017,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_baud_ff),8);
    bufp->fullCData(oldp+1018,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lctrl_ff),8);
    bufp->fullCData(oldp+1019,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_ff),8);
    bufp->fullCData(oldp+1020,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_ff),8);
    bufp->fullCData(oldp+1021,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lstatus_next),8);
    bufp->fullCData(oldp+1022,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_scratch_ff),8);
    bufp->fullCData(oldp+1023,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_ff),4);
    bufp->fullCData(oldp+1024,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_next),4);
    bufp->fullBit(oldp+1025,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__bit_count_ff))));
    bufp->fullBit(oldp+1026,((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff))));
    bufp->fullBit(oldp+1027,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_mid_point));
    bufp->fullCData(oldp+1028,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_ff),8);
    bufp->fullCData(oldp+1029,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sample_count_next),8);
    bufp->fullCData(oldp+1030,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_ff),8);
    bufp->fullCData(oldp+1031,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__sbit_sample_count_next),8);
    bufp->fullCData(oldp+1032,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_ff),2);
    bufp->fullCData(oldp+1033,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_ff),8);
    bufp->fullCData(oldp+1034,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_next),8);
    bufp->fullCData(oldp+1035,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff),4);
    bufp->fullCData(oldp+1036,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_next),4);
    bufp->fullSData(oldp+1037,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_ff),9);
    bufp->fullSData(oldp+1038,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__shifter_next),9);
    bufp->fullBit(oldp+1039,((1U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__sample_count_ff))));
    bufp->fullBit(oldp+1040,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__bit_count_ff))));
    bufp->fullCData(oldp+1041,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_ff),2);
    bufp->fullCData(oldp+1042,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_tx_module__DOT__state_next),2);
    bufp->fullIData(oldp+1043,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req)
                                 ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)
                                 : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req)
                                     ? (0x80000000U 
                                        | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code))
                                     : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scause_ff))),32);
    bufp->fullBit(oldp+1044,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i)
                                     ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_sign_ff)
                                     : (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1 
                                        >> 0x1fU)))));
    bufp->fullBit(oldp+1045,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i)
                                     ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_sign_ff)
                                     : (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2 
                                        >> 0x1fU)))));
    bufp->fullBit(oldp+1046,((IData)((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff) 
                                       >> 3U) & (~ 
                                                 ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_ff) 
                                                  | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_next)))))));
    bufp->fullCData(oldp+1047,((3U & ((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                           << 0x19U) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 7U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff)))),2);
    bufp->fullCData(oldp+1048,((3U & ((2U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag))
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                           << 0x19U) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 7U))
                                       : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_ie_ff) 
                                          >> 2U)))),2);
    bufp->fullCData(oldp+1049,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csid)
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_id)))),2);
    bufp->fullCData(oldp+1050,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csdef)
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_reg_cs_default)))),2);
    bufp->fullCData(oldp+1051,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csmode)
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_cs_mode)))),2);
    bufp->fullSData(oldp+1052,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del0)
                                 ? (1U | ((0xff00U 
                                           & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              >> 0xeU)) 
                                          | (0xfeU 
                                             & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))))
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay0_ff))),16);
    bufp->fullSData(oldp+1053,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del1)
                                 ? ((0xff00U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 0xeU)) 
                                    | (0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U)))
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_delay1_ff))),16);
    bufp->fullCData(oldp+1054,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txdata)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_data)))),8);
    bufp->fullCData(oldp+1055,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txmark)
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_tx_mark_ff)))),3);
    bufp->fullCData(oldp+1056,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_rxmark)
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_mark_ff)))),3);
    bufp->fullCData(oldp+1057,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ie)
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_intr_enable_ff)))),2);
    bufp->fullCData(oldp+1058,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_reg_wr_flag)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_tx_ff)))),8);
    bufp->fullCData(oldp+1059,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__baud_reg_wr_flag)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_baud_ff)))),8);
    bufp->fullIData(oldp+1060,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__txctrl_reg_wr_flag)
                                 ? (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                               >> 6U))
                                 : vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_txctrl_ff)),20);
    bufp->fullIData(oldp+1061,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rxctrl_reg_wr_flag)
                                 ? (0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                               >> 6U))
                                 : vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_rxctrl_ff)),20);
    bufp->fullCData(oldp+1062,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__int_mask_reg_wr_flag)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_int_mask_ff)))),8);
    bufp->fullCData(oldp+1063,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_reg_wr_flag)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_tx_ff)))),8);
    bufp->fullCData(oldp+1064,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__lctrl_reg_wr_flag)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_lctrl_ff)))),8);
    bufp->fullCData(oldp+1065,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__ie_reg_wr_flag)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_ie_ff)))),8);
    bufp->fullCData(oldp+1066,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__scratch_reg_wr_flag)
                                          ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              << 0x1aU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                >> 6U))
                                          : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_reg_scratch_ff)))),8);
    bufp->fullIData(oldp+1067,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                        >> 2U))),32);
    bufp->fullBit(oldp+1068,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                            >> 1U)))));
    bufp->fullQData(oldp+1069,((0x3ffffffffULL & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                  >> 2U))),34);
    bufp->fullBit(oldp+1071,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                            >> 1U)))));
    bufp->fullBit(oldp+1072,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if))));
    bufp->fullBit(oldp+1073,((1U == (0xfffffU & (IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                         >> 0xeU))))));
    bufp->fullBit(oldp+1074,((1U != (0xfffffU & (IData)(
                                                        (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                         >> 0xeU))))));
    bufp->fullBit(oldp+1075,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                            >> 1U)))));
    bufp->fullIData(oldp+1076,(((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                               >> 5U)))
                                 ? ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                   >> 4U)))
                                     ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[3U]
                                     : vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[2U])
                                 : ((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                   >> 4U)))
                                     ? vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[1U]
                                     : vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[0U]))),32);
    bufp->fullIData(oldp+1077,((0x1fffffU & (IData)(
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                     >> 0xdU)))),21);
    bufp->fullCData(oldp+1078,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                              >> 4U)))),2);
    bufp->fullCData(oldp+1079,((0x7fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                 >> 6U)))),7);
    bufp->fullIData(oldp+1080,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__conc_32_misallign),32);
    bufp->fullIData(oldp+1081,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[0]),32);
    bufp->fullIData(oldp+1082,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[1]),32);
    bufp->fullIData(oldp+1083,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[2]),32);
    bufp->fullIData(oldp+1084,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[3]),32);
    bufp->fullIData(oldp+1085,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[4]),32);
    bufp->fullIData(oldp+1086,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[5]),32);
    bufp->fullIData(oldp+1087,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[6]),32);
    bufp->fullIData(oldp+1088,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[7]),32);
    bufp->fullIData(oldp+1089,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[8]),32);
    bufp->fullIData(oldp+1090,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[9]),32);
    bufp->fullIData(oldp+1091,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[10]),32);
    bufp->fullIData(oldp+1092,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[11]),32);
    bufp->fullIData(oldp+1093,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[12]),32);
    bufp->fullIData(oldp+1094,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[13]),32);
    bufp->fullIData(oldp+1095,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[14]),32);
    bufp->fullIData(oldp+1096,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[15]),32);
    bufp->fullIData(oldp+1097,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[16]),32);
    bufp->fullIData(oldp+1098,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[17]),32);
    bufp->fullIData(oldp+1099,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[18]),32);
    bufp->fullIData(oldp+1100,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[19]),32);
    bufp->fullIData(oldp+1101,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[20]),32);
    bufp->fullIData(oldp+1102,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[21]),32);
    bufp->fullIData(oldp+1103,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[22]),32);
    bufp->fullIData(oldp+1104,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[23]),32);
    bufp->fullIData(oldp+1105,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[24]),32);
    bufp->fullIData(oldp+1106,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[25]),32);
    bufp->fullIData(oldp+1107,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[26]),32);
    bufp->fullIData(oldp+1108,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[27]),32);
    bufp->fullIData(oldp+1109,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[28]),32);
    bufp->fullIData(oldp+1110,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[29]),32);
    bufp->fullIData(oldp+1111,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[30]),32);
    bufp->fullIData(oldp+1112,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file[31]),32);
    bufp->fullBit(oldp+1113,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__rx_pin_ff));
    bufp->fullBit(oldp+1114,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__rx_pin_ff));
    bufp->fullIData(oldp+1115,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2csr 
                                        >> 1U))),32);
    bufp->fullBit(oldp+1116,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__clint2csr))));
    bufp->fullQData(oldp+1117,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff),64);
    bufp->fullBit(oldp+1119,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dcache_flush_req));
    bufp->fullBit(oldp+1120,((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 4U)))));
    bufp->fullCData(oldp+1121,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1122,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 8U))),2);
    bufp->fullCData(oldp+1123,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 0x10U))),5);
    bufp->fullBit(oldp+1124,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                    >> 3U))));
    bufp->fullCData(oldp+1125,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                         >> 0x10U))),5);
    bufp->fullCData(oldp+1126,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 0xdU))),3);
    bufp->fullCData(oldp+1127,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1128,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                      >> 8U))),2);
    bufp->fullCData(oldp+1129,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 4U))),4);
    bufp->fullBit(oldp+1130,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                    >> 3U))));
    bufp->fullBit(oldp+1131,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                    >> 2U))));
    bufp->fullBit(oldp+1132,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                    >> 1U))));
    bufp->fullBit(oldp+1133,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)));
    bufp->fullCData(oldp+1134,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                        >> 4U))),4);
    bufp->fullBit(oldp+1135,((0U != (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 4U)))));
    bufp->fullBit(oldp+1136,((1U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 4U)))));
    bufp->fullIData(oldp+1137,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_result),32);
    bufp->fullBit(oldp+1138,((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 4U)))));
    bufp->fullBit(oldp+1139,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1140,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                    >> 8U))));
    bufp->fullBit(oldp+1141,((IData)((0U != (0x500U 
                                             & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff)))));
    bufp->fullBit(oldp+1142,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard));
    bufp->fullBit(oldp+1143,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard));
    bufp->fullBit(oldp+1144,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellinp__icache_controller_module__if2icache_req_kill_i));
    bufp->fullBit(oldp+1145,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__icache_flush_req));
    bufp->fullIData(oldp+1146,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if 
                                        >> 1U))),32);
    bufp->fullBit(oldp+1147,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if))));
    bufp->fullIData(oldp+1148,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mmu 
                                        >> 1U))),32);
    bufp->fullBit(oldp+1149,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mmu))));
    bufp->fullIData(oldp+1150,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                 << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                              >> 4U))),32);
    bufp->fullIData(oldp+1151,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                 << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                              >> 4U))),32);
    bufp->fullCData(oldp+1152,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1153,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1154,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
    bufp->fullIData(oldp+1155,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu 
                                        >> 1U))),32);
    bufp->fullBit(oldp+1156,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu))));
    bufp->fullIData(oldp+1157,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                 << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 6U))),32);
    bufp->fullIData(oldp+1158,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                 << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              >> 6U))),32);
    bufp->fullCData(oldp+1159,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                        >> 2U))),4);
    bufp->fullBit(oldp+1160,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1161,((1U & vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U])));
    bufp->fullBit(oldp+1162,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dmem_sel));
    bufp->fullBit(oldp+1163,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_sel));
    bufp->fullBit(oldp+1164,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__clint_sel));
    bufp->fullBit(oldp+1165,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__plic_sel));
    bufp->fullBit(oldp+1166,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__bmem_sel));
    bufp->fullBit(oldp+1167,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__uart_ns_sel));
    bufp->fullBit(oldp+1168,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__spi_sel));
    bufp->fullIData(oldp+1169,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2dbus 
                                        >> 1U))),32);
    bufp->fullBit(oldp+1170,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2dbus))));
    bufp->fullIData(oldp+1171,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                 << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              >> 6U))),32);
    bufp->fullSData(oldp+1172,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                           >> 6U))),16);
    bufp->fullBit(oldp+1173,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_req));
    bufp->fullBit(oldp+1174,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__w_req));
    bufp->fullQData(oldp+1175,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_next),64);
    bufp->fullBit(oldp+1177,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_lo_wr_flag));
    bufp->fullBit(oldp+1178,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_hi_wr_flag));
    bufp->fullBit(oldp+1179,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_lo_wr_flag));
    bufp->fullBit(oldp+1180,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_hi_wr_flag));
    bufp->fullBit(oldp+1181,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    bufp->fullBit(oldp+1182,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT____VdfgTmp_h1ec82566__0));
    bufp->fullBit(oldp+1183,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__st_req));
    bufp->fullQData(oldp+1184,((0x3ffffffffULL & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                                                  >> 3U))),34);
    bufp->fullBit(oldp+1186,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                                            >> 2U)))));
    bufp->fullBit(oldp+1187,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                                            >> 1U)))));
    bufp->fullBit(oldp+1188,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu))));
    bufp->fullBit(oldp+1189,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT____VdfgTmp_hd5ca5221__0));
    bufp->fullBit(oldp+1190,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                            >> 1U)))));
    bufp->fullIData(oldp+1191,((0x3fffffU & (IData)(
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                                     >> 0xcU)))),22);
    bufp->fullCData(oldp+1192,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                              >> 0xaU)))),2);
    bufp->fullBit(oldp+1193,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                            >> 9U)))));
    bufp->fullBit(oldp+1194,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                            >> 8U)))));
    bufp->fullBit(oldp+1195,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                            >> 7U)))));
    bufp->fullBit(oldp+1196,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                            >> 6U)))));
    bufp->fullBit(oldp+1197,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                            >> 5U)))));
    bufp->fullBit(oldp+1198,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                            >> 4U)))));
    bufp->fullBit(oldp+1199,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                            >> 3U)))));
    bufp->fullBit(oldp+1200,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                            >> 2U)))));
    bufp->fullBit(oldp+1201,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu 
                                            >> 1U)))));
    bufp->fullBit(oldp+1202,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb2mmu))));
    bufp->fullBit(oldp+1203,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ld_page_fault));
    bufp->fullBit(oldp+1204,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__st_page_fault));
    bufp->fullBit(oldp+1205,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_update));
    bufp->fullCData(oldp+1206,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__w_index),4);
    bufp->fullSData(oldp+1207,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                          >> 0xcU))),10);
    bufp->fullSData(oldp+1208,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                          >> 2U))),10);
    bufp->fullBit(oldp+1209,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1210,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U])));
    bufp->fullIData(oldp+1211,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                >> 0xaU)),22);
    bufp->fullCData(oldp+1212,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                      >> 8U))),2);
    bufp->fullBit(oldp+1213,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                    >> 7U))));
    bufp->fullBit(oldp+1214,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                    >> 6U))));
    bufp->fullBit(oldp+1215,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                    >> 5U))));
    bufp->fullBit(oldp+1216,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                    >> 4U))));
    bufp->fullBit(oldp+1217,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                    >> 3U))));
    bufp->fullBit(oldp+1218,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                    >> 2U))));
    bufp->fullBit(oldp+1219,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1220,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0U])));
    bufp->fullSData(oldp+1221,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                          >> 2U))),10);
    bufp->fullSData(oldp+1222,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                           << 8U) | 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[2U] 
                                           >> 0x18U)))),10);
    bufp->fullBit(oldp+1223,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[2U] 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1224,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[2U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+1225,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[2U])),22);
    bufp->fullCData(oldp+1226,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                >> 0x1eU)),2);
    bufp->fullBit(oldp+1227,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1228,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1229,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1230,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1231,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1232,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1233,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1234,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x16U))));
    bufp->fullSData(oldp+1235,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                           << 8U) | 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U] 
                                           >> 0x18U)))),10);
    bufp->fullSData(oldp+1236,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U] 
                                          >> 0xeU))),10);
    bufp->fullBit(oldp+1237,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U] 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1238,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U] 
                                    >> 0xcU))));
    bufp->fullIData(oldp+1239,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[4U] 
                                              << 0xaU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                                >> 0x16U)))),22);
    bufp->fullCData(oldp+1240,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                      >> 0x14U))),2);
    bufp->fullBit(oldp+1241,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1242,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1243,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1244,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1245,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1246,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1247,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1248,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[3U] 
                                    >> 0xcU))));
    bufp->fullSData(oldp+1249,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                          >> 0xeU))),10);
    bufp->fullSData(oldp+1250,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                          >> 4U))),10);
    bufp->fullBit(oldp+1251,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                    >> 3U))));
    bufp->fullBit(oldp+1252,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                    >> 2U))));
    bufp->fullIData(oldp+1253,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                              << 0x14U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                                >> 0xcU)))),22);
    bufp->fullCData(oldp+1254,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                      >> 0xaU))),2);
    bufp->fullBit(oldp+1255,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                    >> 9U))));
    bufp->fullBit(oldp+1256,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                    >> 8U))));
    bufp->fullBit(oldp+1257,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                    >> 7U))));
    bufp->fullBit(oldp+1258,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                    >> 6U))));
    bufp->fullBit(oldp+1259,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                    >> 5U))));
    bufp->fullBit(oldp+1260,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                    >> 4U))));
    bufp->fullBit(oldp+1261,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                    >> 3U))));
    bufp->fullBit(oldp+1262,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[5U] 
                                    >> 2U))));
    bufp->fullSData(oldp+1263,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                          >> 4U))),10);
    bufp->fullSData(oldp+1264,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                           << 6U) | 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U] 
                                           >> 0x1aU)))),10);
    bufp->fullBit(oldp+1265,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U] 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1266,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U] 
                                    >> 0x18U))));
    bufp->fullIData(oldp+1267,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U] 
                                             >> 2U))),22);
    bufp->fullCData(oldp+1268,((3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[7U])),2);
    bufp->fullBit(oldp+1269,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1270,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1271,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1272,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1273,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1274,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1275,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1276,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[6U] 
                                    >> 0x18U))));
    bufp->fullSData(oldp+1277,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                           << 6U) | 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U] 
                                           >> 0x1aU)))),10);
    bufp->fullSData(oldp+1278,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U] 
                                          >> 0x10U))),10);
    bufp->fullBit(oldp+1279,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1280,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U] 
                                    >> 0xeU))));
    bufp->fullIData(oldp+1281,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[9U] 
                                              << 8U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                                >> 0x18U)))),22);
    bufp->fullCData(oldp+1282,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                      >> 0x16U))),2);
    bufp->fullBit(oldp+1283,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1284,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1285,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1286,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1287,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1288,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1289,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1290,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[8U] 
                                    >> 0xeU))));
    bufp->fullSData(oldp+1291,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                          >> 0x10U))),10);
    bufp->fullSData(oldp+1292,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                          >> 6U))),10);
    bufp->fullBit(oldp+1293,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                    >> 5U))));
    bufp->fullBit(oldp+1294,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                    >> 4U))));
    bufp->fullIData(oldp+1295,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                              << 0x12U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                                >> 0xeU)))),22);
    bufp->fullCData(oldp+1296,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                      >> 0xcU))),2);
    bufp->fullBit(oldp+1297,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1298,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1299,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                    >> 9U))));
    bufp->fullBit(oldp+1300,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                    >> 8U))));
    bufp->fullBit(oldp+1301,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                    >> 7U))));
    bufp->fullBit(oldp+1302,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                    >> 6U))));
    bufp->fullBit(oldp+1303,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                    >> 5U))));
    bufp->fullBit(oldp+1304,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xaU] 
                                    >> 4U))));
    bufp->fullSData(oldp+1305,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                          >> 6U))),10);
    bufp->fullSData(oldp+1306,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                           << 4U) | 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
                                           >> 0x1cU)))),10);
    bufp->fullBit(oldp+1307,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1308,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
                                    >> 0x1aU))));
    bufp->fullIData(oldp+1309,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
                                             >> 4U))),22);
    bufp->fullCData(oldp+1310,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1311,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU] 
                                    >> 1U))));
    bufp->fullBit(oldp+1312,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xcU])));
    bufp->fullBit(oldp+1313,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1314,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1315,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1316,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1317,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1318,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xbU] 
                                    >> 0x1aU))));
    bufp->fullSData(oldp+1319,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                           << 4U) | 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU] 
                                           >> 0x1cU)))),10);
    bufp->fullSData(oldp+1320,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU] 
                                          >> 0x12U))),10);
    bufp->fullBit(oldp+1321,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1322,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU] 
                                    >> 0x10U))));
    bufp->fullIData(oldp+1323,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xeU] 
                                              << 6U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                                >> 0x1aU)))),22);
    bufp->fullCData(oldp+1324,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                      >> 0x18U))),2);
    bufp->fullBit(oldp+1325,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1326,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1327,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1328,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1329,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1330,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1331,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1332,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xdU] 
                                    >> 0x10U))));
    bufp->fullSData(oldp+1333,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                          >> 0x12U))),10);
    bufp->fullSData(oldp+1334,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                          >> 8U))),10);
    bufp->fullBit(oldp+1335,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                    >> 7U))));
    bufp->fullBit(oldp+1336,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                    >> 6U))));
    bufp->fullIData(oldp+1337,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                              << 0x10U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                                >> 0x10U)))),22);
    bufp->fullCData(oldp+1338,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                      >> 0xeU))),2);
    bufp->fullBit(oldp+1339,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1340,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1341,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1342,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1343,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                    >> 9U))));
    bufp->fullBit(oldp+1344,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                    >> 8U))));
    bufp->fullBit(oldp+1345,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                    >> 7U))));
    bufp->fullBit(oldp+1346,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0xfU] 
                                    >> 6U))));
    bufp->fullSData(oldp+1347,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                          >> 8U))),10);
    bufp->fullSData(oldp+1348,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                           << 2U) | 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                           >> 0x1eU)))),10);
    bufp->fullBit(oldp+1349,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1350,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                    >> 0x1cU))));
    bufp->fullIData(oldp+1351,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                             >> 6U))),22);
    bufp->fullCData(oldp+1352,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                      >> 4U))),2);
    bufp->fullBit(oldp+1353,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                    >> 3U))));
    bufp->fullBit(oldp+1354,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                    >> 2U))));
    bufp->fullBit(oldp+1355,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1356,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x11U])));
    bufp->fullBit(oldp+1357,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1358,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1359,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1360,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x10U] 
                                    >> 0x1cU))));
    bufp->fullSData(oldp+1361,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                           << 2U) | 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U] 
                                           >> 0x1eU)))),10);
    bufp->fullSData(oldp+1362,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U] 
                                          >> 0x14U))),10);
    bufp->fullBit(oldp+1363,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1364,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U] 
                                    >> 0x12U))));
    bufp->fullIData(oldp+1365,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x13U] 
                                              << 4U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                                >> 0x1cU)))),22);
    bufp->fullCData(oldp+1366,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                      >> 0x1aU))),2);
    bufp->fullBit(oldp+1367,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1368,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1369,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1370,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1371,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1372,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1373,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1374,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x12U] 
                                    >> 0x12U))));
    bufp->fullSData(oldp+1375,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                          >> 0x14U))),10);
    bufp->fullSData(oldp+1376,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                          >> 0xaU))),10);
    bufp->fullBit(oldp+1377,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                    >> 9U))));
    bufp->fullBit(oldp+1378,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                    >> 8U))));
    bufp->fullIData(oldp+1379,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                              << 0xeU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                                >> 0x12U)))),22);
    bufp->fullCData(oldp+1380,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                      >> 0x10U))),2);
    bufp->fullBit(oldp+1381,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1382,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1383,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1384,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1385,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1386,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1387,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                    >> 9U))));
    bufp->fullBit(oldp+1388,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x14U] 
                                    >> 8U))));
    bufp->fullSData(oldp+1389,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                          >> 0xaU))),10);
    bufp->fullSData(oldp+1390,((0x3ffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U])),10);
    bufp->fullBit(oldp+1391,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1392,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                    >> 0x1eU))));
    bufp->fullIData(oldp+1393,((0x3fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                             >> 8U))),22);
    bufp->fullCData(oldp+1394,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                      >> 6U))),2);
    bufp->fullBit(oldp+1395,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                    >> 5U))));
    bufp->fullBit(oldp+1396,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                    >> 4U))));
    bufp->fullBit(oldp+1397,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                    >> 3U))));
    bufp->fullBit(oldp+1398,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                    >> 2U))));
    bufp->fullBit(oldp+1399,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1400,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x16U])));
    bufp->fullBit(oldp+1401,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1402,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x15U] 
                                    >> 0x1eU))));
    bufp->fullSData(oldp+1403,((0x3ffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U])),10);
    bufp->fullSData(oldp+1404,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x18U] 
                                >> 0x16U)),10);
    bufp->fullBit(oldp+1405,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x18U] 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1406,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x18U] 
                                    >> 0x14U))));
    bufp->fullIData(oldp+1407,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x18U] 
                                              << 2U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                                >> 0x1eU)))),22);
    bufp->fullCData(oldp+1408,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                      >> 0x1cU))),2);
    bufp->fullBit(oldp+1409,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1410,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1411,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1412,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1413,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1414,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1415,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1416,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x17U] 
                                    >> 0x14U))));
    bufp->fullSData(oldp+1417,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU] 
                                >> 0x16U)),10);
    bufp->fullSData(oldp+1418,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU] 
                                          >> 0xcU))),10);
    bufp->fullBit(oldp+1419,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1420,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU] 
                                    >> 0xaU))));
    bufp->fullIData(oldp+1421,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x1aU] 
                                              << 0xcU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                                >> 0x14U)))),22);
    bufp->fullCData(oldp+1422,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                      >> 0x12U))),2);
    bufp->fullBit(oldp+1423,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1424,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1425,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1426,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1427,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1428,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1429,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1430,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__dtlb_module__DOT__tlb_array_next[0x19U] 
                                    >> 0xaU))));
    bufp->fullCData(oldp+1431,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__w_index),2);
    bufp->fullSData(oldp+1432,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                          >> 0xcU))),10);
    bufp->fullSData(oldp+1433,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                          >> 2U))),10);
    bufp->fullBit(oldp+1434,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1435,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U])));
    bufp->fullIData(oldp+1436,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                >> 0xaU)),22);
    bufp->fullCData(oldp+1437,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                      >> 8U))),2);
    bufp->fullBit(oldp+1438,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                    >> 7U))));
    bufp->fullBit(oldp+1439,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                    >> 6U))));
    bufp->fullBit(oldp+1440,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                    >> 5U))));
    bufp->fullBit(oldp+1441,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                    >> 4U))));
    bufp->fullBit(oldp+1442,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                    >> 3U))));
    bufp->fullBit(oldp+1443,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                    >> 2U))));
    bufp->fullBit(oldp+1444,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1445,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[0U])));
    bufp->fullSData(oldp+1446,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                          >> 2U))),10);
    bufp->fullSData(oldp+1447,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                           << 8U) | 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[2U] 
                                           >> 0x18U)))),10);
    bufp->fullBit(oldp+1448,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[2U] 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1449,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[2U] 
                                    >> 0x16U))));
    bufp->fullIData(oldp+1450,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[2U])),22);
    bufp->fullCData(oldp+1451,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                >> 0x1eU)),2);
    bufp->fullBit(oldp+1452,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1453,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1454,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1455,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1456,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1457,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1458,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1459,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[1U] 
                                    >> 0x16U))));
    bufp->fullSData(oldp+1460,((0x3ffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                           << 8U) | 
                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U] 
                                           >> 0x18U)))),10);
    bufp->fullSData(oldp+1461,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U] 
                                          >> 0xeU))),10);
    bufp->fullBit(oldp+1462,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U] 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1463,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U] 
                                    >> 0xcU))));
    bufp->fullIData(oldp+1464,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[4U] 
                                              << 0xaU) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                                >> 0x16U)))),22);
    bufp->fullCData(oldp+1465,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                      >> 0x14U))),2);
    bufp->fullBit(oldp+1466,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1467,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1468,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1469,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1470,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1471,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1472,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1473,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[3U] 
                                    >> 0xcU))));
    bufp->fullSData(oldp+1474,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U] 
                                          >> 0xeU))),10);
    bufp->fullSData(oldp+1475,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U] 
                                          >> 4U))),10);
    bufp->fullBit(oldp+1476,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U] 
                                    >> 3U))));
    bufp->fullBit(oldp+1477,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U] 
                                    >> 2U))));
    bufp->fullIData(oldp+1478,((0x3fffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[6U] 
                                              << 0x14U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                                >> 0xcU)))),22);
    bufp->fullCData(oldp+1479,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                      >> 0xaU))),2);
    bufp->fullBit(oldp+1480,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                    >> 9U))));
    bufp->fullBit(oldp+1481,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                    >> 8U))));
    bufp->fullBit(oldp+1482,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                    >> 7U))));
    bufp->fullBit(oldp+1483,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                    >> 6U))));
    bufp->fullBit(oldp+1484,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                    >> 5U))));
    bufp->fullBit(oldp+1485,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                    >> 4U))));
    bufp->fullBit(oldp+1486,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                    >> 3U))));
    bufp->fullBit(oldp+1487,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb_array_next[5U] 
                                    >> 2U))));
    bufp->fullBit(oldp+1488,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__dtlb_miss));
    bufp->fullCData(oldp+1489,((0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                         >> 0x10U))),5);
    bufp->fullCData(oldp+1490,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                      >> 0xdU))),3);
    bufp->fullCData(oldp+1491,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                      >> 0xaU))),3);
    bufp->fullCData(oldp+1492,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                      >> 8U))),2);
    bufp->fullCData(oldp+1493,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                        >> 4U))),4);
    bufp->fullBit(oldp+1494,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                    >> 3U))));
    bufp->fullBit(oldp+1495,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                    >> 2U))));
    bufp->fullBit(oldp+1496,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next 
                                    >> 1U))));
    bufp->fullBit(oldp+1497,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_next)));
    bufp->fullIData(oldp+1498,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result),32);
    bufp->fullIData(oldp+1499,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs2_data),32);
    bufp->fullIData(oldp+1500,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[2U]),32);
    bufp->fullIData(oldp+1501,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[1U]),32);
    bufp->fullIData(oldp+1502,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_next[0U]),32);
    bufp->fullIData(oldp+1503,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[2U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                                              >> 1U))),32);
    bufp->fullIData(oldp+1504,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U] 
                                              >> 1U))),32);
    bufp->fullBit(oldp+1505,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U])));
    bufp->fullIData(oldp+1506,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_1),32);
    bufp->fullIData(oldp+1507,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2),32);
    bufp->fullSData(oldp+1508,((0xfffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                          >> 5U))),12);
    bufp->fullIData(oldp+1509,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1510,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1511,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1512,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U] 
                                        >> 1U))),4);
    bufp->fullBit(oldp+1513,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_next[0U])));
    bufp->fullCData(oldp+1514,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                      >> 7U))),2);
    bufp->fullCData(oldp+1515,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                      >> 4U))),3);
    bufp->fullBit(oldp+1516,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                    >> 3U))));
    bufp->fullBit(oldp+1517,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                    >> 2U))));
    bufp->fullBit(oldp+1518,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next) 
                                    >> 1U))));
    bufp->fullBit(oldp+1519,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_ctrl_next))));
    bufp->fullBit(oldp+1520,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                                            >> 1U)))));
    bufp->fullBit(oldp+1521,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu))));
    bufp->fullBit(oldp+1522,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu))));
    bufp->fullIData(oldp+1523,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__w_data),32);
    bufp->fullBit(oldp+1524,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
    bufp->fullBit(oldp+1525,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
    bufp->fullBit(oldp+1526,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
    bufp->fullIData(oldp+1527,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[2U]),32);
    bufp->fullIData(oldp+1528,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[1U]),32);
    bufp->fullIData(oldp+1529,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_data[0U]),32);
    bufp->fullCData(oldp+1530,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                        >> 3U))),4);
    bufp->fullBit(oldp+1531,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                    >> 2U))));
    bufp->fullBit(oldp+1532,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl) 
                                    >> 1U))));
    bufp->fullBit(oldp+1533,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2amo_ctrl))));
    bufp->fullIData(oldp+1534,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
    bufp->fullIData(oldp+1535,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_result_next),32);
    bufp->fullIData(oldp+1536,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1537,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1538,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1539,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_data_next[0U])),5);
    bufp->fullCData(oldp+1540,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next) 
                                      >> 1U))),3);
    bufp->fullBit(oldp+1541,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu2wrb_ctrl_next))));
    bufp->fullIData(oldp+1542,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__mul2wrb_next),32);
    bufp->fullIData(oldp+1543,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT____VdfgExtracted_h46a986c8__0),32);
    bufp->fullIData(oldp+1544,((0xfffffffcU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_result)),32);
    bufp->fullBit(oldp+1545,((1U & (~ (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__icache2if)))));
    bufp->fullBit(oldp+1546,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgExtracted_h50a45c3b__0));
    bufp->fullBit(oldp+1547,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h46719089__0));
    bufp->fullBit(oldp+1548,(vlSelf->__VdfgTmp_h2981c0ee__0));
    bufp->fullBit(oldp+1549,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgTmp_h41bfb133__0));
    bufp->fullBit(oldp+1550,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                    >> 3U))));
    bufp->fullBit(oldp+1551,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                    >> 2U))));
    bufp->fullBit(oldp+1552,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe) 
                                    >> 1U))));
    bufp->fullBit(oldp+1553,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2exe))));
    bufp->fullBit(oldp+1554,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                    >> 3U))));
    bufp->fullBit(oldp+1555,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                    >> 2U))));
    bufp->fullBit(oldp+1556,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if) 
                                    >> 1U))));
    bufp->fullBit(oldp+1557,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2if))));
    bufp->fullBit(oldp+1558,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    bufp->fullBit(oldp+1559,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                    >> 8U))));
    bufp->fullBit(oldp+1560,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                    >> 7U))));
    bufp->fullBit(oldp+1561,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                    >> 6U))));
    bufp->fullBit(oldp+1562,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                    >> 5U))));
    bufp->fullBit(oldp+1563,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                    >> 4U))));
    bufp->fullBit(oldp+1564,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                    >> 3U))));
    bufp->fullBit(oldp+1565,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                    >> 2U))));
    bufp->fullBit(oldp+1566,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop) 
                                    >> 1U))));
    bufp->fullBit(oldp+1567,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__fwd2ptop))));
    bufp->fullBit(oldp+1568,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__ld_req));
    bufp->fullBit(oldp+1569,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__st_req));
    bufp->fullBit(oldp+1570,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__rd_wr_req));
    bufp->fullBit(oldp+1571,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_pass));
    bufp->fullBit(oldp+1572,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_save));
    bufp->fullBit(oldp+1573,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_next));
    bufp->fullCData(oldp+1574,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__state_next),3);
    bufp->fullBit(oldp+1575,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U] 
                                    >> 2U))));
    bufp->fullBit(oldp+1576,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U])));
    bufp->fullIData(oldp+1577,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[2U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                                              >> 1U))),32);
    bufp->fullIData(oldp+1578,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[1U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2cext[0U] 
                                              >> 1U))),32);
    bufp->fullIData(oldp+1579,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__misalign__pc_out),32);
    bufp->fullBit(oldp+1580,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__misalign__DOT__is_missaligned));
    bufp->fullIData(oldp+1581,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rdata),32);
    bufp->fullIData(oldp+1582,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata),32);
    bufp->fullBit(oldp+1583,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_req));
    bufp->fullBit(oldp+1584,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_exc_req));
    bufp->fullBit(oldp+1585,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_req));
    bufp->fullCData(oldp+1586,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code),4);
    bufp->fullIData(oldp+1587,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next),32);
    bufp->fullIData(oldp+1588,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_next),32);
    bufp->fullIData(oldp+1589,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_next),32);
    bufp->fullIData(oldp+1590,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_next),32);
    bufp->fullIData(oldp+1591,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_next),32);
    bufp->fullIData(oldp+1592,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcounteren_next),32);
    bufp->fullIData(oldp+1593,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                >> 4U)),28);
    bufp->fullBit(oldp+1594,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                    >> 3U))));
    bufp->fullBit(oldp+1595,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                    >> 2U))));
    bufp->fullBit(oldp+1596,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next 
                                    >> 1U))));
    bufp->fullBit(oldp+1597,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcountinhibit_next)));
    bufp->fullBit(oldp+1598,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                              >> 0x1fU)));
    bufp->fullCData(oldp+1599,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                         >> 0x17U))),8);
    bufp->fullBit(oldp+1600,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1601,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1602,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1603,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1604,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1605,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 0x11U))));
    bufp->fullCData(oldp+1606,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0xfU))),2);
    bufp->fullCData(oldp+1607,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0xdU))),2);
    bufp->fullCData(oldp+1608,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 0xbU))),2);
    bufp->fullCData(oldp+1609,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                      >> 9U))),2);
    bufp->fullBit(oldp+1610,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 8U))));
    bufp->fullBit(oldp+1611,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 7U))));
    bufp->fullBit(oldp+1612,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 6U))));
    bufp->fullBit(oldp+1613,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 5U))));
    bufp->fullBit(oldp+1614,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 4U))));
    bufp->fullBit(oldp+1615,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 3U))));
    bufp->fullBit(oldp+1616,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 2U))));
    bufp->fullBit(oldp+1617,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next 
                                    >> 1U))));
    bufp->fullBit(oldp+1618,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mstatus_next)));
    bufp->fullIData(oldp+1619,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_medeleg_next),32);
    bufp->fullIData(oldp+1620,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mideleg_next),32);
    bufp->fullSData(oldp+1621,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                >> 0x11U)),15);
    bufp->fullBit(oldp+1622,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 0x10U))));
    bufp->fullCData(oldp+1623,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                        >> 0xcU))),4);
    bufp->fullBit(oldp+1624,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1625,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1626,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 9U))));
    bufp->fullBit(oldp+1627,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 8U))));
    bufp->fullBit(oldp+1628,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 7U))));
    bufp->fullBit(oldp+1629,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 6U))));
    bufp->fullBit(oldp+1630,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 5U))));
    bufp->fullBit(oldp+1631,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 4U))));
    bufp->fullBit(oldp+1632,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 3U))));
    bufp->fullBit(oldp+1633,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 2U))));
    bufp->fullBit(oldp+1634,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next 
                                    >> 1U))));
    bufp->fullBit(oldp+1635,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mie_next)));
    bufp->fullIData(oldp+1636,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next 
                                >> 2U)),30);
    bufp->fullCData(oldp+1637,((3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtvec_next)),2);
    bufp->fullIData(oldp+1638,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mepc_next),32);
    bufp->fullIData(oldp+1639,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcause_next),32);
    bufp->fullSData(oldp+1640,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                >> 0x11U)),15);
    bufp->fullBit(oldp+1641,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 0x10U))));
    bufp->fullCData(oldp+1642,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                        >> 0xcU))),4);
    bufp->fullBit(oldp+1643,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1644,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1645,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 9U))));
    bufp->fullBit(oldp+1646,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 8U))));
    bufp->fullBit(oldp+1647,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 7U))));
    bufp->fullBit(oldp+1648,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 6U))));
    bufp->fullBit(oldp+1649,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 5U))));
    bufp->fullBit(oldp+1650,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 4U))));
    bufp->fullBit(oldp+1651,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 3U))));
    bufp->fullBit(oldp+1652,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 2U))));
    bufp->fullBit(oldp+1653,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next 
                                    >> 1U))));
    bufp->fullBit(oldp+1654,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mip_next)));
    bufp->fullIData(oldp+1655,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_next 
                                >> 2U)),30);
    bufp->fullCData(oldp+1656,((3U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stvec_next)),2);
    bufp->fullBit(oldp+1657,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_next 
                              >> 0x1fU)));
    bufp->fullSData(oldp+1658,((0x1ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_next 
                                          >> 0x16U))),9);
    bufp->fullIData(oldp+1659,((0x3fffffU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_satp_next)),22);
    bufp->fullIData(oldp+1660,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_scounteren_next),32);
    bufp->fullIData(oldp+1661,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sip_mask),32);
    bufp->fullCData(oldp+1662,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__priv_mode_next),2);
    bufp->fullCData(oldp+1663,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__trap_priv_mode),2);
    bufp->fullBit(oldp+1664,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_delegated_req));
    bufp->fullBit(oldp+1665,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req));
    bufp->fullCData(oldp+1666,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_code),4);
    bufp->fullIData(oldp+1667,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_new_pc),32);
    bufp->fullIData(oldp+1668,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_new_pc),32);
    bufp->fullBit(oldp+1669,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req) 
                              | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req) 
                                 | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req)))));
    bufp->fullBit(oldp+1670,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_req));
    bufp->fullBit(oldp+1671,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__meip_irq_req));
    bufp->fullBit(oldp+1672,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mtip_irq_req));
    bufp->fullBit(oldp+1673,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__msip_irq_req));
    bufp->fullBit(oldp+1674,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__irq_accept_flag));
    bufp->fullBit(oldp+1675,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req));
    bufp->fullBit(oldp+1676,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req));
    bufp->fullBit(oldp+1677,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_pc_req));
    bufp->fullBit(oldp+1678,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__lsu_pf_exc_req))));
    bufp->fullBit(oldp+1679,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_exc_req))));
    bufp->fullBit(oldp+1680,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                              & (3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)))));
    bufp->fullBit(oldp+1681,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__mret_pc_req));
    bufp->fullBit(oldp+1682,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req));
    bufp->fullBit(oldp+1683,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_pc_req));
    bufp->fullBit(oldp+1684,((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))));
    bufp->fullBit(oldp+1685,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__sret_pc_req));
    bufp->fullBit(oldp+1686,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu))));
    bufp->fullBit(oldp+1687,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2lsu 
                                            >> 1U)))));
    bufp->fullBit(oldp+1688,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__lsu_pf_exc_req));
    bufp->fullBit(oldp+1689,((3U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code))));
    bufp->fullBit(oldp+1690,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__wfi_next));
    bufp->fullBit(oldp+1691,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycle_inc));
    bufp->fullBit(oldp+1692,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mcycleh_inc));
    bufp->fullBit(oldp+1693,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstret_inc));
    bufp->fullBit(oldp+1694,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_minstreth_inc));
    bufp->fullBit(oldp+1695,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ebreak));
    bufp->fullBit(oldp+1696,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__is_not_ecall));
    bufp->fullBit(oldp+1697,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__satp_mode));
    bufp->fullBit(oldp+1698,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_vaddr_iflush_req));
    bufp->fullBit(oldp+1699,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__icache_flush_req));
    bufp->fullIData(oldp+1700,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__operand_rs1_data),32);
    bufp->fullIData(oldp+1701,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_adder_output),32);
    bufp->fullIData(oldp+1702,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_operand_2),32);
    bufp->fullQData(oldp+1703,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output),33);
    bufp->fullBit(oldp+1705,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output))));
    bufp->fullBit(oldp+1706,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_output 
                                            >> 0x1fU)))));
    bufp->fullBit(oldp+1707,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__cmp_overflow));
    bufp->fullCData(oldp+1708,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__execute_module__DOT__alu_operand_2)),5);
    bufp->fullBit(oldp+1709,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__ld_use_hazard));
    bufp->fullBit(oldp+1710,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_csr_req));
    bufp->fullBit(oldp+1711,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__if_id_exe_stall));
    bufp->fullBit(oldp+1712,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i));
    bufp->fullBit(oldp+1713,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_flush));
    bufp->fullBit(oldp+1714,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_stall_next));
    bufp->fullBit(oldp+1715,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__id_exe_flush));
    bufp->fullBit(oldp+1716,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__exe_new_pc_req));
    bufp->fullIData(oldp+1717,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_word),32);
    bufp->fullSData(oldp+1718,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_hword),16);
    bufp->fullCData(oldp+1719,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__rdata_byte),8);
    bufp->fullBit(oldp+1720,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__ld_req));
    bufp->fullBit(oldp+1721,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__st_req));
    bufp->fullBit(oldp+1722,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT____VdfgExtracted_h50a45c3b__0));
    bufp->fullBit(oldp+1723,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_flush_i));
    bufp->fullIData(oldp+1724,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr1_next),32);
    bufp->fullIData(oldp+1725,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_opr2_next),32);
    bufp->fullBit(oldp+1726,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ack_next));
    bufp->fullIData(oldp+1727,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_result_next),32);
    bufp->fullQData(oldp+1728,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_su_int),64);
    bufp->fullIData(oldp+1730,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                 << 0x1cU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                              >> 4U))),32);
    bufp->fullBit(oldp+1731,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1732,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[0U])));
    bufp->fullBit(oldp+1733,(vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus_req));
    bufp->fullBit(oldp+1734,((8U == (0xfU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U]))));
    bufp->fullBit(oldp+1735,((0x90U == (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                                  << 4U) 
                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+1736,((2U == (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                               << 4U) 
                                              | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                 >> 0x1cU))))));
    bufp->fullBit(oldp+1737,((0x94U == (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                                  << 4U) 
                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+1738,((1U == (0xfffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+1739,((0x98U == (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                                  << 4U) 
                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+1740,((0x9cU == (0xffU & ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[2U] 
                                                  << 4U) 
                                                 | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2dbus[1U] 
                                                    >> 0x1cU))))));
    __Vtemp_h8cbeb7a5__0[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[1U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U] 
                                              >> 1U));
    __Vtemp_h8cbeb7a5__0[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[2U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[1U] 
                                              >> 1U));
    __Vtemp_h8cbeb7a5__0[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[3U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[2U] 
                                              >> 1U));
    __Vtemp_h8cbeb7a5__0[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[4U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[3U] 
                                              >> 1U));
    bufp->fullWData(oldp+1741,(__Vtemp_h8cbeb7a5__0),128);
    bufp->fullBit(oldp+1745,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U])));
    __Vtemp_h5628815a__0[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[1U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U] 
                                              >> 1U));
    __Vtemp_h5628815a__0[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[2U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[1U] 
                                              >> 1U));
    __Vtemp_h5628815a__0[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[3U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[2U] 
                                              >> 1U));
    __Vtemp_h5628815a__0[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[4U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[3U] 
                                              >> 1U));
    bufp->fullWData(oldp+1746,(__Vtemp_h5628815a__0),128);
    bufp->fullBit(oldp+1750,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U])));
    bufp->fullIData(oldp+1751,(((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                 << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                              >> 6U))),32);
    bufp->fullBit(oldp+1752,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel));
    bufp->fullBit(oldp+1753,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellinp__icache_controller_module__if2icache_req_kill_i));
    bufp->fullBit(oldp+1754,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U])));
    __Vtemp_h8cbeb7a5__1[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[1U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[0U] 
                                              >> 1U));
    __Vtemp_h8cbeb7a5__1[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[2U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[1U] 
                                              >> 1U));
    __Vtemp_h8cbeb7a5__1[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[3U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[2U] 
                                              >> 1U));
    __Vtemp_h8cbeb7a5__1[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[4U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2icache[3U] 
                                              >> 1U));
    bufp->fullWData(oldp+1755,(__Vtemp_h8cbeb7a5__1),128);
    bufp->fullBit(oldp+1759,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_wr));
    bufp->fullBit(oldp+1760,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_line_clean));
    bufp->fullBit(oldp+1761,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U])));
    __Vtemp_h5628815a__1[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[1U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[0U] 
                                              >> 1U));
    __Vtemp_h5628815a__1[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[2U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[1U] 
                                              >> 1U));
    __Vtemp_h5628815a__1[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[3U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[2U] 
                                              >> 1U));
    __Vtemp_h5628815a__1[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[4U] 
                                 << 0x1fU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem2dcache[3U] 
                                              >> 1U));
    bufp->fullWData(oldp+1762,(__Vtemp_h5628815a__1),128);
    bufp->fullCData(oldp+1766,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                      >> 6U))),2);
    bufp->fullCData(oldp+1767,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                      >> 4U))),2);
    bufp->fullCData(oldp+1768,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway))),2);
    bufp->fullCData(oldp+1769,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__regs2gateway) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1770,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_pending_next),2);
    bufp->fullCData(oldp+1771,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_active_next),2);
    bufp->fullCData(oldp+1772,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_pending),2);
    bufp->fullCData(oldp+1773,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__irq_set_active),2);
    bufp->fullCData(oldp+1774,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__claim),2);
    bufp->fullCData(oldp+1775,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_gateway_module__DOT__complete),2);
    bufp->fullCData(oldp+1776,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx))),2);
    bufp->fullCData(oldp+1777,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_idx) 
                                      >> 2U))),2);
    bufp->fullCData(oldp+1778,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__claim_req),2);
    bufp->fullCData(oldp+1779,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__complete_req),2);
    bufp->fullIData(oldp+1780,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                             >> 6U))),24);
    bufp->fullBit(oldp+1781,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_rd_req));
    bufp->fullBit(oldp+1782,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_wr_req));
    bufp->fullIData(oldp+1783,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__reg_r_data),32);
    bufp->fullCData(oldp+1784,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_th_reg_wr_flag),2);
    bufp->fullCData(oldp+1785,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__prio_reg_wr_flag),2);
    bufp->fullCData(oldp+1786,(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__ie_reg_wr_flag),2);
    bufp->fullCData(oldp+1787,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next))),3);
    bufp->fullCData(oldp+1788,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_th_next) 
                                      >> 3U))),3);
    bufp->fullCData(oldp+1789,((7U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next))),3);
    bufp->fullCData(oldp+1790,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__plic_top_module__DOT__plic_regs_module__DOT__plic_reg_prio_next) 
                                      >> 3U))),3);
    bufp->fullBit(oldp+1791,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_read));
    bufp->fullCData(oldp+1792,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                         >> 6U))),8);
    bufp->fullBit(oldp+1793,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rd_req));
    bufp->fullBit(oldp+1794,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_wr_req));
    bufp->fullBit(oldp+1795,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_sdiv));
    bufp->fullBit(oldp+1796,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ckmode));
    bufp->fullBit(oldp+1797,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csid));
    bufp->fullBit(oldp+1798,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csdef));
    bufp->fullBit(oldp+1799,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_csmode));
    bufp->fullBit(oldp+1800,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del0));
    bufp->fullBit(oldp+1801,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_del1));
    bufp->fullBit(oldp+1802,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_fmt));
    bufp->fullBit(oldp+1803,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txdata));
    bufp->fullBit(oldp+1804,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_txmark));
    bufp->fullBit(oldp+1805,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_rxmark));
    bufp->fullBit(oldp+1806,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ie));
    bufp->fullCData(oldp+1807,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                        >> 8U))),6);
    bufp->fullBit(oldp+1808,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_rd_req));
    bufp->fullBit(oldp+1809,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_wr_req));
    bufp->fullIData(oldp+1810,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__reg_r_data),32);
    bufp->fullIData(oldp+1811,((0xffffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                           >> 6U))),32);
    bufp->fullBit(oldp+1812,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_valid_next));
    bufp->fullBit(oldp+1813,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rx_empty));
    bufp->fullCData(oldp+1814,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_reg_status_next),8);
    bufp->fullBit(oldp+1815,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__tx_reg_wr_flag));
    bufp->fullBit(oldp+1816,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__baud_reg_wr_flag));
    bufp->fullBit(oldp+1817,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__txctrl_reg_wr_flag));
    bufp->fullBit(oldp+1818,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__rxctrl_reg_wr_flag));
    bufp->fullBit(oldp+1819,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__int_mask_reg_wr_flag));
    bufp->fullCData(oldp+1820,((7U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                      >> 8U))),6);
    bufp->fullBit(oldp+1821,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_rd_req));
    bufp->fullBit(oldp+1822,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_wr_req));
    bufp->fullBit(oldp+1823,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_valid_next));
    bufp->fullBit(oldp+1824,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__fifoctrl_reg_wr_flag));
    bufp->fullBit(oldp+1825,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__tx_reg_wr_flag));
    bufp->fullBit(oldp+1826,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__ie_reg_wr_flag));
    bufp->fullBit(oldp+1827,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__lctrl_reg_wr_flag));
    bufp->fullBit(oldp+1828,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__scratch_reg_wr_flag));
    bufp->fullCData(oldp+1829,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__reg_r_data),8);
    bufp->fullIData(oldp+1830,((0xffU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                         >> 6U))),32);
    bufp->fullBit(oldp+1831,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__spi_clk));
    bufp->fullSData(oldp+1832,((0xfffU & ((IData)(1U) 
                                          + (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))),12);
    bufp->fullBit(oldp+1833,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff))));
    bufp->fullBit(oldp+1834,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff) 
                                    >> 1U))));
    bufp->fullCData(oldp+1835,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                        >> 4U))),4);
    bufp->fullBit(oldp+1836,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_busy));
    bufp->fullBit(oldp+1837,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_tx_fifo_read));
    bufp->fullBit(oldp+1838,((1U & (~ ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                       >> 3U)))));
    bufp->fullBit(oldp+1839,((1U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff) 
                                    >> 2U))));
    bufp->fullCData(oldp+1840,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_ff),3);
    bufp->fullCData(oldp+1841,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__max_data_count),5);
    bufp->fullSData(oldp+1842,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff),12);
    bufp->fullCData(oldp+1843,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff),2);
    bufp->fullCData(oldp+1844,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff),8);
    bufp->fullIData(oldp+1845,((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next)),32);
    bufp->fullBit(oldp+1846,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next));
    bufp->fullIData(oldp+1847,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next),32);
    bufp->fullBit(oldp+1848,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                            >> 1U)))));
    bufp->fullIData(oldp+1849,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                >> 0xcU)),20);
    bufp->fullIData(oldp+1850,((0x3fffffU & (IData)(
                                                    (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                                     >> 0xcU)))),22);
    bufp->fullCData(oldp+1851,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                              >> 0xaU)))),2);
    bufp->fullBit(oldp+1852,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                            >> 9U)))));
    bufp->fullBit(oldp+1853,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                            >> 8U)))));
    bufp->fullBit(oldp+1854,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                            >> 7U)))));
    bufp->fullBit(oldp+1855,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                            >> 6U)))));
    bufp->fullBit(oldp+1856,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                            >> 5U)))));
    bufp->fullBit(oldp+1857,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                            >> 4U)))));
    bufp->fullBit(oldp+1858,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                            >> 3U)))));
    bufp->fullBit(oldp+1859,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                            >> 2U)))));
    bufp->fullBit(oldp+1860,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu 
                                            >> 1U)))));
    bufp->fullBit(oldp+1861,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__itlb_module__DOT__tlb2mmu))));
    bufp->fullSData(oldp+1862,((0x3ffU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                          >> 0xcU))),10);
    bufp->fullSData(oldp+1863,((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                >> 0x16U)),10);
    bufp->fullCData(oldp+1864,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_next 
                                      >> 0x16U))),2);
    bufp->fullCData(oldp+1865,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_state_next),3);
    bufp->fullBit(oldp+1866,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__itlb_miss));
    bufp->fullBit(oldp+1867,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__iwalk_active_next));
    bufp->fullIData(oldp+1868,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__vaddr_next),32);
    bufp->fullQData(oldp+1869,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__ptw_paddr_next),34);
    bufp->fullBit(oldp+1871,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__ptw_module__DOT__r_req_next));
    bufp->fullIData(oldp+1872,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__compressed_inst_out),32);
    bufp->fullCData(oldp+1873,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next),4);
    bufp->fullIData(oldp+1874,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1875,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1876,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1877,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U] 
                                        >> 1U))),4);
    bufp->fullBit(oldp+1878,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_next[0U])));
    bufp->fullBit(oldp+1879,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
    bufp->fullBit(oldp+1880,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_ctrl_next));
    bufp->fullCData(oldp+1881,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                                >> 0x22U)))),4);
    bufp->fullCData(oldp+1882,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                                >> 0x1eU)))),4);
    bufp->fullCData(oldp+1883,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                              >> 0x1bU)))),3);
    bufp->fullCData(oldp+1884,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                              >> 0x19U)))),2);
    bufp->fullCData(oldp+1885,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                              >> 0x16U)))),3);
    bufp->fullCData(oldp+1886,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                              >> 0x14U)))),2);
    bufp->fullCData(oldp+1887,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                                >> 0x10U)))),4);
    bufp->fullCData(oldp+1888,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                              >> 0xdU)))),3);
    bufp->fullBit(oldp+1889,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+1890,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+1891,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+1892,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                            >> 9U)))));
    bufp->fullCData(oldp+1893,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                              >> 6U)))),3);
    bufp->fullBit(oldp+1894,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                            >> 5U)))));
    bufp->fullBit(oldp+1895,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                            >> 4U)))));
    bufp->fullBit(oldp+1896,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                            >> 3U)))));
    bufp->fullBit(oldp+1897,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                            >> 2U)))));
    bufp->fullBit(oldp+1898,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl 
                                            >> 1U)))));
    bufp->fullBit(oldp+1899,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_ctrl))));
    bufp->fullCData(oldp+1900,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                                >> 0x22U)))),4);
    bufp->fullCData(oldp+1901,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                                >> 0x1eU)))),4);
    bufp->fullCData(oldp+1902,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                              >> 0x1bU)))),3);
    bufp->fullCData(oldp+1903,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                              >> 0x19U)))),2);
    bufp->fullCData(oldp+1904,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                              >> 0x16U)))),3);
    bufp->fullCData(oldp+1905,((3U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                              >> 0x14U)))),2);
    bufp->fullCData(oldp+1906,((0xfU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                                >> 0x10U)))),4);
    bufp->fullCData(oldp+1907,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                              >> 0xdU)))),3);
    bufp->fullBit(oldp+1908,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                            >> 0xcU)))));
    bufp->fullBit(oldp+1909,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                            >> 0xbU)))));
    bufp->fullBit(oldp+1910,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                            >> 0xaU)))));
    bufp->fullBit(oldp+1911,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                            >> 9U)))));
    bufp->fullCData(oldp+1912,((7U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                              >> 6U)))),3);
    bufp->fullBit(oldp+1913,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                            >> 5U)))));
    bufp->fullBit(oldp+1914,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                            >> 4U)))));
    bufp->fullBit(oldp+1915,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                            >> 3U)))));
    bufp->fullBit(oldp+1916,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                            >> 2U)))));
    bufp->fullBit(oldp+1917,((1U & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next 
                                            >> 1U)))));
    bufp->fullBit(oldp+1918,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_next))));
    bufp->fullIData(oldp+1919,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[6U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1920,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[5U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1921,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[4U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1922,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1923,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1924,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1925,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U] 
                                        >> 1U))),4);
    bufp->fullBit(oldp+1926,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__id2exe_data[0U])));
    bufp->fullIData(oldp+1927,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[6U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1928,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[5U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1929,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[4U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[3U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1930,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1931,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+1932,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+1933,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U] 
                                        >> 1U))),4);
    bufp->fullBit(oldp+1934,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_data_next[0U])));
    bufp->fullIData(oldp+1935,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[2U] 
                                 << 0x1dU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[1U] 
                                              >> 3U))),32);
    bufp->fullIData(oldp+1936,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[1U] 
                                 << 0x1dU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[0U] 
                                              >> 3U))),32);
    bufp->fullBit(oldp+1937,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[0U] 
                                    >> 2U))));
    bufp->fullBit(oldp+1938,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1939,((1U & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__cext2if[0U])));
    bufp->fullIData(oldp+1940,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__instruction),32);
    bufp->fullBit(oldp+1941,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT____Vcellout__decode__next_comp16));
    bufp->fullBit(oldp+1942,((1U & (~ (IData)((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))));
    bufp->fullCData(oldp+1943,((3U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))),2);
    bufp->fullSData(oldp+1944,((0xfffU & ((0xc0U & 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            << 4U)) 
                                          | ((0x20U 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 >> 7U)) 
                                             | (0x1cU 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   >> 2U)))))),12);
    bufp->fullSData(oldp+1945,((0xfffU & ((0xc0U & 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            >> 1U)) 
                                          | (0x3cU 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                >> 7U))))),12);
    bufp->fullSData(oldp+1946,((0xfffU & ((IData)(vlSelf->__VdfgTmp_h0db32e6d__0) 
                                          << 2U))),12);
    bufp->fullSData(oldp+1947,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li),12);
    bufp->fullCData(oldp+1948,((0x1fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                         >> 2U))),5);
    bufp->fullCData(oldp+1949,((0x1fU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                         >> 7U))),5);
    bufp->fullIData(oldp+1950,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_jump),20);
    bufp->fullIData(oldp+1951,(((0xc0000U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                            >> 0xcU)))) 
                                             << 0x12U)) 
                                | ((0x20000U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 5U)) 
                                   | (0x1f000U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                  << 0xaU))))),20);
    bufp->fullIData(oldp+1952,(((0xffc00U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                            >> 0xcU)))) 
                                             << 0xaU)) 
                                | ((0x200U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                              >> 3U)) 
                                   | ((0x180U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 << 4U)) 
                                      | ((0x40U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 1U)) 
                                         | ((0x20U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 3U)) 
                                            | (0x10U 
                                               & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                  >> 2U)))))))),20);
    bufp->fullCData(oldp+1953,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                      >> 0xdU))),3);
    bufp->fullCData(oldp+1954,((8U | (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            >> 7U)))),5);
    bufp->fullCData(oldp+1955,((8U | (7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            >> 2U)))),5);
    bufp->fullSData(oldp+1956,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst),16);
    bufp->fullBit(oldp+1957,((0U != (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))));
    bufp->fullCData(oldp+1958,((0xffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                         >> 5U))),8);
    bufp->fullSData(oldp+1959,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_imm_branch),12);
    bufp->fullSData(oldp+1960,((0xfffU & ((0xf00U & 
                                           ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                            << 1U)) 
                                          | ((0xc0U 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 >> 5U)) 
                                             | ((0x20U 
                                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)) 
                                                | (0x10U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      >> 2U))))))),12);
    bufp->fullIData(oldp+1961,((0x40403U | ((0xfff00000U 
                                             & ((IData)(vlSelf->__VdfgTmp_h0db32e6d__0) 
                                                << 0x16U)) 
                                            | ((0x38000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 8U)) 
                                               | ((0x7000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      >> 1U)) 
                                                  | (0x380U 
                                                     & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                        << 5U))))))),32);
    bufp->fullIData(oldp+1962,((0x842023U | ((0xfe000000U 
                                              & ((IData)(vlSelf->__VdfgTmp_h0db32e6d__0) 
                                                 << 0x16U)) 
                                             | ((0x700000U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    << 0x12U)) 
                                                | ((0x38000U 
                                                    & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & ((IData)(vlSelf->__VdfgTmp_h0db32e6d__0) 
                                                         << 9U))))))),32);
    bufp->fullIData(oldp+1963,((0x10003U | ((0xfff00000U 
                                             & ((0xc000000U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    << 0x18U)) 
                                                | ((0x2000000U 
                                                    & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                       << 0xdU)) 
                                                   | (0x1c00000U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                         << 0x12U))))) 
                                            | ((0x7000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   >> 1U)) 
                                               | (0xf80U 
                                                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+1964,((0x12023U | ((0xfe000000U 
                                             & ((0xc000000U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    << 0x13U)) 
                                                | (0x2000000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      << 0xdU)))) 
                                            | ((0x1f00000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 0x12U)) 
                                               | (0xf80U 
                                                  & ((0x2000U 
                                                      & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                         << 6U)) 
                                                     | (0x1e00U 
                                                        & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))))),32);
    bufp->fullIData(oldp+1965,((0xefU | ((0x80000000U 
                                          & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                             << 0x13U)) 
                                         | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h68dbea3a__0) 
                                             << 0x15U) 
                                            | ((0x100000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 0xcU)) 
                                               | (0xff000U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_jump 
                                                     << 1U))))))),32);
    bufp->fullIData(oldp+1966,((0x6fU | ((0x80000000U 
                                          & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                             << 0x13U)) 
                                         | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h68dbea3a__0) 
                                             << 0x15U) 
                                            | ((0x100000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 0xcU)) 
                                               | (0xff000U 
                                                  & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_jump 
                                                     << 1U))))))),32);
    bufp->fullIData(oldp+1967,((0xe7U | (0xf8000U & 
                                         ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                          << 8U)))),32);
    bufp->fullIData(oldp+1968,((0x67U | (0xf8000U & 
                                         ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                          << 8U)))),32);
    bufp->fullIData(oldp+1969,((0x41000U | ((0x80000000U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 0x13U)) 
                                            | ((0x7e000000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_imm_branch) 
                                                   << 0x15U)) 
                                               | ((0x38000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      << 8U)) 
                                                  | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h8bdb6079__0)))))),32);
    bufp->fullIData(oldp+1970,((0x40000U | ((0x80000000U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 0x13U)) 
                                            | ((0x7e000000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_imm_branch) 
                                                   << 0x15U)) 
                                               | ((0x38000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      << 8U)) 
                                                  | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h8bdb6079__0)))))),32);
    bufp->fullIData(oldp+1971,((0x13U | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li) 
                                          << 0x14U) 
                                         | (0xf80U 
                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))),32);
    bufp->fullIData(oldp+1972,((0x37U | ((((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          >> 0xcU)))) 
                                           << 0x1eU) 
                                          | ((0x20000000U 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 << 0x11U)) 
                                             | (0x1f000000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 0x16U)))) 
                                         | (0xf80U 
                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))),32);
    bufp->fullIData(oldp+1973,((0x13U | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li) 
                                          << 0x14U) 
                                         | ((0xf8000U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 8U)) 
                                            | ((0x7000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   >> 1U)) 
                                               | (0xf80U 
                                                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))))),32);
    bufp->fullIData(oldp+1974,((0x137U | (((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          >> 0xcU)))) 
                                           << 0x16U) 
                                          | ((0x200000U 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 << 9U)) 
                                             | ((0x180000U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    << 0x10U)) 
                                                | ((0x40000U 
                                                    & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                       << 0xdU)) 
                                                   | ((0x20000U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          << 0xfU)) 
                                                      | (0x10000U 
                                                         & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                            << 0xaU))))))))),32);
    bufp->fullIData(oldp+1975,((0x10413U | ((0xfff00000U 
                                             & ((0xf0000000U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    << 0x15U)) 
                                                | ((0xc000000U 
                                                    & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                       << 0xfU)) 
                                                   | ((0x2000000U 
                                                       & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                          << 0x14U)) 
                                                      | (0x1000000U 
                                                         & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                            << 0x12U)))))) 
                                            | ((0x7000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   >> 1U)) 
                                               | (0x380U 
                                                  & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                     << 5U)))))),32);
    bufp->fullIData(oldp+1976,((0x1013U | ((0x1f00000U 
                                            & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                               << 0x12U)) 
                                           | ((0xf8000U 
                                               & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                  << 8U)) 
                                              | (0xf80U 
                                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+1977,(((0x1f00000U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                               << 0x12U)) 
                                | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h46266a8e__0)),32);
    bufp->fullIData(oldp+1978,((0x40000000U | ((0x1f00000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 0x12U)) 
                                               | vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT____VdfgTmp_h46266a8e__0))),32);
    bufp->fullIData(oldp+1979,((0x33U | ((0x1f00000U 
                                          & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                             << 0x12U)) 
                                         | ((0xf8000U 
                                             & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                << 8U)) 
                                            | (0xf80U 
                                               & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+1980,((0x47413U | (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__imm_Li) 
                                             << 0x14U) 
                                            | ((0x38000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 8U)) 
                                               | (0x380U 
                                                  & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+1981,((0x33U | ((0x1f00000U 
                                          & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                             << 0x12U)) 
                                         | (0xf80U 
                                            & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst))))),32);
    bufp->fullIData(oldp+1982,((0x847433U | ((0x700000U 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 << 0x12U)) 
                                             | ((0x38000U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    << 8U)) 
                                                | (0x380U 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+1983,((0x846433U | ((0x700000U 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 << 0x12U)) 
                                             | ((0x38000U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    << 8U)) 
                                                | (0x380U 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+1984,((0x844433U | ((0x700000U 
                                              & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                 << 0x12U)) 
                                             | ((0x38000U 
                                                 & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                    << 8U)) 
                                                | (0x380U 
                                                   & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+1985,((0x40840433U | ((0x700000U 
                                                & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                   << 0x12U)) 
                                               | ((0x38000U 
                                                   & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst) 
                                                      << 8U)) 
                                                  | (0x380U 
                                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__comp_inst)))))),32);
    bufp->fullBit(oldp+1986,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__illegal_instr));
    bufp->fullCData(oldp+1987,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_code_next),4);
    bufp->fullBit(oldp+1988,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__exc_req_next));
    bufp->fullCData(oldp+1989,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__incr),3);
    bufp->fullBit(oldp+1990,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__fetch_module__DOT__pc_misaligned));
    bufp->fullIData(oldp+1991,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache2mem 
                                        >> 1U))),32);
    bufp->fullBit(oldp+1992,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache2mem))));
    bufp->fullIData(oldp+1993,(((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                                 << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                              >> 6U))),32);
    bufp->fullIData(oldp+1994,(((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                 << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                              >> 6U))),32);
    bufp->fullCData(oldp+1995,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                        >> 2U))),4);
    bufp->fullBit(oldp+1996,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+1997,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U])));
    bufp->fullIData(oldp+1998,(((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[5U] 
                                 << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[4U] 
                                              >> 2U))),32);
    __Vtemp_h167b8e08__0[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[1U] 
                                 << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U] 
                                              >> 2U));
    __Vtemp_h167b8e08__0[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[2U] 
                                 << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[1U] 
                                              >> 2U));
    __Vtemp_h167b8e08__0[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[3U] 
                                 << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[2U] 
                                              >> 2U));
    __Vtemp_h167b8e08__0[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[4U] 
                                 << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[3U] 
                                              >> 2U));
    bufp->fullWData(oldp+1999,(__Vtemp_h167b8e08__0),128);
    bufp->fullBit(oldp+2003,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+2004,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__dcache2mem[0U])));
    bufp->fullCData(oldp+2005,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache_arbiter_state_next),2);
    bufp->fullCData(oldp+2006,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__mem_arbiter_state_next),2);
    bufp->fullIData(oldp+2007,(((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[5U] 
                                 << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                              >> 2U))),32);
    __Vtemp_h3b9f4904__0[0U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[1U] 
                                 << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] 
                                              >> 2U));
    __Vtemp_h3b9f4904__0[1U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[2U] 
                                 << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[1U] 
                                              >> 2U));
    __Vtemp_h3b9f4904__0[2U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[3U] 
                                 << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[2U] 
                                              >> 2U));
    __Vtemp_h3b9f4904__0[3U] = ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                 << 0x1eU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[3U] 
                                              >> 2U));
    bufp->fullWData(oldp+2008,(__Vtemp_h3b9f4904__0),128);
    bufp->fullBit(oldp+2012,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+2013,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U])));
    bufp->fullIData(oldp+2014,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_next 
                                        >> 1U))),32);
    bufp->fullBit(oldp+2015,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2if_next))));
    bufp->fullIData(oldp+2016,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_next 
                                        >> 1U))),32);
    bufp->fullBit(oldp+2017,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem2dbus_next))));
    bufp->fullIData(oldp+2018,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_rdata),32);
    bufp->fullBit(oldp+2019,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel));
    bufp->fullBit(oldp+2020,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_hit));
    bufp->fullBit(oldp+2021,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_rw));
    bufp->fullBit(oldp+2022,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT____Vcellout__icache_controller_module__icache2mem_req_o));
    bufp->fullIData(oldp+2023,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_state_next),32);
    bufp->fullBit(oldp+2024,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT____VdfgTmp_h920914d9__0) 
                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__cache_hit))));
    bufp->fullBit(oldp+2025,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_controller_module__DOT__icache_miss));
    bufp->fullIData(oldp+2026,((0x1fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[4U] 
                                             >> 1U))),21);
    bufp->fullBit(oldp+2027,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[4U])));
    __Vtemp_h2d981510__0[0U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[0U];
    __Vtemp_h2d981510__0[1U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[1U];
    __Vtemp_h2d981510__0[2U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[2U];
    __Vtemp_h2d981510__0[3U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_rd_buf[3U];
    bufp->fullWData(oldp+2028,(__Vtemp_h2d981510__0),128);
    bufp->fullIData(oldp+2032,((0x1fffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[4U] 
                                             >> 1U))),21);
    bufp->fullBit(oldp+2033,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[4U])));
    __Vtemp_hfa4d1436__0[0U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[0U];
    __Vtemp_hfa4d1436__0[1U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[1U];
    __Vtemp_hfa4d1436__0[2U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[2U];
    __Vtemp_hfa4d1436__0[3U] = vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__icache_top_module__DOT__icache_datapath_module__DOT__icache_wr_buff[3U];
    bufp->fullWData(oldp+2034,(__Vtemp_hfa4d1436__0),128);
    bufp->fullIData(oldp+2038,((0x3ffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[4U] 
                                              >> 4U))),28);
    bufp->fullBit(oldp+2039,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U])));
    bufp->fullBit(oldp+2040,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__cache2mem[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+2041,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT____Vcellinp__wb_dcache_top_module__dmem_sel_i));
    bufp->fullBit(oldp+2042,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__cache_hit));
    bufp->fullBit(oldp+2043,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read)));
    bufp->fullBit(oldp+2044,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr));
    bufp->fullBit(oldp+2045,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wrb_req));
    bufp->fullBit(oldp+2046,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U])));
    bufp->fullBit(oldp+2047,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                    >> 1U))));
    bufp->fullBit(oldp+2048,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_req));
    bufp->fullBit(oldp+2049,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache2mem_wr));
    bufp->fullCData(oldp+2050,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_state_next),3);
    bufp->fullCData(oldp+2051,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__evict_index_next),4);
    bufp->fullBit(oldp+2052,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_hit));
    bufp->fullBit(oldp+2053,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__dcache_miss));
    bufp->fullIData(oldp+2054,(((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                                 << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                              >> 6U))),32);
    bufp->fullIData(oldp+2055,(((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                 << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                              >> 6U))),32);
    bufp->fullCData(oldp+2056,((0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[0U] 
                                        >> 2U))),4);
    bufp->fullWData(oldp+2057,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT____Vcellout__wb_dcache_datapath_module__dcache2mem_data_o),128);
    bufp->fullIData(oldp+2061,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wrb_req)
                                 ? ((0xffffff00U & 
                                     (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read 
                                      << 6U)) | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index) 
                                                 << 4U))
                                 : ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                                     << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                                  >> 6U)))),32);
    bufp->fullWData(oldp+2062,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_line_write),128);
    bufp->fullIData(oldp+2066,((0xffffffU & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read 
                                             >> 2U))),24);
    bufp->fullBit(oldp+2067,((1U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read 
                                    >> 1U))));
    bufp->fullBit(oldp+2068,((1U & vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_tag_read)));
    bufp->fullIData(oldp+2069,((0xffffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                                              << 0x12U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                                >> 0xeU)))),24);
    bufp->fullIData(oldp+2070,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_read),32);
    bufp->fullIData(oldp+2071,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__cache_word_write),32);
    bufp->fullIData(oldp+2072,((0xffffffU & ((vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[2U] 
                                              << 0x12U) 
                                             | (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                                >> 0xeU)))),24);
    bufp->fullCData(oldp+2073,((3U & (vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__lsummu2dcache[1U] 
                                      >> 8U))),2);
    bufp->fullCData(oldp+2074,(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_datapath_module__DOT__addr_index),4);
    bufp->fullCData(oldp+2075,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__shifter_next),8);
    bufp->fullBit(oldp+2076,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__valid_next));
    bufp->fullBit(oldp+2077,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__frame_err_next));
    bufp->fullCData(oldp+2078,(vlSelf->pcore_tb__DOT__dut__DOT__uart_module__DOT__uart_rx_module__DOT__state_next),2);
    bufp->fullCData(oldp+2079,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__shifter_next),8);
    bufp->fullBit(oldp+2080,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__valid_next));
    bufp->fullBit(oldp+2081,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__frame_err_next));
    bufp->fullCData(oldp+2082,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_module__DOT__uart_ns_rx_module__DOT__state_next),2);
    bufp->fullBit(oldp+2083,(vlSelf->clk));
    bufp->fullBit(oldp+2084,(vlSelf->reset));
    bufp->fullBit(oldp+2085,(((0x8e000000U == ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U))) 
                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr))));
    bufp->fullBit(oldp+2086,(((0x8f000000U == ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U))) 
                              & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__wb_dcache_top_module__DOT__wb_dcache_controller_module__DOT__cache_wr))));
    bufp->fullIData(oldp+2087,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__r_data),32);
    bufp->fullQData(oldp+2088,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_next),64);
    bufp->fullBit(oldp+2090,((vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_ff 
                              >= vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtimecmp_ff)));
    bufp->fullBit(oldp+2091,(vlSelf->pcore_tb__DOT__dut__DOT__clint_module__DOT__mtime_select_ff));
    bufp->fullIData(oldp+2092,(((2U == (0xfU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                                >> 4U)))
                                 ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__sc_wrb_ff)
                                 : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_operand_a_ff)),32);
    bufp->fullCData(oldp+2093,((7U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl) 
                                      >> 1U))),3);
    bufp->fullBit(oldp+2094,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_ctrl))));
    bufp->fullIData(oldp+2095,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[3U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+2096,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[2U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                              >> 5U))),32);
    bufp->fullIData(oldp+2097,(((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[1U] 
                                 << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U] 
                                              >> 5U))),32);
    bufp->fullCData(oldp+2098,((0x1fU & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__lsu2wrb_data[0U])),5);
    bufp->fullBit(oldp+2099,((1U & ((0U != (0xfU & 
                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 4U)))
                                     ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)
                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu)))));
    bufp->fullIData(oldp+2100,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_wr_flag)
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                 : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mscratch_ff)),32);
    bufp->fullIData(oldp+2101,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_exc_req))
                                 ? ((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[2U] 
                                     << 0x1bU) | (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2csr_data_pipe_ff[1U] 
                                                  >> 5U))
                                 : (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__lsu_pf_exc_req))
                                     ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]
                                     : (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                         & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__i_pf_exc_req))
                                         ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next
                                         : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ms_mode_ecall_req) 
                                              | ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_exc_req) 
                                                 & (3U 
                                                    == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)))) 
                                             | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__m_mode_irq_req))
                                             ? 0U : 
                                            ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_wr_flag)
                                              ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                              : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_mtval_ff)))))),32);
    bufp->fullIData(oldp+2102,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_wr_flag)
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                 : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sscratch_ff)),32);
    bufp->fullIData(oldp+2103,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req)
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next
                                 : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req)
                                     ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next
                                     : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_wr_flag)
                                         ? (0xfffffffcU 
                                            & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata)
                                         : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_sepc_ff)))),32);
    bufp->fullIData(oldp+2104,((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req) 
                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__lsu_pf_exc_req))
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_data_pipe_ff[2U]
                                 : (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req) 
                                     & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__i_pf_exc_req))
                                     ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_pc_next
                                     : ((((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_delegated_req) 
                                          & ((8U == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)) 
                                             | (3U 
                                                == (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__exc_code)))) 
                                         | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__s_mode_irq_req))
                                         ? 0U : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_wr_flag)
                                                  ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wdata
                                                  : vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_stval_ff))))),32);
    bufp->fullIData(oldp+2105,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_low_next),32);
    bufp->fullIData(oldp+2106,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__time_high_next),32);
    bufp->fullIData(oldp+2107,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                 >> 0x14U)))
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x14U))]
                                 : 0U)),32);
    bufp->fullIData(oldp+2108,(((0U != (0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                                 >> 0x19U)))
                                 ? vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__decode_module__DOT__rf_module__DOT__register_file
                                [(0x1fU & (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__if2id_data_pipe_ff[2U] 
                                           >> 0x19U))]
                                 : 0U)),32);
    bufp->fullBit(oldp+2109,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs1_hazard) 
                              & ((IData)((0ULL != (0x1004ULL 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff))) 
                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_csr_req)))));
    bufp->fullBit(oldp+2110,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu2rs2_hazard) 
                              & ((IData)((0ULL != (0x6000804ULL 
                                                   & vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff))) 
                                 & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__forward_stall_module__DOT__lsu_mul_csr_req)))));
    bufp->fullBit(oldp+2111,((1U & ((0U != (0xfU & 
                                            (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__exe2lsu_ctrl_pipe_ff 
                                             >> 4U)))
                                     ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_done)
                                     : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__lsu_module__DOT__dbus2lsu)))));
    bufp->fullCData(oldp+2112,((0xfU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT____Vcellinp__muldiv_module__fwd2mul_stall_i)
                                         ? (IData)(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__alu_m_ops_ff)
                                         : (IData)(
                                                   (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__id2exe_ctrl_pipe_ff 
                                                    >> 0x1eU))))),4);
    bufp->fullIData(oldp+2113,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel)
                                 ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                     << 0x1aU) | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U))
                                 : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel)
                                     ? (IData)((vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                >> 2U))
                                     : 0U))),32);
    bufp->fullBit(oldp+2114,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel) 
                              | (IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel))));
    bufp->fullIData(oldp+2115,((0x1ffU & (((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_d_sel)
                                            ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[2U] 
                                                << 0x1aU) 
                                               | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[1U] 
                                                  >> 6U))
                                            : ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__mem_top_module__DOT__bmem_interface_module__DOT__bmem_i_sel)
                                                ? (IData)(
                                                          (vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__mmu_module__DOT__mmu2if 
                                                           >> 2U))
                                                : 0U)) 
                                          >> 2U))),32);
    bufp->fullBit(oldp+2116,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_rx_fifo_write));
    bufp->fullSData(oldp+2117,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__clock_cnt),12);
    bufp->fullCData(oldp+2118,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__state_next),3);
    bufp->fullCData(oldp+2119,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_controller_module__DOT__data_cnt),5);
    bufp->fullIData(oldp+2120,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_r_data),32);
    bufp->fullSData(oldp+2121,((0xfffU & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_sdiv)
                                           ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                               << 0x1aU) 
                                              | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                                 >> 6U))
                                           : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_div_ff)))),12);
    bufp->fullCData(oldp+2122,((3U & ((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_ckmode)
                                       ? ((vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                           << 0x1aU) 
                                          | (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                             >> 6U))
                                       : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_sck_mode_ff)))),2);
    bufp->fullCData(oldp+2123,(((IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__spi_sel_fmt)
                                 ? ((0xf0U & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                              >> 0x12U)) 
                                    | (0xcU & (vlSelf->pcore_tb__DOT__dut__DOT__dbus_interconnect_module__DOT__dbus2peri[0U] 
                                               >> 6U)))
                                 : (IData)(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_fmt_ff))),8);
    bufp->fullWData(oldp+2124,(vlSelf->pcore_tb__DOT__signature_file),1024);
    bufp->fullIData(oldp+2156,((IData)((vlSelf->pcore_tb__DOT__dut__DOT__debug_port_i 
                                        >> 6U))),32);
    bufp->fullCData(oldp+2157,((0x1fU & (IData)((vlSelf->pcore_tb__DOT__dut__DOT__debug_port_i 
                                                 >> 1U)))),5);
    bufp->fullBit(oldp+2158,((1U & (IData)(vlSelf->pcore_tb__DOT__dut__DOT__debug_port_i))));
    bufp->fullBit(oldp+2159,(vlSelf->pcore_tb__DOT__dut__DOT__uart_ns_rxd_i));
    bufp->fullBit(oldp+2160,(1U));
    bufp->fullBit(oldp+2161,(0U));
    bufp->fullIData(oldp+2162,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__amo_module__DOT__amo_buffer_data_ff),32);
    bufp->fullBit(oldp+2163,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__br_taken_i));
    bufp->fullIData(oldp+2164,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__inst_r_type),32);
    bufp->fullIData(oldp+2165,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__inst_r_comp_type),32);
    bufp->fullIData(oldp+2166,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__inst_nop),32);
    bufp->fullIData(oldp+2167,(0x100073U),32);
    bufp->fullCData(oldp+2168,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__load_opcode),7);
    bufp->fullCData(oldp+2169,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__store_opcode),7);
    bufp->fullCData(oldp+2170,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__R_type_opcode),7);
    bufp->fullCData(oldp+2171,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__I_type_opcode),7);
    bufp->fullCData(oldp+2172,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__Jal_opcode),7);
    bufp->fullCData(oldp+2173,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__B_type_opcode),7);
    bufp->fullCData(oldp+2174,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__Jalr_opcode),7);
    bufp->fullCData(oldp+2175,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__LUI_opcode),7);
    bufp->fullCData(oldp+2176,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__AUIPC_opcode),7);
    bufp->fullCData(oldp+2177,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__c_top__DOT__decode__DOT__instr_opcode),5);
    bufp->fullCData(oldp+2178,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_rd_exc_code),4);
    bufp->fullCData(oldp+2179,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__csr_wr_exc_code),4);
    bufp->fullBit(oldp+2180,(0U));
    bufp->fullBit(oldp+2181,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__uart_irq_req));
    bufp->fullBit(oldp+2182,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__csr_module__DOT__ms_mode_ecall_req));
    bufp->fullQData(oldp+2183,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__mult_su),64);
    bufp->fullIData(oldp+2185,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__div),32);
    bufp->fullIData(oldp+2186,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__rem),32);
    bufp->fullBit(oldp+2187,(vlSelf->pcore_tb__DOT__dut__DOT__core_top_module__DOT__pipeline_top_module__DOT__muldiv_module__DOT__div_valid));
    bufp->fullIData(oldp+2188,(0x196U),32);
    bufp->fullIData(oldp+2189,(9U),32);
    bufp->fullCData(oldp+2190,(0U),2);
    bufp->fullIData(oldp+2191,(0xffffffffU),32);
    bufp->fullIData(oldp+2192,(2U),32);
    bufp->fullBit(oldp+2193,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_mosi_fst_transmit));
    bufp->fullBit(oldp+2194,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_mosi_en));
    bufp->fullBit(oldp+2195,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_miso_en));
    bufp->fullBit(oldp+2196,(1U));
    bufp->fullCData(oldp+2197,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_data_next),8);
    bufp->fullCData(oldp+2198,(vlSelf->pcore_tb__DOT__dut__DOT__spi_top_module__DOT__spi_regs_module__DOT__reg_rx_data_ff),8);
    bufp->fullCData(oldp+2199,(0xbU),4);
    bufp->fullIData(oldp+2200,(6U),32);
    bufp->fullIData(oldp+2201,(2U),32);
    bufp->fullIData(oldp+2202,(0U),32);
    bufp->fullIData(oldp+2203,(4U),32);
    bufp->fullIData(oldp+2204,(1U),32);
    bufp->fullIData(oldp+2205,(3U),32);
    bufp->fullIData(oldp+2206,(5U),32);
    bufp->fullIData(oldp+2207,(7U),32);
    bufp->fullIData(oldp+2208,(9U),32);
    bufp->fullIData(oldp+2209,(0xbU),32);
    bufp->fullIData(oldp+2210,(8U),32);
    bufp->fullIData(oldp+2211,(0x20U),32);
    bufp->fullIData(oldp+2212,(0x80U),32);
    bufp->fullIData(oldp+2213,(0x200U),32);
    bufp->fullIData(oldp+2214,(0x800U),32);
    bufp->fullIData(oldp+2215,(0xaaaU),32);
    bufp->fullIData(oldp+2216,(0x222U),32);
    bufp->fullIData(oldp+2217,(0x40U),32);
    bufp->fullIData(oldp+2218,(0x100U),32);
    bufp->fullIData(oldp+2219,(0x600U),32);
    bufp->fullIData(oldp+2220,(0x6000U),32);
    bufp->fullIData(oldp+2221,(0x18000U),32);
    bufp->fullIData(oldp+2222,(0x40000U),32);
    bufp->fullIData(oldp+2223,(0x80000U),32);
    bufp->fullIData(oldp+2224,(0x80000000U),32);
    bufp->fullIData(oldp+2225,(0x800de762U),32);
    bufp->fullIData(oldp+2226,(0xc6122U),32);
    bufp->fullIData(oldp+2227,(0x803fffffU),32);
    bufp->fullIData(oldp+2228,(1U),32);
    bufp->fullIData(oldp+2229,(0x16U),32);
    bufp->fullIData(oldp+2230,(2U),32);
    bufp->fullIData(oldp+2231,(0x1eU),32);
    bufp->fullIData(oldp+2232,(8U),32);
    bufp->fullIData(oldp+2233,(9U),32);
    bufp->fullIData(oldp+2234,(0xaU),32);
    bufp->fullIData(oldp+2235,(0xbU),32);
    bufp->fullIData(oldp+2236,(4U),32);
    bufp->fullIData(oldp+2237,(2U),32);
    bufp->fullIData(oldp+2238,(7U),32);
    bufp->fullIData(oldp+2239,(3U),32);
    bufp->fullIData(oldp+2240,(0x10U),32);
    bufp->fullIData(oldp+2241,(0x20U),32);
    bufp->fullIData(oldp+2242,(0x80U),32);
    bufp->fullIData(oldp+2243,(7U),32);
    bufp->fullIData(oldp+2244,(0x15U),32);
    bufp->fullIData(oldp+2245,(0xbU),32);
    bufp->fullIData(oldp+2246,(0x10U),32);
    bufp->fullIData(oldp+2247,(0x18U),32);
    bufp->fullIData(oldp+2248,(8U),32);
    bufp->fullIData(oldp+2249,(0xdU),32);
    bufp->fullIData(oldp+2250,(3U),32);
    bufp->fullIData(oldp+2251,(0x1bU),32);
    bufp->fullCData(oldp+2252,(1U),3);
    bufp->fullCData(oldp+2253,(0U),3);
}
