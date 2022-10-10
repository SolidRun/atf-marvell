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

#include <debug.h>
#include <bl31/interrupt_mgmt.h>
#include <plat/common/platform.h>
#include <platform_def.h>
#include <platform_setup.h>
#include <platform_irqs_def.h>
#include <octeontx_common.h>
#include <octeontx_ecam.h>
#include <bphy.h>
#include <gpio_octeontx.h>
#include <octeontx_utils.h>
#include <octeontx_plat_configuration.h>
#include <plat_cn10k_configuration.h>
#include <plat_octeontx.h>
#include <octeontx_irqs_def.h>
#include <plat_scfg.h>
#include <qlm_cn10k.h>
#include <plat_board_cfg.h>
#include <assert.h>

/* This file map memory for different blocks so it needs all csrs definitions */
#include "cavm-csrs.h"
#include "cavm-csrs-tad_cmn.h"

#define CAVM_BPHY_BAR_E_BPHY_PF_BAR0_MAP_SIZE	(4 * 4096)

#define BPHY_PSM_GPINT_NS_IRQS		2
#define CAVM_BPHY_BUS_NUM		7
#define CAVM_BPHY_DEV_NUM		0
#define CAVM_BPHY_FUN_NUM		0

#define NCB_COUNT			7

/*
 * List of SPI IRQs to convert to Non-Secure
 */
struct plat_ns_irq {
	uint64_t vector;
	uint32_t irq;
};

/* Update the number of entries in plat_ns_irq_list if the list is updated */
static struct plat_ns_irq plat_ns_irq_list[BPHY_PSM_GPINT_NS_IRQS];

static uint64_t msix_addr_save;

int plat_octeontx_get_ecams_count(void)
{
	return 1;
}

int plat_octeontx_get_iobn_count(void)
{
	return 5;
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
	return 0;
}

int plat_octeontx_get_rpm_count(void)
{
	return 4;
}

int plat_octeontx_get_pem_count(void)
{
	return 2;
}

int plat_octeontx_get_gserm_count(void)
{
	return 7;
}

int plat_octeontx_get_portm_count(void)
{
	return 28;
}

int plat_octeontx_get_gserp_count(void)
{
	return 1;
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

/* Return the GSERM that provides termination for the REF_CLK. */
int plat_get_refclk_term_gserm_num(int refclk_idx)
{
	int gserm;

	/* REF_CLK0 & 1 (PCIe) are not terminated by a GSERM */
	if (refclk_idx == 2)
		gserm = 0;
	else
		gserm = -1;

	return gserm;
}

/* Return number of lanes available for different GSERM.
 */
int plat_get_max_lane_num(int gserm)
{
	return 4;
}

/* Return number of lanes available for different PORTMS.
 */
int plat_portm_get_max_lane_cnt(int portm_idx)
{
	int lanes = 0;

	switch (portm_idx) {
	case 0:
	case 4:
	case 8:
	case 16:
		lanes = 4;
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 9:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 17:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
		lanes = 1;
		break;
	case 2:
	case 6:
	case 10:
	case 18:
		lanes = 2;
		break;

	default:
		lanes = 0;
		break;
	}
	return lanes;
}

/* Return the RPM<->GSERM mapping */
int plat_get_rpm_idx(int gserm, int lane)
{
	if (gserm == 4)
		return 3;
	else if (gserm <= 2)
		return gserm;

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

	attr = MT_DEVICE | MT_RW | MT_SECURE;
	add_map_record(CAVM_CPC_RAM_MEMX(0),
		       cpc_ram_size, attr);

	/* Map required XCP memory region for doorbell registers */
	add_map_record(CAVM_XCP_BAR_E_XCPX_PF_BAR0(CAVM_CPC_XCP_MAP_E_SCP),
		       CAVM_XCP_BAR_E_XCPX_PF_BAR0_SIZE, attr);
}

void plat_add_mmio()
{
	uint64_t base;
	unsigned long attr;
	int i, device_type_count;
	cavm_tad_cmn_const_t tcc = { .u = CSR_READ(CAVM_TAD_CMN_CONST) };

#if defined(IMAGE_BL31)
	mmap_add_region(WORK_BUFFER_BASE,
	WORK_BUFFER_BASE,
	WORK_BUFFER_MAX_SIZE,
		MT_RW | MT_SECURE | MT_DEVICE);
#endif

	attr = MT_DEVICE | MT_RW | MT_SECURE;
	add_map_record(CAVM_RST_BAR_E_RST_PF_BAR0, CAVM_RST_BAR_E_RST_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_RST_BAR_E_RST_PF_BAR2, CAVM_RST_BAR_E_RST_PF_BAR2_SIZE, attr);
	add_map_record(CAVM_RST_BAR_E_RST_PF_BAR4, CAVM_RST_BAR_E_RST_PF_BAR4_SIZE, attr);
	add_map_record(CAVM_MRML_BAR_E_MRML_PF_BAR0, CAVM_MRML_BAR_E_MRML_PF_BAR0_SIZE, attr);

	add_map_record(CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0,
		       CAVM_TAD_CMN_BAR_E_TAD_CMN_PF_BAR0_SIZE, attr);
	for (i = 0; i < tcc.s.num_tads; i++) {
		add_map_record(CAVM_TAD_BAR_E_TADX_PF_BAR0(i),
				CAVM_TAD_BAR_E_TADX_PF_BAR0_SIZE, attr);
#if IMAGE_BL31 && RAS_EXTENSION
		add_map_record(CAVM_TAD_BAR_E_TADX_PF_BAR4(i),
				CAVM_TAD_BAR_E_TADX_PF_BAR4_SIZE, attr);
#endif
	}

#if IMAGE_BL31 && RAS_EXTENSION
	for (i = 0; i < MAX_CHANNELS; i++) {
		add_map_record(CAVM_DSS_BAR_E_DSSX_PF_BAR0(i),
			CAVM_DSS_BAR_E_DSSX_PF_BAR0_SIZE, attr);
		add_map_record(CAVM_DSS_BAR_E_DSSX_PF_BAR4(i),
			CAVM_DSS_BAR_E_DSSX_PF_BAR4_SIZE, attr);
	}
#endif

	add_map_record(CAVM_FUS_BAR_E_FUS_PF_BAR0,
		       CAVM_FUS_BAR_E_FUS_PF_BAR0_SIZE, attr);

	add_map_record(CAVM_EMMC_BAR_E_EMMCX_PF_BAR0(0), CAVM_EMMC_BAR_E_EMMCX_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_EMMC_BAR_E_EMMCX_PF_BAR4(0), CAVM_EMMC_BAR_E_EMMCX_PF_BAR4_SIZE, attr);

	add_map_record(CAVM_MIO_EMM_BAR_E_MIO_EMM_PF_BAR0, CAVM_MIO_EMM_BAR_E_MIO_EMM_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_MIO_EMM_BAR_E_MIO_EMM_PF_BAR4, CAVM_MIO_EMM_BAR_E_MIO_EMM_PF_BAR4_SIZE, attr);
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
#if 0
	add_map_record(CAVM_GIC_BAR_E_GIC_PF_BAR2, CAVM_GIC_BAR_E_GIC_PF_BAR2_SIZE, attr);
	add_map_record(GIC_PF_BAR4, GIC_PF_BAR4_SIZE, attr);
#endif

	add_map_record(CAVM_BPHY_BAR_E_BPHY_PF_BAR0, CAVM_BPHY_BAR_E_BPHY_PF_BAR0_MAP_SIZE, attr);

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
	for (i = 0; i < device_type_count; i++) {
		add_map_record(CAVM_GSERM_BAR_E_GSERMX_PF_BAR0(i),
			       CAVM_GSERM_BAR_E_GSERMX_PF_BAR0_SIZE, attr);
		add_map_record(CAVM_GSERM_BAR_E_GSERMX_PF_BAR4(i),
			       CAVM_GSERM_BAR_E_GSERMX_PF_BAR4_SIZE, attr);
	}

	/* Also map broadcast GSERM */
	add_map_record(CAVM_GSERM_BAR_E_GSERMX_PF_BAR0(15),
		CAVM_GSERM_BAR_E_GSERMX_PF_BAR0_SIZE, attr);
	add_map_record(CAVM_GSERM_BAR_E_GSERMX_PF_BAR4(15),
		CAVM_GSERM_BAR_E_GSERMX_PF_BAR4_SIZE, attr);

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
		add_map_record(CAVM_IOBN_BAR_E_IOBNX_PF_BAR0(i), CAVM_IOBN_BAR_E_IOBNX_PF_BAR0_SIZE, attr);
		add_map_record(CAVM_IOBN_BAR_E_IOBNX_PF_BAR4(i), CAVM_IOBN_BAR_E_IOBNX_PF_BAR4_SIZE, attr);
	}

	for (i = 0; i < NCB_COUNT; ++i)
		add_map_record(CAVM_NCB_BAR_E_NCBX_PF_BAR0(i), CAVM_NCB_BAR_E_NCBX_PF_BAR0_SIZE, attr);

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

	for (i = 0; i < PLATFORM_CORE_COUNT; i++) {
		add_map_record(CAVM_APA_BAR_E_APAX_PF_BAR0(i),
				CAVM_APA_BAR_E_APAX_PF_BAR0_SIZE, attr);
	}

	add_map_record(CAVM_SAM_BAR_E_SAM_PF_BAR0,
				CAVM_SAM_BAR_E_SAM_PF_BAR0_SIZE, attr);
	plat_map_cpc_mem();


	add_map_record(CAVM_MDC_BAR_E_MDC_PF_BAR4,
		       CAVM_MDC_BAR_E_MDC_PF_BAR4_SIZE, attr);
	/*
	 * Map temperature sensor used by gserm gsern code.
	 */
	add_map_record(CAVM_TSN_BAR_E_TSNX_PF_BAR0(9),
		       CAVM_TSN_BAR_E_TSNX_PF_BAR0_SIZE, attr);

	/*
	 * Map random number generator for gser internal
	 * get random function
	 */
	add_map_record(CAVM_RNM_BAR_E_RNM_VF_BAR0,
		       CAVM_RNM_BAR_E_RNM_VF_BAR0_SIZE, attr);
	add_map_record(CAVM_RNM_BAR_E_RNM_PF_BAR0,
		       CAVM_RNM_BAR_E_RNM_PF_BAR0_SIZE, attr);

	/*
	 * Map DSU UB for core power management
	 * Errata: IPBUPERS-151, skip the reserved register space.
	 */
	for (int core_id = 0; core_id < 18; core_id++) {
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

	/*
	 * Shared memory configuration.
	 * Map additional memory used by RVU/SFP mgmt(shared between AP & MCP).
	 * and ethernet link mgmt (shared between AP and ECP)
	 * Do not use add_map_record, it will round size up
	 */
	mmap_add_region(RVU_MEM_BASE, RVU_MEM_BASE,
			RVU_MEM_SIZE, (MT_MEMORY | MT_RW | MT_NS));

	mmap_add_region(SFP_SHMEM_BASE, SFP_SHMEM_BASE,
			SFP_SHMEM_SIZE, (MT_MEMORY | MT_RW | MT_NS));

	mmap_add_region(ETH_LINK_SHMEM_BASE, ETH_LINK_SHMEM_BASE,
			ETH_LINK_SHMEM_SIZE, (MT_MEMORY | MT_RW | MT_NS));

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

void plat_bphy_irq_setup(void)
{
	uint32_t irq;

	for (irq = 0; irq < BPHY_PSM_GPINT_NS_IRQS; irq++) {
		plat_ns_irq_list[irq].vector = CAVM_PSM_MSIX_VECX_ADDR(CAVM_PSM_INT_VEC_E_GPINTX(irq));
		plat_ns_irq_list[irq].irq = BPHY_PSM_GPINT_IRQ(irq);
	}

	if (cavm_register_bphy_intr_handlers() < 0)
		ERROR("Failed to register BPHY interrupt handlers\n");
}

void plat_set_bphy_psm_msix_vectors(int msix_num, int irq_num, int enable)
{
	volatile struct msix_cap *msicap = NULL;
	uint64_t vector_ptr, config_base;
	struct pcie_config *pconfig;
	uint8_t cap_pointer;

	config_base = CAVM_ECAM_BAR_E_ECAMX_PF_BAR2(0) +
		  (CAVM_BPHY_BUS_NUM << 20) + (CAVM_BPHY_DEV_NUM << 15) + (CAVM_BPHY_FUN_NUM << 12);
	pconfig = (struct pcie_config *)config_base;
	cap_pointer = pconfig->cap_pointer;

	while (cap_pointer) {
		msicap = (struct msix_cap *)(config_base + cap_pointer);
		if (msicap->cap_ID == ECAM_PCIEID_MSIX_CAP_ID) {
			msicap->messagecontrol |= (1 << 15);
			break;
		}
		cap_pointer = msicap->next_pointer;
	}

	if (cap_pointer == 0) {
		ERROR("MSI-X cap header not found !\n");
		return;
	}

	vector_ptr = CAVM_PSM_MSIX_VECX_ADDR(
				CAVM_PSM_INT_VEC_E_GPINTX(0) + msix_num);

	if (enable) {
		octeontx_write64(vector_ptr, CAVM_GICD_SETSPI_SR | 1);
		vector_ptr += 8;
		octeontx_write64(vector_ptr, irq_num);
	} else {
		octeontx_write64(vector_ptr, CAVM_GICD_SETSPI_NSR);
		vector_ptr += 8;
		octeontx_write64(vector_ptr, irq_num);
	}
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
 * Check if an IRQ is marked Non-secure
 *
 * This is for SPI IRQs that are listed in platform_def.h which are originally
 * for EL3 but some might be want to use in Non-Secure software.
 *
 * Useful where there are more vectors in a device and in that some need to be
 * handled in Non-Secure software.
 *
 */
int plat_is_irq_ns(uint32_t irq)
{
	int i, count;

	count = ARRAY_SIZE(plat_ns_irq_list);

	for (i = 0; i < count; i++) {
		if (irq == plat_ns_irq_list[i].irq)
			return 1;
	}

	return 0;
}

static void update_msix_vector(uint32_t irq)
{
	uint64_t vector_ptr = 0;
	uint32_t i, count;

	count = ARRAY_SIZE(plat_ns_irq_list);
	for (i = 0; i < count; i++) {
		if (irq == plat_ns_irq_list[i].irq) {
			vector_ptr = plat_ns_irq_list[i].vector;
			break;
		}
	}

	if (!vector_ptr)
		return;

	octeontx_write64(vector_ptr, CAVM_GICD_SETSPI_NSR);
	vector_ptr += 8;
	octeontx_write64(vector_ptr, irq);
}

/*
 * Disable the secure SPI IRQ in EL3
 */
void plat_disable_secure_irq(uint32_t irq)
{
	plat_ic_disable_interrupt(irq);
	plat_ic_set_interrupt_type(irq, INTR_TYPE_NS);

	/* update the msix vector corresponding to this irq */
	update_msix_vector(irq);
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
		{ CAVM_PCC_DEV_CON_E_BPHY, 1, 1 /*stream */, 0 /* phys */},
	};

	*count = ARRAY_SIZE(stream_settings);
	return stream_settings;
}
