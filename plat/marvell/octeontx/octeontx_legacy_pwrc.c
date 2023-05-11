/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 *
 */

#include <bakery_lock.h>
#include <mmio.h>
#include <plat/common/platform.h>
#if defined(PLAT_CN10K_FAMILY)
#include <plat_cn10k_configuration.h>
#endif
#include <context.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <arch_helpers.h>
#include <debug.h>
#include <drivers/delay_timer.h>
#include <octeontx_helpers.h>
#if !(defined(PLAT_t81) || defined(PLAT_t83))
#include <plat_pwrc.h>
#endif
#include <octeontx_legacy_pwrc.h>

#include "cavm-csrs-rst.h"
#if defined(PLAT_CN10K_FAMILY)
#include "cavm-csrs-dsuub.h"
#endif

#define CORE_ONFINISH_WAIT_LOOPS 1000000

#if !(defined(PLAT_CN10K_FAMILY))
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

static void octeontx_dsu_core_cluster_on(int octeontx_core_id)
{
	cavm_dsuubx_cluster_ppu_pwpr_t cluster_pwpr;
	cavm_dsuubx_core_ppu_pwpr_t core_pwpr;

	/* Power up the cluster */
	cluster_pwpr.u = CSR_READ(CAVM_DSUUBX_CLUSTER_PPU_PWPR(octeontx_core_id));
	cluster_pwpr.s.pwr_policy = 0x8; /* ON. Logic on with RAM on, cluster is functional */
	cluster_pwpr.s.op_policy = 0x7; /* OPMODE_07: ALL_SLICE_FULL_RAM_ON */
	CSR_WRITE(CAVM_DSUUBX_CLUSTER_PPU_PWPR(octeontx_core_id), cluster_pwpr.u);

	/* Power up the core */
	core_pwpr.u = CSR_READ(CAVM_DSUUBX_CORE_PPU_PWPR(octeontx_core_id));
	core_pwpr.s.pwr_policy = 0x8; /* ON. Logic on with RAM on, cluster is functional */
	CSR_WRITE(CAVM_DSUUBX_CORE_PPU_PWPR(octeontx_core_id), core_pwpr.u);
}

void octeontx_legacy_pwrc_write_pponr(unsigned long mpidr)
{
#if defined(PLAT_CN10K_FAMILY)
	unsigned long octeontx_core_id = (unsigned long)(plat_core_pos_by_mpidr((u_register_t)mpidr));
	int loop = CORE_ONFINISH_WAIT_LOOPS;
	int pwr_on = 0;
	int cur_state = enable_hotplug[octeontx_core_id];

	switch(cur_state) {
	case CN10K_CORE_PWROFF:
		pwr_on = 1;
	/* fallthrough */
	case CN10K_CORE_RESET:
		break;
	case CN10K_CORE_CLEAR_RESET:
	case CN10K_CORE_ONFINISH:
	default:
		ERROR("Failed to clear reset, Core %d is not in RESET, hotplug state %d\n",
						(uint32_t) octeontx_core_id, cur_state);
		return;
	}

	/* Set RVBARADDR with entry point */
	plat_cn10k_set_secondary_cpu_jump_addr(octeontx_core_id, 
		(uint64_t)plat_secondary_cold_boot_setup);
	enable_hotplug[octeontx_core_id] = CN10K_CORE_CLEAR_RESET;

	if (pwr_on)
		octeontx_dsu_core_cluster_on(octeontx_core_id);

	isb();
	dsb();
	sev();
	
	while(loop-- && enable_hotplug[octeontx_core_id] != CN10K_CORE_ONFINISH) {
		udelay(1);
	};

	if (!loop) {
		ERROR("Failed to bring up core %d, hotplug state %d\n",
				(uint32_t) octeontx_core_id, enable_hotplug[octeontx_core_id]);
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
#if defined(PLAT_CN10K_FAMILY)
	int cur_state = enable_hotplug[octeontx_core_id];

	switch(cur_state) {
	case CN10K_CORE_PWROFF:
		break;
	case CN10K_CORE_CLEAR_RESET:
	case CN10K_CORE_RESET:
	case CN10K_CORE_ONFINISH:
	default:
		{
			/* Set RVBARADDR with entry point */
			plat_cn10k_set_secondary_cpu_jump_addr(octeontx_core_id,
					(uint64_t)plat_secondary_cold_boot_setup);
			enable_hotplug[octeontx_core_id] = CN10K_CORE_RESET;
			dsb();
		}
		break;
	}

#endif
}

/* Nothing else to do here apart from initializing the lock */
void octeontx_legacy_pwrc_setup(void)
{
	return;
}
