/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <assert.h>
#include <inttypes.h>

#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <octeontx_ecam.h>
#include <octeontx_utils.h>
#include <platform_def.h>
#include <octeontx_irqs_def.h>
#include <plat_cn20k_configuration.h>

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-gpio.h"
#include "cavm-csrs-gic.h"
#include "cavm-csrs-gti.h"
#include "cavm-csrs-iobn.h"
#include "cavm-csrs-pccbr.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-pem.h"
#include "cavm-csrs-smmu.h"

/* for LEGACY logging, define DEBUG_ATF_PLAT_ECAM to enable debug logs */
#undef DEBUG_ATF_PLAT_ECAM

#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_PLAT_ECAM
#  define debug_plat_ecam(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
				tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_PLAT_ECAM
#define debug_plat_ecam printf
#else
#define debug_plat_ecam(...) ((void) (0))
#endif

/*
 * Global ecam_device instance
 */
static struct ecam_device ecam_dev;

extern void octeontx_ecam_dev_init(struct ecam_device *device,
				unsigned int ecam);
extern int octeontx_call_probe(uint64_t pconfig);
extern void octeontx_call_init(uint64_t pconfig);
extern const struct ecam_platform_defs plat_ops;

uint64_t get_iodid_dev_config(struct ecam_device *dev)
{
	uint64_t pconfig;
	cavm_pccpf_xxx_id_t pccpf_id;

	pconfig = (dev->base_addr |
		  ((dev->iodid << ECAM_IODID_SHIFT) & ECAM_IODID_MASK) |
		  ((dev->func << ECAM_FUNC_SHIFT) & ECAM_FUNC_MASK));

	pccpf_id.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_ID);
	if (pccpf_id.s.vendid == 0xffff || pccpf_id.s.devid == 0xffff)
		return 0;

	return pconfig;
}

static void octeontx_ecam_iodid_dev_enumerate(struct ecam_device *device)
{
	uint64_t pconfig;
	int rc;

	/* Get address of the device */
	pconfig = plat_ops.get_iodid_dev_config(device);
	if (!pconfig) {
		debug_plat_ecam("%s: Unable to get config\n", __func__);
		return;
	}

	/* Call platform-specific method for secure settings */
	rc = plat_ops.get_secure_settings(device, pconfig);
	if (!rc) {
		debug_plat_ecam("%s: Unable to get secure settings\n",
				__func__);
		return;
	}

	/* Call probe function on device (if probe method exist) */
	rc = octeontx_call_probe(pconfig);
	if (!rc) {
		debug_plat_ecam("%s: Probe returned with rc=%d\n",
				__func__, rc);
		plat_ops.disable_dev(device);
		return;
	}

	/* Call init function on device */
	octeontx_call_init(pconfig);

	debug_plat_ecam("%s: E%u:IODID:%u:FUN%u\n"
			"pconfig: 0x%" PRIx64 ", secure:%u, scp:%u, "
			"mcp:%u\n",
			__func__, device->ecam, device->iodid,
			device->func, pconfig,
			device->config.s.is_secure,
			device->config.s.is_scp_secure,
			device->config.s.is_mcp_secure);

	/* Program SSID for the device if applicable for
	 * the platform
	 */
	if (plat_ops.program_ssid) {
		plat_ops.program_ssid(device, pconfig);
	}

	debug_plat_ecam("%s: pconfig: 0x%" PRIx64 ", value: 0x%x\n",
			__func__, pconfig,
			octeontx_read32(pconfig));
}

static void octeontx_scan_iodid(struct ecam_device *device)
{
	debug_plat_ecam("%s: E%u:IODID%u\n",
			__func__, device->ecam, device->iodid);

	octeontx_ecam_iodid_dev_enumerate(device);
}

void plat_ecam_setup(unsigned int ecam)
{
	struct ecam_device *device = &ecam_dev;

	octeontx_ecam_dev_init(device, ecam);

	for (device->iodid = 0;
	     device->iodid < OCTEONTX_ECAM_MAX_IODID;
	     device->iodid++) {
		device->func = 0;
		octeontx_scan_iodid(device);
	}
}
