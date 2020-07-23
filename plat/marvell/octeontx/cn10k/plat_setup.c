/*
 * Copyright (C) 2020 Marvell International Ltd.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <arch.h>
#include <stdio.h>
#include <debug.h>
#include <string.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_pwrc.h>
#include <octeontx_legacy_pwrc.h>
#include <gpio_octeontx.h>
#include <plat_board_cfg.h>
#include <plat_octeontx.h>
#include <octeontx_utils.h>
#include <octeontx_security.h>
#include <sh_fwdata.h>

#if RAS_EXTENSION
#include <plat_ras.h>
#endif

#include "cavm-csrs-gpio.h"

#if defined(ARM_TRACE_SECURE_BUFFER)
extern void plat_armtrace_init(void);
#endif
/* Any SoC family specific setup
 * to be done in BL31 can be initialized
 * in this API. If there are any platform
 * specific init to be done but not common
 * to family, each platform can define
 * its own API and can be called from here
 */
void plat_octeontx_setup(void)
{
	/* setup gpio interrupt handling */
	plat_gpio_irq_setup();


	/* Configure PEM0 (EP) streams to use secure world access.
	 * PEM0 streams must be secure to support host remote utils' memory
	 * access while running OcteonTX Linux. Otherwise, any remote access
	 * will be aborted (and an event logged) due to OcteonTX Linux SMMU
	 * initialization.
	 */
	octeontx_configure_pem_ep_security(0 /* PEM0 */, 1 /* secure */);

}

/*
 * Program REVID for PCIe CPT device.
 */
unsigned int plat_configure_cpt_rid(void)
{
	/* program CPT revision id */
	return 4;
}

/*
 * Program REVID for PCIe devices.
 * Bits 0..1: minor pass
 * Bits 3..2: major pass
 * Bits 7..4: midr id: t106 : 0x5
 */
unsigned int plat_configure_rid(void)
{
	/* FIXME. For now return default value of 0x50 indicating
	 * major and minor pass version as 0
	 */
	return 0x50;
}

extern void *scmi_handle;

void plat_pwrc_setup(void)
{
	int rc;

#ifdef SCMI_WITH_LEGACY_PM
	/*
	 * Initialize SCMI for custom Cavium configuration protocol.
	 * Initialize legacy pwrc for PSCI
	 */
	rc = octeontx_pwrc_setup();
	if (rc)
		VERBOSE("SCMI initialize failed with %d\n", rc);
	octeontx_legacy_pwrc_setup();
#else
	/*
	 * Try to initialize SCMI, in case of error,
	 * fallback to legacy PM driver
	 */
	rc = octeontx_pwrc_setup();
	if (rc) {
		octeontx_legacy_pwrc_setup();
	}
#endif
}

void plat_setup_psci_ops(uintptr_t sec_entrypoint,
			 const plat_psci_ops_t **psci_ops)
{
#ifdef SCMI_WITH_LEGACY_PM
	/*
	 * Always use legacy PSCI ops
	 */
	octeontx_legacy_setup_psci_ops(sec_entrypoint, psci_ops);
#else
	if (scmi_handle == NULL) {
		octeontx_legacy_setup_psci_ops(sec_entrypoint, psci_ops);
	} else {
		octeontx_setup_psci_ops(sec_entrypoint, psci_ops);
	}
#endif
}

/*
 * FIXME: FUSF replaced by eHSM module. 
 *
 * Return: Value in 0-32 range
 */
unsigned int plat_get_rom_t_cnt()
{
	return 0;
}

/*
 * Return alternative pkg information
 *
 * @return non-zero if an alternative package
 *     0 = Normal package
 *     1 = Alternative package 1 (CN93XX)
 *     3 = Alternative package 3 (CN95XXE)
 */
int plat_get_altpkg(void)
{
	union cavm_gpio_pkg_ver pkg_ver;

	pkg_ver.u = CSR_READ(CAVM_GPIO_PKG_VER);
	return pkg_ver.s.pkg_ver;
}

void plat_octeontx_cpu_setup(void)
{
}

