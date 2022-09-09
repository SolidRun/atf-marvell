/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <arch.h>
#include <platform_def.h>
#include <platform_setup.h>
#include <lib/psci/psci.h>

/*******************************************************************************
 * This function returns the Cavium default topology tree information.
 ******************************************************************************/
const unsigned char *plat_get_power_domain_tree_desc(void)
{
	return plat_octeontx_power_domain_tree_desc;
}

/*******************************************************************************
 * This function implements a part of the critical interface between the psci
 * generic layer and the platform that allows the former to query the platform
 * to convert an MPIDR to a unique linear index. An error code (-1) is returned
 * in case the MPIDR is invalid.
 ******************************************************************************/
int plat_core_pos_by_mpidr(u_register_t mpidr)
{
	unsigned int cpu_id;

	mpidr &= MPIDR_AFFINITY_MASK;

	/* Core index is part of aff2, aff1 and aff0 are zeros,
	 * hence use MPIDR_NODE_MASK to find if MPIDR read
	 * is valid
	 */
	if (mpidr & ~(MPIDR_NODE_MASK))
		return -1;

	cpu_id = (mpidr >> MPIDR_AFF2_SHIFT) & MPIDR_AFFLVL_MASK;

	if (cpu_id >= PLATFORM_MAX_CPUS_PER_CLUSTER)
		return -1;

	return cpu_id;
}
