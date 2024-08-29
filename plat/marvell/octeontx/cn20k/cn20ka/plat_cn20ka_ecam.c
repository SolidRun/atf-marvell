/*
 * Copyright (c) 2020 Marvell.
 * This program is provided "as is" without any warranty of any kind,
 * and is distributed under the applicable Marvell proprietary limited use
 * license agreement.
 */

#include <platform_def.h>
#include <platform_setup.h>
#include <octeontx_common.h>
#include <inttypes.h>

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <octeontx_ecam.h>
#include <plat_cn20k_configuration.h>
#include <plat_board_cfg.h>
#include <plat_eth_cfg.h>
#include <platform_irqs_def.h>
#include <plat_scfg.h>
#include <plat_iobn.h>
#include <octeontx_utils.h>

#include "cavm-csrs-ecam.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-gic.h"
#include "cavm-csrs-emmc.h"
#include "cavm-csrs-spi.h"
#include "cavm-csrs-pccpf_iii.h"
#include "cavm-csrs-iobn.h"

#include "rvu_20k.h"

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

extern uint64_t get_iodid_dev_config(struct ecam_device *dev);
extern int disable_devmem_ns_access(struct ecam_device *dev);

static int ecam_probe_rpm(uint64_t arg)
{
	int rpm_idx;

	debug_plat_ecam("%s arg %" PRId64 "\n", __func__, arg);

	rpm_idx = arg;

	if ((rpm_idx < 0) && (rpm_idx > plat_octeontx_get_rpm_count()))
		ERROR("%s: Invalid rpm_index %d\n", __func__, rpm_idx);

	/* FIXME: For now, return 1 always and not based on
	 * rpm->enable as for cn20k, disable_dev API is not
	 * implemented
	 */
	return 1;
}

struct ecam_probe_callback probe_callbacks[] = {
	{0xa09f, 0x177d, ecam_probe_rpm, 0},
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

	VERBOSE("EMMC init called config_base:%" PRIx64 " size:%" PRIx64 "\n",
			config_base, config_size);

	/* Block can have mix of secure and non-secure MSI-X interrupts */
	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	*sctl |= 0x1;

	enable_msix(config_base, cap_pointer, &table_size, &bir);

	vsec_sctl.s.msix_sec_en = 0;
	vsec_sctl.s.msix_sec_phys = 0;
	vsec_sctl.s.msix_phys = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
	if (table_size) {
		vector_base = get_bar_val(pconfig, bir);
		for (i = 0; i < table_size; i++) {
			octeontx_write64(vector_base, (i % 2) ? CAVM_GICD_CLRSPI_NSR : CAVM_GICD_SETSPI_NSR);
			VERBOSE("EMMC vector_base%d 0x%" PRIx64 " 0x%" PRIx64 "\n", i, vector_base, octeontx_read64(vector_base));
			vector_base += 8;
			octeontx_write64(vector_base, EMMC_SPI_IRQ(0));
			VERBOSE("EMMC vector_base%d 0x%" PRIx64 " 0x%" PRIx64 "\n", i, vector_base, octeontx_read64(vector_base));
			vector_base += 8;
		}
	}
}

static void init_gpio(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	debug_plat_ecam("GPIO init called config_base:%" PRIx64 " size:%" PRIx64 "\n",
			config_base, config_size);

	/* Block can have mix of secure and non-secure MSI-X interrupts */
	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.msix_sec_en = 1;
	vsec_sctl.s.msix_sec_phys = 1;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
}

static void init_rvu_ssid_rid(uint64_t config_base)
{
	union cavm_pccpf_xxx_vsec_sctl2 vsec_sctl2;
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.rid = plat_configure_rid();
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);

	vsec_sctl2.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL2);
	vsec_sctl2.s.ssid |= 0x20;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL2, vsec_sctl2.u);
}

static void init_rvu(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.rid = plat_configure_rid();
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
	rvu_devices_init();
}

static void init_xspi(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;
	struct pcie_config *pconfig = (struct pcie_config *)config_base;
	uint8_t cap_pointer = pconfig->cap_pointer;
	uint32_t *sctl = (uint32_t *) (config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	uint16_t table_size = 0;
	uint8_t bir = 0, i = 0, spi_id;
	uint64_t vector_base;

	VERBOSE("xSPI init called config_base:%" PRIx64 " size:%" PRIx64 "\n",
			config_base, config_size);

	/* Block can have mix of secure and non-secure MSI-X interrupts */
	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	*sctl |= 0x1;

	enable_msix(config_base, cap_pointer, &table_size, &bir);
	if (config_base & 0x100000)
		spi_id = 1;
	else
		spi_id = 0;

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

	CSR_MODIFY(c, CAVM_SPIX_CLK_CTRL(spi_id),
		c.s.spi_sclk_force = 1;
		c.s.spi_imsc_shadow = 1);
}

static void init_rnm(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.rid = plat_configure_rid();
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
}

static void init_rpm(uint64_t config_base, uint64_t config_size)
{
	union cavm_pccpf_xxx_vsec_sctl vsec_sctl;
	uint16_t iodid = ((config_base & ECAM_IODID_MASK) >> ECAM_IODID_SHIFT);

	vsec_sctl.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL);
	vsec_sctl.s.rid = iodid & 0xF;
	octeontx_write32(config_base + CAVM_PCCPF_XXX_VSEC_SCTL, vsec_sctl.u);
}

struct ecam_init_callback plat_init_callbacks[] = {
	{0xa00a, 0x177d, init_gpio},
	{0xa065, 0x177d, init_rvu}, /* RVU AF */
	{0xa095, 0x177d, init_emmc},
	{0xa09b, 0x177d, init_xspi},
	{0xa098, 0x177d, init_rnm},
	{0xa09f, 0x177d, init_rpm},
	{ECAM_INVALID_DEV_ID, 0, 0}
};

struct rvu_dev_list rvu_devs[] = {
	{0xa065},
	{0xa063}, /* 0x63 - PCC_DEV_IDL_E::RVU */
	{0xa0f2}, /* 0xf2 - PCC_DEV_IDL_E::RVU_CPT10_PF */
	{0xa0f3}, /* 0xf3 - PCC_DEV_IDL_E::RVU_CPT10_VF */
	{0xa0f6}, /* 0xf6 - PCC_DEV_IDL_E::RVU_SDP_PF */
	{0xa0f8}, /* 0xf8 - PCC_DEV_IDL_E::RVU_AF_VF */
	{0xa0fb}, /* 0xfb - PCC_DEV_IDL_E::RVU_NPA_PF */
	{0xa0fc}, /* 0xfc - PCC_DEV_IDL_E::RVU_NPA_VF */
	{0xa0f9}, /* 0xf9 - PCC_DEV_IDL_E::RVU_SSO_PF */
	{0xa0fa}, /* 0xfa - PCC_DEV_IDL_E::RVU_SSO_VF */
	{ECAM_INVALID_DEV_ID}
};

/*
 * Following device's BAR0 will be hidden
 * from non-secure world.
 * Set instance to the instance number
 * you want to hide or ECAM_ALL_INSTANCES
 * if all the instances are hidden
 */

struct secure_devices secure_devs[] = {
	{CAVM_PCC_PROD_E_GEN, CAVM_PCC_DEV_IDL_E_SPI, ECAM_ALL_INSTANCES, NSEC_DEVPA},
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES, NSEC_DEVPA}
};

struct secure_devices secure_mcp_devs[] = {
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES}
};

struct secure_devices secure_ecp_devs[] = {
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES}
};

/*
 * Currently we're not hidding anything from SCP,
 * since it's operating in secure domain
 */
struct secure_devices secure_scp_devs[] = {
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES},
};

/*
 * Currently we're not hidding anything from PCP,
 */
struct secure_devices secure_pcp_devs[] = {
	{ECAM_INVALID_PROD_ID, ECAM_INVALID_PCC_IDL_ID, ECAM_ALL_INSTANCES},
};

static int skip_bus(struct ecam_device *dev)
{
	return 0;
}

static int get_ecam_count(void)
{
	return 1;
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
	dev->config.s.is_pcp_secure = 0;

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

	sdev = secure_pcp_devs;
	while (sdev->devid != ECAM_INVALID_PCC_IDL_ID) {
		if (matched_dev(sdev, pccpf_id.u, vsec_ctl.u)) {
			dev->config.s.is_pcp_secure = 1;
			break;
		}
		sdev++;
	}

	return 1;
}

static void program_ssid(struct ecam_device *dev, uint64_t pconfig)
{
	cavm_pccpf_xxx_id_t pccpf_id;
	uint8_t i;

	pccpf_id.u = octeontx_read32(pconfig + CAVM_PCCPF_XXX_ID);
#ifdef DEBUG_ATF_PLAT_ECAM
	debug_plat_ecam("%s: DeviceID=0x%04x\n", __func__, pccpf_id.s.devid);
#endif

	/* For now program Sub system ID only for RVU dev */
	for (i = 0; rvu_devs[i].devid != ECAM_INVALID_DEV_ID; i++) {
		if (rvu_devs[i].devid == pccpf_id.s.devid) {
			init_rvu_ssid_rid(pconfig);
			return;
		}
	}
	return;
}

static inline void enable_bus(struct ecam_device *dev)
{
	cavm_pccpf_xxx_vsec_streamid_t vsec_streamid;
	cavm_ecamx_domx_busx_permit_t bus_permit;
	cavm_ecamx_const_t ecam_const;
	uint64_t config_base;

	/* Get address of the device */
	config_base = get_iodid_dev_config(dev);
	if (!config_base) {
		debug_plat_ecam("%s: Unable to get config\n", __func__);
		return;
	}

	vsec_streamid.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_STREAMID);

	ecam_const.u = CSR_READ(CAVM_ECAMX_CONST(0));

	if ((dev->ecam >= ecam_const.cn20ka.ecams) ||
	    (vsec_streamid.s.dmn >= ecam_const.cn20ka.num_sw_domains) ||
	    (vsec_streamid.s.bus >= OCTEONTX_ECAM_MAX_BUS)) {
		ERROR("%s E%d:DOM%d:B%d\n", __func__, dev->ecam,
		      vsec_streamid.s.dmn, vsec_streamid.s.bus);
		return;
	}

	bus_permit.u = CSR_READ(CAVM_ECAMX_DOMX_BUSX_PERMIT(dev->ecam,
				vsec_streamid.s.dmn, vsec_streamid.s.bus));

	bus_permit.s.sec_dis = 0;
	bus_permit.s.nsec_dis = 0;
	bus_permit.s.xcp0_dis = 0;
	bus_permit.s.xcp1_dis = 0;
	bus_permit.s.xcp2_dis = 0;
	bus_permit.s.xcp3_dis = 0;
	CSR_WRITE(CAVM_ECAMX_DOMX_BUSX_PERMIT(dev->ecam,
		  vsec_streamid.s.dmn, vsec_streamid.s.bus), bus_permit.u);
	debug_plat_ecam("%s E%d:DOM%d:B%d = 0x%lx\n", __func__, dev->ecam,
			vsec_streamid.s.dmn, vsec_streamid.s.bus, bus_permit.u);
}

static inline void disable_bus(struct ecam_device *dev)
{
	cavm_pccpf_xxx_vsec_streamid_t vsec_streamid;
	cavm_ecamx_domx_busx_permit_t bus_permit;
	cavm_ecamx_const_t ecam_const;
	uint64_t config_base;

	/* Get address of the device */
	config_base = get_iodid_dev_config(dev);
	if (!config_base) {
		debug_plat_ecam("%s: Unable to get config\n", __func__);
		return;
	}

	vsec_streamid.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_STREAMID);

	ecam_const.u = CSR_READ(CAVM_ECAMX_CONST(0));

	if ((dev->ecam >= ecam_const.cn20ka.ecams) ||
	    (vsec_streamid.s.dmn >= ecam_const.cn20ka.num_sw_domains) ||
	    (vsec_streamid.s.bus >= OCTEONTX_ECAM_MAX_BUS)) {
		ERROR("%s E%d:DOM%d:B%d\n", __func__, dev->ecam,
		      vsec_streamid.s.dmn, vsec_streamid.s.bus);
		return;
	}

	bus_permit.u = CSR_READ(CAVM_ECAMX_DOMX_BUSX_PERMIT(dev->ecam,
				vsec_streamid.s.dmn, vsec_streamid.s.bus));

	bus_permit.s.sec_dis = 0;
	bus_permit.s.nsec_dis = 1;
	bus_permit.s.xcp0_dis = 0;
	bus_permit.s.xcp1_dis = 0;
	bus_permit.s.xcp2_dis = 0;
	bus_permit.s.xcp3_dis = 0;
	CSR_WRITE(CAVM_ECAMX_DOMX_BUSX_PERMIT(dev->ecam,
		  vsec_streamid.s.dmn, vsec_streamid.s.bus), bus_permit.u);
	debug_plat_ecam("%s E%d:DOM%d:B%d = 0x%lx\n", __func__, dev->ecam,
			vsec_streamid.s.dmn, vsec_streamid.s.bus, bus_permit.u);
}

static inline void enable_dev(struct ecam_device *dev)
{
	cavm_pccpf_xxx_vsec_streamid_t vsec_streamid;
	cavm_ecamx_domx_devx_permit_t dev_permit;
	cavm_ecamx_const_t ecam_const;
	uint64_t config_base;
	uint8_t device;

	/* Get address of the device */
	config_base = get_iodid_dev_config(dev);
	if (!config_base) {
		debug_plat_ecam("%s: Unable to get config\n", __func__);
		return;
	}

	vsec_streamid.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_STREAMID);

	ecam_const.u = CSR_READ(CAVM_ECAMX_CONST(0));
	device = (vsec_streamid.s.func >> STREAM_DEV_SHIFT) & (OCTEONTX_ECAM_MAX_DEV - 1);

	if ((dev->ecam >= ecam_const.cn20ka.ecams) ||
	    (vsec_streamid.s.dmn >= ecam_const.cn20ka.num_sw_domains) ||
	    (device >= OCTEONTX_ECAM_MAX_DEV)) {
		ERROR("%s E%d:DOM%d:DEV%d\n", __func__, dev->ecam,
		      vsec_streamid.s.dmn, device);
		return;
	}

	dev_permit.u = CSR_READ(CAVM_ECAMX_DOMX_DEVX_PERMIT(dev->ecam,
				vsec_streamid.s.dmn, device));

	dev_permit.s.sec_dis = 0;
	dev_permit.s.nsec_dis = 0;
	dev_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
	dev_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
	dev_permit.s.xcp2_dis = dev->config.s.is_ecp_secure;
	dev_permit.s.xcp3_dis = dev->config.s.is_pcp_secure;
	CSR_WRITE(CAVM_ECAMX_DOMX_DEVX_PERMIT(dev->ecam,
		  vsec_streamid.s.dmn, device), dev_permit.u);

	if (dev->config.s.is_sec_devpa)
		disable_devmem_ns_access(dev);

	debug_plat_ecam("%s E%d:DOM%d:DEV%d = 0x%lx\n", __func__, dev->ecam,
			vsec_streamid.s.dmn, device, dev_permit.u);
}

static inline void disable_dev(struct ecam_device *dev)
{
	cavm_pccpf_xxx_vsec_streamid_t vsec_streamid;
	cavm_ecamx_domx_devx_permit_t dev_permit;
	cavm_ecamx_const_t ecam_const;
	uint64_t config_base;
	uint8_t device;

	/* Get address of the device */
	config_base = get_iodid_dev_config(dev);
	if (!config_base) {
		debug_plat_ecam("%s: Unable to get config\n", __func__);
		return;
	}

	vsec_streamid.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_STREAMID);

	ecam_const.u = CSR_READ(CAVM_ECAMX_CONST(0));
	device = (vsec_streamid.s.func >> STREAM_DEV_SHIFT) & (OCTEONTX_ECAM_MAX_DEV - 1);

	if ((dev->ecam >= ecam_const.cn20ka.ecams) ||
	    (vsec_streamid.s.dmn >= ecam_const.cn20ka.num_sw_domains) ||
	    (device >= OCTEONTX_ECAM_MAX_DEV)) {
		ERROR("%s E%d:DOM%d:DEV%d\n", __func__, dev->ecam,
		      vsec_streamid.s.dmn, device);
		return;
	}

	dev_permit.u = CSR_READ(CAVM_ECAMX_DOMX_DEVX_PERMIT(dev->ecam,
				vsec_streamid.s.dmn, device));

	dev_permit.s.sec_dis = 0;
	dev_permit.s.nsec_dis = 1;
	dev_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
	dev_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
	dev_permit.s.xcp2_dis = dev->config.s.is_ecp_secure;
	dev_permit.s.xcp3_dis = dev->config.s.is_pcp_secure;
	CSR_WRITE(CAVM_ECAMX_DOMX_DEVX_PERMIT(dev->ecam,
		  vsec_streamid.s.dmn, device), dev_permit.u);

	if (dev->config.s.is_sec_devpa)
		disable_devmem_ns_access(dev);

	debug_plat_ecam("%s E%d:DOM%d:DEV%d = 0x%lx\n", __func__, dev->ecam,
			vsec_streamid.s.dmn, device, dev_permit.u);
}

static inline void enable_bus_devfn(struct ecam_device *dev)
{
	cavm_pccpf_xxx_vsec_streamid_t vsec_streamid;
	cavm_ecamx_domx_busx_funcx_permit_t bus_func_permit;
	cavm_ecamx_const_t ecam_const;
	uint64_t config_base;

	/* Get address of the device */
	config_base = get_iodid_dev_config(dev);
	if (!config_base) {
		debug_plat_ecam("%s: Unable to get config\n", __func__);
		return;
	}

	vsec_streamid.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_STREAMID);

	ecam_const.u = CSR_READ(CAVM_ECAMX_CONST(0));

	if ((dev->ecam >= ecam_const.cn20ka.ecams) ||
	    (vsec_streamid.s.dmn >= ecam_const.cn20ka.num_sw_domains) ||
	    (vsec_streamid.s.bus >= OCTEONTX_ECAM_MAX_BUS)) {
		ERROR("%s E%d:DOM%d:B%d\n", __func__, dev->ecam,
		      vsec_streamid.s.dmn, vsec_streamid.s.bus);
		return;
	}

	bus_func_permit.u = CSR_READ(CAVM_ECAMX_DOMX_BUSX_FUNCX_PERMIT(dev->ecam,
				vsec_streamid.s.dmn, vsec_streamid.s.bus,
				vsec_streamid.s.func));

	bus_func_permit.s.sec_dis = 0;
	bus_func_permit.s.nsec_dis = 0;
	bus_func_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
	bus_func_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
	bus_func_permit.s.xcp2_dis = dev->config.s.is_ecp_secure;
	bus_func_permit.s.xcp3_dis = dev->config.s.is_pcp_secure;
	CSR_WRITE(CAVM_ECAMX_DOMX_BUSX_FUNCX_PERMIT(dev->ecam,
		  vsec_streamid.s.dmn, vsec_streamid.s.bus,
		  vsec_streamid.s.func), bus_func_permit.u);

	if (dev->config.s.is_sec_devpa)
		disable_devmem_ns_access(dev);

	debug_plat_ecam("%s E%d:DOM%d:B%dfunc%d = 0x%lx\n", __func__, dev->ecam,
			vsec_streamid.s.dmn, vsec_streamid.s.bus,
			vsec_streamid.s.func, bus_func_permit.u);
}

static inline void disable_bus_devfn(struct ecam_device *dev)
{
	cavm_pccpf_xxx_vsec_streamid_t vsec_streamid;
	cavm_ecamx_domx_busx_funcx_permit_t bus_func_permit;
	cavm_ecamx_const_t ecam_const;
	uint64_t config_base;

	/* Get address of the device */
	config_base = get_iodid_dev_config(dev);
	if (!config_base) {
		debug_plat_ecam("%s: Unable to get config\n", __func__);
		return;
	}

	vsec_streamid.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_STREAMID);

	ecam_const.u = CSR_READ(CAVM_ECAMX_CONST(0));

	if ((dev->ecam >= ecam_const.cn20ka.ecams) ||
	    (vsec_streamid.s.dmn >= ecam_const.cn20ka.num_sw_domains) ||
	    (vsec_streamid.s.bus >= OCTEONTX_ECAM_MAX_BUS)) {
		ERROR("%s E%d:DOM%d:B%d\n", __func__, dev->ecam,
		      vsec_streamid.s.dmn, vsec_streamid.s.bus);
		return;
	}

	bus_func_permit.u = CSR_READ(CAVM_ECAMX_DOMX_BUSX_FUNCX_PERMIT(dev->ecam,
				vsec_streamid.s.dmn, vsec_streamid.s.bus,
				vsec_streamid.s.func));

	bus_func_permit.s.sec_dis = 0;
	bus_func_permit.s.nsec_dis = 1;
	bus_func_permit.s.xcp0_dis = dev->config.s.is_scp_secure;
	bus_func_permit.s.xcp1_dis = dev->config.s.is_mcp_secure;
	bus_func_permit.s.xcp2_dis = dev->config.s.is_ecp_secure;
	bus_func_permit.s.xcp3_dis = dev->config.s.is_pcp_secure;
	CSR_WRITE(CAVM_ECAMX_DOMX_BUSX_FUNCX_PERMIT(dev->ecam,
		  vsec_streamid.s.dmn, vsec_streamid.s.bus,
		  vsec_streamid.s.func), bus_func_permit.u);

	if (dev->config.s.is_sec_devpa)
		disable_devmem_ns_access(dev);

	debug_plat_ecam("%s E%d:DOM%d:B%dfunc%d = 0x%lx\n", __func__, dev->ecam,
			vsec_streamid.s.dmn, vsec_streamid.s.bus,
			vsec_streamid.s.func, bus_func_permit.u);
}

static inline void iobn_cfg_stream(struct ecam_device *dev, uint8_t iobn, uint64_t attr)
{
	cavm_pccpf_xxx_vsec_streamid_t vsec_streamid;
	cavm_ecamx_const_t ecam_const;
	uint64_t config_base, dombus, val;
	uint8_t idx = 0;
	uint8_t device;
	int cam_found = 0;

	/* Get address of the device */
	config_base = get_iodid_dev_config(dev);
	if (!config_base) {
		debug_plat_ecam("%s: Unable to get config\n", __func__);
		return;
	}

	vsec_streamid.u = octeontx_read32(config_base + CAVM_PCCPF_XXX_VSEC_STREAMID);
	device = (vsec_streamid.s.func >> STREAM_DEV_SHIFT) & (OCTEONTX_ECAM_MAX_DEV - 1);

	ecam_const.u = CSR_READ(CAVM_ECAMX_CONST(0));

	if ((dev->ecam >= ecam_const.cn20ka.ecams) ||
	    (vsec_streamid.s.dmn >= ecam_const.cn20ka.max_domains) ||
	    (vsec_streamid.s.bus >= OCTEONTX_ECAM_MAX_BUS) ||
	    (device >= OCTEONTX_ECAM_MAX_DEV) ||
	    (iobn >= plat_octeontx_scfg->iobn_count)) {
		ERROR("%s IOBN%d:DOM%d:B%dDEV%d\n", __func__, iobn,
		      vsec_streamid.s.dmn, vsec_streamid.s.bus, device);
		return;
	}

	dombus = (vsec_streamid.u >> 8) & STREAM_DB_MASK;

	while(!cam_found && idx < MAX_CAM_ENTRIES) {
		val = CSR_READ(CAVM_IOBNX_STRM_CAMX_DOMBUS(iobn, idx));

		if (STREAM_DOMBUS(val) == dombus) {
			CSR_WRITE(CAVM_IOBNX_STRMX_CAM_DEVX(iobn, idx, vsec_streamid.s.func), attr);
			cam_found = 1;
		}
		idx++;
	}

	if (!cam_found) {
		ERROR("%s IOBN%d:DOM%d:B%dDEV%d\n", __func__, iobn,
		      vsec_streamid.s.dmn, vsec_streamid.s.bus, device);
	}
	debug_plat_ecam("%s IOBN%d:DOM%d:B%ddev%d = 0x%lx\n", __func__, iobn,
			vsec_streamid.s.dmn, vsec_streamid.s.bus, device, attr);
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
	.soc_type = CN20KAPARTNUM,
	.get_ecam_count = get_ecam_count,
	.get_secure_settings = get_secure_settings,
	.get_iodid_dev_config = get_iodid_dev_config,
	.get_probes = get_probe_callbacks,
	.get_plat_inits = get_init_callbacks,
	.skip_bus = skip_bus,
	.program_ssid = program_ssid,
	.enable_bus = enable_bus,
	.disable_bus = disable_bus,
	.enable_dev = enable_dev,
	.disable_dev = disable_dev,
	.enable_bus_devfn = enable_bus_devfn,
	.disable_bus_devfn = disable_bus_devfn,
	.iobn_cfg_stream = iobn_cfg_stream,
};
