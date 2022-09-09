/*
 * Copyright (c) 2016 Marvell.
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
#if !(defined(PLAT_CN10K_FAMILY))
	board_info("QLM AUTO CONFIG = %d\n", plat_octeontx_bcfg->qlm_auto_config);
#endif
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

	/*
	 * The plat_octeontx_bcfg memory was already zero-initialized
	 * when it was mapped (see plat_add_mmio_common).
	 */

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

#if !(defined(PLAT_CN10K_FAMILY))
	config = octeontx_fdt_get(fdt, offset, "QLM-AUTO-CONFIG", 0);
	if (config != -1) {
		plat_octeontx_bcfg->qlm_auto_config = config;
	} else
		plat_octeontx_bcfg->qlm_auto_config = 0;
#endif

	config = octeontx_fdt_get(fdt, offset, "BMC-BOOT-TWSI-CONFIG", 0);
	if (config != -1) {
		plat_octeontx_bcfg->bcfg.bmc_boot_twsi_bus = (config >> 8) & 0xff;
		plat_octeontx_bcfg->bcfg.bmc_boot_twsi_addr = config & 0xff;
	} else {
		plat_octeontx_bcfg->bcfg.bmc_boot_twsi_bus = octeontx_fdt_get(fdt, offset, "BMC-BOOT-TWSI-BUS", 10);
		plat_octeontx_bcfg->bcfg.bmc_boot_twsi_addr = octeontx_fdt_get(fdt, offset, "BMC-BOOT-TWSI-ADDR", 16);
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

#if RAS_EXTENSION
/*
 * Parse the device tree RAS error rings (GHES/BERT).
 *
 * on entry,
 *   fdt            : pointer to FDT
 *   offset         : starting offset to parse
 *   fdt_ghes       : array of structures to fill
 *   num_entries    : count of structures to fill
 *   fdt_size_cells : # of size-cells used by node
 *                    (this accommodates different 'size-cells' in DT)
 */
static int parse_fdt_ras(const void *fdt, int offset,
			 struct fdt_ghes *fdt_ghes, int num_entries,
			 size_t fdt_size_cells)
{
	const fdt32_t *frange;
	struct range {
		uint64_t rel;
		uint64_t abs;
		uint32_t size;
	} ranges[GHES_PTRS];
	int child, i, cnt;

	/* parse address translation window */
	frange = fdt_getprop(fdt, offset, "ranges", NULL);
	for (i = 0; i < GHES_PTRS; i++) {
		struct range *r;
		const fdt32_t *foff;
		size_t range_prop_len;

		/* ranges uses 2 addr fields, assume they are 64-bit
		 * (.e. address-cells == 2)
		 */
		range_prop_len = sizeof(uint64_t) * 2;
		range_prop_len += sizeof(uint32_t) * fdt_size_cells;
		/* len is in units of uint32_t */
		range_prop_len /= sizeof(uint32_t);

		r = &ranges[i];
		foff = frange + (range_prop_len * i);

		r->rel = fdt32_to_cpu(foff[0]);
		r->rel <<= 32;
		r->rel |= (uint64_t)fdt32_to_cpu(foff[1]);
		r->abs = fdt32_to_cpu(foff[2]);
		r->abs <<= 32;
		r->abs |= (uint64_t)fdt32_to_cpu(foff[3]);
		r->size = fdt32_to_cpu(foff[3 + fdt_size_cells]);
		board_info("%s r%d %llx %llx %x\n",
			__func__, i, r->rel, r->abs, r->size);
	}

	/* parse each subnode */
	cnt = 0;
	fdt_for_each_subnode(child, fdt, offset) {
		const fdt32_t *freg, *fid;
		struct fdt_ghes *g;
		const char *name;

		g = fdt_ghes + cnt;

		name = fdt_get_name(fdt, child, NULL);
		freg = fdt_getprop(fdt, child, "reg", NULL);
		fid = fdt_getprop(fdt, child, "event-id", NULL);

		/* Only validate params present in ALL nodes */
		if (!freg || !name)
			continue;

		strlcpy(g->name, name, sizeof(g->name));
		if (fid)
			g->id = fdt32_to_cpu(fid[0]);

		for (i = 0; i < GHES_PTRS; i++) {
			struct range *r;
			const fdt32_t *foff;
			size_t reg_prop_len;
			uint64_t base;

			reg_prop_len = sizeof(uint64_t);
			reg_prop_len += sizeof(uint32_t) * fdt_size_cells;
			/* len is in units of uint32_t */
			reg_prop_len /= sizeof(uint32_t);

			r = &ranges[i];
			foff = freg + (reg_prop_len * i);

			base = fdt32_to_cpu(foff[0]);
			base <<= 32;
			base |= (uint64_t)fdt32_to_cpu(foff[1]);
			g->size[i] = fdt32_to_cpu(foff[1 + fdt_size_cells]);

			/* check against parent range */
			if (base + g->size[i] > r->rel + r->size ||
						    base < r->rel) {
				board_info("%s(%s) r%d %x@%llx outside %x@%llx\n",
					__func__, g->name, i,
					g->size[i], base,
					r->size, r->rel);
				g->base[i] = NULL;
				g->size[i] = 0;
			} else {
				base += r->abs - r->rel;
				board_info("%s (%s) id:%x %x@%llx\n", __func__,
					g->name, g->id, g->size[i], base);
				g->base[i] = (void *)base;
			}
		}

		if (++cnt >= num_entries)
			break;
	}

	return cnt;
}

/*
 * octeontx_fill_ras_hest_details()
 *
 * Populate the RAS error ring structures from the Device Tree.
 */
void octeontx_fill_ras_hest_details(const void *fdt, const char *path,
		const char *compatible)
{
	ras_config_t *c = &plat_octeontx_bcfg->ras_config;
	int offset, cnt;

	offset = fdt_path_offset(fdt, path);
	board_info("%s %s %d\n", __func__, path, offset);
	offset = fdt_node_offset_by_compatible(fdt, 0, compatible);
	board_info("%s sdei-ghes %d\n", __func__, offset);
	cnt = parse_fdt_ras(fdt, offset, c->fdt_ghes, ARRAY_SIZE(c->fdt_ghes),
			sizeof(uint32_t) / sizeof(uint32_t));
	c->nr_ghes = cnt;
}

#ifndef PLAT_CN10K_FAMILY
void octeontx_fill_ras_bert_details(const void *fdt, const char *path,
		const char *compatible)
{
	ras_config_t *c = &plat_octeontx_bcfg->ras_config;
	int offset;

	offset = fdt_path_offset(fdt, path);
	board_info("%s %s %d\n", __func__, path, offset);
	offset = fdt_node_offset_by_compatible(fdt, 0, compatible);
	board_info("%s bed-bert %d\n", __func__, offset);
	parse_fdt_ras(fdt, offset, &c->fdt_bert, 1,
			sizeof(uint64_t) / sizeof(uint32_t));
}
#endif /* PLAT_CN10K_FAMILY */
#endif /* RAS_EXTENSION */
