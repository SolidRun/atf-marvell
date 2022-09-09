/*
 * Copyright (c) 2020 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <platform_def.h>
#include <platform_setup.h>
#include <octeontx_common.h>

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <octeontx_ecam.h>
#include <plat_board_cfg.h>
#include <platform_irqs_def.h>
#include <plat_scfg.h>
#include <octeontx_utils.h>
#include <plat_cn10k_configuration.h>
#include <rvu.h>
#include <rpm.h>
#include <qlm_cn10k.h>

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-gic.h"
#include "cavm-csrs-emmc.h"
#include "cavm-csrs-spi.h"

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

extern int disable_devmem_ns_access(struct ecam_device *dev);
extern uint64_t get_dev_config(struct ecam_device *dev);

static int ecam_probe_rpm(unsigned long long arg)
{
	int rpm_idx;
	rpm_config_t *rpm;

	debug_plat_ecam("%s arg %lld\n", __func__, arg);

	rpm_idx = arg;

	if ((rpm_idx < 0) && (rpm_idx > plat_octeontx_get_rpm_count()))
		return 0;

	rpm = &plat_octeontx_bcfg->rpm_cfg[rpm_idx];

	if (rpm->enable)
		return 1;
	else
		return 0;
}

static int ecam_probe_usb(unsigned long long arg)
{
	if (arg >= MAX_USB_BUS) {
		ERROR("Invalid USB bus 0x%llx\n", arg);
		return 0;
	}
	if (plat_octeontx_bcfg->usb_cfg[arg].is_enabled)
		return 1;
	else
		return 0;
}

struct ecam_probe_callback probe_callbacks[] = {
	{0xa060, 0x177d, ecam_probe_rpm, 0},
	{0xa01b, 0x177d, ecam_probe_usb, 0},
	{ECAM_INVALID_DEV_ID, 0, 0, 0}
};

static void init_emmc(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;
	struct pcie_config *pconfig = (struct pcie_config *)config_base;
	uint8_t cap_pointer = pconfig->cap_pointer;
	uint32_t *sctl = (uint32_t *) (config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	uint16_t table_size = 0;
	uint8_t bir = 0, i = 0;
	uint64_t vector_base;

	VERBOSE("EMMC init called config_base:%llx size:%llx\n",
			config_base, config_size);

	/* Block can have mix of secure and non-secure MSI-X interrupts */
	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	*sctl |= 0x1;

	enable_msix(config_base, cap_pointer, &table_size, &bir);
	CSR_WRITE(CAVM_EMMCX_INTR(0), ~0ULL);
	CSR_WRITE(CAVM_EMMCX_INTR_ENA_W1C(0), ~0ULL);

	vsec_sctl.s.msix_sec_en = 0;
	vsec_sctl.s.msix_sec_phys = 0;
	vsec_sctl.s.msix_phys = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
	if (table_size) {
		vector_base = get_bar_val(pconfig, bir);
		for (i = 0; i < table_size; i++) {
			octeontx_write64(vector_base, (i % 2) ? CAVM_GICD_CLRSPI_NSR : CAVM_GICD_SETSPI_NSR);
			VERBOSE("EMMC vector_base%d 0x%lx 0x%lx\n", i, (long) vector_base, (long)octeontx_read64(vector_base));
			vector_base += 8;
			octeontx_write64(vector_base, EMMC_SPI_IRQ(0));
			VERBOSE("EMMC vector_base%d 0x%lx 0x%lx\n", i, (long) vector_base, (long)octeontx_read64(vector_base));
			vector_base += 8;
		}
	}
	CSR_WRITE(CAVM_EMMCX_INTR_ENA_W1S(0), 1ULL);
}

static void init_gpio(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	debug_plat_ecam("GPIO init called config_base:%llx size:%llx\n",
			config_base, config_size);

	/* Block can have mix of secure and non-secure MSI-X interrupts */
	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.msix_sec_en = 1;
	vsec_sctl.s.msix_sec_phys = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
}

static void init_cpt_rid(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.rid = plat_configure_cpt_rid();
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
}

static void init_rvu_rid(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.rid = plat_configure_rid();
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
}

static void init_rvu(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.rid = plat_configure_rid();
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);

	octeontx_rvu_init();
}

static void init_rpm(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_ctl vsec_ctl;
	int rpm_id;

	vsec_ctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_CTL);
	rpm_id = vsec_ctl.s.inst_num;

	debug_plat_ecam("RPM(%d): init config_base:%llx size:%llx\n",
		vsec_ctl.s.inst_num, config_base, config_size);

	rpm_init(rpm_id);
}

#if RAS_EXTENSION
static void init_apa(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_msix_cap_hdr msix_cap_hdr;
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	/* Enable MSIX delivery via PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]. */
	msix_cap_hdr.u = octeontx_read32(config_base +
					 CAVM_PCCPF_XXX_MSIX_CAP_HDR);
	msix_cap_hdr.s.msixen = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_MSIX_CAP_HDR,
			 msix_cap_hdr.u);

	debug_plat_ecam("APA MSIx init config_base:%llx size:%llx 0x%x\n",
			config_base, config_size,
			octeontx_read32(config_base + CAVM_PCCPF_XXX_MSIX_CAP_HDR));

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.msix_sec_en = 1;
	vsec_sctl.s.msix_sec = 1;
	vsec_sctl.s.msix_sec_phys = 1;
	vsec_sctl.s.msix_phys = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
	debug_plat_ecam("APA VSEC_SCTL 0x%x\n", octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL));
}

static void init_dss(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_msix_cap_hdr msix_cap_hdr;
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	/* Enable MSIX delivery via PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]. */
	msix_cap_hdr.u = octeontx_read32(config_base +
					 CAVM_PCCPF_XXX_MSIX_CAP_HDR);
	msix_cap_hdr.s.msixen = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_MSIX_CAP_HDR,
			 msix_cap_hdr.u);

	debug_plat_ecam("DSS MSIx init config_base:%llx size:%llx 0x%x\n",
			config_base, config_size,
			octeontx_read32(config_base + CAVM_PCCPF_XXX_MSIX_CAP_HDR));

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.msix_sec_en = 1;
	vsec_sctl.s.msix_sec = 1;
	vsec_sctl.s.msix_sec_phys = 1;
	vsec_sctl.s.msix_phys = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
	debug_plat_ecam("DSS VSEC_SCTL 0x%x\n", octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL));
}

static void init_tad(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_msix_cap_hdr msix_cap_hdr;
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	/* Enable MSIX delivery via PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]. */
	msix_cap_hdr.u = octeontx_read32(config_base +
					 CAVM_PCCPF_XXX_MSIX_CAP_HDR);
	msix_cap_hdr.s.msixen = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_MSIX_CAP_HDR,
			 msix_cap_hdr.u);

	debug_plat_ecam("TAD MSIx init config_base:%llx size:%llx 0x%x\n",
			config_base, config_size,
			octeontx_read32(config_base + CAVM_PCCPF_XXX_MSIX_CAP_HDR));

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.msix_sec_en = 1;
	vsec_sctl.s.msix_sec = 1;
	vsec_sctl.s.msix_sec_phys = 1;
	vsec_sctl.s.msix_phys = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
	debug_plat_ecam("TAD VSEC_SCTL 0x%x\n", octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL));
}

static void init_mdc(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_msix_cap_hdr msix_cap_hdr;
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	/* Enable MSIX delivery via PCCPF_XXX_MSIX_CAP_HDR[MSIXEN]. */
	msix_cap_hdr.u = octeontx_read32(config_base +
					 CAVM_PCCPF_XXX_MSIX_CAP_HDR);
	msix_cap_hdr.s.msixen = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_MSIX_CAP_HDR,
			 msix_cap_hdr.u);

	debug_plat_ecam("MDC MSIx init config_base:%llx size:%llx 0x%x\n",
			config_base, config_size,
			octeontx_read32(config_base + CAVM_PCCPF_XXX_MSIX_CAP_HDR));

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.msix_sec_en = 1;
	vsec_sctl.s.msix_sec = 1;
	vsec_sctl.s.msix_sec_phys = 1;
	vsec_sctl.s.msix_phys = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
	debug_plat_ecam("MDC VSEC_SCTL 0x%x\n", octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL));
}
#endif

static void init_xspi(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;
	struct pcie_config *pconfig = (struct pcie_config *)config_base;
	uint8_t cap_pointer = pconfig->cap_pointer;
	uint32_t *sctl = (uint32_t *) (config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	uint16_t table_size = 0;
	uint8_t bir = 0, i = 0, spi_id;
	uint64_t vector_base;

	VERBOSE("xSPI init called config_base:%llx size:%llx\n",
			config_base, config_size);

	/* Block can have mix of secure and non-secure MSI-X interrupts */
	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	*sctl |= 0x1;

	enable_msix(config_base, cap_pointer, &table_size, &bir);
	if (config_base & 0x8000)
		spi_id = 1;
	else
		spi_id = 0;

	CSR_WRITE(CAVM_SPIX_INTR(spi_id), ~0ULL);
	CSR_WRITE(CAVM_SPIX_INTR_ENA_W1C(spi_id), ~0ULL);

	vsec_sctl.s.msix_sec_en = 0;
	vsec_sctl.s.msix_sec_phys = 0;
	vsec_sctl.s.msix_phys = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
	if (table_size) {
		vector_base = get_bar_val(pconfig, bir);
		for (i = 0; i < table_size; i++) {
			octeontx_write64(vector_base, (i % 2) ? CAVM_GICD_CLRSPI_NSR : CAVM_GICD_SETSPI_NSR);
			VERBOSE("xSPI vector_base%d 0x%lx 0x%lx\n", spi_id,
				(long) vector_base, (long)octeontx_read64(vector_base));
			vector_base += 8;
			octeontx_write64(vector_base, XSPI_SPI_IRQ(spi_id));
			VERBOSE("xSPI vector_base%d 0x%lx 0x%lx\n", spi_id,
				(long) vector_base, (long)octeontx_read64(vector_base));
			vector_base += 8;
		}
	}
	CSR_WRITE(CAVM_SPIX_INTR_ENA_W1S(spi_id), 1ULL);
}

struct ecam_init_callback plat_init_callbacks[] = {
	{0xa00a, 0x177d, init_gpio},
	{0xa060, 0x177d, init_rpm}, /* 0x60 - PCC_DEV_IDL_E::RPM */
	{0xa065, 0x177d, init_rvu}, /* 0x65 - PCC_DEV_IDL_E::RVU_AF */
	{0xa063, 0x177d, init_rvu_rid}, /* 0x63 - PCC_DEV_IDL_E::RVU */
	{0xa0f2, 0x177d, init_cpt_rid}, /* 0xf2 - PCC_DEV_IDL_E::RVU_CPT10_PF */
	{0xa0f3, 0x177d, init_cpt_rid}, /* 0xf3 - PCC_DEV_IDL_E::RVU_CPT10_VF */
	{0xa0f6, 0x177d, init_rvu_rid}, /* 0xf6 - PCC_DEV_IDL_E::RVU_SDP_PF */
	{0xa0f8, 0x177d, init_rvu_rid}, /* 0xf8 - PCC_DEV_IDL_E::RVU_AF_VF */
	{0xa0fb, 0x177d, init_rvu_rid}, /* 0xfb - PCC_DEV_IDL_E::RVU_NPA_PF */
	{0xa0fc, 0x177d, init_rvu_rid}, /* 0xfc - PCC_DEV_IDL_E::RVU_NPA_VF */
	{0xa0f9, 0x177d, init_rvu_rid}, /* 0xf9 - PCC_DEV_IDL_E::RVU_SSO_PF */
	{0xa0fa, 0x177d, init_rvu_rid}, /* 0xfa - PCC_DEV_IDL_E::RVU_SSO_VF */
	{0xa095, 0x177d, init_emmc},
#if RAS_EXTENSION
	{0xa090, 0x177d, init_dss},
	{0xa091, 0x177d, init_tad},
	{0xa073, 0x177d, init_mdc},
	{0xa093, 0x177d, init_apa},
#endif
	{0xa09b, 0x177d, init_xspi},
	{ECAM_INVALID_DEV_ID, 0, 0}
};

/*
 * Following device's BAR0 will be hidden
 * from non-secure world.
 * Set instance to the instance number
 * you want to hide or ECAM_ALL_INSTANCES
 * if all the instances are hidden
 */

struct secure_devices secure_devs[] = {
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GIC5, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_UAA, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_MIO_TWS, ECAM_CUSTOM_INSTANCE, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_OCLA, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GSERN, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GSERP, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GSERR, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GSERM, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_DAP, ECAM_ALL_INSTANCES, SEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_AVS, ECAM_ALL_INSTANCES, SEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_TSN, ECAM_ALL_INSTANCES, SEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_CCS, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_CCU, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_FUS5, ECAM_ALL_INSTANCES, SEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_BTS, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_NDF, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_BCH, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_PSBM, ECAM_ALL_INSTANCES, SEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_APA, ECAM_ALL_INSTANCES, SEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_DSS, ECAM_ALL_INSTANCES, SEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_TAD, ECAM_ALL_INSTANCES, SEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_EHSM, ECAM_ALL_INSTANCES, SEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_I3C, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_EMMC2, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_SPI, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_RST5, ECAM_ALL_INSTANCES, SEC_DEVPA},
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES, NSEC_DEVPA}
};

struct secure_devices secure_mcp_devs[] = {
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GIC5, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GTI, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_UAA, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_MIO_TWS, ECAM_CUSTOM_INSTANCE},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_OCLA, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GSERN, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GSERP, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GSERR, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_DAP, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_AVS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_TSN, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_CCS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_CCU, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_RST5, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_BTS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_BCH, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_PSBM, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_EHSM, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_DSS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_I3C, ECAM_ALL_INSTANCES},
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES}
};

struct secure_devices secure_ecp_devs[] = {
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GIC5, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GTI, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_UAA, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_MIO_TWS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_OCLA, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_CGX, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_GSERP, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_DAP, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_EHSM, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_AVS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_TSN, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_APA, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_DSS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_CCS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_CCU, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_RST5, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_BTS, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_BCH, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_PSBM, ECAM_ALL_INSTANCES},
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_I3C, ECAM_ALL_INSTANCES},
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES}
};

/*
 * Currently we're not hidding anything from SCP,
 * since it's operating in secure domain
 */
struct secure_devices secure_scp_devs[] = {
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES},
};

static int is_bus_disabled(struct ecam_device *dev)
{
	int rc = 0;

	/* FIXME for cn10ka
	 * Below buses does not exist in internal T96 topology
	 */
	if (((dev->domain == 0) && (dev->bus > 12)) ||
	    ((dev->domain == 1) && ((dev->bus > 1) && (dev->bus != 4)))  ||
	    ((dev->domain == 2) && (dev->bus > 32)))
		rc = 1;

	return rc;
}

static int skip_bus(struct ecam_device *dev)
{
	return 0;
}

static inline void enable_bus(struct ecam_device *dev)
{
	cavm_ecamx_domx_busx_permit_t bus_permit;

	/* enable bus */
	bus_permit.u = CSR_READ(CAVM_ECAMX_DOMX_BUSX_PERMIT(dev->ecam,
				   dev->domain, dev->bus));
	bus_permit.s.sec_dis = 0;
	bus_permit.s.nsec_dis = 0;
	bus_permit.s.xcp0_dis = 0;
	bus_permit.s.xcp1_dis = 0;
	CSR_WRITE(CAVM_ECAMX_DOMX_BUSX_PERMIT(dev->ecam, dev->domain,
		     dev->bus), bus_permit.u);
	debug_plat_ecam("enable_bus E%d:DOM%d:B%d\n", dev->ecam, dev->domain, dev->bus);
}

static inline void disable_bus(struct ecam_device *dev)
{
	cavm_ecamx_domx_busx_permit_t bus_permit;

	/* disable bus */
	bus_permit.u = CSR_READ(CAVM_ECAMX_DOMX_BUSX_PERMIT(dev->ecam,
				   dev->domain, dev->bus));
	bus_permit.s.sec_dis = 0;
	bus_permit.s.nsec_dis = 1;
	bus_permit.s.xcp0_dis = 0;
	bus_permit.s.xcp1_dis = 0;
	CSR_WRITE(CAVM_ECAMX_DOMX_BUSX_PERMIT(dev->ecam, dev->domain,
		     dev->bus), bus_permit.u);
	debug_plat_ecam("disable_bus E%d:DOM%d:B%d\n", dev->ecam, dev->domain, dev->bus);
}

static inline void enable_dev(struct ecam_device *dev)
{
	cavm_ecamx_domx_devx_permit_t dev_permit;

	/* enable dev */
	dev_permit.u = CSR_READ(CAVM_ECAMX_DOMX_DEVX_PERMIT(dev->ecam,
				   dev->domain, dev->dev));
	dev_permit.s.sec_dis = 0;
	dev_permit.s.nsec_dis = 0;
	dev_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
	dev_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
	dev_permit.s.xcp2_dis = dev->config.s.is_ecp_secure;
	CSR_WRITE(CAVM_ECAMX_DOMX_DEVX_PERMIT(dev->ecam, dev->domain,
		     dev->dev), dev_permit.u);

	if (dev->config.s.is_sec_devpa)
		disable_devmem_ns_access(dev);

	debug_plat_ecam("enable_dev E%d:DOM%d:D%d\n", dev->ecam, dev->domain, dev->dev);
}

static inline void disable_dev(struct ecam_device *dev)
{
	cavm_ecamx_domx_devx_permit_t dev_permit;

	/* enable dev */
	dev_permit.u = CSR_READ(CAVM_ECAMX_DOMX_DEVX_PERMIT(dev->ecam,
				   dev->domain, dev->dev));
	dev_permit.s.sec_dis = 0;
	dev_permit.s.nsec_dis = 1;
	dev_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
	dev_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
	dev_permit.s.xcp2_dis = dev->config.s.is_ecp_secure;
	CSR_WRITE(CAVM_ECAMX_DOMX_DEVX_PERMIT(dev->ecam, dev->domain,
		     dev->dev), dev_permit.u);

	if (dev->config.s.is_sec_devpa)
		disable_devmem_ns_access(dev);

	debug_plat_ecam("disable_dev E%d:DOM%d:D%d\n", dev->ecam, dev->domain, dev->dev);
}

static inline void enable_func(struct ecam_device *dev)
{
	cavm_ecamx_domx_rslx_permit_t rsl_permit;

	/* enable func */
	rsl_permit.u = CSR_READ(CAVM_ECAMX_DOMX_RSLX_PERMIT(dev->ecam,
				   dev->domain, dev->func + ((dev->bus - 1) * 256)));
	rsl_permit.s.sec_dis = 0;
	rsl_permit.s.nsec_dis = 0;
	rsl_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
	rsl_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
	rsl_permit.s.xcp2_dis = dev->config.s.is_ecp_secure;
	CSR_WRITE(CAVM_ECAMX_DOMX_RSLX_PERMIT(dev->ecam, dev->domain,
		     dev->func + ((dev->bus - 1) * 256)), rsl_permit.u);

	if (dev->config.s.is_sec_devpa)
		disable_devmem_ns_access(dev);

	debug_plat_ecam("enable_func E%d:DOM%d:F%d:B%d\n", dev->ecam, dev->domain,
			((dev->bus - 1) * 256) + dev->func, dev->bus);
}

static inline void disable_func(struct ecam_device *dev)
{
	cavm_ecamx_domx_rslx_permit_t rsl_permit;

	/* disable func */
	rsl_permit.u = CSR_READ(CAVM_ECAMX_DOMX_RSLX_PERMIT(dev->ecam,
				   dev->domain, dev->func + ((dev->bus - 1) * 256)));
	rsl_permit.s.sec_dis = 0;
	rsl_permit.s.nsec_dis = 1;
	rsl_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
	rsl_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
	rsl_permit.s.xcp2_dis = dev->config.s.is_ecp_secure;
	CSR_WRITE(CAVM_ECAMX_DOMX_RSLX_PERMIT(dev->ecam, dev->domain,
		     dev->func + ((dev->bus - 1) * 256)), rsl_permit.u);
	debug_plat_ecam("disable_func E%d:DOM%d:F%d:B%d\n", dev->ecam, dev->domain,
			((dev->bus - 1) * 256) + dev->func, dev->bus);

	if (dev->config.s.is_sec_devpa)
		disable_devmem_ns_access(dev);
}

static int get_ecam_count(void)
{
	cavm_ecamx_const_t ecam_const;

	ecam_const.u = CSR_READ(CAVM_ECAMX_CONST(0));

	return ecam_const.s.ecams;
}

static int get_domain_count(struct ecam_device *dev)
{
	cavm_ecamx_const_t ecam_const;

	ecam_const.u = CSR_READ(CAVM_ECAMX_CONST(dev->ecam));

	return ecam_const.s.domains;
}

static inline int is_domain_present(struct ecam_device *dev)
{
	cavm_ecamx_domx_const_t dom_const;

	dom_const.u = CSR_READ(CAVM_ECAMX_DOMX_CONST(dev->ecam,
				  dev->domain));

	return (dom_const.s.pres && dom_const.s.permit);
}

static int matched_twsi(int instance)
{
	if (plat_octeontx_bcfg->bcfg.atf_managed_twsi[instance])
		return 1;

	if (plat_octeontx_bcfg->bcfg.slave_twsi.s.bus == -1)
		return 0;

	return (plat_octeontx_bcfg->bcfg.slave_twsi.s.bus == instance) ? 1 : 0;
}

static int matched_dev(struct secure_devices *dev,
	uint32_t g_pccpf_id, uint32_t g_vsec_ctl)
{
	cavm_pccpf_xxx_id_t pccpf_id;
	union cavm_pccpf_xxx_vsec_ctl vsec_ctl;

	pccpf_id.u = g_pccpf_id;
	vsec_ctl.u = g_vsec_ctl;

	// not matched product and device id
	if (ECAM_DEV_ID(dev->prodid, dev->devid) != pccpf_id.s.devid)
		return 0;

	// any instance is matching
	if (dev->instance == ECAM_ALL_INSTANCES)
		return 1;

	// given instance is matching
	if (dev->instance == vsec_ctl.s.inst_num)
		return 1;

	// custom match for specific instance
	if (dev->instance == ECAM_CUSTOM_INSTANCE) {
		debug_plat_ecam(
			"ECAM custom instance: pccpf.devid = %x instance=%d\n",
			pccpf_id.s.devid, vsec_ctl.s.inst_num);

		switch (pccpf_id.s.devid) {
		case ECAM_PROD_DEV_ID(CAVM_PCC_DEV_IDL_E_MIO_TWS):
			return matched_twsi(vsec_ctl.s.inst_num);
		}
	}

	return 0;
}

static int get_secure_settings(struct ecam_device *dev, uint64_t pconfig)
{
	cavm_pccpf_xxx_id_t pccpf_id;
	union cavm_pccpf_xxx_vsec_ctl vsec_ctl;
	struct secure_devices *sdev;

	/* Get secure/non-secure setting */
	pccpf_id.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_ID);
	vsec_ctl.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_VSEC_CTL);
	debug_plat_ecam("%s: DeviceID=0x%04x\n", __func__, pccpf_id.s.devid);
	debug_plat_ecam("%s: InstNum=0x%04x\n", __func__, vsec_ctl.s.inst_num);

	dev->config.s.is_secure = 0;
	dev->config.s.is_sec_devpa = 0;
	dev->config.s.is_mcp_secure = 0;
	dev->config.s.is_scp_secure = 0;
	dev->config.s.is_ecp_secure = 0;

	sdev = secure_devs;
	while (sdev->devid != ECAM_INVALID_PCC_IDL_ID) {
		if (matched_dev(sdev, pccpf_id.u, vsec_ctl.u)) {
			dev->config.s.is_secure = 1;
			if (((pccpf_id.s.devid & 0xff) == CAVM_PCC_DEV_IDL_E_SPI) &&
			    plat_octeontx_bcfg->spi_cfg[vsec_ctl.s.inst_num].is_secure)
				dev->config.s.is_sec_devpa = SEC_DEVPA;
			else
				dev->config.s.is_sec_devpa = sdev->secure_devpa;
			break;
		}
		sdev++;
	}

	sdev = secure_ecp_devs;
	while (sdev->devid != ECAM_INVALID_PCC_IDL_ID) {
		if (matched_dev(sdev, pccpf_id.u, vsec_ctl.u)) {
			dev->config.s.is_ecp_secure = 1;
			break;
		}
		sdev++;
	}

	sdev = secure_mcp_devs;
	while (sdev->devid != ECAM_INVALID_PCC_IDL_ID) {
		if (matched_dev(sdev, pccpf_id.u, vsec_ctl.u)) {
			dev->config.s.is_mcp_secure = 1;
			break;
		}
		sdev++;
	}

	sdev = secure_scp_devs;
	while (sdev->devid != ECAM_INVALID_PCC_IDL_ID) {
		if (matched_dev(sdev, pccpf_id.u, vsec_ctl.u)) {
			dev->config.s.is_scp_secure = 1;
			break;
		}
		sdev++;
	}

	if ((pccpf_id.s.devid & 0xff) == CAVM_PCC_DEV_IDL_E_PEM5)
		dev->config.s.is_secure = !is_pem_hotplug(vsec_ctl.s.inst_num);

	return 1;
}

static void program_ssid(struct ecam_device *dev, uint64_t pconfig)
{
#ifdef DEBUG_ATF_PLAT_ECAM
	cavm_pccpf_xxx_id_t pccpf_id;
#endif
	cavm_pccpf_xxx_vsec_sctl2_t vsec_sctl2;

#ifdef DEBUG_ATF_PLAT_ECAM
	pccpf_id.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_ID);
	debug_plat_ecam("%s: DeviceID=0x%04x\n", __func__, pccpf_id.s.devid);
#endif
	/* Program Sub system ID with chip type */
	vsec_sctl2.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_VSEC_SCTL2);
	vsec_sctl2.s.ssid = ((CAVM_PCC_PROD_E_CN106XX << 8) & 0xFFFF);
	octeontx_write32(pconfig + CAVM_PCCPF_XXX_VSEC_SCTL2, vsec_sctl2.u);

	return;
}

struct ecam_probe_callback *get_probe_callbacks(void)
{
	return &probe_callbacks[0];
}

struct ecam_init_callback *get_init_callbacks(void)
{
	return &plat_init_callbacks[0];
}

const struct ecam_platform_defs plat_ops = {
	.soc_type = CN10KAPARTNUM,
	.get_ecam_count = get_ecam_count,
	.get_domain_count = get_domain_count,
	.is_domain_present = is_domain_present,
	.get_secure_settings = get_secure_settings,
	.get_dev_config = get_dev_config,
	.get_probes = get_probe_callbacks,
	.get_plat_inits = get_init_callbacks,
	.is_bus_disabled = is_bus_disabled,
	.skip_bus = skip_bus,
	.enable_bus = enable_bus,
	.disable_bus = disable_bus,
	.enable_dev = enable_dev,
	.disable_dev = disable_dev,
	.enable_func = enable_func,
	.disable_func = disable_func,
	.program_ssid = program_ssid,
};
