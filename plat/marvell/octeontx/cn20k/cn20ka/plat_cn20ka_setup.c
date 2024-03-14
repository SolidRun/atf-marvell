/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <debug.h>
#include <plat/common/platform.h>
#include <platform_def.h>
#include <platform_setup.h>
#include <platform_irqs_def.h>
#include <octeontx_common.h>
#include <gpio_octeontx.h>
#include <octeontx_utils.h>
#include <plat_cn20k_configuration.h>
#include <octeontx_plat_configuration.h>
#include <plat_octeontx.h>
#include <octeontx_irqs_def.h>
#include <plat_scfg.h>
#include <plat_board_cfg.h>
#include <assert.h>

/* This file map memory for different blocks so it needs all csrs definitions */
#include "cavm-csrs-apa.h"
#include "cavm-csrs-emmc.h"
#include "cavm-csrs-ecam.h"
#include "cavm-csrs-ehsm.h"
#include "cavm-csrs-dsuub.h"
#include "cavm-csrs-fus.h"
#include "cavm-csrs-gic.h"
#include "cavm-csrs-gpio.h"
#include "cavm-csrs-gti.h"
#include "cavm-csrs-iobn.h"
#include "cavm-csrs-mrml.h"
#include "cavm-csrs-mio_tws.h"
#include "cavm-csrs-ncb.h"
#include "cavm-csrs-pccpf.h"
#include "cavm-csrs-rnm.h"
#include "cavm-csrs-rst.h"
#include "cavm-csrs-sam.h"
#include "cavm-csrs-smmu.h"
#include "cavm-csrs-spi.h"
#include "cavm-csrs-tad_cmn.h"
#include "cavm-csrs-uaa.h"
#include "cavm-csrs-rvu.h"

#define NCB_COUNT			5

static uint64_t msix_addr_save;

int plat_octeontx_get_ecams_count(void)
{
	return 1;
}

int plat_octeontx_get_iobn_count(void)
{
	return 7;
}

int plat_octeontx_is_lmc_enabled(unsigned lmc)
{
	return 0;
}

/*******************************************************************************
 * Setup secondary CPU JUMP address from RESET
 ******************************************************************************/
void plat_cn20k_set_secondary_cpu_jump_addr(int core_id, uint64_t entrypoint_addr)
{

	CSR_WRITE(CAVM_APAX_RVBARADDR(core_id), entrypoint_addr);
}

int plat_octeontx_get_mpi_count(void)
{
	return 2;
}

int plat_octeontx_get_smmu_count(void)
{
	return 1;
}

int plat_octeontx_get_twsi_count(void)
{
	return 12;
}

int plat_octeontx_get_cpt_count(void)
{
	return 1;
}

int plat_octeontx_get_uaa_count(void)
{
	return 16;
}

int plat_octeontx_get_rvu_count(void)
{
	return 96;
}

void plat_add_mmio(void)
{
	uint64_t base;
	unsigned long attr;
	int i, device_type_count;

#if defined(IMAGE_BL31)
	mmap_add_region(WORK_BUFFER_BASE,
		WORK_BUFFER_BASE,
		WORK_BUFFER_MAX_SIZE,
		MT_RW | MT_SECURE | MT_DEVICE);
#endif

	attr = MT_DEVICE | MT_RW | MT_SECURE;
	add_map_record(CAVM_RST_BAR_E_RSTX_PF_BAR0(1), CAVM_RST_BAR_E_RSTX_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_RST_BAR_E_RSTX_PF_BAR4(1), CAVM_RST_BAR_E_RSTX_PF_BAR4_SIZE, attr);
	add_map_record(CAVM_MRML_BAR_E_MRML_PF_BAR0, CAVM_MRML_BAR_E_MRML_PF_BAR0_SIZE, attr);

	add_map_record(CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0,
		       CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_SIZE, attr);

	add_map_record(CAVM_FUS_BAR_E_FUS_PF_BAR0,
		CAVM_FUS_BAR_E_FUS_PF_BAR0_SIZE, attr);

	add_map_record(CAVM_EMMC_BAR_E_EMMCX_PF_BAR0(0), CAVM_EMMC_BAR_E_EMMCX_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_EMMC_BAR_E_EMMCX_PF_BAR4(0), CAVM_EMMC_BAR_E_EMMCX_PF_BAR4_SIZE, attr);

	/* Enable eHSM */
	add_map_record(CAVM_EHSM_BAR_E_EHSM_PF_BAR0,
		       CAVM_EHSM_BAR_E_EHSM_PF_BAR0_SIZE, attr);

	device_type_count = plat_octeontx_get_mpi_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CAVM_SPI_BAR_E_SPIX_PF_BAR0(i), CAVM_SPI_BAR_E_SPIX_PF_BAR0_SIZE, attr);
		add_map_record(CAVM_SPI_BAR_E_SPIX_PF_BAR4(i), CAVM_SPI_BAR_E_SPIX_PF_BAR4_SIZE, attr);
	}

	add_map_record(CAVM_GIC_BAR_E_GIC_PF_BAR0, CAVM_GIC_BAR_E_GIC_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_GIC_BAR_E_GIC_PF_BAR0 + CAVM_GIC_ANB_REG_START, CAVM_GIC_ANB_REG_SIZE, attr);
	device_type_count = plat_octeontx_get_smmu_count();
	for (i = 0; i < device_type_count; i++)
		add_map_record(CAVM_SMMU_BAR_E_SMMUX_PF_BAR0(i), CAVM_SMMU_BAR_E_SMMUX_PF_BAR0_SIZE, attr);

	add_map_record(CAVM_GTI_BAR_E_GTI_PF_BAR0, CAVM_GTI_BAR_E_GTI_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_GTI_BAR_E_GTI_PF_BAR4, CAVM_GTI_BAR_E_GTI_PF_BAR4_SIZE, attr);

	device_type_count = plat_octeontx_get_twsi_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CAVM_MIO_TWS_BAR_E_MIO_TWSX_PF_BAR0(i), CAVM_MIO_TWS_BAR_E_MIO_TWSX_PF_BAR0_SIZE, attr);
		add_map_record(CAVM_MIO_TWS_BAR_E_MIO_TWSX_PF_BAR4(i), CAVM_MIO_TWS_BAR_E_MIO_TWSX_PF_BAR4_SIZE, attr);
	}

	add_map_record(CAVM_GPIO_BAR_E_GPIO_PF_BAR0, CAVM_GPIO_BAR_E_GPIO_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_GPIO_BAR_E_GPIO_PF_BAR4, CAVM_GPIO_BAR_E_GPIO_PF_BAR4_SIZE, attr);

	device_type_count = plat_octeontx_get_uaa_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(UAAX_PF_BAR0(i), CAVM_UAA_BAR_E_UAAX_PF_BAR0_SIZE, attr);
		add_map_record(CAVM_UAA_BAR_E_UAAX_PF_BAR4(i), CAVM_UAA_BAR_E_UAAX_PF_BAR4_SIZE, attr);
	}

	device_type_count = plat_octeontx_get_ecams_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CAVM_ECAM_BAR_E_ECAMX_PF_BAR0(i), CAVM_ECAM_BAR_E_ECAMX_PF_BAR0_SIZE, attr);
		add_map_record(FIXED_ECAM_BAR, CAVM_ECAM_BAR_E_ECAMX_PF_BAR2_SIZE, attr);
	}
	device_type_count = plat_octeontx_get_iobn_count();
	for (i = 0; i < device_type_count; ++i) {
		add_map_record(CAVM_IOBN_BAR_E_IOBNX_PF_BAR0(i), CAVM_IOBN_BAR_E_IOBNX_PF_BAR0_SIZE, attr);
		add_map_record(CAVM_IOBN_BAR_E_IOBNX_PF_BAR4(i), CAVM_IOBN_BAR_E_IOBNX_PF_BAR4_SIZE, attr);
	}

	for (i = 0; i < PLATFORM_CORE_COUNT; i++) {
		add_map_record(CAVM_APA_BAR_E_APAX_PF_BAR0(i),
				CAVM_APA_BAR_E_APAX_PF_BAR0_SIZE, attr);
	}

	add_map_record(CAVM_SAM_BAR_E_SAM_PF_BAR0,
				CAVM_SAM_BAR_E_SAM_PF_BAR0_SIZE, attr);

	for (i = 0; i < NCB_COUNT; ++i)
		add_map_record(CAVM_NCB_BAR_E_NCBX_PF_BAR0(i),
				CAVM_NCB_BAR_E_NCBX_PF_BAR0_SIZE, attr);

	/* RVU device mappings */
	add_map_record(CAVM_RVU_BAR_E_RVU_PFX_BAR0(0), CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE, attr);
	device_type_count = plat_octeontx_get_rvu_count();
	for (i = 0; i < device_type_count; ++i)
		add_map_record(CAVM_RVU_BAR_E_RVU_PFX_FUNCX_BAR2(i, 0), CAVM_RVU_BAR_E_RVU_PFX_FUNCX_BAR2_SIZE, attr);

	/*
	 * Map DSU UB for core power management
	 * Errata: IPBUPERS-151, skip the reserved register space.
	 */
	for (int core_id = 0; core_id < 35; core_id++) {
		base = CAVM_DSUUB_BAR_E_DSUUBX_PF_BAR0(core_id) +
			CAVM_DSUUB_BAR0_REGION0_BASE;
		mmap_add_region(base,
				base,
				CAVM_DSUUB_BAR0_REGION0_SIZE,
				attr);

		base = CAVM_DSUUB_BAR_E_DSUUBX_PF_BAR0(core_id) +
			CAVM_DSUUB_BAR0_REGION1_BASE;
		mmap_add_region(base,
				base,
				CAVM_DSUUB_BAR0_REGION1_SIZE,
				attr);

		base = CAVM_DSUUB_BAR_E_DSUUBX_PF_BAR0(core_id) +
			CAVM_DSUUB_BAR0_REGION2_BASE;
		mmap_add_region(base,
				base,
				CAVM_DSUUB_BAR0_REGION2_SIZE,
				attr);

		base = CAVM_DSUUB_BAR_E_DSUUBX_PF_BAR0(core_id) +
			CAVM_DSUUB_BAR0_REGION3_BASE;
		mmap_add_region(base,
				base,
				CAVM_DSUUB_BAR0_REGION3_SIZE,
				attr);

		base = CAVM_DSUUB_BAR_E_DSUUBX_PF_BAR0(core_id) +
			CAVM_DSUUB_BAR0_REGION4_BASE;
		mmap_add_region(base,
				base,
				CAVM_DSUUB_BAR0_REGION4_SIZE,
				attr);
	}

#ifdef NT_FW_CONFIG
	mmap_add_region(NT_FW_CONFIG_BASE, NT_FW_CONFIG_BASE,
			NT_FW_CONFIG_LIMIT, (MT_MEMORY | MT_RW | MT_NS));
#endif

#if 0
	/* Shared memory region for EFI variables */
	mmap_add_region(EFI_VAR_MEM_BASE, EFI_VAR_MEM_BASE,
			EFI_VAR_MEM_SIZE, (MT_MEMORY | MT_RW | MT_NS));
#endif
}

void plat_set_gpio_msix_vectors(int gpio_num, int irq_num, int enable)
{
	uint64_t vector_ptr;
	int intr_pinx;

	/* Get the offset of interrupt vector for that GPIO line */
	intr_pinx = CAVM_GPIO_INT_VEC_E_MC_INTR_PPX(gpio_num);

	/* INTR_PINX vector address */
	vector_ptr =  CAVM_GPIO_BAR_E_GPIO_PF_BAR4 + intr_pinx * 0x10;

	if (enable) {
		/* Save vector address so that it can be restored.
		 * The value will be same for set and clear vectors so saving
		 * once will suffice.
		 */
		msix_addr_save = octeontx_read64(vector_ptr);
		/* Enable SECVEC to make the vector secure */
		octeontx_write64(vector_ptr, CAVM_GICD_SETSPI_SR | 1);
		vector_ptr += 0x8;
		octeontx_write64(vector_ptr, irq_num);

		/* INTR_PINX_CLEAR vector */
		vector_ptr += 0x8;
		/* Enable SECVEC to make the vector secure */
		octeontx_write64(vector_ptr, CAVM_GICD_CLRSPI_SR | 1);
		vector_ptr += 0x8;
		octeontx_write64(vector_ptr, irq_num);
	} else {
		/* Restore the vector address */
		octeontx_write64(vector_ptr, msix_addr_save);
		vector_ptr += 0x8;
		octeontx_write64(vector_ptr, (1ULL << 32));
		vector_ptr += 0x8;
		/* INTR_PINX_CLEAR vector */
		octeontx_write64(vector_ptr, msix_addr_save);
		vector_ptr += 0x8;
		octeontx_write64(vector_ptr, (1ULL << 32));
	}
}

void plat_gpio_irq_setup(void)
{
	gpio_intercept_interrupts = 1;

	if (octeontx_register_gpio_handlers() < 0)
		ERROR("Failed to register GPIO intercept handlers\n");
}

/*
 * This function configures IOBN to grant access for GTI to secure memory
 */
void plat_gti_access_secure_memory_setup(int do_secure)
{
	/*
	 * dev_idx - Stream's dev number (stream_id<7:0>)
	 * bus_idx - Stream's bus number (stream_id<15:8>).
	 */
	uint64_t bus_idx = (CAVM_PCC_DEV_CON_E_GTI >> 8) & 0xFF;
	uint64_t domain_idx = (CAVM_PCC_DEV_CON_E_GTI >> 16) & 0xFF;
	uint64_t dev_idx = (CAVM_PCC_DEV_CON_E_GTI >> 3) & 0xFF;

	cavm_iobnx_domx_busx_streams_t iobn_domx_busx_stream;
	cavm_iobnx_domx_devx_streams_t iobn_domx_devx_stream;

	for (int iobn_idx = 0; iobn_idx < plat_octeontx_scfg->iobn_count;
				iobn_idx++) {

		iobn_domx_busx_stream.u = CSR_READ(
			CAVM_IOBNX_DOMX_BUSX_STREAMS(iobn_idx,
			domain_idx, bus_idx));

		if (do_secure) {
			iobn_domx_busx_stream.s.strm_nsec = 0;
			iobn_domx_busx_stream.s.phys_nsec = 0;
			CSR_WRITE(CAVM_IOBNX_DOMX_BUSX_STREAMS(
				iobn_idx, domain_idx, bus_idx),
				iobn_domx_busx_stream.u);
		}

		iobn_domx_devx_stream.u = CSR_READ(
			CAVM_IOBNX_DOMX_DEVX_STREAMS(iobn_idx,
			domain_idx, dev_idx));

		if (do_secure) {
			iobn_domx_devx_stream.s.strm_nsec = 0;
			iobn_domx_devx_stream.s.phys_nsec = 0;
			CSR_WRITE(CAVM_IOBNX_DOMX_DEVX_STREAMS(
				iobn_idx, domain_idx, dev_idx),
				iobn_domx_devx_stream.u);
		}
	}
}

void plat_gti_irq_setup(int core)
{
	uint64_t vector_ptr;
	int intr_pinx;

	/* Get the offset of interrupt vector for this core */
	intr_pinx = CAVM_GTI_INT_VEC_E_CORE_WDOGX_INT(core);

	/* INTR_PINX vector address */
	vector_ptr = CAVM_GTI_BAR_E_GTI_PF_BAR4 + (intr_pinx << 4);

	/* Enable SECVEC to make the vector secure */
	octeontx_write64(vector_ptr, CAVM_GICD_SETSPI_SR | 1);
	vector_ptr += 0x8;
	octeontx_write64(vector_ptr, GTI_CWD_SPI_IRQ(core));
}

/*
 * This API should be provided by each [cn20k] platform that requires
 * individual IOBN security settings.
 *
 * During IOBN initialization, this API is invoked to retrieve any
 * platform-specific stream settings which need to be configured.
 *
 * The family-specific stream security settings (i.e. common across platforms)
 * are provided by 'octeontx_init_iobn()'.
 *
 * Please refer to 'octeontx_init_iobn()'.
 *
 * On entry,
 *   void
 *
 * Returns,
 *   array of 'struct cn20k'
 *   size of array (via ptr)
 */
struct cn20k_stream_security_setting *plat_get_cn20k_stream_security(int *count)
{
	static struct cn20k_stream_security_setting stream_settings[] = {
		/* no platform-specific stream security settings */
	};

	*count = ARRAY_SIZE(stream_settings);
	return stream_settings;
}
