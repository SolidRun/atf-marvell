/*
 * Copyright (C) 2016-2018 Marvell International Ltd.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <bakery_lock.h>
#include <mmio.h>
#include <plat/common/platform.h>
#if defined(PLAT_cn10ka) || defined(PLAT_cnf10ka)
#include <plat_cn10k_configuration.h>
#endif
#include <context.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <arch_helpers.h>
#include <debug.h>
#include <drivers/delay_timer.h>
#include <octeontx_helpers.h>
#include <plat_pwrc.h>
#include <octeontx_legacy_pwrc.h>

#include "cavm-csrs-rst.h"

#if !(defined(PLAT_cn10ka) || defined(PLAT_cnf10ka))
static int wait_for_core()
{

	int loop=10;
	volatile union cavm_rst_pp_pending pp_pending;

    /*TODO: This might be a good chance to implement
     * Simple timer library.
     **/

    /* give core chance to come up */
    while(loop) {
        __asm__ __volatile__ ("udiv xzr, xzr,xzr");
        __asm__ __volatile__ ("udiv xzr, xzr,xzr");
        __asm__ __volatile__ ("udiv xzr, xzr,xzr");
        __asm__ __volatile__ ("udiv xzr, xzr,xzr");
        loop --;
    }

    loop =1000000;
    while(loop) {
        pp_pending.u = CSR_READ(CAVM_RST_PP_PENDING);

        if(!pp_pending.s.pend)
            break;
        __asm__ __volatile__ ("udiv xzr, xzr,xzr");
        __asm__ __volatile__ ("udiv xzr, xzr,xzr");
        loop--;
    }
    if(loop == 0)
	    return 1;
    return 0;

}
#endif

void octeontx_legacy_pwrc_write_pponr(unsigned long mpidr)
{
#if defined(PLAT_cn10ka) || defined(PLAT_cnf10ka)
	int loop;
#endif
	unsigned long octeontx_core_id = (unsigned long)(plat_core_pos_by_mpidr
					((u_register_t)mpidr));

#if defined(PLAT_cn10ka) || defined(PLAT_cnf10ka)
	cavm_dsuubx_cluster_ppu_pwpr_t cluster_pwpr;
	cavm_dsuubx_core_ppu_pwpr_t core_pwpr;
	cavm_dsuubx_cluster_ppu_pwsr_t cluster_pwsr;
	cavm_dsuubx_core_ppu_pwsr_t core_pwsr;

	/* Set RVBARADDR with entry point */
	plat_cn10k_set_secondary_cpu_jump_addr(octeontx_core_id,
			(uint64_t)plat_secondary_cold_boot_setup);
	/* Power up the cluster */
	cluster_pwpr.u = CSR_READ(CAVM_DSUUBX_CLUSTER_PPU_PWPR(octeontx_core_id));
	cluster_pwpr.s.pwr_policy = 0x8; /* ON. Logic on with RAM on, cluster is functional */
	cluster_pwpr.s.op_policy = 0x7; /* OPMODE_07: ALL_SLICE_FULL_RAM_ON */
	CSR_WRITE(CAVM_DSUUBX_CLUSTER_PPU_PWPR(octeontx_core_id), cluster_pwpr.u);

	/* Poll on core PPU_PWSR register until the value matches the PWPR */
	loop = 1000000;
	while (loop) {
		cluster_pwpr.u = CSR_READ(CAVM_DSUUBX_CLUSTER_PPU_PWPR(octeontx_core_id));
		cluster_pwsr.u = CSR_READ(CAVM_DSUUBX_CLUSTER_PPU_PWSR(octeontx_core_id));
		if (cluster_pwsr.u == cluster_pwpr.u)
			break;
		udelay(1);
		loop--;
	}
	if (!loop) {
		WARN("%s: Failed to match PWSR with PWPR cluster_pwsr.u 0x%x\n", __func__, cluster_pwsr.u);
		return;
	}

	/* Power up the core */
	core_pwpr.u = CSR_READ(CAVM_DSUUBX_CORE_PPU_PWPR(octeontx_core_id));
	core_pwpr.s.pwr_policy = 0x8; /* ON. Logic on with RAM on, cluster is functional */
	CSR_WRITE(CAVM_DSUUBX_CORE_PPU_PWPR(octeontx_core_id), core_pwpr.u);

	/* Poll on core PPU_PWSR register until the value matches the PWPR */
	loop = 1000000;
	while(loop) {
		core_pwsr.u = CSR_READ(CAVM_DSUUBX_CORE_PPU_PWSR(octeontx_core_id));
		core_pwpr.u = CSR_READ(CAVM_DSUUBX_CORE_PPU_PWPR(octeontx_core_id));
		if (core_pwsr.u == core_pwpr.u)
			break;
		udelay(1);
		loop--;
	}
	if (!loop) {
		WARN("%s: Failed to match PWSR with PWPR core_pwsr.u 0x%x\n", __func__, core_pwsr.u);
		return;
	}
#else
	union cavm_rst_pp_reset pp_reset;

	pp_reset.u = CSR_READ(CAVM_RST_PP_RESET);

	if(!(pp_reset.u & (1ul << octeontx_core_id))) {
		/* core is WFI suspended state
		 * Need to reset it by writing 1 to RST_PP_RESET and then
		 * clearing it.
		 **/
		pp_reset.u |= (1ul << octeontx_core_id);
		CSR_WRITE(CAVM_RST_PP_RESET, pp_reset.u);
		__asm("dsb ishst");
		__asm("sev");
		if(wait_for_core()) {
			WARN("Failed to release core:%lu\n ",
					octeontx_core_id);
			while(1);
			return;
		}
		pp_reset.u = CSR_READ(CAVM_RST_PP_RESET);
	}
	pp_reset.u &= ~(1ul << octeontx_core_id);
	CSR_WRITE(CAVM_RST_PP_RESET, pp_reset.u);
	__asm("dsb ishst");
	__asm("sev");
	if(wait_for_core()){
		WARN("Failed to release core:%lu\n ",
				octeontx_core_id);
	}
#endif
}

void octeontx_legacy_pwrc_cpu_off(int octeontx_core_id)
{
#if defined(PLAT_cn10ka) || defined(PLAT_cnf10ka)
	int loop;
	uint64_t cpupwrctlr_el1;
	cavm_dsuubx_cluster_ppu_pwpr_t cluster_pwpr;
	cavm_dsuubx_core_ppu_pwpr_t core_pwpr;
	cavm_dsuubx_cluster_ppu_pwsr_t cluster_pwsr;
	cavm_dsuubx_core_ppu_pwsr_t core_pwsr;

	cpupwrctlr_el1 = read_cpupwrctlr_el1();
	set_bit(cpupwrctlr_el1, 0);
	write_cpupwrctlr_el1(cpupwrctlr_el1);
	cpupwrctlr_el1 = read_cpupwrctlr_el1();

	cluster_pwpr.u = CSR_READ(CAVM_DSUUBX_CLUSTER_PPU_PWPR(octeontx_core_id));
	cluster_pwpr.s.pwr_policy = 0x0; /* OFF */
	CSR_WRITE(CAVM_DSUUBX_CLUSTER_PPU_PWPR(octeontx_core_id), cluster_pwpr.u);

	loop = 1000000;
	while (loop) {
		cluster_pwpr.u = CSR_READ(CAVM_DSUUBX_CLUSTER_PPU_PWPR(octeontx_core_id));
		cluster_pwsr.u = CSR_READ(CAVM_DSUUBX_CLUSTER_PPU_PWSR(octeontx_core_id));

		if (cluster_pwsr.u == cluster_pwpr.u)
			break;
		udelay(1);
		loop--;
	}
	if (!loop) {
		WARN("%s: Failed to match PWSR with PWPR cluster_pwsr.u 0x%x\n", __func__, cluster_pwsr.u);
		return;
	}

	/* Set the policy mode to OFF for the core/cluster */
	core_pwpr.u = CSR_READ(CAVM_DSUUBX_CORE_PPU_PWPR(octeontx_core_id));
	core_pwpr.s.pwr_policy = 0x0; /* OFF */
	CSR_WRITE(CAVM_DSUUBX_CORE_PPU_PWPR(octeontx_core_id), core_pwpr.u);

	loop = 1000000;
	while (loop) {
		core_pwsr.u = CSR_READ(CAVM_DSUUBX_CORE_PPU_PWSR(octeontx_core_id));
		core_pwpr.u = CSR_READ(CAVM_DSUUBX_CORE_PPU_PWPR(octeontx_core_id));
		if (core_pwsr.u == core_pwpr.u)
			break;
		udelay(1);
		loop--;
	}
	if (!loop) {
		WARN("%s: Failed to match PWSR with PWPR core_pwsr.u 0x%x\n", __func__, core_pwsr.u);
		return;
	}
#endif
}

/* Nothing else to do here apart from initializing the lock */
void octeontx_legacy_pwrc_setup(void)
{
	return;
}
