/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * https://spdx.org/licenses
 *
 */

#include <platform_def.h>
#include <platform_setup.h>
#include <debug.h>
#include <ctype.h>
#include <libfdt.h>
#include <stdlib.h>
#include <assert.h>
#include <inttypes.h>
#include <plat_board_cfg.h>
#include <octeontx_common.h>
#include <octeontx_board_cfg_setup.h>
#include <plat_scfg.h>
#include <plat_cn20k_configuration.h>
#include <octeontx_utils.h>
#include <strtol.h>
#include <fdtebf_helper.h>

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-rst.h"

/* for LEGACY logging, define DEBUG_ATF_DTS to enable debug logs */
#if !defined(MRVL_TF_LOG_MODULE)
#define DEBUG_ATF_DTS	1
#endif

#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_PARSE
#  define debug_dts(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
				tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_DTS
#define debug_dts printf
#else
#define debug_dts(...) ((void) (0))
#endif

/*
 * SW Persist Data address should match flash layout.
 * Default address, bus and CS
 */
#define PERSIST_DATA_ADDR	0x1F90000
#define PERSIST_DATA_SPI_BUS	0
#define PERSIST_DATA_SPI_CS	0

int plat_get_core_count(void)
{
	uint64_t rst_ap_available;
	uint32_t core_cnt = 0;

	rst_ap_available = CSR_READ(CAVM_RSTX_AP_AVAILABLEX(1, 0));
	while (rst_ap_available) {
		rst_ap_available &= (rst_ap_available - 1);
		core_cnt++;
	}

	return core_cnt;
}

static int parse_boot_device(const void *fdt, const int offset)
{
	char boot_device[16], *cs;
	const char *name;
	int len, val;

	snprintf(boot_device, sizeof(boot_device), "BOOT-DEVICE");
	name = fdt_getprop(fdt, offset, boot_device, &len);
	if (!name) {
		WARN("No %s is found\n", boot_device);
		return -1;
	}

	strlcpy(boot_device, name, sizeof(boot_device));
	boot_device[sizeof(boot_device) - 1] = '\0';

	debug_dts("BOOT-DEVICE: %s\n", boot_device);
	/* Get boot type */
	if (!strncmp("SPI", boot_device, 3))
		val = OCTEONTX_BOOT_SPI;
	else if (!strncmp("EMMC", boot_device, 4))
		val = OCTEONTX_BOOT_EMMC;
	else if (!strncmp("REMOTE", boot_device, 6))
		val = OCTEONTX_BOOT_REMOTE;
	else
		val = -OCTEONTX_BOOT_UNSUPPORTED;

	plat_octeontx_bcfg->bcfg.boot_dev.boot_type = val;

	/* Get boot controller (only for SPI) */
	if (plat_octeontx_bcfg->bcfg.boot_dev.boot_type == OCTEONTX_BOOT_SPI) {
		if (!strncmp("SPI0", boot_device, 4))
			val = 0;
		else if (!strncmp("SPI1", boot_device, 4))
			val = 1;
		else
			val = -1;
	} else {
		val = -1;
	}

	plat_octeontx_bcfg->bcfg.boot_dev.controller = val;

	/* Get chip select used to boot (EMMC and SPI) */
	if (plat_octeontx_bcfg->bcfg.boot_dev.boot_type == OCTEONTX_BOOT_SPI ||
	    plat_octeontx_bcfg->bcfg.boot_dev.boot_type == OCTEONTX_BOOT_EMMC) {
		cs = strchr(boot_device, '_');
		if (!cs) {
			val = -1;
		} else {
			cs += 3; //Move pointer over "CS" string to point to boot CS
			val = (*cs - '0');
			if ((val != 0) &&
			    (val != 1)) {
				val = -1;
			}
		}
	} else {
		val = -1;
	}

	plat_octeontx_bcfg->bcfg.boot_dev.cs = val;

	return 0;
}

/*
 * Parse SPI Controller Config from FDT
 */
static void parse_spi_config(const void *fdt)
{
	const uint32_t *preg, *reg;
	uint32_t addr;
	int node, bus = 0, cs = 0, parent_node[MAX_SPI_BUS] = { 0 };
	int val;
	char name[64];

	/* Parse for secure-spi config */
	node = fdt_node_offset_by_compatible(fdt, -1, "spi-flash");
	while (node > 0) {
		/* Get CS info */
		reg = fdt_getprop(fdt, node, "reg", NULL);
		if (reg) {
			cs = fdt32_to_cpu(*reg);
		} else {
			WARN("Missing reg field for SPI device\n");
			continue;
		}
		/* Read parent node to get bus num */
		preg = fdt_getprop(fdt, fdt_parent_offset(fdt, node),
				   "reg", NULL);
		if (preg) {
			addr = fdt32_to_cpu(*preg);
			if (addr == SPI_CTRL0_ADDR)
				bus = 0;
			else if (addr == SPI_CTRL1_ADDR)
				bus = 1;
			else {
				WARN("Invalid SPI bus address 0x%x\n", addr);
				continue;
			}
		} else {
			WARN("Missing reg field for SPI bus\n");
			continue;
		}
		if (fdt_getprop(fdt, node, "secure-spi", NULL)) {
			debug_dts("SPI:%d:%d: Marked Secure\n", bus, cs);
			plat_octeontx_bcfg->spi_cfg[bus].is_secure = 1;
			if (parent_node[bus] == 0)
				parent_node[bus] = fdt_parent_offset(fdt, node);
		}
		if (fdt_getprop(fdt, node, "u-boot,env", NULL)) {
			preg = fdt_getprop(fdt, node, "u-boot,efivar-offset", NULL);
			if (preg) {
				addr = fdt32_to_cpu(*preg);
				plat_octeontx_bcfg->spi_cfg[bus].has_efivar = 1;
				plat_octeontx_bcfg->spi_cfg[bus].efivar_offset = addr;
			} else {
				plat_octeontx_bcfg->spi_cfg[bus].has_efivar = 0;
				plat_octeontx_bcfg->spi_cfg[bus].efivar_offset = 0;
			}
		}
		plat_octeontx_bcfg->spi_cfg[bus].cs[cs] = 1;
		node = fdt_node_offset_by_compatible(fdt, node, "spi-flash");
	}
	/* Delete secure SPI node from fdt */
	for (bus = 0; bus < MAX_SPI_BUS; bus++) {
		if (parent_node[bus]) {
			if (fdt_nop_node(fdt_ptr, parent_node[bus]))
				WARN("Unable to delete secure SPI node at offset %d\n",
						parent_node[bus]);
			debug_dts("Deleted SPI%d node at offset %d\n", bus, parent_node[bus]);
		}
	}

	for (bus = 0; bus < MAX_SPI_BUS; bus++) {
		for (cs = 0; cs < MAX_SPI_CS; cs++) {
			snprintf(name, 64, "SPI%d-CS%d-FLASH-SECTOR-64K", bus, cs);
			val = cn10k_fdtebf_get_num(fdt, name, 16);
			plat_octeontx_bcfg->spi_cfg[bus].erase_64k[cs] = (val == 1) ? 1 : 0;
			debug_dts("SPI%d CS%d erase_64k %d val %d\n", bus, cs,
				  plat_octeontx_bcfg->spi_cfg[bus].erase_64k[cs], val);
		}
	}
}

static void get_persist_data_config(const void *fdt)
{
	const uint32_t *preg;
	uint32_t addr;
	int node;

	/* initialize with default values */
	plat_octeontx_bcfg->persist_cfg.offset = PERSIST_DATA_ADDR;
	plat_octeontx_bcfg->persist_cfg.bus = PERSIST_DATA_SPI_BUS;
	plat_octeontx_bcfg->persist_cfg.cs = PERSIST_DATA_SPI_CS;
	plat_octeontx_bcfg->persist_cfg.valid = 1;

	if (!fdt)
		return;

	/* override the default persist data config if the
	entry 'spi-flash' is in fdt*/

	node = fdt_node_offset_by_compatible(fdt, -1, "spi-flash");
	while (node > 0) {
		/* Get u-boot,env */
		if (fdt_getprop(fdt, node, "u-boot,env", NULL))	{
			preg = fdt_getprop(fdt, node, "reg", NULL);
			if (preg) {
				plat_octeontx_bcfg->persist_cfg.cs = fdt32_to_cpu(*preg);
				VERBOSE("fdt: cs 0x%x\n",
					(uint32_t) fdt32_to_cpu(*preg));
			}

			preg = fdt_getprop(fdt, fdt_parent_offset(fdt, node),
						"reg", NULL);
			if (preg) {
				VERBOSE("fdt: reg 0x%x\n",
					(uint32_t) fdt32_to_cpu(*preg));
				addr = fdt32_to_cpu(*preg);
				/* SPI node will have PCI addr, so map it */
				if (addr == SPI_CTRL0_ADDR)
					plat_octeontx_bcfg->persist_cfg.bus = 0;
				else if (addr == SPI_CTRL1_ADDR)
					plat_octeontx_bcfg->persist_cfg.bus = 1;
			}

			preg = fdt_getprop(fdt, node, "persist-offset", NULL);
			if (preg) {
				VERBOSE("fdt: persist offset 0x%x\n",
					(uint32_t) fdt32_to_cpu(*preg));
				plat_octeontx_bcfg->persist_cfg.offset = fdt32_to_cpu(*preg);
			}
			break;
		}
		node = fdt_node_offset_by_compatible(fdt, node, "spi-flash");
	}
}

int plat_octeontx_fill_board_details(void)
{
	void *fdt = fdt_ptr;
	int offset, rc;

	rc = fdt_check_header(fdt);
	if (rc) {
		WARN("Invalid device tree\n");
		return rc;
	}

	offset = fdt_path_offset(fdt, "/cavium,bdk");
	if (offset < 0) {
		WARN("FDT node not found\n");
		return offset;
	}

	rc = parse_boot_device(fdt, offset);
	if (rc) {
		debug_dts("boot device not defined\n");
	}

	/* Parse SPI configuration */
	parse_spi_config(fdt);

	get_persist_data_config(fdt);

	return 0;
}
