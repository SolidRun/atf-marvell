/*
 * Copyright (C) 2020 Marvell International Ltd.
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
#include <octeontx_plat_configuration.h>
#include <plat_cn10k_configuration.h>
#include <plat_octeontx.h>
#include <octeontx_irqs_def.h>
#include <plat_scfg.h>
#include <qlm/qlm_cn10k.h>
#include <plat_board_cfg.h>
#include <assert.h>

/* This file map memory for different blocks so it needs all csrs definitions */
#include "cavm-csrs.h"

static uint64_t msix_addr_save;

int plat_octeontx_get_ecams_count(void)
{
	return 1;
}

int plat_octeontx_get_iobn_count(void)
{
	return 3;
}

int plat_octeontx_is_lmc_enabled(unsigned lmc)
{
	return 0;
}

/*******************************************************************************
 * Setup secondary CPU JUMP address from RESET
 ******************************************************************************/
void plat_cn10k_set_secondary_cpu_jump_addr(int core_id, uint64_t entrypoint_addr)
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

int plat_octeontx_get_rpm_count(void)
{
	return 3;
}

int plat_octeontx_get_pem_count(void)
{
	return 6;
}

int plat_octeontx_get_gserm_count(void)
{
	return 3;
}

int plat_octeontx_get_gserp_count(void)
{
	return 3;
}

int plat_octeontx_get_uaa_count(void)
{
	return 8;
}

int plat_octeontx_get_rvu_count(void)
{
	return MAX_RVU_PFS;
}

int plat_octeontx_get_nix_count(void)
{
	return 1;
}

int plat_octeontx_get_mcc_count(void)
{
	return MAX_MCC;
}

/* Return number of lanes available for different QLMs.
 * QLM 0 : starts at GSERM0
 */
int plat_get_max_lane_num(int qlm)
{
	int lanes = 0;

	switch (qlm) {
	case 0:
		lanes = 4;
		break;
	case 1:
	case 2:
		if (plat_get_altpkg() == CN10KA_PKG)
			lanes = 1;
		else
			lanes = 0;
		break;
	default:
		lanes = 0;
		break;
	}
	return lanes;
}

/* Return the RPM<->QLM mapping */
int plat_get_rpm_idx(int qlm)
{
	if (qlm < 3)
		return qlm;

	return -1;
}

/*
 * BDK uses CPC RAM memory as key memory.
 * This is indicated by storing the ROTPK at TRUST-ROT-ADDR,
 * which is in range of CPC_RAM_MEMX.
 * Moreover, ATF needs to have access to SCP-AP Secure0 mailbox.
 * Map required memory as MT_RW.
 */
void plat_map_cpc_mem()
{
	cavm_cpc_const_t cpc_const;
	unsigned long cpc_ram_size, attr;

	/* Calculate CPC RAM size based on a number of 16KB memory regions */
	cpc_const.u = CSR_READ(CAVM_CPC_CONST);
	cpc_ram_size = cpc_const.s.mem_regions * 0x4000;

	attr = MT_MEMORY | MT_RW | MT_SECURE;
	add_map_record(CAVM_CPC_RAM_MEMX(0),
		       cpc_ram_size, attr);

	/* Map required XCP memory region for doorbell registers */
	add_map_record(CAVM_XCP_BAR_E_XCPX_PF_BAR0(CAVM_CPC_XCP_MAP_E_SCP),
		       CAVM_XCP_BAR_E_XCPX_PF_BAR0_SIZE, attr);
}

void plat_add_mmio()
{
	unsigned long attr;
	int i, device_type_count;

	attr = MT_DEVICE | MT_RW | MT_SECURE;
	add_map_record(CAVM_RST_BAR_E_RST_PF_BAR0, CAVM_RST_BAR_E_RST_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_RST_BAR_E_RST_PF_BAR2, CAVM_RST_BAR_E_RST_PF_BAR2_SIZE, attr);
	add_map_record(CAVM_RST_BAR_E_RST_PF_BAR4, CAVM_RST_BAR_E_RST_PF_BAR4_SIZE, attr);

	add_map_record(CAVM_FUS_BAR_E_FUS_PF_BAR0,
		       CAVM_FUS_BAR_E_FUS_PF_BAR0_SIZE, attr);

	add_map_record(CAVM_EMMC_BAR_E_EMMCX_PF_BAR0(0), CAVM_EMMC_BAR_E_EMMCX_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_EMMC_BAR_E_EMMCX_PF_BAR4(0), CAVM_EMMC_BAR_E_EMMCX_PF_BAR4_SIZE, attr);

	add_map_record(CAVM_MIO_EMM_BAR_E_MIO_EMM_PF_BAR0, CAVM_MIO_EMM_BAR_E_MIO_EMM_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_MIO_EMM_BAR_E_MIO_EMM_PF_BAR4, CAVM_MIO_EMM_BAR_E_MIO_EMM_PF_BAR4_SIZE, attr);
#if ENABLE_ATTESTATION_SERVICE
	add_map_record(CAVM_RNM_BAR_E_RNM_PF_BAR0_CN9,
		       CAVM_RNM_BAR_E_RNM_PF_BAR0_CN9_SIZE, attr);
	add_map_record(CAVM_RNM_BAR_E_RNM_VF_BAR0_CN9,
		       CAVM_RNM_BAR_E_RNM_VF_BAR0_CN9_SIZE, attr);
#endif

	device_type_count = plat_octeontx_get_mpi_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CAVM_MPI_BAR_E_MPIX_PF_BAR0(i), CAVM_MPI_BAR_E_MPIX_PF_BAR0_SIZE, attr);
		add_map_record(CAVM_MPI_BAR_E_MPIX_PF_BAR4(i), CAVM_MPI_BAR_E_MPIX_PF_BAR4_SIZE, attr);
	}

	add_map_record(CAVM_GIC_BAR_E_GIC_PF_BAR0, CAVM_GIC_BAR_E_GIC_PF_BAR0_SIZE, attr);
#if 0
	add_map_record(CAVM_GIC_BAR_E_GIC_PF_BAR2, CAVM_GIC_BAR_E_GIC_PF_BAR2_SIZE, attr);
	add_map_record(GIC_PF_BAR4, GIC_PF_BAR4_SIZE, attr);
#endif
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

#if 0
	device_type_count = plat_octeontx_get_cpt_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CAVM_CPT_BAR_E_CPTX_PF_BAR0(i), CAVM_CPT_BAR_E_CPTX_PF_BAR0_SIZE, attr);
		add_map_record(CAVM_CPT_BAR_E_CPTX_PF_BAR4(i), CAVM_CPT_BAR_E_CPTX_PF_BAR4_SIZE, attr);
		add_map_record(CAVM_CPT_BAR_E_CPTX_VFX_BAR0(i, 0), 64*CAVM_CPT_BAR_E_CPTX_VFX_BAR0_SIZE, attr);
		add_map_record(CAVM_CPT_BAR_E_CPTX_VFX_BAR4(i, 0), 64*CAVM_CPT_BAR_E_CPTX_VFX_BAR4_SIZE, attr);
	}
#endif

	device_type_count = plat_octeontx_get_pem_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CAVM_PEM_BAR_E_PEMX_PF_BAR0(i), CAVM_PEM_BAR_E_PEMX_PF_BAR0_SIZE, attr);
		add_map_record(CAVM_PEM_BAR_E_PEMX_PF_BAR4(i), CAVM_PEM_BAR_E_PEMX_PF_BAR4_SIZE, attr);
	}

	device_type_count = plat_octeontx_get_gserm_count();
	for (i = 0; i < device_type_count; i++)
		add_map_record(CAVM_GSERM_BAR_E_GSERMX_PF_BAR0(i),
			       CAVM_GSERM_BAR_E_GSERMX_PF_BAR0_SIZE, attr);

	device_type_count = plat_octeontx_get_rpm_count();
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CAVM_RPM_BAR_E_RPMX_PF_BAR0(i),
			       CAVM_RPM_BAR_E_RPMX_PF_BAR0_SIZE, attr);
		add_map_record(CAVM_RPM_BAR_E_RPMX_PF_BAR4(i),
			       CAVM_RPM_BAR_E_RPMX_PF_BAR4_SIZE, attr);
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
		add_map_record(ECAM_PF_BAR2(i), CAVM_ECAM_BAR_E_ECAMX_PF_BAR2_SIZE, attr);
	}
	device_type_count = plat_octeontx_get_iobn_count();
	for (i = 0; i < device_type_count; ++i) {
		add_map_record(CAVM_IOBN_BAR_E_IOBNX_PF_BAR0(i), CAVM_IOBN_BAR_E_IOBNX_PF_BAR0_SIZE , attr);
		add_map_record(CAVM_IOBN_BAR_E_IOBNX_PF_BAR4(i), CAVM_IOBN_BAR_E_IOBNX_PF_BAR4_SIZE, attr);
	}

	add_map_record(CAVM_RVU_BAR_E_RVU_PFX_BAR0(0), CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE, attr);
	device_type_count = plat_octeontx_get_rvu_count();
	for (i = 0; i < device_type_count; ++i)
		add_map_record(CAVM_RVU_BAR_E_RVU_PFX_FUNCX_BAR2(i, 0), CAVM_RVU_BAR_E_RVU_PFX_FUNCX_BAR2_SIZE, attr);

	/* Add regions for required for RVU init */
	add_map_record(CAVM_RVU_BAR_E_RVU_PFX_BAR0(0) +
				CAVM_RVU_BLOCK_ADDR_E_NIXX(0) * CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE,
				CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE, attr);
	add_map_record(CAVM_RVU_BAR_E_RVU_PFX_BAR0(0) +
				CAVM_RVU_BLOCK_ADDR_E_NPA * CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE,
				CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE, attr);
	add_map_record(CAVM_RVU_BAR_E_RVU_PFX_BAR0(0) +
				CAVM_RVU_BLOCK_ADDR_E_SSO * CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE,
				CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE, attr);
	add_map_record(CAVM_RVU_BAR_E_RVU_PFX_BAR0(0) +
				CAVM_RVU_BLOCK_ADDR_E_SSOW * CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE,
				CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE, attr);
	add_map_record(CAVM_RVU_BAR_E_RVU_PFX_BAR0(0) +
				CAVM_RVU_BLOCK_ADDR_E_TIM * CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE,
				CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE, attr);
	add_map_record(CAVM_RVU_BAR_E_RVU_PFX_BAR0(0) +
				CAVM_RVU_BLOCK_ADDR_E_CPTX(0) * CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE,
				CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE, attr);
	add_map_record(CAVM_RVU_BAR_E_RVU_PFX_BAR0(0) +
				CAVM_RVU_BLOCK_ADDR_E_NDCX(0) * CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE,
				CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE, attr);
	add_map_record(CAVM_RVU_BAR_E_RVU_PFX_BAR0(0) +
				CAVM_RVU_BLOCK_ADDR_E_NDCX(1) * CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE,
				CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE, attr);
	add_map_record(CAVM_RVU_BAR_E_RVU_PFX_BAR0(0) +
				CAVM_RVU_BLOCK_ADDR_E_NDCX(2) * CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE,
				CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE, attr);

	add_map_record(CAVM_SMI_BAR_E_SMI_PF_BAR0,
				CAVM_SMI_BAR_E_SMI_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_RVU_BAR_E_RVU_PFX_BAR0(0) +
				CAVM_RVU_BLOCK_ADDR_E_APR * CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE,
				CAVM_RVU_BAR_E_RVU_PFX_BAR0_SIZE, attr);

	for (int i = 0; i < 24; i++) {
		add_map_record(CAVM_APA_BAR_E_APAX_PF_BAR0(i),
				CAVM_APA_BAR_E_APAX_PF_BAR0_SIZE, attr);
	}
	
	add_map_record(CAVM_SAM_BAR_E_SAM_PF_BAR0,
				CAVM_SAM_BAR_E_SAM_PF_BAR0_SIZE, attr);
	plat_map_cpc_mem();


	add_map_record(CAVM_MDC_BAR_E_MDC_PF_BAR4,
		       CAVM_MDC_BAR_E_MDC_PF_BAR4_SIZE, attr);
	/*
	 * Map temperature sensor used by qlm gsern code.
	 */
	add_map_record(CAVM_TSN_BAR_E_TSNX_PF_BAR0(9),
		       CAVM_TSN_BAR_E_TSNX_PF_BAR0_SIZE, attr);

	/*
	 * Map random number generator for gser intertnal
	 * get random function
	 */
	add_map_record(CAVM_RNM_BAR_E_RNM_VF_BAR0,
				CAVM_RNM_BAR_E_RNM_VF_BAR0_SIZE, attr);

	/*
	 * Map DSU UB for core power management
	 */
	for (int core_id = 0; core_id < 24; core_id++)
		add_map_record(CAVM_DSUUB_BAR_E_DSUUBX_PF_BAR0(core_id),
				CAVM_DSUUB_BAR_E_DSUUBX_PF_BAR0_SIZE, attr);
	/*
	 * Shared memory configuration.
	 * Map additional memory used by RVU/SFP mgmt(shared between AP & MCP).
	 * Do not use add_map_record, it will round size up
	 */
	mmap_add_region(RVU_MEM_BASE, RVU_MEM_BASE,
			RVU_MEM_SIZE, (MT_MEMORY | MT_RW | MT_NS));

	mmap_add_region(SFP_SHMEM_BASE, SFP_SHMEM_BASE,
			SFP_SHMEM_SIZE, (MT_MEMORY | MT_RW | MT_NS));

#ifdef NT_FW_CONFIG
	mmap_add_region(NT_FW_CONFIG_BASE, NT_FW_CONFIG_BASE,
			NT_FW_CONFIG_LIMIT, (MT_MEMORY | MT_RW | MT_NS));
#endif

#ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
	mmap_add_region(SERDES_EYE_DATA_BASE, SERDES_EYE_DATA_BASE,
			SERDES_EYE_DATA_SIZE, (MT_MEMORY | MT_RW | MT_NS));

	mmap_add_region(SERDES_SETTINGS_DATA_BASE, SERDES_SETTINGS_DATA_BASE,
		SERDES_SETTINGS_DATA_SIZE, (MT_MEMORY | MT_RW | MT_NS));

	mmap_add_region(SERDES_PRBS_DATA_BASE, SERDES_PRBS_DATA_BASE,
		SERDES_PRBS_DATA_SIZE, (MT_MEMORY | MT_RW | MT_NS));
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS */
}

void plat_set_gpio_msix_vectors(int gpio_num, int irq_num, int enable)
{
	uint64_t vector_ptr;
	int intr_pinx;

	/* Get the offset of interrupt vector for that GPIO line */
	intr_pinx = CAVM_GPIO_INT_VEC_E_INTR_PINX(gpio_num);

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

		/* INTR_PINX_CLEAR vector */
		vector_ptr += 0x10;
		octeontx_write64(vector_ptr, msix_addr_save);
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
 * This API should be provided by each [cn10k] platform that requires
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
 *   array of 'struct cn10k_stream_security_setting'
 *   size of array (via ptr)
 */
struct cn10k_stream_security_setting *plat_get_cn10k_stream_security(int *count)
{
	static struct cn10k_stream_security_setting stream_settings[] = {
		/* no platform-specific stream security settings */
		{ (CAVM_PCC_DEV_CON_E_PCIERCX(5) + 0x00100), 1, 0 /* strm */, 1 /* phys */ },
	};

	*count = ARRAY_SIZE(stream_settings);
	return stream_settings;
}

/*
 * Used to retrieve the count of ETH devices (an abstraction of RPM)
 *
 * On entry,
 *   void
 *
 * Returns,
 *   count of ETH devices
 */
int plat_octeontx_get_eth_count(void)
{
	return plat_octeontx_get_rpm_count();
}

/*
 * Used to retrieve the count of LMAC devices per ETH
 *
 * On entry,
 *   void
 *
 * Returns,
 *   count of LMAC devices per ETH
 */
int plat_octeontx_get_eth_lmac_count(void)
{
	return MAX_LMAC_PER_RPM;
}

/*
 * Used to retrieve RVU information for an ETH/LMAC combination.
 *
 * On entry,
 *   eth_id:  ETH instance ID (0..n, see 'plat_octeontx_get_eth_count')
 *   lmac_id: LMAC instance ID (0..n, see 'plat_octeontx_get_eth_lmac_count')
 *   num_rvu_vfs:  ptr by which RVU VF count is returned
 *   num_msix_vec: ptr by which MSIX vector count is returned
 *   nix_block:    ptr by which ETH NIX block is returned
 *
 * Returns,
 *   void
 */
void plat_octeontx_get_eth_lmac_rvu_info(unsigned int eth_id,
					 unsigned int lmac_id,
					 int *num_rvu_vfs,
					 int *num_msix_vec,
					 int *nix_block)
{
	rpm_config_t *rpm_cfg;

	assert(eth_id < MAX_RPM);
	assert(lmac_id < MAX_LMAC_PER_RPM);

	rpm_cfg = &plat_octeontx_bcfg->rpm_cfg[eth_id];

	if (nix_block)
		*nix_block = rpm_cfg->nix_block;
	if (num_rvu_vfs)
		*num_rvu_vfs = rpm_cfg->lmac_cfg[lmac_id].num_rvu_vfs;
	if (num_msix_vec)
		*num_msix_vec = rpm_cfg->lmac_cfg[lmac_id].num_msix_vec;
}

/*
 * Used to mark an ETH/LMAC combination as enabled or disabled.
 *
 * On entry,
 *   eth_id:  ETH instance ID (0..n, see 'plat_octeontx_get_eth_count')
 *   lmac_id: LMAC instance ID (0..n, see 'plat_octeontx_get_eth_lmac_count')
 *   enabled: true or false
 *
 * Returns,
 *   void
 */
void plat_octeontx_enable_eth_lmac(unsigned int eth_id, unsigned int lmac_id,
				   int enabled)
{
	assert(eth_id < MAX_RPM);
	assert(lmac_id < MAX_LMAC_PER_RPM);
	plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id].lmac_enable =
		(enabled != 0);
}

/*
 * Indicates if a particular ETH/LMAC combination is enabled.
 *
 * On entry,
 *   eth_id:  ETH instance ID (0..n, see 'plat_octeontx_get_eth_count')
 *   lmac_id: LMAC instance ID (0..n, see 'plat_octeontx_get_eth_lmac_count')
 *
 * Returns,
 *   true if ETH/LMAC combo is enabled, else false
 */
int plat_octeontx_is_enabled_eth_lmac(unsigned int eth_id, unsigned int lmac_id)
{
	rpm_config_t *rpm_cfg;
	int enabled;

	assert(eth_id < MAX_RPM);
	assert(lmac_id < MAX_LMAC_PER_RPM);

	enabled = 0;

	if ((eth_id < MAX_RPM) && (lmac_id < MAX_LMAC_PER_RPM)) {
		rpm_cfg = &plat_octeontx_bcfg->rpm_cfg[eth_id];
		enabled = rpm_cfg->enable &&
			  rpm_cfg->lmac_cfg[lmac_id].lmac_enable;
	}

	return enabled;
}
