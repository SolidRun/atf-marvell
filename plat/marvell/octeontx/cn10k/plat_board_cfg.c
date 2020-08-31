/*
 * Copyright (C) 2020 Marvell International Ltd.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
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
#include <qlm/qlm_cn10k.h>
#include <rvu.h>
#include <strtol.h>

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-gpio.h"
#include "cavm-csrs-rst.h"

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

/* Output information specific for CN10K, for now only RPM. */
void plat_octeontx_print_board_variables(void)
{
#ifdef DEBUG_ATF_DTS
	int i, j;
	rpm_config_t *rpm;
	rpm_lmac_config_t *lmac;

	for (i = 0; i < plat_octeontx_scfg->rpm_count; i++) {
		rpm = &(plat_octeontx_bcfg->rpm_cfg[i]);
		debug_dts("RPM%d: lmac_count = %d\n", i, rpm->lmac_count);
		for (j = 0; j < rpm->lmac_count; j++) {
			lmac = &rpm->lmac_cfg[j];
			debug_dts("RPM%d.LMAC%d: mode = %s:%d, gserm = %d, lane = %d\n",
					i,
					j,
					gserm_get_mode_strmap(lmac->mode_idx).ebf_str,
					lmac->mode,
					lmac->gserm_idx,
					lmac->lane);
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
		}
	}
#endif
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
	int offset, rc, soc_offset, cpt, i;
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

	/* Find if CPT node is available */
	if (plat_octeontx_get_cpt_count()) {
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

	snprintf(boot_device, sizeof(boot_device), "BOOT-DEVICE.N0");
	name = fdt_getprop(fdt, offset, boot_device, &len);
	if (!name) {
		WARN("No %s is found\n", boot_device);
		return -1;
	}

	strlcpy(boot_device, name, sizeof(boot_device));
	boot_device[sizeof(boot_device) - 1] = '\0';

	debug_dts("BOOT-DEVICE.N0: %s\n", boot_device);
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
	int node, bus = 0, cs = 0;

	/* Parse for secure-spi config */
	node = fdt_node_offset_by_compatible(fdt, -1, "spi-flash");
	while (node > 0) {
		if (fdt_getprop(fdt, node, "secure-spi", NULL)) {
			/* Get CS info */
			reg = fdt_getprop(fdt, node, "reg", NULL);
			if (reg)
				cs = fdt32_to_cpu(*reg);
			/* Read parent node to get bus num */
			preg = fdt_getprop(fdt, fdt_parent_offset(fdt, node),
					  "reg", NULL);
			if (preg) {
				addr = fdt32_to_cpu(*preg);
				if (addr == SPI_CTRL0_ADDR)
					bus = 0;
				if (addr == SPI_CTRL1_ADDR)
					bus = 1;
			}
			debug_dts("\nSPI%d marked Secure\n", bus);
			plat_octeontx_bcfg->spi_cfg[bus].is_secure = 1;
			plat_octeontx_bcfg->spi_cfg[bus].cs[cs] = 1;
		}
		node = fdt_node_offset_by_compatible(fdt, node, "spi-flash");
	}
	/* FIXME
	 * Need to delete spi controller node from fdt
	 */
}

/* Return numeric representation of the EBF field required. Return -1, if such
 * field isn't defined. Note that -1 can be value for the field.
 */
static long cn10k_fdtebf_get_num(const void *fdt_addr, const char *prop,
		int base)
{
	long ret;
	int offset;
	const char *buf;
	int len;

	offset = fdt_path_offset(fdt_addr, "/cavium,bdk");
	buf = fdt_getprop(fdt_addr, offset, prop, &len);
	if (!buf) {
		debug_dts("No %s option is set in EBF.\n", prop);
		return -1;
	}
	ret = strtol(buf, NULL, base);

	return ret;
}

static void cn10k_fill_twsi_slave_details(const void *fdt)
{
	int twssl_bus, twssl_addr;

	twssl_bus = cn10k_fdtebf_get_num(
		fdt, "SCP-TWSI-SLAVE-BUS.N0", 10);

	plat_octeontx_bcfg->bcfg.slave_twsi.s.bus = twssl_bus;

	twssl_addr = cn10k_fdtebf_get_num(
		fdt, "SCP-TWSI-SLAVE-ADDR.N0", 16);
	if (twssl_addr == -1)
		twssl_addr = 0x77;

	plat_octeontx_bcfg->bcfg.slave_twsi.s.addr = twssl_addr;
}

/* This routine sets a number of LMACs to initialize and the size to use.
 * For instance:
 *  - SGMII_2X1: will initialize 2 LMACs and each LMAC will take only one
 *  lane
 *  - XAUI_1X4: will initialize 1 LMAC and it will take all 4 lanes
 */
static void cn10k_lmac_num_touse(int mode_idx, int *cnt, int *touse)
{
	*cnt = 0;
	*touse = 0;
	switch (mode_idx) {
	case GSERM_MODE_1G_X:
	case GSERM_MODE_XFI:
	case GSERM_MODE_SFI:
	case GSERM_MODE_25GAUI_C2C:
	case GSERM_MODE_25GAUI_C2M:
		*cnt = 1;
		*touse = 1;
		break;
	}
}

/* Check if it is possible to configure LMAC in the current mode. Return
 * 0 in case of success, otherwise return -1.
 */
static int cn10k_check_gserm_lmacs(int rpm_idx,
		int gserm, int mode_idx, int lmac_need)
{
	int lmac_avail;
	rpm_config_t *rpm;
	rpm_lmac_config_t *lmac;
	int i;
	int max_lanes = plat_octeontx_scfg->qlm_max_lane_num[gserm];

	debug_dts("RPM%d: gserm = %d, mode_idx = %d, lmac_need = %d\n",
			 rpm_idx, gserm, mode_idx, lmac_need);
	rpm = &(plat_octeontx_bcfg->rpm_cfg[rpm_idx]);
	lmac_avail = MAX_LMAC_PER_RPM - rpm->lmacs_used;

	if (max_lanes == 1) {
		/* SLMs does not support quad lane Ethernet protocols.
		 * Only 1 lane is available.
		 */
		lmac_avail = 1;
		for (i = 0; i < rpm->lmac_count; i++) {
			lmac = &rpm->lmac_cfg[i];
			if (lmac->gserm_idx == gserm)
				lmac_avail--;
		}
	}

	if (lmac_need > lmac_avail) {
		WARN("RPM%d: Can't configure mode:%s. Requires %d LMACs, but %d LMACs available on GSERM%d.\n",
				rpm_idx,
				gserm_get_mode_strmap(mode_idx).ebf_str,
				lmac_need, lmac_avail, gserm);
		return -1;
	}

	return 0;
}

/* Fill RPM structure, if possible.
 * Return the number of lanes used for initialization.
 */
static int cn10k_fill_rpm_struct(int rpm_idx, int gser, int mode_idx,
			int lane)
{
	rpm_config_t *rpm;
	rpm_lmac_config_t *lmac;
	int mode;
	int i, j;
	int lcnt, lused;
	uint32_t lane_mask = 0;

	rpm = &(plat_octeontx_bcfg->rpm_cfg[rpm_idx]);

	if ((mode_idx <= GSERM_MODE_DISABLED) ||
		(mode_idx >= GSERM_MODE_LAST)) {
		debug_dts("GSERM%d.LANE%d: not configured for RPM, skip.\n", gser, lane);
		return 0;
	}

	cn10k_lmac_num_touse(mode_idx, &lcnt, &lused);
	if (!lcnt || !lused) {
		debug_dts("RPM%d: the %s mode doesn't require any LMAC initialization.\n",
				rpm_idx,
				gserm_get_mode_strmap(mode_idx).ebf_str);
		return 0;
	}
	debug_dts("RPM%d: mode_idx %d needs %d lanes, %d lmacs\n",
		rpm_idx, mode_idx, lused, lcnt);

	if (cn10k_check_gserm_lmacs(rpm_idx, gser, mode_idx, lcnt * lused))
		return 0;

	if (lane % (lcnt * lused)) {
		WARN("RPM%d.LANE%d: wrong LANE for the %s mode.\n",
				rpm_idx, lane,
				gserm_get_mode_strmap(mode_idx).ebf_str);

		return 0;
	}

	mode = gserm_get_mode_strmap(mode_idx).mode;

	for (i = 0; i < lcnt; i++) {
		lmac = &rpm->lmac_cfg[rpm->lmac_count];

		/* Fill in the RPM/LMAC structures */
		lmac->mode = mode;
		lmac->mode_idx = mode_idx;
		lmac->gserm_idx = gser;

		lmac->lane = lane + i;

		/* Create the GSER lane_mask */
		for (j = 0; j < lused; j++)
			lane_mask |= (1 << lmac->lane);

		lmac->lane_mask = lane_mask;
		/* Update the RPM lane mask */
		rpm->lanes_used_mask |= lane_mask;

		/* max_lane_count is the number of SERDES lanes used by the
		 * original LMAC type (original means it came about as a result
		 * of the device tree property GSERM%d-MODE).  The Ethernet
		 * mode change feature will use max_lane_count to determine if
		 * the new Ethernet mode (that the user wants to change to at
		 * run-time) can be accommodated.
		 */
		lmac->max_lane_count = lused;

		debug_dts(
			"RPM%d:LANE%d: lane_mask 0x%x, gserm%d, rpm_lane_mask 0x%x\n",
				rpm_idx, lane, lmac->lane_mask,
				lmac->gserm_idx, rpm->lanes_used_mask);

		rpm->lmac_count++;
		rpm->lmacs_used += lused;

		/* In case of 1000 BASE-X, update the property of LMAC */
		if (mode_idx == GSERM_MODE_1G_X) {
			lmac->sgmii_1000x_mode = 1;
		}

	}

	rpm->enable = 1;

	return (lcnt * lused);
}

/* Get the LMAC information from the Linux DT file. The following properties
 * are checked:
 *  - phy-handle
 *  - num-rvu-vfs
 *  - num-msix-vec
 * SGMII/QSGMII only:
 *  - octeontx,sgmii-mac-phy-mode
 *  - octeontx,disable-autonegotiation
 */
static void cn10k_rpm_lmacs_check_linux(const void *fdt,
		rpm_config_t *rpm, int rpm_idx, int rpm_offset, int *fdt_vfs)
{
	int lmac_idx;
	rpm_lmac_config_t *lmac;
	char name[16], node_name[64];
	const int *val;
	int len;
	int lmac_offset;
	int req_vfs;

	for (lmac_idx = 0; lmac_idx < rpm->lmac_count; lmac_idx++) {
		int lane = 0;

		lmac = &rpm->lmac_cfg[lmac_idx];

		debug_dts("%s: rpm_idx %d lmac_idx %d lane %d\n", __func__,
				rpm_idx, lmac_idx, lmac->lane);

		lane = lmac->lane;

		snprintf(name, sizeof(name), "%s@%d%d",
				gserm_get_mode_strmap(lmac->mode_idx).linux_str,
				rpm_idx, lane);
		lmac_offset = fdt_subnode_offset(fdt, rpm_offset, name);
		if (lmac_offset < 0) {
			ERROR("RPM%d.LMAC%d: DT:%s not found in device tree\n",
					rpm_idx, lmac_idx, name);
			continue;
		}

		/* Construct the proper node name for error handling */
		snprintf(node_name, sizeof(node_name), "%s/%s",
			 fdt_get_name(fdt, rpm_offset, NULL),
			 fdt_get_name(fdt, lmac_offset, NULL));
		val = fdt_getprop(fdt, lmac_offset, "num-rvu-vfs", &len);
		if (val) {
			/* We've got that property, handle any errors with config */
			req_vfs = fdt32_to_cpu(*val);
			lmac->num_rvu_vfs = cn10k_handle_num_rvu_vfs(req_vfs,
						DEFAULT_VFS, fdt_vfs, node_name);
		} else {
			/* If there's no such property in FDT
			 * try to assign default VFS */
			VERBOSE("RVU: No num-rvu-vfs property for node %s\n", name);
			lmac->num_rvu_vfs = cn10k_handle_num_rvu_vfs(DEFAULT_VFS,
						DEFAULT_VFS, fdt_vfs, node_name);
		}

		/* Increment number of allocated HWVFs */
		*fdt_vfs += lmac->num_rvu_vfs;

		val = fdt_getprop(fdt, lmac_offset, "num-msix-vec", &len);
		if (val)
			lmac->num_msix_vec = fdt32_to_cpu(*val);
		else {
			VERBOSE("RPM%d.LMAC%d: num-msix-vec not set, configuring %d number of MSIX.\n",
					rpm_idx, lmac_idx, DEFAULT_MSIX_LMAC);
			lmac->num_msix_vec = DEFAULT_MSIX_LMAC;
		}

		/* Enable LMAC */
		lmac->lmac_enable = 1;
	}
}

/* Main routine to parse the RPM information from the Linux DT file. */
static void cn10k_rpm_check_linux(const void *fdt)
{
	int i;
	rpm_config_t *rpm;
	int offset, rpm_offset;
	int fdt_vfs = 0;
	char name[16];

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
		if (!rpm->lmac_count)
			continue;
		rpm_offset = fdt_subnode_offset(fdt, offset, name);
		if (rpm_offset < 0) {
			ERROR("DT: %s node present in the device tree\n", name);
			continue;
		}
		cn10k_rpm_lmacs_check_linux(fdt, rpm, i, rpm_offset, &fdt_vfs);
	}

	/* Parse RVU configuration */
	cn10k_parse_rvu_config(fdt, &fdt_vfs);
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
	int rpm_idx, lmac_idx;
	rpm_config_t *rpm;
	rpm_lmac_config_t *lmac;
	int mac_num;
	int override;
	long mac;

	/* Parse EBF DT file, to find variables to set MAC address:
	 *   BOARD-MAC-ADDRESS-NUM
	 *   BOARD-MAC-ADDRESS-NUM-OVERRIDE
	 *   BOARD-MAC-ADDRESS
	 */
	mac_num = cn10k_fdtebf_get_num(fdt, "BOARD-MAC-ADDRESS-NUM", 10);
	if (!mac_num)
		mac_num = cn10k_fdtebf_get_num(fdt, "BOARD-MAC-ADDRESS-NUM", 16);
	debug_dts("BOARD-MAC-ADDRESS-NUM=%d\n", mac_num);
	override = cn10k_fdtebf_get_num(fdt, "BOARD-MAC-ADDRESS-NUM-OVERRIDE", 10);
	if (override >= 0) {
		debug_dts("Override number of MAC to set=%d.\n", override);
		mac_num = override;
	}
	if (mac_num <= 0) {
		debug_dts("No MAC addresses should be set.\n");
		return;
	}
	mac = cn10k_fdtebf_get_num(fdt, "BOARD-MAC-ADDRESS", 16);
	debug_dts("BOARD-MAC-ADDRESS=%lx\n", mac);
	if (mac == -1) {
		debug_dts("Base MAC address is not defined.\n");
		return;
	}

	/* Update the board configuration */
	plat_octeontx_bcfg->pf_mac_base = mac;
	plat_octeontx_bcfg->pf_mac_num = mac_num;

	/* Initialize N first LMACs with the MAC address. */
	for (rpm_idx = 0; rpm_idx < plat_octeontx_scfg->rpm_count; rpm_idx++) {
		rpm = &(plat_octeontx_bcfg->rpm_cfg[rpm_idx]);
		for (lmac_idx = 0; lmac_idx < rpm->lmac_count; lmac_idx++) {
			lmac = &rpm->lmac_cfg[lmac_idx];
			if (!lmac->lmac_enable)
				continue;
			lmac->local_mac_address[0] = (mac >> 40) & 0xff;
			lmac->local_mac_address[1] = (mac >> 32) & 0xff;
			lmac->local_mac_address[2] = (mac >> 24) & 0xff;
			lmac->local_mac_address[3] = (mac >> 16) & 0xff;
			lmac->local_mac_address[4] = (mac >> 8) & 0xff;
			lmac->local_mac_address[5] = mac & 0xff;
			mac++;
			mac_num--;
			/* If there are no free LMACs, then just return
			 * from the routine.
			 */
			if (!mac_num) {
				debug_dts("All free MAC addresses are assigned.\n");
				return;
			}
		}
	}
}

static void cn10k_fill_rpm_details(const void *fdt)
{
	int gserm_idx;
	int lane_idx;
	int lnum;
	int rpm_idx;
	int mode_idx, baud_rate, flags = 0;
	gserm_state_lane_t gserm_state;

	debug_dts("%s: gserm%d\n", __func__, plat_octeontx_scfg->gserm_count);

	for (gserm_idx = 0; gserm_idx < plat_octeontx_scfg->gserm_count; gserm_idx++) {
		debug_dts("%s: gserm%d\n", __func__, gserm_idx);

		lnum = plat_octeontx_scfg->qlm_max_lane_num[gserm_idx];
		for (lane_idx = 0; lane_idx < lnum; lane_idx++) {
			gserm_state = gserm_get_state(gserm_idx, lane_idx);
			debug_dts("GSERM%d.LANE%d: mode=%d:%s\n",
				gserm_idx, lane_idx,
				gserm_state.s.mode,
				gserm_get_mode_strmap(gserm_state.s.mode).ebf_str);
			mode_idx = gserm_state.s.mode;

			/* If baud rate is not updated by EBF, update
			 * the SCRATCHX with default baud rate
			 */
			if (gserm_state.s.baud_mhz == 0) {
				baud_rate = gserm_get_mode_strmap(mode_idx).baud_rate;
				gserm_state = gserm_build_state(mode_idx, baud_rate, flags);
				gserm_set_state(gserm_idx, lane_idx, gserm_state);
			}
			rpm_idx = plat_get_rpm_idx(gserm_idx);
			if ((rpm_idx < 0) ||
			    (rpm_idx >= plat_octeontx_scfg->rpm_count))
				continue;

			debug_dts("RPM%d: Configure GSERM%d Lane%d\n",
				rpm_idx, gserm_idx, lane_idx);
			cn10k_fill_rpm_struct(rpm_idx, gserm_idx,
					mode_idx, lane_idx);
		}
	}
	cn10k_rpm_check_linux(fdt);
	cn10k_rpm_assign_mac(fdt);
}

int plat_octeontx_fill_board_details(void)
{
	const void *fdt = fdt_ptr;
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

	cn10k_fill_rpm_details(fdt);

	cn10k_fill_twsi_slave_details(fdt);

	/* Parse SPI configuration */
	cn10k_parse_spi_config(fdt);

	/* configure NIX for RPM; only support a single NIX */
	for (i = 0; i < MAX_RPM; i++)
		plat_octeontx_bcfg->rpm_cfg[i].nix_block = NIX0;

	return 0;
}
