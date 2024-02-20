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
#include <qlm.h>
#include <rpm.h>
#include <strtol.h>
#include <portm_helper.h>
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
	/* Add phys when code is ported  */
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

/**
 * parse_rvu_config - fill rvu_pf_t structure of rvu_config
 * @fdt: pointer to the device tree blob
 *
 * returns:
 *	0 on success, -1 otherwise
 */
static void parse_rvu_config(const void *fdt)
{
	int offset, len, index, ents;
	rvu_pf_cfg_t *pf_cfg;
	const int *val;
	size_t cells;

	plat_octeontx_bcfg->rvu_cfg.valid = 0;
	offset = fdt_path_offset(fdt, "/rvu_cfg");
	if (offset < 0) {
		ERROR("RVU: Unable to find rvu_cfg node\n");
		return;
	}

	val = fdt_getprop(fdt, offset, "config", &len);
	if (!val) {
		WARN("RVU: No device config found\n");
		return;
	}

	/* 8 cells <pfno devid rev class_code vf_devid num_vfs msix_vec enable> */
	cells = 8;
	ents = len / (cells * sizeof(uint32_t));

	for (index = 0; index < ents; index++) {
		pf_cfg = &(plat_octeontx_bcfg->rvu_cfg.pf_cfg[index]);
		pf_cfg->pf_id = fdt32_to_cpu(*(val + (cells * index)));
		pf_cfg->devid = fdt32_to_cpu(*(val + (cells * index) + 1));
		pf_cfg->rev = fdt32_to_cpu(*(val + (cells * index) + 2));
		pf_cfg->cls_code = fdt32_to_cpu(*(val + (cells * index) + 3));
		pf_cfg->vf_devid = fdt32_to_cpu(*(val + (cells * index) + 4));
		pf_cfg->num_vfs = fdt32_to_cpu(*(val + (cells * index) + 5));
		pf_cfg->num_msix_vec = fdt32_to_cpu(*(val + (cells * index) + 6));
		pf_cfg->enable = fdt32_to_cpu(*(val + (cells * index) + 7));
	}

	plat_octeontx_bcfg->rvu_cfg.num_dev = ents;
	plat_octeontx_bcfg->rvu_cfg.valid = 1;
}

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


static int fdt_get_int32(const void *fdt, const char *prop,
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

static uint64_t fdt_get_uint64(const void *fdt, const char *prop,
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

static int fdt_lookup_phandle(const void *fdt_addr, int offset,
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

static int fdt_get_bus(const void *fdt, int offset,
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
		mdio = fdt_get_uint64(fdt, "reg", node);
		if (mdio == -1)
			return mdio;

		bus = (mdio & (1 << 7)) ? 1 : 0;

		if (bus < 0 || bus >= MDIO_NUM) {
			debug_dts("%s: '%d' "
				"is not a correct MDIO bus number\n",
				dbg_prefix, bus);
			return -1;
		}

		debug_dts("%s: mdio 0x%" PRIx64 " bus %d\n",
			dbg_prefix, mdio, bus);
	} else if (nodename && !strncmp(nodename, "i2c", 3)) {
		debug_dts("%s: I2C node\n", dbg_prefix);
		i2c = fdt_get_int32(fdt, "reg", node);

		/* based on DEVFN, obtain TWSI bus */
		bus = ((i2c >> 8) & 0xF);

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

static int fdt_get_i2c_bus_info(const void *fdt, int dev_offset,
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
	ret = fdt_get_bus(fdt,
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
	i2c_info->channel = fdt_get_int32(fdt,
				"reg", offset);
	i2c_info->addr = fdt_get_int32(fdt,
				"reg", parent);
	/* TWSI bus */
	ret = fdt_get_bus(fdt,
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

static int fdt_gpio_get_info_by_phandle(const void *fdt, int offset,
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
			gpio_info->num_pins = fdt_get_int32(fdt,
				"ngpios", node);

			/* If max number of GPIOs are not available from
			 * DT, get it from the static table
			 */
			if (!gpio_info->num_pins)
				gpio_info->num_pins = gpio_compat_list[i].ngpios;
			gpio_info->type = gpio_compat_list[i].type;
			gpio_info->i2c_addr = fdt_get_int32(fdt, "reg", node);
			fdt_get_i2c_bus_info(fdt, node,
					&gpio_info->i2c_info,
					dbg_prefix);
			if (gpio_info->i2c_info.type == I2C_BUS_NONE) {
				/* There might be the case of where the GPIO
				 * expander is behind the I2C switch. Hence
				 * pass the parent node to obtain the
				 * i2c info again
				 */
				parent = fdt_parent_offset(fdt, node);
				fdt_get_i2c_bus_info(fdt, parent,
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
static int fdt_parse_qsfp_info(sfp_slot_info_t *qsfp_info, const void *fdt,
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
	eeprom = fdt_lookup_phandle(fdt, offset, "eeprom");
	if (eeprom < 0) {
		ERROR("%s: Couldn't find EEPROM info for SFP\n",
				dbg_prefix);

		ret = -1;
		goto qsfp_update;
	}

	i2c_bus_offset = fdt_get_i2c_bus_info(fdt, eeprom, &i2c_info,
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

	qsfp_info->eeprom_addr = fdt_get_int32(fdt, "reg", eeprom);

	debug_dts("%s: EEPROM addr 0x%x\n", dbg_prefix,
					qsfp_info->eeprom_addr);

	/* obtain MAX power for the slot as per the board design */
	qsfp_info->max_power = fdt_get_int32(fdt, "max_power",
			offset);


	/* Parse GPIO info for QSFP interface */
	ret = fdt_gpio_get_info_by_phandle(fdt, offset, "mod_sel",
			&qsfp_info->select, dbg_prefix);
	if (ret == -1)
		goto qsfp_update;

	ret = fdt_gpio_get_info_by_phandle(fdt, offset, "reset",
			&qsfp_info->reset, dbg_prefix);
	if (ret == -1)
		goto qsfp_update;

	ret = fdt_gpio_get_info_by_phandle(fdt, offset, "lowpow_mode",
			&qsfp_info->lp_mode, dbg_prefix);
	if (ret == -1)
		goto qsfp_update;

	ret = fdt_gpio_get_info_by_phandle(fdt, offset, "mod_present",
			&qsfp_info->mod_prs, dbg_prefix);
	if (ret == -1)
		goto qsfp_update;

	ret = fdt_gpio_get_info_by_phandle(fdt, offset, "int",
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
static int fdt_parse_sfp_info(sfp_slot_info_t *sfp_info, const void *fdt,
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
	eeprom = fdt_lookup_phandle(fdt, offset, "eeprom");
	if (eeprom < 0) {
		ERROR("%s: Couldn't find EEPROM info for SFP\n",
				dbg_prefix);

		ret = -1;
		goto sfp_update;
	}

	i2c_bus_offset = fdt_get_i2c_bus_info(fdt, eeprom, &i2c_info,
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

	sfp_info->eeprom_addr = fdt_get_int32(fdt, "reg", eeprom);

	debug_dts("%s: EEPROM addr 0x%x\n", dbg_prefix,
					sfp_info->eeprom_addr);

	/* obtain MAX power for the slot as per the board design */
	sfp_info->max_power = fdt_get_int32(fdt, "maximum-power-milliwatt", offset);


	/* Parse GPIO info for SFP interface */
	ret = fdt_gpio_get_info_by_phandle(fdt, offset, "mod-def0-gpios",
			&sfp_info->mod_abs, dbg_prefix);
	if (ret == -1)
		goto sfp_update;

	ret = fdt_gpio_get_info_by_phandle(fdt, offset, "tx-disable-gpios",
			&sfp_info->tx_disable, dbg_prefix);
	if (ret == -1)
		goto sfp_update;
	ret = fdt_gpio_get_info_by_phandle(fdt, offset, "tx-fault-gpios",
			&sfp_info->tx_fault, dbg_prefix);
	if (ret == -1)
		goto sfp_update;

	ret = fdt_gpio_get_info_by_phandle(fdt, offset, "los-gpios",
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

/* Fill RPM structure, if possible.
 * Return the number of lanes used for initialization.
 */
static int fill_rpm_struct(int portm_idx, int rpm_idx, int fec)
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
	mac_lanes = portm_get_mode_desc_mac_num(portm_mode);
	mode = gserm_get_mode_strmap(portm_mode).mode;

	for (i = 0; i < mac_lanes; i++) {
		lmac_num = portm_get_rpm_lmac_num(portm_idx);
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
		portm->fec = fec;
		lmac->port_enable = 1;

		debug_dts(
			"RPM%d:LMAC%d: port %d mode %d, port enable %d fec type %d\n",
				rpm_idx, lmac_num,
				lmac->portm_idx,
				lmac->mode,
				lmac->port_enable,
				portm->fec);

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
static int rpm_get_phy_info(phy_config_t *phy, void *fdt, int lmac_offset,
				int phy_offset, const char *dbg_prefix)
{
	int mdio_bus_offset;
	int lenp;
	struct parser_context_s *pctx = &parser_context;

	phy->mdio_bus = fdt_get_bus(fdt,
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
	phy->addr = fdt_get_int32(fdt,
				"reg", phy_offset);

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

static void fill_lmac_mode_info(void *fdt, rpm_lmac_config_t *lmac,
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
				"cn20k,sgmii-disable-autoneg",
				&len);
		if (val)
			info->an_disable = 1;
		else
			info->an_disable = 0;

		speed = fdt_get_int32(fdt,
			"cn20k,sgmii-set-speed", offset);

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
 *  - cn20k,sgmii-disable-autoneg
 */
static void rpm_lmacs_check_linux(void *fdt,
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
		int led_offset;
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

		lmac_idx = fdt_get_int32(fdt, "reg", lmac_offset);
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

		lmac = &rpm->lmac_cfg[lmac_idx];
		mode_info = &lmac->lmac_mode_info[lmac_type];
		snprintf(dbg_prefix, ARRAY_SIZE(dbg_prefix),
			"RPM%d.LMAC%d", rpm_idx, lmac_idx);

		portm_idx = lmac->portm_idx;

		fill_lmac_mode_info(fdt, lmac, lmac_type, lmac_offset,
					  rpm_idx, lmac_idx);

		if (!lmac->port_enable)
			goto next_node;

		phy_offset = fdt_lookup_phandle(fdt, lmac_offset, "phy-handle");

		if (phy_offset > 0) {
			phy_config_t *phy;

			phy = &plat_octeontx_bcfg->phys[portm_idx];

			if (!pctx->phy_offsets[portm_idx].offset) {
				pctx->phy_offsets[portm_idx].offset = phy_offset;
				ret = rpm_get_phy_info(phy, fdt, lmac_offset,
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
				lmac->phy_port = fdt_get_int32(fdt, "port", phy_offset);
			}
		}

		led_offset = fdt_lookup_phandle(fdt, lmac_offset, "led-port");
		if (led_offset > 0) {
			led_gpio_info_t *led_info;
			int print_link = 0;

			led_info = &plat_octeontx_bcfg->led_info[portm_idx];
			/* Update GPIO LED information in LMAC config */
			if (fdt_gpio_get_info_by_phandle(fdt, led_offset, "act-gpios",
				&led_info->activity, dbg_prefix) >= 0) {

				led_info->is_act_supported = 1;

				debug_dts("%s: act:  pin: %02d - num_pins: %02d - i2c_addr: 0x%02x - i2c_bus: %d - dir_out: %d - dir_in: %d - type: %d - flags: 0x%x\n",
					dbg_prefix,
					led_info->activity.pin,
					led_info->activity.num_pins,
					led_info->activity.i2c_addr,
					led_info->activity.i2c_bus,
					led_info->activity.dir_out,
					led_info->activity.dir_in,
					led_info->activity.type,
					led_info->activity.flags);
			}
			if (fdt_gpio_get_info_by_phandle(fdt, led_offset, "link-gpios",
				&led_info->link, dbg_prefix) >= 0) {
				led_info->link_status = 0;
				led_info->is_link_supported = 1;
				print_link = 1;
			} else if (fdt_gpio_get_info_by_phandle(fdt, led_offset, "link-act-gpios",
									&led_info->link, dbg_prefix) >= 0) {
				debug_dts("%s: combined link and activity LED\n", dbg_prefix);
				memcpy(&led_info->activity, &led_info->link, sizeof(led_gpio_info_t));

				led_info->link_status = 0;
				led_info->is_combined_link_act = 1;
				print_link = 1;
			}

			if (print_link == 1)
				debug_dts("%s: link: pin: %02d - num_pins: %02d - i2c_addr: 0x%02x - i2c_bus: %d - dir_out: %d - dir_in: %d - type: %d - flags: 0x%x\n",
					dbg_prefix,
					led_info->link.pin,
					led_info->link.num_pins,
					led_info->link.i2c_addr,
					led_info->link.i2c_bus,
					led_info->link.dir_out,
					led_info->link.dir_in,
					led_info->link.type,
					led_info->link.flags);
		}

		/* Check for sfp-slot info */
		is_sfp = true;
		sfp_offset = fdt_lookup_phandle(fdt,
					lmac_offset, "sfp-slot");
		if (sfp_offset < 0) {
			sfp_offset = fdt_lookup_phandle(fdt,
				lmac_offset, "qsfp-slot");
			is_sfp = false;
		}

		if (sfp_offset > 0) {
			sfp_slot_info_t *sfp;

			sfp = &plat_octeontx_bcfg->sfp_slots[portm_idx];

			if (!pctx->sfp_offsets[portm_idx].offset) {
				pctx->sfp_offsets[portm_idx].offset = sfp_offset;

				ret = is_sfp ?
					fdt_parse_sfp_info(sfp, fdt, sfp_offset,
						dbg_prefix) :
					fdt_parse_qsfp_info(sfp, fdt, sfp_offset,
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

static void portm_check_linux(void *fdt, int portm_idx, int portm_offset)
{
	struct parser_context_s *pctx = &parser_context;
	char dbg_prefix[64];
	bool is_sfp;
	int ret, sfp_offset;

	snprintf(dbg_prefix, ARRAY_SIZE(dbg_prefix),
		"PORTM%d", portm_idx);

	/* Check for sfp-slot info */
	is_sfp = true;
	sfp_offset = fdt_lookup_phandle(fdt,
				portm_offset, "sfp-slot");
	if (sfp_offset < 0) {
		sfp_offset = fdt_lookup_phandle(fdt,
			portm_offset, "qsfp-slot");
		is_sfp = false;
	}

	if (sfp_offset > 0) {
		sfp_slot_info_t *sfp;

		sfp = &plat_octeontx_bcfg->sfp_slots[portm_idx];

		if (!pctx->sfp_offsets[portm_idx].offset) {
			pctx->sfp_offsets[portm_idx].offset = sfp_offset;

			ret = is_sfp ?
				fdt_parse_sfp_info(sfp, fdt, sfp_offset,
					dbg_prefix) :
				fdt_parse_qsfp_info(sfp, fdt, sfp_offset,
					dbg_prefix);

			if (ret == 0)
				pctx->sfp_offsets[portm_idx].atf_mgmt = 1;
			else if (ret == 1)
				pctx->sfp_offsets[portm_idx].atf_mgmt = 0;
		}
	}
}

void check_fdt_trims(void *fdt)
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
static void rpm_check_linux(void *fdt)
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

		rpm_lmacs_check_linux(fdt, rpm, i, rpm_offset, &fdt_vfs);
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

		portm_check_linux(fdt, i, portm_offset);
		fdt_nop_node(fdt, portm_offset);
	}

	/* Parse LED blink rate */
	offset = fdt_path_offset(fdt, "/led-blink-rate@0");

	// Set default value for blink rate in milli-hertz
	plat_octeontx_bcfg->led_blink_rate = GPIO_LED_ACTVITY_FREQ_HZ * 1000;
	if (offset > 0) {
		int rate;

		// Parse out reg value and store in led_blink_rate
		rate = fdt_get_int32(fdt, "reg", offset);
		if (rate == -1) {
			WARN("led_blink_rate: couldn't find reg property - using default value\n");
		} else {
			if (rate >= GPIO_LED_ACTIVITY_MIN_RATE && rate <= GPIO_LED_ACTIVITY_MAX_RATE) {
				INFO("Setting led blink rate to %d\n", rate);
				plat_octeontx_bcfg->led_blink_rate = rate;
			} else {
				WARN("led-blink-rate: %d outside of supported range %d-%d\n", rate, GPIO_LED_ACTIVITY_MIN_RATE, GPIO_LED_ACTIVITY_MAX_RATE);
			}
		}
	}

	/* As all the ATF-managed sfp/qsfps are parsed, we can proceed to
	 * trim associated twsi buses from Linux dts
	 */
	for (i = 0; i < TWSI_NUM; i++) {
		if (pctx->twsi_nodes_to_trim[i]) {
			fdt_nop_node(fdt, pctx->twsi_nodes_to_trim[i]);
		}
	}

	/* Remove also the SFP/QSFP nodes after they are parsed.
	 */
	for (i = 0; i < MAX_PORTM; i++)
		if (pctx->sfp_offsets[i].offset && pctx->sfp_offsets[i].atf_mgmt)
			fdt_nop_node(fdt, pctx->sfp_offsets[i].offset);
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
static int fill_portm_802_3ap_struct(void *fdt, int portm_idx, portm_modes_t *portm_mode,
					  portm_fec_t fec, int *numlanes)
{
	portm_modes_t ap_mode, ap_mode_prog = 0;
	portm_fec_t fec_req, fec_orig;
	portm_fec_abil_t fec_abil;
	int offset, len;
	int ret;
	const char *portm_mode_s;
	char prop[64];
	bool valid = 0;
	portm_ap_802_3_config_t ap_802_3_cfg = {0};

	offset = fdt_path_offset(fdt, "/marvell,ebf");
	if (offset < 0) {
		WARN("%s: FDT node not found\n", __func__);
		return -1;
	}

	/* Check if 802.3 AP mode is specified */
	if (*portm_mode == PORTM_MODE_802_3AP) {
		for (int cfg = 0; cfg < PORTM_MAX_AN_CFGS; cfg++) {
			snprintf(prop, sizeof(prop), "PORTM-802-3AP-MODE.CFG%d.P%d", cfg, portm_idx);
			portm_mode_s = fdt_getprop(fdt, offset, prop, &len);
			ap_mode = portm_cfg_string_to_mode(portm_mode_s);
			/* Check if the port mode is valid. If not, set to disabled */
			if (!portm_mode_valid(portm_idx, ap_mode) &&
			    !portm_get_mode_desc_ap_sup(ap_mode)) {
				debug_dts("PORTM%d: Invalid 802_3AP mode configuration : %s\n",
				      portm_idx,
				      gserm_get_mode_strmap(*portm_mode_s).ebf_str);
				continue;
			}

			/* Read the FEC_REQ from EBF DT */
			snprintf(prop, sizeof(prop), "PORTM-802-3AP-FEC-REQ.CFG%d.P%d", cfg, portm_idx);
			fec_req = cn10k_fdtebf_get_num(fdt, prop, 10);

			if (fec_req == -1)
				fec_req = portm_get_mode_desc_fec_low(ap_mode);

			/* Check if fec_req type was specified and is supported by the
			 * requested mode. If not, then disable it.
			 */
			fec_orig = fec_req;
			ret = portm_fec_valid(ap_mode, &fec_req);
			if (!ret)
				debug_dts("PORTM%d: FEC %s not supported by mode %s, using FEC %s\n",
					  portm_idx, portm_fec_type_to_str(fec_orig),
					  portm_mode_to_cfg_str(ap_mode),
					  portm_fec_type_to_str(fec_req));

			if (fec_req && ((fec_req & portm_get_mode_desc_fec(ap_mode)) != fec_req)) {
				debug_dts("PORTM%d FEC type %d not supported by mode %d\n",
				portm_idx, fec_req, ap_mode);
				fec_req = PORTM_FEC_DISABLED;
			}

			fec_abil = 0;
			if (portm_get_mode_desc_fec_abil(ap_mode)) {
				/* Read the 802.3AP FEC_ABIL from EBF DT */
				snprintf(prop, sizeof(prop), "PORTM-802-3AP-FEC-ABIL.CFG%d.P%d", cfg, portm_idx);
				fec_abil = cn10k_fdtebf_get_num(fdt, prop, 10);

				if (fec_abil == -1)
					fec_abil = PORTM_FEC_ABIL_DISABLED;
			}

			debug_dts("PORTM%d CFG%d: mode:%s, fec_req:%s, fec_abil:%d\n",
				  portm_idx, cfg, portm_mode_to_cfg_str(ap_mode),
				  portm_fec_type_to_str(fec_req), fec_abil);

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

	valid = portm_802_3ap_cfg(portm_idx, &ap_802_3_cfg, portm_mode, numlanes);

	return valid;
}

static void fill_default_mac_to_serdes_map(int gserm_idx, int portm_first)
{
	int gser_lane;
	gserm_plat_config_t *gserm;

	gserm = &(plat_octeontx_bcfg->gserm_plat_cfg[gserm_idx]);
	gserm->lane_map = 0;

	for (int mlane = 0; mlane < plat_octeontx_scfg->qlm_max_lane_num[gserm_idx]; mlane++) {
		gser_lane = portm_get_gser_lane_num(portm_first + mlane);
		gserm->lane_map |= gser_lane << (mlane * 4);
	}
}

static void fill_gserm_details(void *fdt)
{
	int offset;
	int gser_lane, portm_first;
	char prop[64];
	int mac_ser_lane_map, gserm_idx, refclk_term;
	uint8_t lane_mask;
	gserm_plat_config_t *gserm;

	offset = fdt_path_offset(fdt, "/marvell,ebf");
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
		portm_first = portm_gserm_get_first_portm_num(gserm_idx);

		if (mac_ser_lane_map == -1) {
			debug_dts("%s: No PORTM-MAC-TO-SERDES-MAP found for GSERM%d. Using default mapping.\n", __func__, gserm_idx);
			fill_default_mac_to_serdes_map(gserm_idx, portm_first);
		} else {
			for (int mlane = 0; mlane < plat_octeontx_scfg->qlm_max_lane_num[gserm_idx]; mlane++) {
				gser_lane = (mac_ser_lane_map >> (mlane * 4)) & 0xf;
				/* Validate the SERDES# in the mac_to_serdes map is valid */
				if (gser_lane > portm_get_max_gser_lane_num(portm_first + mlane)) {
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
			fill_default_mac_to_serdes_map(gserm_idx, portm_first);
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

static void fill_portm_details(void *fdt)
{
	portm_modes_t portm_mode;
	int offset, len;
	int rx_pol, tx_pol, an_master_lane;
	int rx_precode, tx_precode, rx_term;
	int numlanes = 0;
	portm_config_t *portm;
	bool ap_sup;
	char prop[64];
	const char *portm_mode_s;
	portm_fec_t fec, fec_orig;
	int gserm_idx;
	int ret, usr_mode = 0;

	offset = fdt_path_offset(fdt, "/marvell,ebf");
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

		portm_mode = portm_cfg_string_to_mode(portm_mode_s);

		if ((portm_mode == PORTM_MODE_DISABLED) ||
		    (portm_mode == PORTM_MODE_INVALID) ||
		    (portm_mode == PORTM_MODE_INACTIVE)) {
			portm_idx++;
			continue;
		}

		/* Check if the portm mode is valid. If not, set to disabled */
		if (portm_mode_valid(portm_idx, portm_mode) != 1) {
			ERROR("PORTM%d: Invalid mode configuration: %s\n",
			      portm_idx, portm_mode_to_cfg_str(portm_mode));
			portm_idx++;
			continue;
		}

		portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

		/* Read mgmt/debug port mode */
		snprintf(prop, sizeof(prop), "ETHERNET-MGMT-PORT.P%d", portm_idx);
		portm->mgmt_port = cn10k_fdtebf_get_num(fdt, prop, 10);
		debug_dts("PORTM%d: is used for mgmt port %d\n", portm_idx, portm->mgmt_port);

		/* Read the FEC type from EBF DT */
		snprintf(prop, sizeof(prop), "PORTM-FEC.P%d", portm_idx);
		fec = cn10k_fdtebf_get_num(fdt, prop, 10);

		if (fec == -1)
			fec = portm_get_mode_desc_fec_low(portm_mode);

		/* Check if fec type was specified and is supported by the
		 * requested mode. If not, then set to lowest supported FEC.
		 */
		fec_orig = fec;
		ret = portm_fec_valid(portm_mode, &fec);
		if (!ret)
			debug_dts("PORTM%d: FEC %s not supported by mode %s, using FEC %s\n",
				  portm_idx, portm_fec_type_to_str(fec_orig),
				  portm_mode_to_cfg_str(portm_mode),
				  portm_fec_type_to_str(fec));

		/* Read the short channel type from EBF DT */
		snprintf(prop, sizeof(prop), "PORTM-SCH.P%d", portm_idx);
		usr_mode = cn10k_fdtebf_get_num(fdt, prop, 10);

		if ((portm_mode != PORTM_MODE_50GAUI_1_C2M) && ((usr_mode == 0) || (usr_mode == 1)))
			debug_dts("PORTM%d: Short channel request not supported for %s mode\n",
					portm_idx, portm_mode_to_cfg_str(portm_mode));

		if ((usr_mode != -1) && (usr_mode != 0) && (usr_mode != 1))
			debug_dts("PORTM%d: Invalid Short channel request %d\n",
				portm_idx, usr_mode);
		else
			portm->short_channel = usr_mode;

		debug_dts("PORTM%d portm->short_channel %d\n", portm_idx,
				portm->short_channel);

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

		ap_sup = 0;
		/* Check if portmmode supports 802.3 AP */
		if (portm_get_mode_desc_ap_sup(portm_mode) ||
		    (portm_mode == PORTM_MODE_802_3AP)) {
			if (!fill_portm_802_3ap_struct(fdt, portm_idx, &portm_mode, fec, &numlanes)) {
				ERROR("PORTM%d: Must specify at least 1 valid PORTM_802_3AP_MODE\n",
				      portm_idx);
				portm_idx++;
				continue;
			}
			ap_sup = 1;
		} else
			numlanes = portm_get_mode_desc_serdes_num(portm_mode);

		gserm_idx = portm_get_gser_num(portm_idx);
		portm->gserm = gserm_idx;
		/* Create portm lane_map with MAX lanes used by PORTM
		 * Should only need to create this lane_map once
		 */
		fill_portm_lane_map(portm_idx);

		/* Get the Rx/Tx Polarity and Rx/Tx precode enable
		 * Uses MAX PORTM lane could so should only
		 * fill the tx/rx polarity and precode once.
		 */
		for (int lane = 0; lane < plat_octeontx_scfg->portm_max_lane_cnt[portm_idx]; lane++) {
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

		/* Figure out how many portms are used by this port */
		/* Note: CN10k does not support connecting 2 GSERM's to 1 RPM */
		fill_portms_used(portm_idx, portm_mode);

		debug_dts("PORTM%d GSER%d: mac_to_serdes_lane_map: 0x%x\n",
			  portm_idx, gserm_idx, portm->lane_map);

		debug_dts("PORTM%d: PORTM_MODE:%s, FEC_TYPE:%s\n",
			  portm_idx, portm_mode_to_cfg_str(portm_mode), portm_fec_type_to_str(fec));

		debug_dts("PORTM%d: 802.3AP supported:%d, AN Master Lane:%d\n",
			  portm_idx, ap_sup, an_master_lane);

		debug_dts("PORTM%d: Rx termination:%d\n",
			  portm_idx, rx_term);

		fill_portm_mac_info(portm_idx, portm_mode);
		fill_portm_tx_eq_info(portm_idx, portm_mode);

		portm_idx += portm->portms_used;
	}
}

static void fill_rpm_details(void *fdt)
{
	int rpm_idx;
	int fec = 0;
	portm_modes_t portm_mode = 0;
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

		fill_rpm_struct(portm_idx, rpm_idx, fec);

		/* If PORT uses more than 1 lane, skip to the next PORT */
		portm_idx += portm->portms_used;

	}

	for (rpm_idx = 0; rpm_idx < MAX_RPM; rpm_idx++) {
		rpm_config_t *rpm = &(plat_octeontx_bcfg->rpm_cfg[rpm_idx]);

		if ((BPHY_BITMAP >> rpm_idx) & 1)
			rpm->is_rfoe = 1;
	}

	rpm_check_linux(fdt);

	/* REVISIT TODO: Is this needed for cn20k here */
	//rpm_assign_mac(fdt);
}

static void fill_timer_ms(const void *fdt)
{
	int offset, val = 0;
	const uint32_t *reg;

	/* By default, update timer to 0.5s */
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
			 * ignore value.
			 */
			if (val >= 200)
				plat_octeontx_bcfg->timer1_ms = val;
		}

		reg = (fdt_getprop(fdt, offset, "link_mgmt_timer",
				NULL));
		if (reg) {
			val = fdt32_to_cpu(*reg);
			/* If the timer frequency is less than 200ms
			 * ignore value.
			 */
			if (val >= 200)
				plat_octeontx_bcfg->timer2_ms = val;
		}
	} else
		debug_dts("%s: Not able to find eth_poll_timer node, using 1sec as default\n", __func__);
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
	plat_octeontx_bcfg->ignore_eth_persist_data = 0;

	if (!fdt)
		return;

	if (cn10k_fdtebf_get_num(fdt, "ETHERNET-PERSIST-SETTINGS-IGNORE", 10) == 1)
		plat_octeontx_bcfg->ignore_eth_persist_data = 1;

	/* override the default persist data config if the
	 * entry 'spi-flash' is in fdt
	 */

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

	offset = fdt_path_offset(fdt, "/marvell,ebf");
	if (offset < 0) {
		WARN("%s: FDT node not found\n", __func__);
		return offset;
	}

	rc = parse_boot_device(fdt, offset);
	if (rc) {
		debug_dts("boot device not defined\n");
	}
	fill_gserm_details(fdt);

	fill_portm_details(fdt);

	fill_rpm_details(fdt);

	fill_timer_ms(fdt);

	/* Parse SPI configuration */
	parse_spi_config(fdt);

	get_persist_data_config(fdt);

	parse_rvu_config(fdt);

	return 0;
}
