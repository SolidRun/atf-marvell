/*
 * Copyright (C) 2016-2018 Marvell International Ltd.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <bakery_lock.h>
#include <mmio.h>
#include <plat/common/platform.h>
#include <plat_cn10k_configuration.h>
#include <octeontx_legacy_pwrc.h>
#include <octeontx_common.h>
#include <arch_helpers.h>
#include <debug.h>
#include <octeontx_helpers.h>

#include "cavm-csrs-rst.h"

#if !defined(PLAT_t106)
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
	unsigned long octeontx_core_id = (unsigned long)(plat_core_pos_by_mpidr
					((u_register_t)mpidr));

#if defined(PLAT_t106)
	cavm_apax_core_reset_t core_reset;
	cavm_apax_clusterpch_t apax_cluster;
	cavm_apax_corepch_t apax_corepch;

	int loop = 1000000;
	/* Poll on APA()_CLUSTERPCH[STATUS] until it becomes 0 */
	while(loop) {
		apax_cluster.u = CSR_READ(CAVM_APAX_CLUSTERPCH(octeontx_core_id));

		if(!apax_cluster.s.status)
			break;
		loop--;
	}

clusterpch_state:
	/* Write APA()_CLUSTERPCH[STATE] = APA_CLUSTERP_STATE_E__SFONLY_ON */
	apax_cluster.u = CSR_READ(CAVM_APAX_CLUSTERPCH(octeontx_core_id));
	apax_cluster.s.state = CAVM_APA_CLUSTERP_STATE_E_SFONLY_ON;
	CSR_WRITE(CAVM_APAX_CLUSTERPCH(octeontx_core_id), apax_cluster.u);
	
	loop = 1000000;
	/* Poll on APA()_CLUSTERPCH[STATUS] until it becomes 0 */
	while(loop) {
		apax_cluster.u = CSR_READ(CAVM_APAX_CLUSTERPCH(octeontx_core_id));

		if(!apax_cluster.s.status)
			break;
		loop--;
	}
	/* Check value of APA()_CLUSTERPCH[ACCEPT] = 1 (else go back to step 2) */
	apax_cluster.u = CSR_READ(CAVM_APAX_CLUSTERPCH(octeontx_core_id));
	if (!apax_cluster.s.accept)
		goto clusterpch_state;

	loop = 1000000;
	/* Poll on APA()_COREPCH[STATUS] until it becomes 0 */
	while(loop) {
		apax_corepch.u = CSR_READ(CAVM_APAX_COREPCH(octeontx_core_id));

		if(!apax_corepch.s.status)
			break;
		loop--;
	}

corepch_state:
	/* Write APA().COREPCH[STATE] = APA_COREP_STATE_E__ON */
	apax_corepch.u = CSR_READ(CAVM_APAX_COREPCH(octeontx_core_id));
	apax_corepch.s.state = CAVM_APA_COREP_STATE_E_ON;
	CSR_WRITE(CAVM_APAX_COREPCH(octeontx_core_id), apax_corepch.u); 

	loop = 1000000;
	/* Poll on APA()_COREPCH[STATUS] until it becomes 0 */
	while(loop) {
		apax_corepch.u = CSR_READ(CAVM_APAX_COREPCH(octeontx_core_id));

		if(!apax_corepch.s.status)
			break;
		loop--;
	}

	/* Check value of APA()_COREPCH[ACCEPT] = 1 (else go back to step 6) */
	apax_cluster.u = CSR_READ(CAVM_APAX_COREPCH(octeontx_core_id));
	if (!apax_corepch.s.accept)
		goto corepch_state;

	/* Set RVBARADDR with entry point */
	plat_cn10k_set_secondary_cpu_jump_addr(octeontx_core_id, 
				(uint64_t)plat_secondary_cold_boot_setup);
	/* FIXME: Write APA()_PLL, .  Recommended settings are 
	* (this assumes we want to use the ARO in calibration mode)
	* ALT_REF = 0
	* MSC_ENABLE = 0
	* MAX_MUL = 0
	* INIT_MUL = 40 (times refclk/2 = 2000Mhz)
	* NEXT_MUL = 40 (times refclk/2 = 2000Mhz)
	* NEXT_PLL_SEL = APA_PLL_SEL_E__ARO
	* NEXT_MAN = 0
	* NEXT_PGM = 1
	* NEXT_SWITCH = 0
	*/
	core_reset.u = CSR_READ(CAVM_APAX_CORE_RESET(octeontx_core_id));
	core_reset.s.resetn = 1;
	CSR_WRITE(CAVM_APAX_CORE_RESET(octeontx_core_id), core_reset.u);
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

/* Nothing else to do here apart from initializing the lock */
void octeontx_legacy_pwrc_setup(void)
{
	return;
}
