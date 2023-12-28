/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <inttypes.h>
#include <lib/psci/psci.h>
#include <debug.h>
#include <octeontx_utils.h>
#include <octeontx_common.h>
#include <octeontx_legacy_pm.h>
#include <octeontx_mmap_utils.h>
#include <plat_cn20k_configuration.h>
#include <drivers/delay_timer.h>

#include "cavm-csrs-rst.h"

//#include <plat_board_cfg.h>

/*******************************************************************************
 * FVP handler to reboot the system
 ******************************************************************************/

static void __dead2 plat_octeontx_legacy_system_reset(void)
{
	union cavm_rstx_boot rst_boot;
	union cavm_rstx_gbl_chip_w1s rst_chip;

	dcsw_op_all(DCCISW);
	llc_flush();
	__asm__ volatile("ic iallu\n"
			 "isb\n");

	// SCP should auto restart after reset
	rst_boot.s.rboot = 0;
	CSR_WRITE(CAVM_RSTX_BOOT(1), rst_boot.u);

	// entire system reset
	rst_chip.s.soft_rst = 1;
	CSR_WRITE(CAVM_RSTX_GBL_CHIP_W1S(1), rst_chip.u);
	while (rst_chip.s.soft_rst)
		rst_chip.u = CSR_READ(CAVM_RSTX_GBL_CHIP_W1S(1));

	ERROR("CN20K System Reset: operation not handled.\n");
	panic();
}

void plat_octeontx_legacy_psci_override_pm_ops(plat_psci_ops_t *pm_ops)
{
	pm_ops->system_reset = plat_octeontx_legacy_system_reset;
}
