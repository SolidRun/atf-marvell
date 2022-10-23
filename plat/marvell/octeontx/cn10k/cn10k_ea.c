/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <common/bl_common.h>
#include <common/debug.h>
#include <arch_helpers.h>
#include <lib/extensions/ras.h>

#define ID_AA64MMFR2_EL1_IESB_SHIFT      U(12)
#define ID_AA64MMFR2_EL1_IESB_MASK       ULL(0xF)

#define ERROR_SYNDROME_IESB_SHIFT	13
#define ERROR_SYNDROME_IESB_MASK	0x1

#define CN10K_SERROR_SYNDROME		0xbe000011

void plat_ea_handler(unsigned int ea_reason, uint64_t syndrome, void *cookie,
		void *handle, uint64_t flags)
{
#if RAS_EXTENSION
	/* Call RAS EA handler */
	int handled = ras_ea_handler(ea_reason, syndrome, cookie, handle, flags);

	/*
	 * handled 0 means, there is no RAS error. 1 means ras error is handled
	 * from the ras error handler.
	 */
	if (handled != 0)
		VERBOSE("RAS errors notified from EA handler on 0x%lx\n", read_mpidr_el1());
#endif

	VERBOSE("In %s: syndrome = 0x%llx\n", __func__, syndrome);
#ifdef EL3_PANIC_ON_LOWER_EL_EA
	if ((read_id_aa64mmfr2_el1() >> ID_AA64MMFR2_EL1_IESB_SHIFT) &
		ID_AA64MMFR2_EL1_IESB_MASK) {
		if ((syndrome >> ERROR_SYNDROME_IESB_SHIFT) &
			ERROR_SYNDROME_IESB_MASK)
			return;
	}

	if (syndrome != CN10K_SERROR_SYNDROME) {
		ERROR("Unhandled External Abort received on 0x%lx at EL3!\n",
			read_mpidr_el1());
		ERROR(" exception reason=%u syndrome=0x%llx\n", ea_reason,
				syndrome);
		panic();
	}
#endif
}
