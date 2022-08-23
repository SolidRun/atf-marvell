/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
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

#include <platform_def.h>
#include <platform_setup.h>
#include <debug.h>
#include <libfdt.h>
#include <stdlib.h>
#include <assert.h>
#include <plat_board_cfg.h>
#include <octeontx_common.h>
#include <octeontx_board_cfg_setup.h>
#include <plat_scfg.h>
#include <plat_cn10k_configuration.h>
#include <octeontx_utils.h>
#include <qlm_cn10k.h>
#include <rvu.h>
#include <rpm.h>
#include <strtol.h>
#include <portm_helper.h>
#include <fdtebf_helper.h>
#include <eth_intf.h>

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-gpio.h"
#include "cavm-csrs-rst.h"
#include "cavm-csrs-tad.h"

/* for LEGACY logging, define DEBUG_ATF_DTS to enable debug logs */
#undef DEBUG_ATF_DTS

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
#ifdef PLAT_cnf10kb
#define PERSIST_DATA_ADDR	0x0F90000
#else
#define PERSIST_DATA_ADDR	0x1F90000
#endif
#define PERSIST_DATA_SPI_BUS	0
#define PERSIST_DATA_SPI_CS	0

/* List of GPIO types - used as expanders in case of SFP/QSFP/PHY */
static gpio_compat_t gpio_compat_list[] = {
	{ "cavium,thunder-8890-gpio", GPIO_PIN_DEFAULT, 64 },	/* 64 pins for T9x */
	{ "nxp,pca9505",	GPIO_PIN_PCA953X, 40 },
	{ "nxp,pca9698",	GPIO_PIN_PCA953X, 40 },
	{ "nxp,pca9534",	GPIO_PIN_PCA953X, 8 },
	{ "nxp,pca9535",	GPIO_PIN_PCA953X, 16 },
	{ "nxp,pca9536",	GPIO_PIN_PCA953X, 4 },
	{ "nxp,pca9537",	GPIO_PIN_PCA953X, 4 },
	{ "nxp,pca9538",	GPIO_PIN_PCA953X, 8 },
	{ "nxp,pca9539",	GPIO_PIN_PCA953X, 16 },
	{ "nxp,pca9554",	GPIO_PIN_PCA953X, 8 },
	{ "nxp,pca9554a",	GPIO_PIN_PCA953X, 8 },
	{ "nxp,pca9555",	GPIO_PIN_PCA953X, 16 },
	{ "nxp,pca9555a",	GPIO_PIN_PCA953X, 16 },
	{ "nxp,pca9556",	GPIO_PIN_PCA953X, 8 },
	{ "nxp,pca9557",	GPIO_PIN_PCA953X, 8 },
	{ "nxp,pca9574",	GPIO_PIN_PCA957X, 8 },
	{ "nxp,pca9575",	GPIO_PIN_PCA957X, 16 },
	{ "maxim,max7310",	GPIO_PIN_PCA953X, 8 },
	{ "maxim,max7312",	GPIO_PIN_PCA953X, 16 },
	{ "maxim,max7313",	GPIO_PIN_PCA953X, 16 },
	{ "maxim,max7315",	GPIO_PIN_PCA953X, 8 },
	{ "ti,pca6107",		GPIO_PIN_PCA953X, 8 },
	{ "ti,tca6408",		GPIO_PIN_PCA953X, 8 },
	{ "ti,tca6416",		GPIO_PIN_PCA953X, 16 },
	{ "ti,tca9554",		GPIO_PIN_PCA953X, 8 },
	{ "nxp,pcf8574",	GPIO_PIN_PCF857X, 8 },
	{ "nxp,pcf8574a",	GPIO_PIN_PCF857X, 8 },
	{ "nxp,pca8574",	GPIO_PIN_PCF857X, 8 },
	{ "nxp,pca9670",	GPIO_PIN_PCF857X, 8 },
	{ "nxp,pca9672",	GPIO_PIN_PCF857X, 8 },
	{ "nxp,pca9674",	GPIO_PIN_PCF857X, 8 },
	{ "nxp,pca8575",	GPIO_PIN_PCF857X, 16 },
	{ "nxp,pcf8575",	GPIO_PIN_PCF857X, 16 },
	{ "nxp,pca9671",	GPIO_PIN_PCF857X, 16 },
	{ "nxp,pca9673",	GPIO_PIN_PCF857X, 16 },
	{ "nxp,pca9675",	GPIO_PIN_PCF857X, 16 },
	{ "maxim,max7328",	GPIO_PIN_PCF857X, 8 },
	{ "maxim,max7329",	GPIO_PIN_PCF857X, 8 },
	{ "cavium,cpld96xx",	GPIO_PIN_CPLD,	8},
};

/* List of native I2C buses */
static i2c_compat_t i2c_native_compat_list[] = {
	{ "cavium,thunder-8890-twsi", I2C_BUS_DEFAULT, I2C_OTHER,  0, 6},
	{ "cavium,thunderx-i2c", I2C_BUS_DEFAULT, I2C_OTHER,  0, 6},
};

/* List of I2C Mux/Switch types */
static i2c_compat_t i2c_compat_list[] = {
	{ "nxp,pca9540", I2C_BUS_PCA9540, I2C_MUX,    4, 2 },
	{ "nxp,pca9542", I2C_BUS_PCA9542, I2C_MUX,    4, 2 },
	{ "nxp,pca9543", I2C_BUS_PCA9543, I2C_SWITCH, 0, 2 },
	{ "nxp,pca9544", I2C_BUS_PCA9544, I2C_MUX,    4, 4 },
	{ "nxp,pca9545", I2C_BUS_PCA9545, I2C_SWITCH, 0, 4 },
	{ "nxp,pca9546", I2C_BUS_PCA9546, I2C_SWITCH, 0, 4 },
	{ "nxp,pca9547", I2C_BUS_PCA9547, I2C_MUX,    8, 8 },
	{ "nxp,pca9548", I2C_BUS_PCA9548, I2C_SWITCH, 0, 8 },
};

/* List of PHY compatible strings/types */
static const phy_compatible_type_t phy_compat_list[] = {
#ifdef MARVELL_PHY_3310
	{ "marvell,88x3310", PHY_MARVELL_3310},
#endif
#ifdef MARVELL_PHY_1780
	{ "marvell,88x1780", PHY_MARVELL_1780},
#endif
	{ "marvell,88e1514", PHY_MARVELL_88E1514},
	{ "marvell,88e1512", PHY_MARVELL_88E1514},
	{ "ethernet-phy-ieee802.3-c22", PHY_GENERIC_8023_C22},
	{ "ethernet-phy-ieee802.3-c45", PHY_GENERIC_8023_C45},
};

typedef struct node_info {
	int offset;
	int atf_mgmt;
} node_info_t;

static struct parser_context_s {
	int twsi_nodes_to_trim[TWSI_NUM];
	int mdio_nodes_to_trim[MDIO_NUM];

	node_info_t sfp_offsets[MAX_PORTM];
	node_info_t phy_offsets[MAX_PORTM];
} parser_context;

static int fdt_check_compatible_new_old_fmt(const void *fdt, int nodeoffset,
		char *compatible)
{
	int ret;
	char *p;

	if (!fdt_node_check_compatible(fdt, nodeoffset, compatible))
		return 0;

	/* try with the 'old' format ... */
	p = strchr(compatible, ',');
	if (!p)
		return 1;

	*p = '_';
	ret = fdt_node_check_compatible(fdt, nodeoffset, compatible);

	/* Reverting change in compatible string before return */
	*p = ',';

	return ret;
}

void plat_cn10k_fdt_tad_pmu_node_refresh(void)
{
	uint32_t tad_pmu_page_size;
	uint64_t rst_pp_available;
	uint32_t tad_page_size;
	uint32_t core_cnt = 0;
	void *fdt = fdt_ptr;
	const char *compat;
	uint32_t tad_cnt;
	uint32_t reg[4];
	uintptr_t base;
	size_t size;
	int offs;

	rst_pp_available = CSR_READ(CAVM_RST_PP_AVAILABLE);
	while (rst_pp_available) {
		rst_pp_available &= (rst_pp_available - 1);
		core_cnt++;
	}

	/* Expect a minimum of one active cpu */
	if (core_cnt == 0) {
		ERROR("RST_PP_AVAILABLE can't be zero\n");
		panic();
	}

	/* Ensure /tad_pmu node present in cn10k family Device Trees */
	offs = fdt_path_offset(fdt, "/tad_pmu");
	if (offs < 0) {
		INFO("TAD-PMU Device Tree node not found\n");
		return;
	}

	/* Marvell,cn10k-tad-pmu is the only supported compat string */
	compat = fdt_getprop(fdt, offs, "compatible", NULL);
	if (!compat || strcmp(compat, "marvell,cn10k-tad-pmu")) {
		INFO("Detected incompatible tad_pmu DT node\n");
		return;
	}

	/* Compute DT entries based on actual TADs present on silicon */
	tad_cnt = (core_cnt << 1);
	tad_page_size = CAVM_TAD_BAR_E_TADX_PF_BAR0_SIZE +
				CAVM_TAD_BAR_E_TADX_PF_BAR4_SIZE;
	size = tad_page_size * tad_cnt;
	base = CAVM_TAD_BAR_E_TADX_PF_BAR0(0);

	/* Apply the Flat Device Tree manipulations */
	tad_cnt = cpu_to_fdt32((core_cnt << 1));
	tad_page_size = cpu_to_fdt32(CAVM_TAD_BAR_E_TADX_PF_BAR0_SIZE +
				     CAVM_TAD_BAR_E_TADX_PF_BAR4_SIZE);
	tad_pmu_page_size = cpu_to_fdt32(0x1000);

	reg[0] = cpu_to_fdt32(base >> 32);
	reg[1] = cpu_to_fdt32(base & 0xffffffff);
	reg[2] = cpu_to_fdt32(size >> 32);
	reg[3] = cpu_to_fdt32(size & 0xffffffff);

	/* Write into the Device Tree */
	fdt_setprop(fdt, offs, "marvell,tad-cnt", &tad_cnt, sizeof(tad_cnt));
	fdt_setprop(fdt, offs, "marvell,tad-page-size",
		    &tad_page_size, sizeof(tad_page_size));
	fdt_setprop(fdt, offs, "marvell,tad-pmu-page-size",
		    &tad_pmu_page_size, sizeof(tad_pmu_page_size));
	fdt_setprop(fdt, offs, "reg", reg, sizeof(reg));
}

uint32_t retrieve_dmc_mask_or_ddr_speed(char *string,
					uint32_t default_val)
{
	const char *str = NULL;
	uint32_t cavium_bdk;
	void *fdt = fdt_ptr;

	cavium_bdk = fdt_path_offset(fdt, "/cavium,bdk");
	if (cavium_bdk < 0) {
		debug_dts("%s: /cavium,bdk is missing from device tree: %s\n",
			  __func__, fdt_strerror(cavium_bdk));
	}

	str = fdt_getprop(fdt, cavium_bdk, string, NULL);
	if (str)
		return strtol(str, NULL, 0);

	return default_val;
}

void plat_cn10k_fdt_ddr_pmu_node_refresh(void)
{
	const char *compatible = "marvell,cn10k-ddr-pmu";
	void *fdt = fdt_ptr;
	uint32_t ddr_speed;
	int offs, ret;

	/* Prepare DTB */
	ret = fdt_open_into(fdt, fdt, (fdt_totalsize(fdt)+0x1000));
	if (ret < 0) {
		INFO("invalid DT\n");
		return;
	}

	/* Retrieve DDR speed */
	ddr_speed = retrieve_dmc_mask_or_ddr_speed("DDR-SPEED", 0xc80);

	/* Update DDR PMU node with "marvell,ddr-speed" property */
	ddr_speed = cpu_to_fdt32(ddr_speed);
	offs = fdt_node_offset_by_compatible(fdt, -1, compatible);
	while (offs != -FDT_ERR_NOTFOUND) {
		fdt_setprop(fdt, offs, "marvell,ddr-speed", &ddr_speed,
			    sizeof(ddr_speed));
		offs = fdt_node_offset_by_compatible(fdt, offs, compatible);
	}

	/* Done updating the DT, pack it */
	fdt_pack(fdt);
}

void fixup_ddr_mpam_pmu_nodes(void *blob, const char *const nodes_path[],
			       int size_array)
{
	int i=0, rc;
	int nodeoff;

	for (i = 0; i < size_array; i++) {
		nodeoff = fdt_path_offset(blob, nodes_path[i]);
		if (nodeoff < 0) {
			debug_dts("node not found %s\n", nodes_path[i]);
			continue; /*Not found, skip it*/
		}

		rc = fdt_nop_node(blob, nodeoff);
		if (rc < 0)
			debug_dts("Unable to delete node %s\n",
				   nodes_path[i]);
	}
}

void plat_cn10k_fdt_ddr_mpam_pmu_update(void)
{
	void *fdt = fdt_ptr;
	uint32_t dmc_mask;

	/* Retrieve DMC mask */
	dmc_mask = retrieve_dmc_mask_or_ddr_speed("DDR-DMC-MASK", 0x1);

	switch (dmc_mask) {
	case 0x1: {
		static const char * const nodes_path[] = {
                        "/memory/msc@0x87e1c1240000",
                        "/memory/msc@0x87e1c2240000",
                        "/memory/msc@0x87e1c3240000",
                        "/memory/msc@0x87e1c4240000",
                        "/memory/msc@0x87e1c5240000",
			"/soc@0/ddrcpmu1",
			"/soc@0/ddrcpmu2",
			"/soc@0/ddrcpmu3",
			"/soc@0/ddrcpmu4",
			"/soc@0/ddrcpmu5",
                };

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x3: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c2240000",
			"/memory/msc@0x87e1c3240000",
			"/memory/msc@0x87e1c4240000",
			"/memory/msc@0x87e1c5240000",
			"/soc@0/ddrcpmu2",
			"/soc@0/ddrcpmu3",
			"/soc@0/ddrcpmu4",
			"/soc@0/ddrcpmu5",
                };

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x5: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c1240000",
			"/memory/msc@0x87e1c3240000",
			"/memory/msc@0x87e1c4240000",
			"/memory/msc@0x87e1c5240000",
			"/soc@0/ddrcpmu1",
			"/soc@0/ddrcpmu3",
			"/soc@0/ddrcpmu4",
			"/soc@0/ddrcpmu5",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x11: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c1240000",
			"/memory/msc@0x87e1c2240000",
			"/memory/msc@0x87e1c3240000",
			"/memory/msc@0x87e1c5240000",
			"/soc@0/ddrcpmu1",
			"/soc@0/ddrcpmu2",
			"/soc@0/ddrcpmu3",
			"/soc@0/ddrcpmu5",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x7: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c3240000",
			"/memory/msc@0x87e1c4240000",
			"/memory/msc@0x87e1c5240000",
			"/soc@0/ddrcpmu3",
			"/soc@0/ddrcpmu4",
			"/soc@0/ddrcpmu5",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0xd: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c1240000",
			"/memory/msc@0x87e1c4240000",
			"/memory/msc@0x87e1c5240000",
			"/soc@0/ddrcpmu1",
			"/soc@0/ddrcpmu4",
			"/soc@0/ddrcpmu5",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x13: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c2240000",
			"/memory/msc@0x87e1c3240000",
			"/memory/msc@0x87e1c5240000",
			"/soc@0/ddrcpmu2",
			"/soc@0/ddrcpmu3",
			"/soc@0/ddrcpmu5",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x15: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c1240000",
			"/memory/msc@0x87e1c3240000",
			"/memory/msc@0x87e1c5240000",
			"/soc@0/ddrcpmu1",
			"/soc@0/ddrcpmu3",
			"/soc@0/ddrcpmu5",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x31: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c1240000",
			"/memory/msc@0x87e1c2240000",
			"/memory/msc@0x87e1c3240000",
			"/soc@0/ddrcpmu1",
			"/soc@0/ddrcpmu2",
			"/soc@0/ddrcpmu3",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0xf: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c4240000",
			"/memory/msc@0x87e1c5240000",
			"/soc@0/ddrcpmu4",
			"/soc@0/ddrcpmu5",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x17: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c3240000",
			"/memory/msc@0x87e1c5240000",
			"/soc@0/ddrcpmu3",
			"/soc@0/ddrcpmu5",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x1d: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c1240000",
			"/memory/msc@0x87e1c5240000",
			"/soc@0/ddrcpmu1",
			"/soc@0/ddrcpmu5",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x33: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c2240000",
			"/memory/msc@0x87e1c3240000",
			"/soc@0/ddrcpmu2",
			"/soc@0/ddrcpmu3",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x35: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c1240000",
			"/memory/msc@0x87e1c3240000",
			"/soc@0/ddrcpmu1",
			"/soc@0/ddrcpmu3",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x1f: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c5240000",
			"/soc@0/ddrcpmu5",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	case 0x37: {
		static const char * const nodes_path[] = {
			"/memory/msc@0x87e1c3240000",
			"/soc@0/ddrcpmu3",
		};

		fixup_ddr_mpam_pmu_nodes(fdt, nodes_path,
					 ARRAY_SIZE(nodes_path));
		break;
	}
	default:
		break;
	}
}

/* Output information specific for CN10K, for now only RPM. */
void plat_octeontx_print_board_variables(void)
{
	int i, j;
	rpm_config_t *rpm;
	rpm_lmac_config_t *lmac;
	portm_config_t *portm;

	for (i = 0; i < plat_octeontx_scfg->rpm_count; i++) {
		rpm = &(plat_octeontx_bcfg->rpm_cfg[i]);
		debug_dts("RPM%d: lmac_count = %d\n", i, rpm->lmac_count);
		for (j = 0; j < MAX_LMAC_PER_RPM; j++) {
			lmac = &rpm->lmac_cfg[j];
			portm = &(plat_octeontx_bcfg->portm_cfg[lmac->portm_idx]);
			if (!lmac->port_enable)
				continue;
			debug_dts("RPM%d.LMAC%d: portm mode = %d, mode = %s:%d AN disable=%d sgmii_speed=%d sgmii_duplex=%d\n",
					i,
					j,
					portm->portm_mode,
					gserm_get_mode_strmap(portm->portm_mode).ebf_str,
					lmac->mode,
					lmac->an_disable,
					lmac->sgmii_speed,
					lmac->sgmii_duplex);
			debug_dts("\tnum_rvu_vfs=%d, num_msix_vec=%d\n",
					lmac->num_rvu_vfs,
					lmac->num_msix_vec);
			debug_dts("\tMAC=%x:%x:%x:%x:%x:%x\n",
					lmac->local_mac_address[0],
					lmac->local_mac_address[1],
					lmac->local_mac_address[2],
					lmac->local_mac_address[3],
					lmac->local_mac_address[4],
					lmac->local_mac_address[5]);
			debug_dts("\tLMAC enable=%d\n", lmac->lmac_enable);
			debug_dts("\tLMAC fec type=%d\n", lmac->fec);
			if (lmac->phy_present && lmac->phy_config) {
				phy_config_t *phy;
				phy = lmac->phy_config;
				if (phy->type != PHY_NONE) {
					debug_dts("\tPHY: mdio_bus=%d\t"
						"phy_addr=0x%x\t"
						"type=%d switch=%d\t"
						"port=%d\t"
						"host_order=0x%x\t"
						"line_order=0x%x\n",
						phy->mdio_bus,
						phy->addr,
						phy->type,
						phy->mux_switch,
						phy->port,
						phy->host_order,
						phy->line_order);
				}
			} else {
				debug_dts("\tPHY: NONE\n");
			}
		}
	}
}

/**
 * cn10k_fdt_update_mailbox_memory_range - Update rvu mbox memory range in fdt
 * @address: Mailbox address of ranges property
 * @size: Mailbox size of ranges property
 *
 * returns:
 *	0 on success and -ve on error.
 */
int cn10k_fdt_update_mailbox_memory_range(uint64_t address, uint64_t size)
{
	size_t pci_addr_cells, addr_cells, size_cells, range_cells;
	uint32_t addr_hi, addr_lo;
	int offset, soc_offset;
	void *fdt = fdt_ptr;
	uint32_t range[100];
	size_t range_size;
	char node_name[32];
	const int *val;
	int len, i, index = -1;

	soc_offset = offset = fdt_path_offset(fdt, "/soc@0");
	if (soc_offset < 0) {
		ERROR("%s: RVU: Unable to find soc@0 node error %d\n",
		      __func__, offset);
		return soc_offset;
	}

	/* Parse ECAM2 node to fix RVU mailbox ranges property */
	snprintf(node_name, sizeof(node_name), "pci@%llx",
		 (ECAM_PF_BAR2(0) | (2 << 28)));
	offset = fdt_subnode_offset(fdt, soc_offset, node_name);
	if (offset < 0) {
		ERROR("%s: RVU: Unable to find ecam2 node %s, error %d\n",
		      __func__, node_name, offset);
		return offset;
	}

	val = fdt_getprop(fdt, offset, "ranges", &len);
	if (!val) {
		ERROR("%s: RVU: ranges property not found in ecam2 node: %s\n",
		      __func__, node_name);
		return -FDT_ERR_NOTFOUND;
	}

	/*
	 * For now assume - 3 cells for PCI addresses, 2 cells for address
	 * and 2 cells for size. (3 + 2 + 2) * 4 = 28 bytes size each entry
	 * of a range.
	 */
	pci_addr_cells = 3;
	size_cells = addr_cells = 2;
	range_cells = pci_addr_cells + size_cells + addr_cells;
	range_size = range_cells * sizeof(uint32_t);
	if (len % range_size) {
		ERROR("%s: RVU: improper ranges property of ecam2 node: %s\n",
		      __func__, node_name);
		return -FDT_ERR_BADOFFSET;
	}

	/* By default mailbox ranges entry have cpu address less than 64M */
	for (index = 0; index < len / range_size; index++) {
		addr_hi = fdt32_to_cpu(*(val + range_cells * index +
					 pci_addr_cells));
		addr_lo = fdt32_to_cpu(*(val + range_cells * index +
					 pci_addr_cells + 1));
		if ((addr_hi == 0x0) && (addr_lo < 0x4000000))
			break;
	}

	if (index < 0) {
		ERROR("%s: RVU: mailbox entry missing in ranges property of "
		      "ecam2 node: %s\n", __func__, node_name);
		return -FDT_ERR_BADOFFSET;
	}

	/* update only the mailbox entry in ranges property */
	memcpy(range, val, len);
	i = (range_cells * index) + 1;
	range[i++] = cpu_to_fdt32((uint32_t)(address >> 32));
	range[i++] = cpu_to_fdt32((uint32_t)address);
	range[i++] = cpu_to_fdt32((uint32_t)(address >> 32));
	range[i++] = cpu_to_fdt32((uint32_t)address);
	range[i++] = cpu_to_fdt32((uint32_t)(size >> 32));
	range[i++] = cpu_to_fdt32((uint32_t)size);

	return fdt_setprop(fdt, offset, "ranges", &range[0], len);
}

static int cn10k_fdt_get_int32(const void *fdt, const char *prop,
					int offset)
{
	const uint32_t *reg;
	int val = 0;

	reg = fdt_getprop(fdt, offset, prop, NULL);
	if (!reg) {
		debug_dts("%s: cannot find property %s\n",
				 __func__, prop);
		return -1;
	}
	val = fdt32_to_cpu(*reg);

	return val;
}

static uint64_t cn10k_fdt_get_uint64(const void *fdt, const char *prop,
					int offset)
{
	const uint32_t *reg;
	uint64_t val = 0;

	reg = fdt_getprop(fdt, offset, prop, NULL);
	if (!reg) {
		WARN("%s: Cannot find property for prop %s\n",
				 __func__, prop);
		return -1;
	}
	/* To read the 64-bit property from DT, 8-byte aligned
	 * address is required as SCTLR_EL1/EL3(aa) - alignment
	 * check enable bit is set. Ex:MDIO address is 64-bit and
	 * fdt_getprop() might not return 8 byte aligned addr.
	 * to avoid alignment fault, the below code does 2 32-bit
	 * reads to obtain 64-bit addr.
	 */
	val = (uint64_t)fdt32_to_cpu(reg[0]) << 32;
	val |= (uint64_t)fdt32_to_cpu(reg[1]);

	return val;
}

static int cn10k_fdt_lookup_phandle(const void *fdt_addr, int offset,
		const char *prop_name)
{
	const uint32_t *phandle;

	phandle = fdt_getprop(fdt_addr, offset, prop_name, NULL);
	if (phandle)
		return fdt_node_offset_by_phandle(fdt_addr,
					fdt32_to_cpu(*phandle));
	else
		return -FDT_ERR_NOTFOUND;
}

static int cn10k_fdt_get_bus(const void *fdt, int offset,
		const char *dbg_prefix)
{
	int node, bus = -1;
	uint64_t mdio;
	const char *nodename;
	uint32_t i2c;

	if (offset < 0)
		return -1;

	/* obtain parent node and get the name */
	node = fdt_parent_offset(fdt, offset);
	if (node < 0)
		return -1;

	nodename = fdt_get_name(fdt, node, NULL);

	if (nodename && !strncmp(nodename, "mdio", 4)) {
		debug_dts("%s: MDIO node\n", dbg_prefix);
		mdio = cn10k_fdt_get_uint64(fdt, "reg", node);
		if (mdio == -1)
			return mdio;

		bus = (mdio & (1 << 7)) ? 1 : 0;

		if (bus < 0 || bus >= MDIO_NUM) {
			debug_dts("%s: '%d' "
				"is not a correct MDIO bus number\n",
				dbg_prefix, bus);
			return -1;
		}

		debug_dts("%s: mdio 0x%llx bus %d\n",
			dbg_prefix, mdio, bus);
	} else if (nodename && !strncmp(nodename, "i2c", 3)) {
		debug_dts("%s: I2C node\n", dbg_prefix);
		i2c = cn10k_fdt_get_int32(fdt, "reg", node);

		/* based on DEVFN, obtain TWSI bus */
		bus = ((i2c >> 8) & 0x7);

		if (bus < 0 || bus >= TWSI_NUM) {
			debug_dts("%s: '%d' "
				"is not a correct I2C bus number\n",
				dbg_prefix, bus);
			return -1;
		}

		debug_dts("%s: bus %d\n",
			dbg_prefix, bus);
	} else {
		WARN("%s: no compatible bus type for PHY/SFP\n",
				dbg_prefix);
	}

	return bus;
}

static int cn10k_fdt_get_i2c_bus_info(const void *fdt, int dev_offset,
		i2c_info_t *i2c_info, const char *dbg_prefix)
{
	int i, parent, ret;
	int offset;

	offset = fdt_parent_offset(fdt, dev_offset);

	i2c_info->type = I2C_BUS_NONE;
	for (i = 0; i < ARRAY_SIZE(i2c_native_compat_list); i++) {
		if (!fdt_check_compatible_new_old_fmt(fdt, offset,
				       i2c_native_compat_list[i].compatible)) {

			debug_dts("%s: I2C type %d\n", dbg_prefix,
					i2c_native_compat_list[i].type);
			i2c_info->type = I2C_BUS_DEFAULT;
			break;
		}
	}

	if (i2c_info->type == I2C_BUS_NONE)
		goto try_mux;

	/* It is a native TWSI bus */
	ret = cn10k_fdt_get_bus(fdt,
		dev_offset, dbg_prefix);

	if (ret >= 0) {
		i2c_info->bus = ret;
	} else {
		ERROR("%s: Incorrect I2C bus number\n",
			dbg_prefix);
		i2c_info->type = I2C_BUS_NONE;
		return -1;
	}

	return offset;

try_mux:
	/* For testing against MUX or SWITCH types we need to
	 * go one level up, to the parent node
	 */
	parent = fdt_parent_offset(fdt, offset);
	if (parent < 0) {
		ERROR("%s: couldn't find i2c type\n",
				dbg_prefix);
		return -1;
	}

	for (i = 0; i < ARRAY_SIZE(i2c_compat_list); i++) {
		if (!fdt_check_compatible_new_old_fmt(fdt, parent,
				       i2c_compat_list[i].compatible)) {

			debug_dts("%s: I2C type %d\n", dbg_prefix,
					i2c_compat_list[i].type);
			i2c_info->type = i2c_compat_list[i].type;
			break;
		}
	}

	if (i2c_info->type == I2C_BUS_NONE) {
		ERROR("%s: couldn't find valid I2C BUS type\n",
				dbg_prefix);
		return -1;
	}


	/* We are dealing with MUX/SWITCH */
	i2c_info->is_mux = i2c_compat_list[i].mux_type;
	i2c_info->enable_bit =
		i2c_compat_list[i].enable;
	i2c_info->channel = cn10k_fdt_get_int32(fdt,
				"reg", offset);
	i2c_info->addr = cn10k_fdt_get_int32(fdt,
				"reg", parent);
	/* TWSI bus */
	ret = cn10k_fdt_get_bus(fdt,
		parent, dbg_prefix);

	if (ret >= 0) {
		i2c_info->bus = ret;
	} else {
		ERROR("%s: Incorrect I2C bus number\n",
			dbg_prefix);
		i2c_info->type = I2C_BUS_NONE;
		return -1;
	}

	debug_dts(
		"%s: I2C SWITCH %d: channel %d addr 0x%x bus %d\n",
		dbg_prefix, !i2c_info->is_mux,
		i2c_info->channel,
		i2c_info->addr, i2c_info->bus);

	return fdt_parent_offset(fdt, parent);
}

static int cn10k_fdt_gpio_get_info_by_phandle(const void *fdt, int offset,
		const char *propname, gpio_info_t *gpio_info,
		const char *dbg_prefix)
{
	int len;
	const struct fdt_property *prop;
	const uint32_t *data;
	int phandle, parent;

	prop = fdt_get_property(fdt, offset, propname, &len);
	if (!prop) {
		WARN("%s: couldn't find %s property\n",
				dbg_prefix, propname);
		return -1;
	}

	if (len != 3 * sizeof(unsigned int)) {
		ERROR("%s: %s property is of wrong format : "
				"must contain phandle, pin & flags\n",
				dbg_prefix, propname);
		return -1;
	}

	data = (const uint32_t *)prop->data;
	phandle = fdt32_to_cpu(data[0]);
	gpio_info->pin = fdt32_to_cpu(data[1]);
	gpio_info->flags = fdt32_to_cpu(data[2]);

	int node = fdt_node_offset_by_phandle(fdt, phandle);

	debug_dts("%s: GPIO name %s pin %d flags %d\n",
			dbg_prefix, propname,
			gpio_info->pin, gpio_info->flags);

	for (int i = 0; i < ARRAY_SIZE(gpio_compat_list); i++) {
		if (!fdt_check_compatible_new_old_fmt(fdt, node,
				gpio_compat_list[i].compatible)) {
			debug_dts("%s: gpio type %d\n", dbg_prefix,
					gpio_compat_list[i].type);

			/* If the gpio is connected directly, just update
			 * the type and return
			 */
			if (gpio_compat_list[i].type == GPIO_PIN_DEFAULT) {
				gpio_info->type = gpio_compat_list[i].type;
				break;
			}

			/* For all other GPIO pins that are connected
			 * through expanders
			 */
			gpio_info->num_pins = cn10k_fdt_get_int32(fdt,
				"ngpios", node);

			/* If max number of GPIOs are not available from
			 * DT, get it from the static table
			 */
			if (!gpio_info->num_pins)
				gpio_info->num_pins = gpio_compat_list[i].ngpios;
			gpio_info->type = gpio_compat_list[i].type;
			gpio_info->i2c_addr = cn10k_fdt_get_int32(fdt, "reg",
				node);
			cn10k_fdt_get_i2c_bus_info(fdt, node,
					&gpio_info->i2c_info,
					dbg_prefix);
			if (gpio_info->i2c_info.type == I2C_BUS_NONE) {
				/* There might be the case of where the GPIO
				 * expander is behind the I2C switch. Hence
				 * pass the parent node to obtain the
				 * i2c info again
				 */
				parent = fdt_parent_offset(fdt, node);
				cn10k_fdt_get_i2c_bus_info(fdt, parent,
					&gpio_info->i2c_info,
					dbg_prefix);
				if (gpio_info->i2c_info.type == I2C_BUS_NONE)
					return -1;
			}
			gpio_info->i2c_bus = gpio_info->i2c_info.bus;
			debug_dts("%s: GPIO controller : addr 0x%x bus %d num pins %d\n",
				dbg_prefix,
				gpio_info->i2c_addr, gpio_info->i2c_bus,
				gpio_info->num_pins);
			break;
		}
	}
	if (gpio_info->type == GPIO_PIN_NONE) {
		WARN("%s: couldn't find any valid GPIO type\n",
				dbg_prefix);
		return -1;
	}
	return 0;
}

/*
 * Function parsing QSFP info
 * Returns:
 *   0: if QSFP slot was parsed & is going to be managed in ATF
 *   1: parsing was skipped as QSFP slot is going to be managed in kernel
 *  -1: on parsing error
 *
 */
static int cn10k_fdt_parse_qsfp_info(sfp_slot_info_t *qsfp_info, const void *fdt,
				     int offset, const char *dbg_prefix)
{
	const char *name;
	i2c_info_t i2c_info;
	int eeprom, ret;
	int lenp;
	int i2c_bus_offset;
	struct parser_context_s *pctx = &parser_context;

	if (fdt_node_check_compatible(fdt, offset, "qsfp-slot"))
		return -1;

	/* Parse EEPROM related I2C info */
	eeprom = cn10k_fdt_lookup_phandle(fdt, offset, "eeprom");
	if (eeprom < 0) {
		ERROR("%s: Couldn't find EEPROM info for SFP\n",
				dbg_prefix);

		ret = -1;
		goto qsfp_update;
	}

	i2c_bus_offset = cn10k_fdt_get_i2c_bus_info(fdt, eeprom, &i2c_info,
					dbg_prefix);
	if (i2c_bus_offset < 0) {
		ret = -1;
		goto qsfp_update;
	}

	name = fdt_get_name(fdt, offset, NULL);
	if (fdt_get_property(fdt, i2c_bus_offset, "twsi-in-kernel", &lenp)) {
		debug_dts("%s: skipped parsing %s, "
			"i2c bus %d is managed in kernel\n",
				dbg_prefix, name, i2c_info.bus);

		return 1;
	} else if (lenp == -FDT_ERR_NOTFOUND) {

		/* Update the list of twsi nodes to be trimmed */
		if (!pctx->twsi_nodes_to_trim[i2c_info.bus])
			pctx->twsi_nodes_to_trim[i2c_info.bus] = i2c_bus_offset;

		plat_octeontx_bcfg->bcfg.atf_managed_twsi[i2c_info.bus] = 1;
	}

	qsfp_info->is_sfp = 0;
	strlcpy(qsfp_info->name, name, sizeof(qsfp_info->name));
	debug_dts("%s: qsfp_info->name %s\n",
			dbg_prefix, qsfp_info->name);

	memcpy(&qsfp_info->i2c_eeprom_info, &i2c_info, sizeof(i2c_info_t));

	qsfp_info->eeprom_addr = cn10k_fdt_get_int32(fdt, "reg", eeprom);

	debug_dts("%s: EEPROM addr 0x%x\n", dbg_prefix,
					qsfp_info->eeprom_addr);

	/* obtain MAX power for the slot as per the board design */
	qsfp_info->max_power = cn10k_fdt_get_int32(fdt, "max_power",
			offset);


	/* Parse GPIO info for QSFP interface */
	ret = cn10k_fdt_gpio_get_info_by_phandle(fdt, offset, "mod_sel",
			&qsfp_info->select, dbg_prefix);
	if (ret == -1)
		goto qsfp_update;

	ret = cn10k_fdt_gpio_get_info_by_phandle(fdt, offset, "reset",
			&qsfp_info->reset, dbg_prefix);
	if (ret == -1)
		goto qsfp_update;

	ret = cn10k_fdt_gpio_get_info_by_phandle(fdt, offset, "lowpow_mode",
			&qsfp_info->lp_mode, dbg_prefix);
	if (ret == -1)
		goto qsfp_update;

	ret = cn10k_fdt_gpio_get_info_by_phandle(fdt, offset, "mod_present",
			&qsfp_info->mod_prs, dbg_prefix);
	if (ret == -1)
		goto qsfp_update;

	ret = cn10k_fdt_gpio_get_info_by_phandle(fdt, offset, "int",
			&qsfp_info->interrupt, dbg_prefix);
	if (ret == -1)
		goto qsfp_update;

	/* Set is_qsfp only when all the required info
	 * are parsed from DTS related to QSFP slot
	 */
	qsfp_info->is_qsfp = 1;	/* To indicate slot is QSFP */

	return 0;

qsfp_update:
	ERROR("%s: %s: QSFP slot info not parsed fully\n",
			__func__, dbg_prefix);
	return ret;
}

/*
 * Function parsing SFP info
 * Returns:
 *   0: if SFP slot was parsed & is going to be managed in ATF
 *   1: parsing was skipped as SFP slot is going to be managed in kernel
 *  -1: on parsing error
 *
 */
static int cn10k_fdt_parse_sfp_info(sfp_slot_info_t *sfp_info, const void *fdt,
				    int offset, const char *dbg_prefix)
{
	const char *name;
	i2c_info_t i2c_info;
	int eeprom, ret;
	int lenp;
	int i2c_bus_offset;
	struct parser_context_s *pctx = &parser_context;

	if (fdt_node_check_compatible(fdt, offset, "sff,sfp"))
		return -1;

	/* Parse EEPROM related I2C info */
	eeprom = cn10k_fdt_lookup_phandle(fdt, offset, "eeprom");
	if (eeprom < 0) {
		ERROR("%s: Couldn't find EEPROM info for SFP\n",
				dbg_prefix);

		ret = -1;
		goto sfp_update;
	}

	i2c_bus_offset = cn10k_fdt_get_i2c_bus_info(fdt, eeprom, &i2c_info,
					dbg_prefix);
	if (i2c_bus_offset < 0) {
		ret = -1;
		goto sfp_update;
	}

	name = fdt_get_name(fdt, offset, NULL);
	if (fdt_get_property(fdt, i2c_bus_offset, "twsi-in-kernel", &lenp)) {
		debug_dts("%s: skipped parsing %s, "
			"i2c bus %d is managed in kernel\n",
				dbg_prefix, name, i2c_info.bus);

		return 1;
	} else if (lenp == -FDT_ERR_NOTFOUND) {

		/* Update the list of twsi nodes to be trimmed */
		if (!pctx->twsi_nodes_to_trim[i2c_info.bus])
			pctx->twsi_nodes_to_trim[i2c_info.bus] = i2c_bus_offset;

		plat_octeontx_bcfg->bcfg.atf_managed_twsi[i2c_info.bus] = 1;
	}

	sfp_info->is_qsfp = 0;
	strlcpy(sfp_info->name, name, sizeof(sfp_info->name));
	debug_dts("%s: sfp_info->name %s\n",
			dbg_prefix, sfp_info->name);

	memcpy(&sfp_info->i2c_eeprom_info, &i2c_info, sizeof(i2c_info_t));

	sfp_info->eeprom_addr = cn10k_fdt_get_int32(fdt, "reg", eeprom);

	debug_dts("%s: EEPROM addr 0x%x\n", dbg_prefix,
					sfp_info->eeprom_addr);

	/* obtain MAX power for the slot as per the board design */
	sfp_info->max_power = cn10k_fdt_get_int32(fdt, "maximum-power-milliwatt", offset);


	/* Parse GPIO info for SFP interface */
	ret = cn10k_fdt_gpio_get_info_by_phandle(fdt, offset, "mod-def0-gpios",
			&sfp_info->mod_abs, dbg_prefix);
	if (ret == -1)
		goto sfp_update;

	ret = cn10k_fdt_gpio_get_info_by_phandle(fdt, offset, "tx-disable-gpios",
			&sfp_info->tx_disable, dbg_prefix);
	if (ret == -1)
		goto sfp_update;
	ret = cn10k_fdt_gpio_get_info_by_phandle(fdt, offset, "tx-fault-gpios",
			&sfp_info->tx_fault, dbg_prefix);
	if (ret == -1)
		goto sfp_update;

	ret = cn10k_fdt_gpio_get_info_by_phandle(fdt, offset, "los-gpios",
			&sfp_info->rx_los, dbg_prefix);

	if (ret == -1)
		goto sfp_update;

	sfp_info->is_sfp = 1;	/* To indicate slot is SFP */

	return 0;

sfp_update:
	ERROR("%s: %s: SFP slot info not parsed fully\n",
			__func__, dbg_prefix);
	return ret;
}

/**
 * cn10k_handle_num_rvu_vfs - handle errors and report user about
 * @req_vfs: requested (via FDT) number of VFs
 * @default_vfs: default number of VFs
 * @sum_vfs: already allocated HWVFs
 * @name: node name
 *
 * returns:
 * 	Valid number (req_vfs/default_vfs/0) of VFs that can be configured
 */
static int cn10k_handle_num_rvu_vfs(int req_vfs, int default_vfs,
					int *sum_vfs, const char *name)
{
	int hwvfs_left, ret = 0;

	hwvfs_left = MAX_RVU_HWVFS - *sum_vfs;
	/* Check if requested num_rvu_vfs does not exceed
	 * maximum number of VFs per PF and number of left HWVFs */
	if ((req_vfs <= MAX_VFS_PER_PF) && (hwvfs_left >= req_vfs)) {
		/* Valid config */
		ret = req_vfs;
	} else {
		/* Print error, try fallback to default value */
		WARN("RVU: Request to allocate more VFs (%d) than allowed\n"
		     "              for node %s, trying fallback\n"
		     "              to default (%d)\n",
		     req_vfs, name, default_vfs);
		/* Repeat check for default value */
		if ((default_vfs <= MAX_VFS_PER_PF) && (hwvfs_left >= default_vfs)) {
			WARN("RVU: Successful fallback to default VFs (%d)\n"
			     "              for node %s\n",
			     default_vfs, name);
			ret = default_vfs;
		} else {
			/* Can't do more here, zeroing
			 * number of VFs for this PF */
			ERROR("RVU: Zeroing number of VFs for node %s\n", name);
			ret = 0;
		}
	}

	return ret;
}

/**
 * cn10k_parse_rvu_admin - fill rvu_admin_pf_t structure of rvu_config
 * @fdt: pointer to the device tree blob
 * @parentoffset: offset to parent node (ecam2)
 * @node: node name
 * @sum_vfs: already allocated HWVFs
 *
 * returns:
 * 	0 on success, -1 otherwise
 */
static int cn10k_parse_rvu_admin(const void *fdt, int parentoffset,
				    const char *name, int *sum_vfs)
{
	int offset, len, req_vfs;
	rvu_sw_rvu_pf_t *sw_pf;
	const int *val;

	/* Find offset of *name node */
	offset = fdt_subnode_offset(fdt, parentoffset, name);
	if (offset < 0) {
		WARN("RVU: No %s node in FDT\n", name);
		return -1;
	}

	sw_pf = &(plat_octeontx_bcfg->rvu_config.admin_pf);
	/* Get number of MSIX */
	val = fdt_getprop(fdt, offset, "num-msix-vec", &len);
	if (!val) {
		VERBOSE("RVU: No num-msix-vec, using %d number of MSIX\n"
		        "              for node %s\n", DEFAULT_MSIX_AF, name);
		sw_pf->num_msix_vec = DEFAULT_MSIX_AF;
	} else {
		sw_pf->num_msix_vec = fdt32_to_cpu(*val);
	}

	/* Get number of VFs from FDT */
	val = fdt_getprop(fdt, offset, "num-rvu-vfs", &len);
	if (!val) {
		/* If there's no such property in FDT
		 * try to assign default VFS */
		VERBOSE("RVU: No num-rvu-vfs property for node %s\n", name);
		sw_pf->num_rvu_vfs = cn10k_handle_num_rvu_vfs(DEFAULT_AF_PF0_VFS,
					DEFAULT_AF_PF0_VFS, sum_vfs, name);
	} else {
		/* We've got that property, handle any errors with config */
		req_vfs = fdt32_to_cpu(*val);
		sw_pf->num_rvu_vfs = cn10k_handle_num_rvu_vfs(req_vfs,
					DEFAULT_AF_PF0_VFS, sum_vfs, name);
	}

	/* Allocate additional VF for AF_PF0 to handle
	 * workaround for NIX-36681
	 */
	if ((IS_OCTEONTX_PASS(read_midr(), T96PARTNUM, 1, 0)) ||
		(IS_OCTEONTX_VAR(read_midr(), F95PARTNUM, 1)))
		sw_pf->num_rvu_vfs += 1;

	/* Increment number of allocated HWVFs */
	*sum_vfs += sw_pf->num_rvu_vfs;

	return 0;
}

/**
 * cn10k_parse_sw_rvu - fill rvu_sw_pf_t structure of rvu_config
 * @fdt: pointer to the device tree blob
 * @parentoffset: offset to parent node (ecam2)
 * @node: node name
 * @sw_rvu_pf: index enumerated by sw_rvu_pfs
 * @sum_vfs: already allocated HWVFs
 *
 * returns:
 * 	0 on success, -1 otherwise
 */
static int cn10k_parse_sw_rvu(const void *fdt, int parentoffset,
				 const char *name, int sw_rvu_pf, int *sum_vfs)
{
	int offset, len, req_vfs;
	const char *str;
	const int *val;
	rvu_sw_rvu_pf_t *sw_pf;

	assert(sw_rvu_pf >= 0 && sw_rvu_pf < SW_RVU_NUM_PF);

	sw_pf = &(plat_octeontx_bcfg->rvu_config.sw_pf[sw_rvu_pf]);

	/* Find offset of *name node */
	offset = fdt_subnode_offset(fdt, parentoffset, name);
	if (offset < 0) {
		WARN("RVU: No %s node in FDT\n", name);
		return -1;
	}

	/* Get number of MSIX */
	val = fdt_getprop(fdt, offset, "num-msix-vec", &len);
	if (!val) {
		VERBOSE("RVU: No num-msix-vec, using %d number of MSIX\n"
		        "              for node %s\n", DEFAULT_MSIX_SW, name);
		sw_pf->num_msix_vec = DEFAULT_MSIX_SW;
	} else {
		sw_pf->num_msix_vec = fdt32_to_cpu(*val);
	}

	/* Get number of VFs from FDT */
	val = fdt_getprop(fdt, offset, "num-rvu-vfs", &len);
	if (!val) {
		/* If there's no such property in FDT
		 * try to assign default VFS */
		VERBOSE("RVU: No num-rvu-vfs property for node %s\n", name);
		sw_pf->num_rvu_vfs = cn10k_handle_num_rvu_vfs(DEFAULT_VFS,
					DEFAULT_VFS, sum_vfs, name);
	} else {
		/* We've got that property, handle any errors with config */
		req_vfs = fdt32_to_cpu(*val);
		sw_pf->num_rvu_vfs = cn10k_handle_num_rvu_vfs(req_vfs,
					DEFAULT_VFS, sum_vfs, name);
	}

	/* Get [mandatory for SDP] provisioning mode from FDT */
	str = fdt_getprop(fdt, offset, "provision-mode", &len);
	if (!str) {
		/*
		 * The provision-mode property is required for SDP.
		 * If missing, issue warning message, then default to legacy.
		 * All others simply default to legacy (no warning).
		 */
		if ((sw_rvu_pf >= SW_RVU_SDP_PF(0)) &&
		    (sw_rvu_pf - SW_RVU_SDP_PF(0) < SW_RVU_SDP_NUM_PF))
			WARN("RVU: node %s, no provision-mode, using LEGACY\n",
			     name);
		sw_pf->mapping = SW_RVU_MAP_LEGACY;
	} else if (!strncmp(str, "LEGACY", 6))
		sw_pf->mapping = SW_RVU_MAP_LEGACY;
	else if (!strncmp(str, "AVAILABLE", 9))
		sw_pf->mapping = SW_RVU_MAP_AVAILABLE;
	else if (!strncmp(str, "FORCE", 5))
		sw_pf->mapping = SW_RVU_MAP_FORCE;
	else if (!strncmp(str, "NONE", 4))
		sw_pf->mapping = SW_RVU_MAP_NONE;
	else {
		ERROR("RVU: node %s, invalid provision-mode %s, using NONE.\n",
		      name, str);
		sw_pf->mapping = SW_RVU_MAP_NONE;
	}

	/* Increment number of allocated HWVFs */
	*sum_vfs += sw_pf->num_rvu_vfs;

	return 0;
}

static void cn10k_parse_rvu_config(const void *fdt, int *fdt_vfs)
{
	int offset, rc, soc_offset, i;
	char node_name[32];

	/* Initialize all SW_RVU_PF mappings to NONE */
	for (i = 0; i < SW_RVU_NUM_PF; i++)
		plat_octeontx_bcfg->rvu_config.sw_pf[i].mapping =
			SW_RVU_MAP_NONE;

	/* RPM configuration is already done on this step,
	 * perform initial setup for other RVU-related nodes */
	plat_octeontx_bcfg->rvu_config.valid = 0;
	soc_offset = offset = fdt_path_offset(fdt, "/soc@0");
	if (soc_offset < 0) {
		ERROR("RVU: Unable to find soc@0 node\n");
		return;
	}

	/* Parse all subnodes of ECAM0, Domain2 */
	snprintf(node_name, sizeof(node_name), "pci@%llx",
		(ECAM_PF_BAR2(0) | (2 << 28)));
	offset = fdt_subnode_offset(fdt, soc_offset, node_name);
	if (offset < 0) {
		ERROR("RVU: Unable to find ecam2 node: %s\n", node_name);
		return;
	}

	/* Fill rvu_admin_pf_t structure */
	rc = cn10k_parse_rvu_admin(fdt, offset, RVU_ADMIN_FDT_NODE, fdt_vfs);
	if (rc < 0) {
		WARN("RVU: Unable to fill PF%d-ADMIN structure\n", RVU_AF);
		return;
	}

	/* Fill rvu_sw_rvu_pf_t structure, start with SSO_TIM */
	rc = cn10k_parse_sw_rvu(fdt, offset, RVU_SSO_TIM_FDT_NODE,
				    SW_RVU_SSO_TIM_PF(0), fdt_vfs);
	if (rc < 0) {
		WARN("RVU: Unable to fill PF%d-SSO_TIM structure\n",
			FIXED_RVU_SSO_TIM);
		return;
	} else if (!SW_RVU_SSO_TIM_NUM_PF) {
		/* Platform DTS should not contain entry for non-existent dev */
		ERROR("RVU: SSO FDT entry found but SW_RVU_SSO_TIM_NUM_PF=0\n");
	}

	/* Now parse NPA */
	rc = cn10k_parse_sw_rvu(fdt, offset, RVU_NPA_FDT_NODE,
				    SW_RVU_NPA_PF(0), fdt_vfs);
	if (rc < 0) {
		WARN("RVU: Unable to fill PF%d-NPA structure\n", FIXED_RVU_NPA);
		return;
	} else if (!SW_RVU_NPA_NUM_PF) {
		/* Platform DTS should not contain entry for non-existent dev */
		ERROR("RVU: NPA FDT entry found but SW_RVU_NPA_NUM_PF=0\n");
	}

#ifdef RVU_IPSEC_FDT_NODE
	rc = cn10k_parse_sw_rvu(fdt, offset, RVU_IPSEC_FDT_NODE,
				    SW_RVU_IPSEC_PF(0), fdt_vfs);

	if (!rc && !SW_RVU_IPSEC_NUM_PF) {
		/* Platform DTS should not contain entry for non-existent dev */
		ERROR("RVU: IPSEC FDT entry found but SW_RVU_IPSEC_NUM_PF=0\n");
	}
#endif /* RVU_IPSEC_FDT_NODE */

#ifdef RVU_SDP_FDT_NODE
	/*
	 * Implementation note: we parse all the SDP devices using the same
	 * node name as they are all identical.  If they need to be different,
	 * this loop needs to change to specify the instance-specific node name.
	 */
	for (i = 0; i < SW_RVU_SDP_NUM_PF; i++) {
		rc = cn10k_parse_sw_rvu(fdt, offset, RVU_SDP_FDT_NODE,
					    SW_RVU_SDP_PF(i), fdt_vfs);
		/* Not an error if SDP is absent from FDT. */
		(void)rc;
	}
#endif /* RVU_SDP_FDT_NODE */

#ifdef RVU_REE_FDT_NODE
	/*
	 * Implementation note: we parse all the REE devices using the same
	 * node name as they are all identical.  If they need to be different,
	 * this loop needs to change to specify the instance-specific node name.
	 */
	for (i = 0; i < SW_RVU_REE_NUM_PF; i++) {
		rc = cn10k_parse_sw_rvu(fdt, offset, RVU_REE_FDT_NODE,
					    SW_RVU_REE_PF(i), fdt_vfs);
		/* Not an error if REE is absent from FDT. */
		(void)rc;
	}
#endif /* RVU_REE_FDT_NODE */

#ifdef RVU_CPT_FDT_NODE
	/* Find if CPT node is available */
	if (plat_octeontx_get_cpt_count()) {
		int cpt;
		/* if CPT block is available, check if node is
		 * present before configuring RVU for CPT
		 */
		cpt = fdt_subnode_offset(fdt, offset, RVU_CPT_FDT_NODE);
		if (cpt < 0) {
			/* If node is not present, return error */
			WARN("RVU: CPT node is not available\n");
			return;
		}
		rc = cn10k_parse_sw_rvu(fdt, offset, RVU_CPT_FDT_NODE,
					    SW_RVU_CPT_PF(0), fdt_vfs);
		if (rc < 0) {
			WARN("RVU: Unable to fill PF%d structure\n", RVU_LAST);
			return;
		}
	} else { /* CPT not available */
		debug_dts("RVU: CPT is disabled\n");
		plat_octeontx_bcfg->rvu_config.cpt_dis = 1;
	}
#else
	debug_dts("RVU: CPT is disabled\n");
	plat_octeontx_bcfg->rvu_config.cpt_dis = 1;
#endif /* RVU_CPT_FDT_NODE */

	/* Here we can mark FDT RVU config as valid */
	plat_octeontx_bcfg->rvu_config.valid = 1;
}

static void cn10k_boot_device_from_strapx()
{
	cavm_gpio_strap_t gpio_strap;
	int boot_medium;

	gpio_strap.u = CSR_READ(CAVM_GPIO_STRAP);
	boot_medium = (gpio_strap.u) & 0x7;

	switch (boot_medium) {
		case CAVM_RST_BOOT_METHOD_E_REMOTE:
			plat_octeontx_bcfg->bcfg.boot_dev.boot_type = OCTEONTX_BOOT_REMOTE;
			break;
		case CAVM_RST_BOOT_METHOD_E_SPI0_CS0:
			plat_octeontx_bcfg->bcfg.boot_dev.boot_type = OCTEONTX_BOOT_SPI;
			plat_octeontx_bcfg->bcfg.boot_dev.controller = 0;
			plat_octeontx_bcfg->bcfg.boot_dev.cs = 0;
			break;
		case CAVM_RST_BOOT_METHOD_E_SPI0_CS1:
			plat_octeontx_bcfg->bcfg.boot_dev.boot_type = OCTEONTX_BOOT_SPI;
			plat_octeontx_bcfg->bcfg.boot_dev.controller = 0;
			plat_octeontx_bcfg->bcfg.boot_dev.cs = 1;
			break;
		case CAVM_RST_BOOT_METHOD_E_SPI1_CS0:
			plat_octeontx_bcfg->bcfg.boot_dev.boot_type = OCTEONTX_BOOT_SPI;
			plat_octeontx_bcfg->bcfg.boot_dev.controller = 1;
			plat_octeontx_bcfg->bcfg.boot_dev.cs = 0;
			break;
		case CAVM_RST_BOOT_METHOD_E_SPI1_CS1:
			plat_octeontx_bcfg->bcfg.boot_dev.boot_type = OCTEONTX_BOOT_SPI;
			plat_octeontx_bcfg->bcfg.boot_dev.controller = 1;
			plat_octeontx_bcfg->bcfg.boot_dev.cs = 1;
			break;
		case CAVM_RST_BOOT_METHOD_E_EMMC_CS0:
			plat_octeontx_bcfg->bcfg.boot_dev.boot_type = OCTEONTX_BOOT_EMMC;
			plat_octeontx_bcfg->bcfg.boot_dev.controller = 0;
			plat_octeontx_bcfg->bcfg.boot_dev.cs = 0;
			break;
		case CAVM_RST_BOOT_METHOD_E_EMMC_CS1:
			plat_octeontx_bcfg->bcfg.boot_dev.boot_type = OCTEONTX_BOOT_EMMC;
			plat_octeontx_bcfg->bcfg.boot_dev.controller = 0;
			plat_octeontx_bcfg->bcfg.boot_dev.cs = 1;
			break;
		default:
			plat_octeontx_bcfg->bcfg.boot_dev.boot_type = -OCTEONTX_BOOT_UNSUPPORTED;
			break;
	}
}

static int cn10k_parse_boot_device(const void *fdt, const int offset)
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
static void cn10k_parse_spi_config(const void *fdt)
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

static void cn10k_parse_usb_config(const void *fdt_addr)
{
	int bus;
	long usb_disabled_buses = cn10k_fdtebf_get_num(fdt_addr,
						       "USB-DISABLE-PORTS", 16);
	if (usb_disabled_buses >= 0) {
		for (bus = 0; bus < MAX_USB_BUS; bus++)
			if (usb_disabled_buses & (1 << bus))
				plat_octeontx_bcfg->usb_cfg[bus].is_enabled = 0;
			else
				plat_octeontx_bcfg->usb_cfg[bus].is_enabled = 1;
	} else {
		for (bus = 0; bus < MAX_USB_BUS; bus++)
			plat_octeontx_bcfg->usb_cfg[bus].is_enabled = 1;
	}
}

static void cn10k_parse_ppr_config(const void *fdt_addr)
{
	long is_enabled= cn10k_fdtebf_get_num(fdt_addr, "DDR-PPR-EN", 10);
	long eprc_th = cn10k_fdtebf_get_num(fdt_addr, "DDR-PPR-EPRC-TH", 16);

	if (is_enabled == 1)
		plat_octeontx_bcfg->ppr_config.is_enabled = 1;
	else
		plat_octeontx_bcfg->ppr_config.is_enabled = 0;

	plat_octeontx_bcfg->ppr_config.eprc_th = eprc_th;
}

static void cn10k_fill_twsi_slave_details(const void *fdt)
{
	int twssl_bus, twssl_addr;

	twssl_bus = cn10k_fdtebf_get_num(
		fdt, "MCP-TWSI-TARGET-BUS", 10);

	plat_octeontx_bcfg->bcfg.slave_twsi.s.bus = twssl_bus;

	twssl_addr = cn10k_fdtebf_get_num(
		fdt, "MCP-TWSI-TARGET-ADDR", 16);
	if (twssl_addr == -1)
		twssl_addr = 0x77;

	plat_octeontx_bcfg->bcfg.slave_twsi.s.addr = twssl_addr;
}

/* Fill RPM structure, if possible.
 * Return the number of lanes used for initialization.
 */
static int cn10k_fill_rpm_struct(int portm_idx, int rpm_idx, int fec)
{
	rpm_config_t *rpm;
	rpm_lmac_config_t *lmac;
	portm_config_t *portm;
	int mode, mac_lanes, portm_mode;
	int i, lmac_num;

	rpm = &(plat_octeontx_bcfg->rpm_cfg[rpm_idx]);
	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

	if ((!portm->port_enable) || (portm->mac_type != PORTM_ETH)) {
		debug_dts("PORTM %d : not configured for RPM, skip.\n", portm_idx);
		return 0;
	}

	portm_mode = portm->portm_mode;
	mac_lanes = cn10k_portm_get_mode_desc_mac_num(portm_mode);
	mode = gserm_get_mode_strmap(portm_mode).mode;

	for (i = 0; i < mac_lanes; i++) {
		lmac_num = cn10k_portm_get_rpm_lmac_num(portm_idx);
		if (lmac_num == -1) {
			debug_dts("%s: Not valid LMAC num found for PORTM %d\n", __func__,
					portm_idx);
			continue;
		}
		/* This is to update LMAC num for PORTM that has more than 1 MAC lanes
		 * like QSGMII, USXGMII modes
		 */
		lmac_num += i;

		/* Fill in the RPM/LMAC structures */
		lmac = &rpm->lmac_cfg[lmac_num];
		lmac->mode = mode;	/* LMAC type */
		lmac->portm_idx = portm_idx;
		lmac->fec = fec;
		lmac->port_enable = 1;

		debug_dts(
			"RPM%d:LMAC%d: port %d mode %d, port enable %d fec type %d\n",
				rpm_idx, lmac_num,
				lmac->portm_idx,
				lmac->mode,
				lmac->port_enable,
				lmac->fec);

		rpm->lmac_count++;

		/* In case of 1000 BASE-X, update the property of LMAC */
		if (portm_mode == PORTM_MODE_1000BASE_X) {
			lmac->sgmii_1000x_mode = 1;
		}
	}

	rpm->enable = 1;
	return 1;
}

/*
 * Function parsing PHY info
 * Returns:
 *   0: if PHY was parsed & will be managed in ATF
 *   1: parsing skipped as PHY is going to be be managed in kernel
 *  -1: on parsing error
 *
 */
static int cn10k_rpm_get_phy_info(phy_config_t *phy, void *fdt, int lmac_offset,
				  int phy_offset, const char *dbg_prefix)
{
	int mdio_bus_offset;
	int lenp;
	struct parser_context_s *pctx = &parser_context;

	phy->mdio_bus = cn10k_fdt_get_bus(fdt,
			phy_offset, dbg_prefix);

	if (phy->mdio_bus < 0) {
		ERROR("ERROR: Incorrect mdio bus number\n");
		return -1;
	}

	/* Check if MDIO bus, the PHY is on, has the "mdio-in-kernel"
	 * attribute specified. If yes, then skip parsing the PHY.
	 * Otherwise both, bus and the PHY, are going to be trimmed
	 * from the Linux dts.
	 */
	mdio_bus_offset = fdt_parent_offset(fdt, phy_offset);
	if (fdt_get_property(fdt,
			mdio_bus_offset, "mdio-in-kernel", &lenp)) {

		debug_dts("%s: %s: PHY parsing skipped. "
				"MDIO bus managed in kernel\n",
				__func__, dbg_prefix);
		return 1;
	} else if (lenp == -FDT_ERR_NOTFOUND) {

		/* Update the list of MDIO bus nodes to be trimmed */
		if (!pctx->mdio_nodes_to_trim[phy->mdio_bus])
			pctx->mdio_nodes_to_trim[phy->mdio_bus] = mdio_bus_offset;
	}

	for (int i = 0; i < ARRAY_SIZE(phy_compat_list); i++) {
		if (!fdt_node_check_compatible(fdt, phy_offset,
			phy_compat_list[i].compatible)) {
			phy->type = phy_compat_list[i].phy_type;
			debug_dts("%s: %s: PHY type %d\n",
				__func__, dbg_prefix,
				phy->type);
			break;
		}
	}
	if (phy->type == PHY_NONE) {
		ERROR("Supported PHY compatible not found\n");
		return -1;
	}

	/* Save the PHY address and bus for all PHY types */
	phy->addr = cn10k_fdt_get_int32(fdt,
				"reg", phy_offset);

	phy->port = cn10k_fdt_get_int32(fdt,
				"port", phy_offset);

	/* Passing the PHY node offset in Linux DT, so that the
	 * driver can parse additional data from it, i.e. 'reg-init'
	 */
	phy->fdt_offset = phy_offset;

	return 0;
}

static inline int _node_name_to_lmac_type(const char *node_name)
{
	char *p;
	char type_str[32] = {0};

	strlcpy(type_str, node_name, 32);

	p = strchr(type_str, '@');
	if (!p)
		return -1;

	*p = '\0';
	return gserm_get_mode_from_string(type_str);
}

static void cn10k_fill_lmac_mode_info(void *fdt, rpm_lmac_config_t *lmac,
				      int type, int offset, int rpm_idx, int lmac_idx)
{
	lmac_mode_info_t *info = &lmac->lmac_mode_info[type];

	info->available = 1;

	/* Field only for the SGMII/QSGMII LMAC types */
	if ((type == CAVM_RPM_LMAC_TYPES_E_SGMII) ||
			(type == CAVM_RPM_LMAC_TYPES_E_QSGMII) ||
			(type == CAVM_RPM_LMAC_TYPES_E_USXGMII) ||
			(type == CAVM_RPM_LMAC_TYPES_E_USGMII)) {
		const int *val;
		int len, speed;

		val = fdt_getprop(fdt, offset,
				"cn10k,sgmii-disable-autoneg",
				&len);
		if (val)
			info->an_disable = 1;
		else
			info->an_disable = 0;

		speed = cn10k_fdt_get_int32(fdt,
			"cn10k,sgmii-set-speed", offset);

		switch (speed) {
		case 10:
			info->sgmii_speed = ETH_LINK_10M;
			break;
		case 100:
			info->sgmii_speed = ETH_LINK_100M;
			break;
		case 2500:
			info->sgmii_speed = ETH_LINK_2HG;
			break;
		case 5000:
			info->sgmii_speed = ETH_LINK_5G;
			break;
		case 10000:
			info->sgmii_speed = ETH_LINK_10G;
			break;
		case 1000:
		default:
			info->sgmii_speed = ETH_LINK_1G;
			break;
		}

		info->sgmii_duplex = 1;
	}
}

/* Get the LMAC information from the Linux DT file. The following properties
 * are checked:
 *  - phy-handle
 *  - num-rvu-vfs
 *  - num-msix-vec
 * SGMII/QSGMII only:
 *  - cn10k,sgmii-disable-autoneg
 */
static void cn10k_rpm_lmacs_check_linux(void *fdt,
		rpm_config_t *rpm, int rpm_idx, int rpm_offset, int *fdt_vfs)
{
	int lmac_idx, lmac_offset;
	rpm_lmac_config_t *lmac;

	/*
	 * First of, set the default values in lmacs for
	 * all the fields that are parsed from dts
	 */
	for (int idx = 0; idx < MAX_LMAC_PER_RPM; idx++) {
		lmac = &rpm->lmac_cfg[idx];

		lmac->num_rvu_vfs = DEFAULT_VFS;
		lmac->num_msix_vec = DEFAULT_MSIX_LMAC;
		lmac->sfp_slot = 0;
		lmac->sfp_info = NULL;
		lmac->phy_present = 0;
		lmac->phy_config = NULL;
		lmac->lmac_enable = 0;
	}

	lmac_offset = fdt_first_subnode(fdt, rpm_offset);
	while (lmac_offset > 0) {
		int lmac_type;
		int phy_offset;
		int sfp_offset;
		bool is_sfp;
		int ret, len;
		const int *val;
		lmac_mode_info_t *mode_info;
		struct parser_context_s *pctx = &parser_context;
		const char *node_name = fdt_get_name(fdt, lmac_offset, NULL);
		int portm_idx;
		char dbg_prefix[64];

		lmac_idx = cn10k_fdt_get_int32(fdt, "reg", lmac_offset);
		if (lmac_idx == -1) {
			ERROR("RPM%d: lmac node %s is missing 'reg' property\n",
				rpm_idx, node_name);
			goto next_node;
		}

		lmac_type = _node_name_to_lmac_type(node_name);
		if (lmac_type == -1) {
			ERROR("RPM%d: invalid lmac type in lmac node %s\n",
				rpm_idx, node_name);
			goto next_node;
		}

		mode_info = &lmac->lmac_mode_info[lmac_type];
		snprintf(dbg_prefix, ARRAY_SIZE(dbg_prefix),
			"RPM%d.LMAC%d", rpm_idx, lmac_idx);

		lmac = &rpm->lmac_cfg[lmac_idx];
		portm_idx = lmac->portm_idx;

		cn10k_fill_lmac_mode_info(fdt, lmac, lmac_type, lmac_offset,
					  rpm_idx, lmac_idx);

		if (!lmac->port_enable)
			goto next_node;

		phy_offset = cn10k_fdt_lookup_phandle(fdt, lmac_offset, "phy-handle");

		if (phy_offset > 0) {
			phy_config_t *phy;

			phy = &plat_octeontx_bcfg->phys[portm_idx];

			if (!pctx->phy_offsets[portm_idx].offset) {
				pctx->phy_offsets[portm_idx].offset = phy_offset;
				ret = cn10k_rpm_get_phy_info(phy, fdt, lmac_offset,
					phy_offset, dbg_prefix);

				if (ret == -1) {
					ERROR("%s: %d:%d PHY info not correct\n",
						__func__, rpm_idx, lmac_idx);
					goto next_node;
				} else if (ret == 0) {
					/* PHY managed in ATF */
					pctx->phy_offsets[portm_idx].atf_mgmt = 1;
				} else {
					/* PHY managed in kernel */
					pctx->phy_offsets[portm_idx].atf_mgmt = 0;
				}
			}

			if (pctx->phy_offsets[portm_idx].atf_mgmt) {
				lmac->phy_config = phy;
				lmac->phy_present = 1;
			}
		}

		/* Check for sfp-slot info */
		is_sfp = true;
		sfp_offset = cn10k_fdt_lookup_phandle(fdt,
					lmac_offset, "sfp-slot");
		if (sfp_offset < 0) {
			sfp_offset = cn10k_fdt_lookup_phandle(fdt,
				lmac_offset, "qsfp-slot");
			is_sfp = false;
		}

		if (sfp_offset > 0) {
			sfp_slot_info_t *sfp;

			sfp = &plat_octeontx_bcfg->sfp_slots[portm_idx];

			if (!pctx->sfp_offsets[portm_idx].offset) {
				pctx->sfp_offsets[portm_idx].offset = sfp_offset;

				ret = is_sfp ?
					cn10k_fdt_parse_sfp_info(sfp, fdt, sfp_offset,
						dbg_prefix) :
					cn10k_fdt_parse_qsfp_info(sfp, fdt, sfp_offset,
						dbg_prefix);

				if (ret == 0)
					pctx->sfp_offsets[portm_idx].atf_mgmt = 1;
				else if (ret == 1)
					pctx->sfp_offsets[portm_idx].atf_mgmt = 0;
			}

			if (pctx->sfp_offsets[portm_idx].atf_mgmt) {
				lmac->sfp_info = sfp;
				lmac->sfp_slot = 1;
			}
		}

		val = fdt_getprop(fdt, lmac_offset, "num-rvu-vfs", &len);
		if (val)
			lmac->num_rvu_vfs = fdt32_to_cpu(*val);

		val = fdt_getprop(fdt, lmac_offset, "num-msix-vec", &len);
		if (val)
			lmac->num_msix_vec = fdt32_to_cpu(*val);

		/*
		 * Check if currently parsed lmac mode is what
		 * is to be configured for this lmac. If yes,
		 * need to enable it and update its sfp_info / an_disable.
		 */
		if (lmac->mode != lmac_type)
			goto next_node;

		if (mode_info->an_disable) {
			lmac->an_disable = 1;
			lmac->sgmii_speed = mode_info->sgmii_speed;
			lmac->sgmii_duplex = mode_info->sgmii_duplex;
		}

		lmac->lmac_enable = 1;
next_node:
		lmac_offset = fdt_next_subnode(fdt, lmac_offset);
	}
}

static void cn10k_portm_check_linux(void *fdt, int portm_idx, int portm_offset)
{
	struct parser_context_s *pctx = &parser_context;
	char dbg_prefix[64];
	bool is_sfp;
	int ret, sfp_offset;

	snprintf(dbg_prefix, ARRAY_SIZE(dbg_prefix),
		"PORTM%d", portm_idx);

	/* Check for sfp-slot info */
	is_sfp = true;
	sfp_offset = cn10k_fdt_lookup_phandle(fdt,
				portm_offset, "sfp-slot");
	if (sfp_offset < 0) {
		sfp_offset = cn10k_fdt_lookup_phandle(fdt,
			portm_offset, "qsfp-slot");
		is_sfp = false;
	}

	if (sfp_offset > 0) {
		sfp_slot_info_t *sfp;

		sfp = &plat_octeontx_bcfg->sfp_slots[portm_idx];

		if (!pctx->sfp_offsets[portm_idx].offset) {
			pctx->sfp_offsets[portm_idx].offset = sfp_offset;

			ret = is_sfp ?
				cn10k_fdt_parse_sfp_info(sfp, fdt, sfp_offset,
					dbg_prefix) :
				cn10k_fdt_parse_qsfp_info(sfp, fdt, sfp_offset,
					dbg_prefix);

			if (ret == 0)
				pctx->sfp_offsets[portm_idx].atf_mgmt = 1;
			else if (ret == 1)
				pctx->sfp_offsets[portm_idx].atf_mgmt = 0;
		}
	}
}

void cn10k_check_fdt_trims(void *fdt)
{
	struct parser_context_s *pctx = &parser_context;

	/* MDIO bus nodes that have PHYs in dts, but no "mdio-in-kernel"
	 * attribute specified are trimmed along with their PHY subnodes.
	 */
	{
		for (int idx = 0; idx < MDIO_NUM; idx++) {
			if (pctx->mdio_nodes_to_trim[idx]) {
				fdt_nop_node(fdt, pctx->mdio_nodes_to_trim[idx]);
			}
		}
	}
}

/* Main routine to parse the RPM information from the Linux DT file. */
static void cn10k_rpm_check_linux(void *fdt)
{
	int i;
	rpm_config_t *rpm;
	int offset, rpm_offset;
	int fdt_vfs = 0;
	char name[16];
	struct parser_context_s *pctx = &parser_context;

	offset = fdt_path_offset(fdt, "/soc@0");
	if (offset < 0) {
		ERROR("DT: Can't find RPM information in the Linux DT.\n");
		return;
	}
	offset = fdt_node_offset_by_compatible(fdt, offset, "pci-bridge");
	if (offset < 0) {
		ERROR("DT: Unable to find mrml_bridge node.\n");
		return;
	}

	for (i = 0; i < plat_octeontx_scfg->rpm_count; i++) {
		rpm = &(plat_octeontx_bcfg->rpm_cfg[i]);
		snprintf(name, sizeof(name), "rpm@%d", i);
		rpm_offset = fdt_subnode_offset(fdt, offset, name);

		if (rpm_offset < 0) {
			ERROR("DT: %s node is not present in the device tree\n", name);
			continue;
		}

		cn10k_rpm_lmacs_check_linux(fdt, rpm, i, rpm_offset, &fdt_vfs);
		fdt_nop_node(fdt, rpm_offset);
	}

	/* Parsing portm@<x> nodes for CPRI modes */
	for (i = 0; i < plat_octeontx_scfg->portm_count; i++) {
		int portm_offset;
		portm_config_t *portm =
			&(plat_octeontx_bcfg->portm_cfg[i]);

		if (!portm->port_enable)
			continue;

		snprintf(name, sizeof(name), "portm@%d", i);
		portm_offset = fdt_subnode_offset(fdt, offset, name);

		if (portm_offset < 0)
			continue;

		cn10k_portm_check_linux(fdt, i, portm_offset);
		fdt_nop_node(fdt, portm_offset);
	}

	/* As all the ATF-managed sfp/qsfps are parsed, we can proceed to
	 * trim associated twsi buses from Linux dts
	 */
	for (i = 0; i < TWSI_NUM; i++) {
		if (pctx->twsi_nodes_to_trim[i]) {
			fdt_nop_node(fdt, pctx->twsi_nodes_to_trim[i]);
		}
	}

	/* Remove also the SFP/QSFP nodes after they are paresed.
	 */
	for (i = 0; i < MAX_PORTM; i++)
		if (pctx->sfp_offsets[i].offset && pctx->sfp_offsets[i].atf_mgmt)
			fdt_nop_node(fdt, pctx->sfp_offsets[i].offset);

	/* Parse RVU configuration */
	cn10k_parse_rvu_config(fdt, &fdt_vfs);
}

static void __program_local_mac(const void *fdt, int rpm_id, int lmac_id, int pf_idx, int id, int cnt, bool use_id)
{
	long mac = -1;
	char name[32];
	rpm_lmac_config_t *lmac;

	debug_dts("%s: use_id %d, id %d, cnt %d\n", __func__, use_id, id, cnt);
	if (use_id) {
		snprintf(name, sizeof(name), "BOARD-MAC-ADDRESS-ID%d", id);
		mac = cn10k_fdtebf_get_num(fdt, name, 16);
		if (mac == -1) {
			debug_dts("MAC address is not defined for ID%d\n", id);
			mac = 0;
		}
		debug_dts("BOARD-MAC-ADDRESS-ID%d = %lx\n", id, mac);
	} else if (cnt != -1) {
		long mac_base;
		mac_base = cn10k_fdtebf_get_num(fdt, "BOARD-MAC-ADDRESS", 16);
		if (mac_base == -1)
			debug_dts("Base MAC address not defined\n");
		else
			mac = mac_base + cnt;
	}

	lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];
	plat_octeontx_bcfg->pf_macs[pf_idx] = mac;
	debug_dts("%d:%d:Programming pf_id%d with mac %lx\n", rpm_id, lmac_id, pf_idx, mac);
	lmac->local_mac_address[0] = (mac >> 40) & 0xff;
	lmac->local_mac_address[1] = (mac >> 32) & 0xff;
	lmac->local_mac_address[2] = (mac >> 24) & 0xff;
	lmac->local_mac_address[3] = (mac >> 16) & 0xff;
	lmac->local_mac_address[4] = (mac >> 8) & 0xff;
	lmac->local_mac_address[5] = mac & 0xff;
}

/* Assign all the possible MAC addresses to the LMAC initialized.
 * This is made according to the values from the EBF DT file:
 *   BOARD-MAC-ADDRESS-NUM
 *   BOARD-MAC-ADDRESS
 * First "N" LMACs will be configured. Remaining interfaces will be
 * initialized with zeros.
 */
static void cn10k_rpm_assign_mac(const void *fdt)
{
	int mac_id_num, mac_num;
	int p, pf_idx = 0;
	int lane, id = 0, cnt = 0;

	/* Parse EBF DT file, to find variables to set MAC address:
	 *   BOARD-MAC-ADDRESS-NUM-ID
	 *   BOARD-MAC-ADDRESS-ID
	 *   BOARD-MAC-ADDRESS-NUM
	 *   BOARD-MAC-ADDRESS
	 */

	mac_id_num = cn10k_fdtebf_get_num(fdt, "BOARD-MAC-ADDRESS-ID-NUM", 10);
	if (!mac_id_num)
		mac_id_num = cn10k_fdtebf_get_num(fdt, "BOARD-MAC-ADDRESS-ID-NUM", 16);
	debug_dts("BOARD-MAC-ADDRESS-ID-NUM=%d\n", mac_id_num);

	/* Now configure MAC address based on base address */
	mac_num	= cn10k_fdtebf_get_num(fdt, "BOARD-MAC-ADDRESS-NUM", 10);
	if (!mac_num)
		mac_num = cn10k_fdtebf_get_num(fdt, "BOARD-MAC-ADDRESS-NUM", 16);

	debug_dts("BOARD-MAC-ADDRESS-NUM=%d\n", mac_num);

	for (p = 0; p < MAX_PORTM; p++) {
		portm_config_t *portm;

		portm = &(plat_octeontx_bcfg->portm_cfg[p]);
		if (!(portm && (portm->port_enable) && (portm->mac_type == PORTM_ETH))) {
			id++;
			continue;
		}
		for (lane = 0; lane < portm->num_lmacs; lane++, id++, cnt++) {
			int rpm_id, lmac_id;
			rpm_lmac_config_t *lmac;

			rpm_id = portm->mac_num;
			lmac_id = portm->mac_lane + lane;
			lmac = &plat_octeontx_bcfg->rpm_cfg[rpm_id].lmac_cfg[lmac_id];

			debug_dts("%d:%d: pf_idx %d, cnt %d, id %d\n", rpm_id, lmac_id, pf_idx, cnt, id);
			if (!lmac->lmac_enable)
				continue;

			if (mac_id_num) {
				__program_local_mac(fdt, rpm_id, lmac_id, pf_idx, id, 0, 1);
				pf_idx += 1;
			} else if (mac_num) {
				/* Do not program rvu pf if requested macs are all programmed */
				if (cnt >= mac_num)
					return;

				__program_local_mac(fdt, rpm_id, lmac_id, pf_idx, 0, cnt, 0);
				pf_idx += 1;
			}
		}
	}
	/* Program the number of macs configurations */
	plat_octeontx_bcfg->pf_mac_num = pf_idx;
}

/**
 * Programs 802.3AP advertisement structure
 * If 802_3ap mode is specified, update the portm_mode to
 * 802_3ap portm mode with highest lane count and then the
 * highest datarate.
 *
 * @param fdt         Pointer to device tree
 * @param portm_idx   PORTM
 * @param *portm_mode PORTM mode
 * @param fec         PORTM fec
 * @param *numlanes   Max number of lanes by 802.3AP modes
 *
 * @return 1 valid 802_3AP mode specified, 0 invalid
 */
static int cn10k_fill_portm_802_3ap_struct(void *fdt, int portm_idx, cn10k_portm_modes_t *portm_mode,
					  cn10k_portm_fec_t fec, int *numlanes)
{
	cn10k_portm_modes_t ap_mode, ap_mode_prog = 0;
	cn10k_portm_fec_t fec_req, fec_orig;
	cn10k_portm_fec_abil_t fec_abil;
	int offset, len;
	int ret;
	const char *portm_mode_s;
	char prop[64];
	bool valid = 0;
	portm_ap_802_3_config_t ap_802_3_cfg = {0};

	offset = fdt_path_offset(fdt, "/cavium,bdk");
	if (offset < 0) {
		WARN("%s: FDT node not found\n", __func__);
		return -1;
	}

	/* Check if 802.3 AP mode is specified */
	if (*portm_mode == PORTM_MODE_802_3AP) {
		for (int cfg = 0; cfg < PORTM_MAX_AN_CFGS; cfg++) {
			snprintf(prop, sizeof(prop), "PORTM-802-3AP-MODE.CFG%d.P%d", cfg, portm_idx);
			portm_mode_s = fdt_getprop(fdt, offset, prop, &len);
			ap_mode = cn10k_portm_cfg_string_to_mode(portm_mode_s);
			/* Check if the port mode is valid. If not, set to disabled */
			if (!cn10k_portm_mode_valid(portm_idx, ap_mode) &&
			    !cn10k_portm_get_mode_desc_ap_sup(ap_mode)) {
				debug_dts("PORTM%d: Invalid 802_3AP mode configuration : %s\n",
				      portm_idx,
				      gserm_get_mode_strmap(*portm_mode_s).ebf_str);
				continue;
			}

			/* Read the FEC_REQ from EBF DT */
			snprintf(prop, sizeof(prop), "PORTM-802-3AP-FEC-REQ.CFG%d.P%d", cfg, portm_idx);
			fec_req = cn10k_fdtebf_get_num(fdt, prop, 10);

			if (fec_req == -1)
				fec_req = cn10k_portm_get_mode_desc_fec_low(ap_mode);

			/* Check if fec_req type was specified and is supported by the
			 * requested mode. If not, then disable it.
			 */
			fec_orig = fec_req;
			ret = cn10k_portm_fec_valid(ap_mode, &fec_req);
			if (!ret)
				debug_dts("PORTM%d: FEC %s not supported by mode %s, using FEC %s\n",
					  portm_idx, cn10k_portm_fec_type_to_str(fec_orig),
					  cn10k_portm_mode_to_cfg_str(ap_mode),
					  cn10k_portm_fec_type_to_str(fec_req));

			if (fec_req && ((fec_req & cn10k_portm_get_mode_desc_fec(ap_mode)) != fec_req)) {
				debug_dts("PORTM%d FEC type %d not supported by mode %d\n",
				portm_idx, fec_req, ap_mode);
				fec_req = PORTM_FEC_DISABLED;
			}

			fec_abil = 0;
			if (cn10k_portm_get_mode_desc_fec_abil(ap_mode)) {
				/* Read the 802.3AP FEC_ABIL from EBF DT */
				snprintf(prop, sizeof(prop), "PORTM-802-3AP-FEC-ABIL.CFG%d.P%d", cfg, portm_idx);
				fec_abil = cn10k_fdtebf_get_num(fdt, prop, 10);

				if (fec_abil == -1)
					fec_abil = PORTM_FEC_ABIL_DISABLED;
			}

			debug_dts("PORTM%d CFG%d: mode:%s, fec_req:%s, fec_abil:%d\n",
				  portm_idx, cfg, cn10k_portm_mode_to_cfg_str(ap_mode),
				  cn10k_portm_fec_type_to_str(fec_req), fec_abil);

			ap_802_3_cfg.portm_mode[cfg] = ap_mode;
			ap_802_3_cfg.fec_req[cfg] = fec_req;
			ap_802_3_cfg.fec_abil[cfg] = fec_abil;
		}

		/* Set PORTM mode to the advertised PORTM mode with
		 * with the highest lane count and then the highest datarate.
		 */
		*portm_mode = ap_mode_prog;
	} else {
		/* Alway advertise BASE-R/RS FEC ability during AN */
		ap_802_3_cfg.portm_mode[0] = *portm_mode;
		ap_802_3_cfg.fec_req[0] = fec;
		ap_802_3_cfg.fec_abil[0] = PORTM_FEC_ABIL_BASER_RS;
	}

	valid = cn10k_portm_802_3ap_cfg(portm_idx, &ap_802_3_cfg, portm_mode, numlanes);

	return valid;
}

static void cn10k_fill_default_mac_to_serdes_map(int gserm_idx, int portm_first)
{
	int gser_lane;
	gserm_plat_config_t *gserm;

	gserm = &(plat_octeontx_bcfg->gserm_plat_cfg[gserm_idx]);
	gserm->lane_map = 0;

	for (int mlane = 0; mlane < plat_octeontx_scfg->qlm_max_lane_num[gserm_idx]; mlane++) {
		gser_lane = cn10k_portm_get_gser_lane_num(portm_first + mlane);
		gserm->lane_map |= gser_lane << (mlane * 4);
	}
}

static void cn10k_fill_gserm_details(void *fdt)
{
	int offset;
	int gser_lane, portm_first;
	char prop[64];
	int mac_ser_lane_map, refclk_stde, gserm_idx, refclk_term, rx_cal;
	uint8_t lane_mask;
	gserm_plat_config_t *gserm;

	offset = fdt_path_offset(fdt, "/cavium,bdk");
	if (offset < 0) {
		WARN("%s: FDT node not found\n", __func__);
		return;
	}

	for (gserm_idx = 0; gserm_idx < plat_octeontx_scfg->gserm_count; gserm_idx++) {
		bool valid = true;

		lane_mask = 0;
		gserm = &(plat_octeontx_bcfg->gserm_plat_cfg[gserm_idx]);
		snprintf(prop, sizeof(prop), "PORTM-MAC-TO-SERDES-MAP.GSER%d", gserm_idx);
		mac_ser_lane_map = cn10k_fdtebf_get_num(fdt, prop, 16);
		portm_first = cn10k_portm_gserm_get_first_portm_num(gserm_idx);

		if ((mac_ser_lane_map == -1) ||
		    (cavm_is_model(OCTEONTX_CN10KA) && (plat_get_altpkg() != CN10KA_PKG))) {
			debug_dts("%s: No PORTM-MAC-TO-SERDES-MAP found for GSERM%d. Using default mapping.\n", __func__, gserm_idx);
			cn10k_fill_default_mac_to_serdes_map(gserm_idx, portm_first);
		} else {
			for (int mlane = 0; mlane < plat_octeontx_scfg->qlm_max_lane_num[gserm_idx]; mlane++) {
				gser_lane = (mac_ser_lane_map >> (mlane * 4)) & 0xf;
				/* Validate the SERDES# in the mac_to_serdes map is valid */
				if (gser_lane > cn10k_portm_get_max_gser_lane_num(portm_first + mlane)) {
					ERROR("GSERM%d: Lane number %d specified in PORTM_MAC_TO_SERDES_MAP nibble%d is invalid\n",
					      gserm_idx, gser_lane, mlane);
					valid = 0;
				}

				/* Check if lane has already been used in another portm */
				if (lane_mask & (1 << gser_lane)) {
					ERROR("GSERM%d: Lane%d already used in PORTM_MAC_TO_SERDES_MAP.\n"
					      "Check PORTM-MAC-TO-SERDES-MAP\n",
					      gserm_idx, gser_lane);
					valid = 0;
				}

				if (!valid)
					break;

				lane_mask |= 1 << gser_lane;
				gserm->lane_map |= gser_lane << (mlane * 4);
			}
		}

		if (!valid) {
			ERROR("GSERM%d: Invalid PORTM_MAC_TO_SERDES_MAP. Using default mapping.\n",
			      gserm_idx);
			cn10k_fill_default_mac_to_serdes_map(gserm_idx, portm_first);
		}

		if (cavm_is_model(OCTEONTX_CNF10KB)) {
			bool gserm_synce_found = false;

			snprintf(prop, sizeof(prop), "REFCLK-SYNCE-SEL.GSER%d", gserm_idx);  // Search GSERM
			refclk_stde = cn10k_fdtebf_get_num(fdt, prop, 10);
			if (refclk_stde == -1) {
				debug_dts("%s: No REFCLK-SYNCE-SEL found for GSERM%d. Using non-synce REFCLK.\n", __func__, gserm_idx);
				refclk_stde = 1;
			} else {
				gserm_synce_found = true;
			}
			gserm->sync_e_map = refclk_stde ? 0x0 : 0xffff;

			for (int mlane = 0; mlane < plat_octeontx_scfg->qlm_max_lane_num[gserm_idx]; mlane++) {
				snprintf(prop, sizeof(prop), "REFCLK-SYNCE-SEL.GSER%d.LANE%d", gserm_idx, mlane);  // Search GSERM Lane
				refclk_stde = cn10k_fdtebf_get_num(fdt, prop, 10);
				if (refclk_stde == -1) {
					if (gserm_synce_found) {
						continue;
					}
					debug_dts("%s: No REFCLK-SYNCE-SEL found for GSERM%d.LANE%d. Using non-synce REFCLK.\n", __func__, gserm_idx, mlane);
					refclk_stde = 1;
				}
				if (refclk_stde) {
					gserm->sync_e_map &= ~(0xf << (mlane * 4));
				} else {
					gserm->sync_e_map |= (0xf << (mlane * 4));
				}
			}
			debug_dts("GSERM%d: sync_e_map: 0x%x\n", gserm_idx, gserm->sync_e_map);
		}

		if (cavm_is_model(OCTEONTX_CNF10KA)) {
			snprintf(prop, sizeof(prop), "PHASE-ADAPT-CAL.GSER%d", gserm_idx);  // Search GSERM
			rx_cal = cn10k_fdtebf_get_num(fdt, prop, 10);
			if (rx_cal == -1) {
				debug_dts("%s: PHASE-ADAPT-CAL not found for GSERM%d. Using 0xf.\n", __func__, gserm_idx);
				rx_cal = 0xf;
			}
			debug_dts("%s: PHASE-ADAPT-CAL for GSERM%d: 0x%x\n", __func__, gserm_idx, rx_cal);
			gserm->rx_cal_setting = rx_cal;
		}

		debug_dts("GSERM%d: mac_to_serdes_lane_map: 0x%x\n", gserm_idx, gserm->lane_map);
	}

	/* Capture REF_CLK termination dts settings */
	for (int refclk_idx = 0; refclk_idx < MAX_REFCLK; refclk_idx++) {
		snprintf(prop, sizeof(prop), "REF-CLK-TERM.CLK%d", refclk_idx);
		refclk_term = cn10k_fdtebf_get_num(fdt, prop, 10);
		if (refclk_term == -1) {
			refclk_term = 1;
		}

		/* Get the associated GSERM # for the REF_CLK */
		gserm_idx = plat_octeontx_scfg->refclk_term_gserm_num[refclk_idx];
		/* Check if REF_CLK requires termination */
		if (gserm_idx != -1) {
			gserm = &(plat_octeontx_bcfg->gserm_plat_cfg[gserm_idx]);
			gserm->refclk_conn = 1;
			gserm->refclk_term = refclk_term;
			debug_dts("%s: REF_CLK%d GSERM%d: Setting termination to %s\n", __func__,
				  refclk_idx, gserm_idx, refclk_term ? "None" : "50 Ohms");
		}
	}
}

static void cn10k_fill_portm_details(void *fdt)
{
	cn10k_portm_modes_t portm_mode;
	int port8_11_mac_type = -1, port16_19_mac_type = -1, mac_type;
	int offset, len;
	int rx_pol, tx_pol, an_master_lane;
	int rx_precode, tx_precode, rx_term;
	int numlanes = 0;
	portm_config_t *portm;
	bool ap_sup;
	char prop[64];
	const char *portm_mode_s;
	cn10k_portm_fec_t fec, fec_orig;
	int gserm_idx;
	int lane_idx;
	int baud_rate, flags = 0;
	gserm_state_lane_t gserm_state;
	int ret;

	offset = fdt_path_offset(fdt, "/cavium,bdk");
	if (offset < 0) {
		WARN("%s: FDT node not found\n", __func__);
		return;
	}

	for (int portm_idx = 0; portm_idx < plat_octeontx_scfg->portm_count;) {
		snprintf(prop, sizeof(prop), "PORTM-MODE.P%d", portm_idx);
		portm_mode_s = fdt_getprop(fdt, offset, prop, &len);
		if (!portm_mode_s) {
			debug_dts("%s: No mode found for portm %d\n", __func__, portm_idx);
			portm_idx++;
			continue;
		}
		debug_dts("%s: PORTM%d: portm_mode %s\n", __func__, portm_idx, portm_mode_s);

		portm_mode = cn10k_portm_cfg_string_to_mode(portm_mode_s);

		if ((portm_mode == PORTM_MODE_DISABLED) ||
		    (portm_mode == PORTM_MODE_INVALID) ||
		    (portm_mode == PORTM_MODE_INACTIVE)) {
			portm_idx++;
			continue;
		}

		/* Check if the portm mode is valid. If not, set to disabled */
		if (cn10k_portm_mode_valid(portm_idx, portm_mode) != 1) {
			ERROR("PORTM%d: Invalid mode configuration: %s\n",
			      portm_idx, cn10k_portm_mode_to_cfg_str(portm_mode));
			portm_idx++;
			continue;
		}

		portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

		/* cnf10ka custom checks for ports 8-19
		 * Ports 8-11 (GSERM2) and Ports 16-19 (GSERM4) do not support mixing JESD and Ethernet modes
		 * Ports 8-11 (GSERM2) and Ports 12-15 (GSERM3) cannot both support JESD modes
		 */
		if (cavm_is_model(OCTEONTX_CNF10KA) &&
		    ((portm_idx > 7) && (portm_idx < 20))) {
			/* GSERM2 (ports 8-11) and GSERM4 (port 16-19) do not support mixing JESD and Ethernet modes */
			switch (portm_idx) {
			case 8 ... 11:
				if (port8_11_mac_type == -1)
					port8_11_mac_type = cn10k_portm_get_mode_desc_mac_type(portm_mode);
				mac_type = cn10k_portm_get_mode_desc_mac_type(portm_mode);
				if (mac_type != port8_11_mac_type) {
					portm_mode = PORTM_MODE_DISABLED;
					ERROR("PORTM%d: Cannot mix MAC type:%s with MAC type:%s on ports 8 to 11\n",
					      portm_idx, cn10k_portm_mac_type_to_cfg_str(mac_type),
					      cn10k_portm_mac_type_to_cfg_str(port8_11_mac_type));
				}
				break;
			case 12 ... 15:
				mac_type = cn10k_portm_get_mode_desc_mac_type(portm_mode);
				if (mac_type == port8_11_mac_type) { /* Port 12-15 only support JESD */
					portm_mode = PORTM_MODE_DISABLED;
					ERROR("PORTM%d: Do NOT support MAC type:%s on ports 8 to 11 and 12 to 15\n",
					      portm_idx, cn10k_portm_mac_type_to_cfg_str(mac_type));
				}
				break;
			case 16 ... 19:
				if (port16_19_mac_type == -1)
					port16_19_mac_type = cn10k_portm_get_mode_desc_mac_type(portm_mode);
				mac_type = cn10k_portm_get_mode_desc_mac_type(portm_mode);
				if (mac_type != port16_19_mac_type) {
					portm_mode = PORTM_MODE_DISABLED;
					ERROR("PORTM%d: Cannot mix MAC type:%s with MAC type:%s on ports 16 to 19\n",
					      portm_idx, cn10k_portm_mac_type_to_cfg_str(mac_type),
					      cn10k_portm_mac_type_to_cfg_str(port16_19_mac_type));
				}
				break;
			}

			if (portm_mode == PORTM_MODE_DISABLED) {
				portm_idx++;
				continue;
			}
		}

		/* Read the FEC type from EBF DT */
		snprintf(prop, sizeof(prop), "PORTM-FEC.P%d", portm_idx);
		fec = cn10k_fdtebf_get_num(fdt, prop, 10);

		if (fec == -1)
			fec = cn10k_portm_get_mode_desc_fec_low(portm_mode);

		/* Check if fec type was specified and is supported by the
		 * requested mode. If not, then set to lowest supported FEC.
		 */
		fec_orig = fec;
		ret = cn10k_portm_fec_valid(portm_mode, &fec);
		if (!ret)
			debug_dts("PORTM%d: FEC %s not supported by mode %s, using FEC %s\n",
				  portm_idx, cn10k_portm_fec_type_to_str(fec_orig),
				  cn10k_portm_mode_to_cfg_str(portm_mode),
				  cn10k_portm_fec_type_to_str(fec));

		/* Read the Rx Termination type from EBF DT */
		snprintf(prop, sizeof(prop), "PORTM-RX-TERMINATION.P%d", portm_idx);
		rx_term = cn10k_fdtebf_get_num(fdt, prop, 10);

		if (rx_term == -1)
			rx_term = PORTM_RX_TERMINATION_AC;
		else if ((rx_term != PORTM_RX_TERMINATION_AC) /* Invalid setting */
			 && (rx_term != PORTM_RX_TERMINATION_DC)) {
			debug_dts("PORTM%d: RX_TERM:%d not supported, using AC termination (%d)\n",
				  portm_idx, rx_term, PORTM_RX_TERMINATION_AC);
			rx_term = PORTM_RX_TERMINATION_AC;
		}

		/* Configure CN10KAS MCM ports with DC termination */
		if ((cavm_is_model(OCTEONTX_CN10KA) && (plat_get_altpkg() == CN10KAS_PKG))
		    && ((portm_idx >= 0) && (portm_idx < 3)))
			rx_term = PORTM_RX_TERMINATION_DC;

		ap_sup = 0;
		/* Check if portmmode supports 802.3 AP */
		if (cn10k_portm_get_mode_desc_ap_sup(portm_mode) ||
		    (portm_mode == PORTM_MODE_802_3AP)) {
			if (!cn10k_fill_portm_802_3ap_struct(fdt, portm_idx, &portm_mode, fec, &numlanes)) {
				ERROR("PORTM%d: Must specify at least 1 valid PORTM_802_3AP_MODE\n",
				      portm_idx);
				portm_idx++;
				continue;
			}
			ap_sup = 1;
		} else
			numlanes = cn10k_portm_get_mode_desc_serdes_num(portm_mode);

		gserm_idx = cn10k_portm_get_gser_num(portm_idx);
		portm->gserm = gserm_idx;
		/* Create portm lane_map with MAX lanes used by PORTM
		 * Should only need to create this lane_map once
		 */
		cn10k_fill_portm_lane_map(portm_idx);

		/* Get the Rx/Tx Polarity and Rx/Tx precode enable
		 * Uses MAX PORTM lane could so should only
		 * fill the tx/rx polarity and precode once.
		 */
		for (int lane = 0; lane < plat_octeontx_scfg->portm_max_lane_cnt[portm_idx]; lane++) {
			/* CN10KAS MCM connections require Tx/Rx polarity inversion
			 * They also do not support enabling of Tx/Rx precode
			 */
			if ((cavm_is_model(OCTEONTX_CN10KA) && (plat_get_altpkg() == CN10KAS_PKG))
			    && (portm_idx <= 2)) {
				tx_pol = 1;
				rx_pol = 1;
				tx_precode = 0;
				rx_precode = 0;
			} else {
				/* Get Rx Polarity */
				snprintf(prop, sizeof(prop), "PORTM-LANE-RX-POLARITY.P%d.LANE%d", portm_idx, lane);
				rx_pol = cn10k_fdtebf_get_num(fdt, prop, 10);
				if (rx_pol == -1) {
					debug_dts("%s: PORTM%d.L%d: PORTM-LANE-RX-POLARITY not defined. Using non-inverted polarity\n", __func__, portm_idx, lane);
					rx_pol = 0;
				}

				/* Get Tx Polarity */
				snprintf(prop, sizeof(prop), "PORTM-LANE-TX-POLARITY.P%d.LANE%d", portm_idx, lane);
				tx_pol = cn10k_fdtebf_get_num(fdt, prop, 10);
				if (tx_pol == -1) {
					debug_dts("%s: PORTM%d.L%d: PORTM-LANE-TX-POLARITY not defined. Using non-inverted polarity\n", __func__, portm_idx, lane);
					tx_pol = 0;
				}

				/* Get Rx Precode */
				snprintf(prop, sizeof(prop), "PORTM-LANE-RX-PRECODE-EN.P%d.LANE%d", portm_idx, lane);
				rx_precode = cn10k_fdtebf_get_num(fdt, prop, 10);
				if (rx_precode == -1) {
					debug_dts("%s: PORTM%d.L%d: PORTM-LANE-RX-PRECODE-EN not defined. Disabling Rx precode\n", __func__, portm_idx, lane);
					rx_precode = 0;
				}

				/* Get Tx Precode */
				snprintf(prop, sizeof(prop), "PORTM-LANE-TX-PRECODE-EN.P%d.LANE%d", portm_idx, lane);
				tx_precode = cn10k_fdtebf_get_num(fdt, prop, 10);
				if (tx_precode == -1) {
					debug_dts("%s: PORTM%d.L%d: PORTM-LANE-TX-PRECODE-EN not defined. Disabling Tx precode\n", __func__, portm_idx, lane);
					tx_precode = 0;
				}
			}

			portm->rx_pol[lane] = rx_pol;
			portm->tx_pol[lane] = tx_pol;
			portm->rx_precode[lane] = rx_precode;
			portm->tx_precode[lane] = tx_precode;
			debug_dts("PORTM%d.L%d: RX_POL:%d, TX_POL:%d\n",
				  portm_idx, lane, rx_pol, tx_pol);
			debug_dts("PORTM%d.L%d: RX_PRECODE_EN:%d, TX_PRECODE_EN:%d\n",
				  portm_idx, lane, rx_precode, tx_precode);
		}

		snprintf(prop, sizeof(prop), "PORTM-802-3AP-MASTER-LANE.P%d", portm_idx);
		an_master_lane = cn10k_fdtebf_get_num(fdt, prop, 10);

		if (an_master_lane == -1)
			an_master_lane = 0;

		/* Check that the lane value is valid */
		if ((an_master_lane > (numlanes - 1)) ||
		    (an_master_lane < 0)) {
			WARN("PORTM%d: Invalid PORTM-802-3AP-MASTER-LANE specified. Using default.\n", portm_idx);
			an_master_lane = 0;
		}

		portm->an_master_lane = an_master_lane;
		portm->an_lt_ena = ap_sup;
		portm->gser_numlanes = numlanes;
		portm->portm_mode = portm_mode;
		portm->fec = fec;
		portm->rx_term = rx_term;
		portm->port_enable = 1;

		/* Program GSERM scratchpad Registers with port config */
		/* Serdes lane connected to lowest MAC lane in the port */
		lane_idx = portm->lane_map & 0xF;
		baud_rate = cn10k_portm_get_mode_desc_speed_mhz(portm_mode);
		gserm_state = gserm_build_state(portm_mode, baud_rate, flags, fec);

		gserm_set_state(gserm_idx, lane_idx, gserm_state);

		/* Figure out how many portms are used by this port */
		/* Note: CN10k does not support connecting 2 GSERM's to 1 RPM */
		cn10k_fill_portms_used(portm_idx, portm_mode);

		debug_dts("PORTM%d GSER%d: mac_to_serdes_lane_map: 0x%x\n",
			  portm_idx, gserm_idx, portm->lane_map);

		debug_dts("PORTM%d: PORTM_MODE:%s, FEC_TYPE:%s\n",
			  portm_idx, cn10k_portm_mode_to_cfg_str(portm_mode), cn10k_portm_fec_type_to_str(fec));

		debug_dts("PORTM%d: 802.3AP supported:%d, AN Master Lane:%d\n",
			  portm_idx, ap_sup, an_master_lane);

		debug_dts("PORTM%d: Rx termination:%d\n",
			  portm_idx, rx_term);

		cn10k_fill_portm_mac_info(portm_idx, portm_mode);
		cn10k_fill_portm_tx_eq_info(portm_idx, portm_mode);

		portm_idx += portm->portms_used;
	}
}


static void cn10k_fill_rpm_details(void *fdt)
{
	int rpm_idx;
	int fec = 0;
	cn10k_portm_modes_t portm_mode = 0;
	portm_config_t *portm;

	for (int portm_idx = 0; portm_idx < plat_octeontx_scfg->portm_count;) {
		portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

		if ((!portm->port_enable) || (portm->mac_type != PORTM_ETH)) {
			portm_idx++;
			continue;
		}

		portm_mode = portm->portm_mode;
		fec = portm->fec;
		rpm_idx = portm->mac_num;

		if ((rpm_idx < 0) ||
		    (rpm_idx >= plat_octeontx_scfg->rpm_count)) {
			portm_idx++;
			continue;
		}

		debug_dts("%s: RPM%d: PORTM%d: portm_mode %d FEC %d\n",
			  __func__, rpm_idx, portm_idx, portm_mode, fec);

		cn10k_fill_rpm_struct(portm_idx, rpm_idx, fec);

		/* If PORT uses more than 1 lane, skip to the next PORT */
		portm_idx += portm->portms_used;

	}

	for (rpm_idx = 0; rpm_idx < MAX_RPM; rpm_idx++) {
		rpm_config_t *rpm = &(plat_octeontx_bcfg->rpm_cfg[rpm_idx]);

		if ((BPHY_BITMAP >> rpm_idx) & 1)
			rpm->is_rfoe = 1;
	}

	cn10k_rpm_check_linux(fdt);
	cn10k_rpm_assign_mac(fdt);
}

static void cn10k_fill_timer_ms(const void *fdt)
{
	int offset, val = 0;
	const uint32_t *reg;

	/* By default, update timer to 1s */
	plat_octeontx_bcfg->timer1_ms = 500;
	plat_octeontx_bcfg->timer2_ms = 500;

	if (cavm_is_platform(PLATFORM_EMULATOR)) {
		plat_octeontx_bcfg->timer1_ms = 50;
		plat_octeontx_bcfg->timer2_ms = 50;
		return;
	}

	if (fdt_check_header(fdt))
		return;

	offset = fdt_path_offset(fdt, "/eth_poll_timer");
	if (offset > 0) {
		reg = (fdt_getprop(fdt, offset, "cmd_timer",
				NULL));
		if (reg) {
			val = fdt32_to_cpu(*reg);
			/* If the timer frequency is less than 200ms
			 * default to 1s.
			 */
			if (val >= 200)
				plat_octeontx_bcfg->timer1_ms = val;
		}

		reg = (fdt_getprop(fdt, offset, "link_mgmt_timer",
				NULL));
		if (reg) {
			val = fdt32_to_cpu(*reg);
			/* If the timer frequency is less than 200ms
			 * default to 1s.
			 */
			if (val >= 200)
				plat_octeontx_bcfg->timer2_ms = val;
		}
	} else
		debug_dts("%s: Not able to find eth_poll_timer node, using 1sec as default\n", __func__);
}

static void cn10k_get_persist_data_config(const void *fdt)
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
	int offset, rc, i;

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

	rc = cn10k_parse_boot_device(fdt, offset);
	if (rc) {
		debug_dts("Using GPIO_STRAPX register for boot device\n");
		cn10k_boot_device_from_strapx();
	}
	cn10k_fill_gserm_details(fdt);

	cn10k_fill_portm_details(fdt);

	cn10k_fill_rpm_details(fdt);

	cn10k_fill_twsi_slave_details(fdt);

	cn10k_fill_timer_ms(fdt);

	/* Parse SPI configuration */
	cn10k_parse_spi_config(fdt);

	/* Parse USB configuration */
	cn10k_parse_usb_config(fdt);

	/* configure NIX for RPM; only support a single NIX */
	for (i = 0; i < MAX_RPM; i++)
		plat_octeontx_bcfg->rpm_cfg[i].nix_block = NIX0;

	cn10k_get_persist_data_config(fdt);

	plat_octeontx_bcfg->do_switch_reset = cn10k_fdtebf_get_num(fdt,
						 "SWITCH-MICROINIT", 10);

	/* Parse PPR configuration */
	cn10k_parse_ppr_config(fdt);

	return 0;
}
