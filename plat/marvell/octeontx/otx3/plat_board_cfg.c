/*
 * Copyright (C) 2018 Marvell International Ltd.
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
#include <plat_otx3_configuration.h>
#include <octeontx_utils.h>
#include <qlm/qlm.h>
#include <rvu.h>
#include <strtol.h>

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-gpio.h"
#include "cavm-csrs-rst.h"

/* define DEBUG_ATF_DTS to enable debug logs */
#undef DEBUG_ATF_DTS

#ifdef DEBUG_ATF_DTS
#define debug_dts printf
#else
#define debug_dts(...) ((void) (0))
#endif


/**
 * octeontx2_handle_num_rvu_vfs - handle errors and report user about
 * @req_vfs: requested (via FDT) number of VFs
 * @default_vfs: default number of VFs
 * @sum_vfs: already allocated HWVFs
 * @name: node name
 *
 * returns:
 * 	Valid number (req_vfs/default_vfs/0) of VFs that can be configured
 */
static int octeontx2_handle_num_rvu_vfs(int req_vfs, int default_vfs,
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
 * octeontx2_parse_rvu_admin - fill rvu_admin_pf_t structure of rvu_config
 * @fdt: pointer to the device tree blob
 * @parentoffset: offset to parent node (ecam2)
 * @node: node name
 * @sum_vfs: already allocated HWVFs
 *
 * returns:
 * 	0 on success, -1 otherwise
 */
static int octeontx2_parse_rvu_admin(const void *fdt, int parentoffset,
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
		sw_pf->num_rvu_vfs = octeontx2_handle_num_rvu_vfs(DEFAULT_AF_PF0_VFS,
					DEFAULT_AF_PF0_VFS, sum_vfs, name);
	} else {
		/* We've got that property, handle any errors with config */
		req_vfs = fdt32_to_cpu(*val);
		sw_pf->num_rvu_vfs = octeontx2_handle_num_rvu_vfs(req_vfs,
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
 * octeontx2_parse_sw_rvu - fill rvu_sw_pf_t structure of rvu_config
 * @fdt: pointer to the device tree blob
 * @parentoffset: offset to parent node (ecam2)
 * @node: node name
 * @sw_rvu_pf: index enumerated by sw_rvu_pfs
 * @sum_vfs: already allocated HWVFs
 *
 * returns:
 * 	0 on success, -1 otherwise
 */
static int octeontx2_parse_sw_rvu(const void *fdt, int parentoffset,
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
		sw_pf->num_rvu_vfs = octeontx2_handle_num_rvu_vfs(DEFAULT_VFS,
					DEFAULT_VFS, sum_vfs, name);
	} else {
		/* We've got that property, handle any errors with config */
		req_vfs = fdt32_to_cpu(*val);
		sw_pf->num_rvu_vfs = octeontx2_handle_num_rvu_vfs(req_vfs,
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

static void octeontx2_parse_rvu_config(const void *fdt, int *fdt_vfs)
{
	int offset, rc, soc_offset, cpt, i;
	char node_name[32];

	/* Initialize all SW_RVU_PF mappings to NONE */
	for (i = 0; i < SW_RVU_NUM_PF; i++)
		plat_octeontx_bcfg->rvu_config.sw_pf[i].mapping =
			SW_RVU_MAP_NONE;

	/* CGX configuration is already done on this step,
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
	rc = octeontx2_parse_rvu_admin(fdt, offset, RVU_ADMIN_FDT_NODE, fdt_vfs);
	if (rc < 0) {
		WARN("RVU: Unable to fill PF%d-ADMIN structure\n", RVU_AF);
		return;
	}

	/* Fill rvu_sw_rvu_pf_t structure, start with SSO_TIM */
	rc = octeontx2_parse_sw_rvu(fdt, offset, RVU_SSO_TIM_FDT_NODE,
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
	rc = octeontx2_parse_sw_rvu(fdt, offset, RVU_NPA_FDT_NODE,
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
		rc = octeontx2_parse_sw_rvu(fdt, offset, RVU_SDP_FDT_NODE,
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
		rc = octeontx2_parse_sw_rvu(fdt, offset, RVU_REE_FDT_NODE,
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
		rc = octeontx2_parse_sw_rvu(fdt, offset, RVU_CPT_FDT_NODE,
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

static void octeontx2_boot_device_from_strapx()
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

static int octeontx2_parse_boot_device(const void *fdt, const int offset)
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

int plat_octeontx_fill_board_details(void)
{
	const void *fdt = fdt_ptr;
	int offset, rc;
	int fdt_vfs = 0;

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

	rc = octeontx2_parse_boot_device(fdt, offset);
	if (rc) {
		debug_dts("Using GPIO_STRAPX register for boot device\n");
		octeontx2_boot_device_from_strapx();
	}

	/* Parse RVU configuration */
	octeontx2_parse_rvu_config(fdt, &fdt_vfs);

	return 0;
}
