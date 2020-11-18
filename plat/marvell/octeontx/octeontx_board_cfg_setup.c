/*
 * Copyright (C) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <arch.h>
#include <platform_def.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <plat_board_cfg.h>
#include <octeontx_board_cfg_setup.h>
#include <octeontx_common.h>
#include <debug.h>
#include <assert.h>
#include <strtol.h>

#include <libfdt.h>

#include "cavm-require.h"

#undef DEBUG_BOARD_INFO

#ifdef DEBUG_BOARD_INFO
#define board_info INFO
#else
#define board_info(...) ((void) (0))
#endif

static void print_board_variables()
{
	board_info("======================\n");
	board_info("BOARD MODEL = %s\n", plat_octeontx_bcfg->bcfg.board_model);
	board_info("QLM AUTO CONFIG = %d\n", plat_octeontx_bcfg->qlm_auto_config);
	board_info("BMC BOOT TWSI bus=0x%x, addr=0x%x\n",
		plat_octeontx_bcfg->bcfg.bmc_boot_twsi_bus,
		plat_octeontx_bcfg->bcfg.bmc_boot_twsi_addr);
	board_info("BMC IPMI TWSI bus=0x%x, addr=0x%x\n",
		plat_octeontx_bcfg->bcfg.bmc_ipmi_twsi_bus,
		plat_octeontx_bcfg->bcfg.bmc_ipmi_twsi_addr);
	board_info("GPIO Shutdown pin IN = 0x%x\n",
		plat_octeontx_bcfg->bcfg.gpio_shutdown_ctl_in);
	board_info("GPIO Shutdown pin OUT = 0x%x\n",
		plat_octeontx_bcfg->bcfg.gpio_shutdown_ctl_out);
#if TRUSTED_BOARD_BOOT
	board_info("TRUST-ROT-ADDR = 0x%llx\n",
		plat_octeontx_bcfg->bcfg.trust_rot_addr);
	board_info("TRUST-BSSK-ADDR = 0x%llx\n",
		plat_octeontx_bcfg->bcfg.trust_key_addr);
#endif
	board_info("======================\n");

}

#if TRUSTED_BOARD_BOOT
static uint64_t octeontx_fdt_get_uint64(const void *fdt, int offset, const char *property, int base)
{
	const char *name;
	int len;

	name = fdt_getprop(fdt, offset, property, &len);
	if (!name) {
		VERBOSE("No %s is found\n", property);
		return 0;
	} else {
		return (uint64_t)strtol(name, NULL, base);
	}
}
#endif

static int octeontx_fdt_get(const void *fdt, int offset, const char *property, int base)
{
	const char *name;
	int len;

	name = fdt_getprop(fdt, offset, property, &len);
	if (!name) {
		board_info("No %s is found\n", property);
		return -1;
	} else {
		return (int)strtol(name, NULL, base);
	}

}

WEAK int plat_octeontx_fill_board_details(void) {
	return 0;
}

WEAK void plat_octeontx_print_board_variables(void) {}

int octeontx_fill_board_details(int info)
{
	const void *fdt = fdt_ptr;
	const char *name;
	int offset, len, config, rc;

	/* Initialize the board config mem to zero before
	 * updating them with the details from device tree
	 */
	memset(plat_octeontx_bcfg, 0, sizeof(plat_octeontx_board_cfg_t));

	if (fdt_check_header(fdt)) {
		printf("WARNING: Invalid device tree\n");
		return -1;
	}

	offset = fdt_path_offset(fdt, "/cavium,bdk");
	if (offset < 0) {
		printf("WARNING: FDT node not found\n");
		return offset;
	}

	name = fdt_getprop(fdt, offset, "BOARD-MODEL", &len);
	if (!name) {
		printf("WARNING: No BOARD-MODEL is found\n");
		plat_octeontx_bcfg->bcfg.board_model[0] = '\0';
	} else {
		strlcpy(plat_octeontx_bcfg->bcfg.board_model, name, sizeof(plat_octeontx_bcfg->bcfg.board_model));
		/* Terminate, in case strlen(name) > sizeof(board_model) */
		plat_octeontx_bcfg->bcfg.board_model[sizeof(plat_octeontx_bcfg->bcfg.board_model) - 1] = '\0';
		len = strlen(plat_octeontx_bcfg->bcfg.board_model);
		for (int i = 0; i < len; i++)
			plat_octeontx_bcfg->bcfg.board_model[i] = tolower(plat_octeontx_bcfg->bcfg.board_model[i]);
	}

	plat_octeontx_bcfg->bcfg.gpio_shutdown_ctl_in = octeontx_fdt_get(fdt, offset, "GPIO-SHUTDOWN-CTL-IN", 0);
	/* The new format is hex and allows for node id and polarity
	 * packed into the value. We don't use them right now and mask
	 * them out. */
	if (plat_octeontx_bcfg->bcfg.gpio_shutdown_ctl_in != -1)
		plat_octeontx_bcfg->bcfg.gpio_shutdown_ctl_in &= 0xff;

	plat_octeontx_bcfg->bcfg.gpio_shutdown_ctl_out = octeontx_fdt_get(fdt, offset, "GPIO-SHUTDOWN-CTL-OUT", 0);
	/* The new format is hex and allows for node id and polarity
	 * packed into the value. We don't use them right now and mask
	 * them out. */
	if (plat_octeontx_bcfg->bcfg.gpio_shutdown_ctl_out != -1)
		plat_octeontx_bcfg->bcfg.gpio_shutdown_ctl_out &= 0xff;

	config = octeontx_fdt_get(fdt, offset, "MCU-SHUTDOWN-TWSI-CONFIG", 16);
	if (config != -1) {
		plat_octeontx_bcfg->bcfg.mcu_twsi.s.int_addr = (config >> 16) & 0xff;
		plat_octeontx_bcfg->bcfg.mcu_twsi.s.bus = (config >> 8) & 0xff;
		plat_octeontx_bcfg->bcfg.mcu_twsi.s.addr = config & 0xff;
	} else {
		plat_octeontx_bcfg->bcfg.mcu_twsi.u = 0;
	}

#if TRUSTED_BOARD_BOOT
	/*
	 * Configuration for Trusted Board Boot received from BDK.
	 * For more information, please refer to bdk-trusted-boot.pdf file
	 * in BDK source repository.
	 */
	plat_octeontx_bcfg->bcfg.trust_rot_addr = octeontx_fdt_get_uint64(fdt, offset, "TRUST-ROT-ADDR", 16);

	/*
	 * If either octeontx_fdt_get_uint64 returned -1 (property not found) or
	 * 0 (property found, but set to 0 indicates non-secure boot), stop secure booting
	 */
	if (plat_octeontx_bcfg->bcfg.trust_rot_addr == 0 || plat_octeontx_bcfg->bcfg.trust_rot_addr == -1) {
		printf("ERROR: No TRUST-ROT-ADDR in DTS, trusted boot failed\n");
		return -1;
	}

#if CRYPTO_BOARD_BOOT
	/*
	 * TRUST-BSSK-ADDR is set only when HUK parameter was passed to build system.
	 * If so, it contains the address of BSSK key. Firstly, try to get BSSK
	 */
	plat_octeontx_bcfg->bcfg.trust_key_addr = octeontx_fdt_get_uint64(fdt, offset, "TRUST-BSSK-ADDR", 16);

	/*
	 * If either octeontx_fdt_get_uint64 returned -1 (property not found) or
	 * 0 (property found, but set to 0 indicates SSK), print info about it
	 */
	if (plat_octeontx_bcfg->bcfg.trust_key_addr == 0 || plat_octeontx_bcfg->bcfg.trust_rot_addr == -1) {
		printf("INFO: No TRUST-BSSK-ADDR in DTS, images will be decrypted\n"
		       "      with SSK key from FUSF_SSKX(0..1).\n");
		plat_octeontx_bcfg->bcfg.trust_key_addr = 0;
	}
#endif /* CRYPTO_BOARD_BOOT */

#endif /* TRUSTED_BOARD_BOOT */
	rc = plat_octeontx_fill_board_details();
	if (rc) {
		INFO("Processing family FDT failed\n");
		return rc;
	}

	if (info) {
		print_board_variables();
		plat_octeontx_print_board_variables();
	}
	return 0;
}
