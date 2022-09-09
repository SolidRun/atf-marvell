/*
 * Copyright (c) 2016 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

/* GIC driver for OcteonTX (CN8xxx and CN9xxx) */

#include <arch.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <gicv3_setup.h>
#include <octeontx_utils.h>
#include <platform_irqs_def.h>
#if defined(PLAT_CN10K_FAMILY)
#include <drivers/arm/gicv3.h>
#include <assert.h>
#include <lib/mmio.h>
#endif

#include "cavm-csrs-gic.h"

#undef GICD_SETSPI_NSR
#undef GICD_CLRSPI_NSR
#undef GICD_SETSPI_SR
#undef GICD_CLRSPI_SR
#undef GICD_TYPER
#undef GICD_IIDR

#include <drivers/arm/gic_common.h>
#include <drivers/arm/gicv3.h>
#include <plat/common/platform.h>
#include <bl31/interrupt_mgmt.h>
#include <octeontx_irqs_def.h>

#ifndef PLAT_RAS_PRI
#define PLAT_RAS_PRI		PLAT_IRQ_PRI
#endif

#if defined(PLAT_CN10K_FAMILY)
#include <plat_cn10k_configuration.h>

/* GIC600-specific register offsets */
#define GICR_PWRR       0x24

/* GICR_PWRR fields */
#define PWRR_RDPD_SHIFT         0
#define PWRR_RDGPD_SHIFT        2
#define PWRR_RDGPO_SHIFT        3

#define PWRR_RDGPD      (1 << PWRR_RDGPD_SHIFT)
#define PWRR_RDGPO      (1 << PWRR_RDGPO_SHIFT)

/* Values to write to GICR_PWRR register to power redistributor */
#define PWRR_ON         (0 << PWRR_RDPD_SHIFT)
#define PWRR_OFF        (1 << PWRR_RDPD_SHIFT)

#undef DEBUG_GICR
#endif

#if IMAGE_BL31
/* The GICv3 driver only needs to be initialized in EL3 */
static uintptr_t rdistif_base_addrs[PLATFORM_CORE_COUNT];

/*
 * Array of interrupts to be configured by GIC driver
 */
static interrupt_prop_t interrupt_array[NUMBER_OF_GIC_INTERRUPTS];

#define ADD_BPHY_PSM_INTERUPTS_TO_ARRAY()

/*
 * Method to initialize all GIC interrupts.
 * Define G0/G1S interrupts via Interrupt type,
 * one of INTR_TYPE_EL3, INTR_TYPE_S_EL1
 */
static void initialize_interrupt_array(interrupt_prop_t *intr_array)
{
	int i, idx = 0;

	/* Configure Secure Timer Interrupt */
	intr_array[idx].intr_num = SEC_TIMER_PPI_IRQ;
	intr_array[idx].intr_pri = PLAT_IRQ_PRI;
	intr_array[idx].intr_grp = INTR_TYPE_EL3;
	intr_array[idx].intr_cfg = GIC_INTR_CFG_LEVEL;
	idx++;

	for (i = 0; i < RAS_PPI_IRQS; i++) {
		intr_array[idx].intr_num = RAS_PPI_IRQ(i);
		intr_array[idx].intr_pri = PLAT_RAS_PRI;
		intr_array[idx].intr_grp = INTR_TYPE_EL3;
		intr_array[idx].intr_cfg = GIC_INTR_CFG_EDGE;
		idx++;
	}

	/* If present, configure SDEI SGI (i.e. SDEI EVENT0) */
#if SDEI_SGI_IRQS
	/* only one should be present */
	CASSERT(SDEI_SGI_IRQS == 1, bad_sdei_sgi_irqs_count);
	/* must be a valid intr */
	CASSERT(SDEI_SGI_IRQ >= 0, bad_sdei_sgi_irq_value);
	intr_array[idx].intr_num = SDEI_SGI_IRQ;
	intr_array[idx].intr_pri = PLAT_SDEI_NORMAL_PRI;
	intr_array[idx].intr_grp = INTR_TYPE_EL3;
	/* SGI's have edge-triggered behavior (from GIC v3 spec) */
	intr_array[idx].intr_cfg = GIC_INTR_CFG_EDGE;
	idx++;
#endif

	/* Configure GPIO IRQs */
	for (i = 0; i < GPIO_SPI_IRQS; i++) {
		intr_array[idx].intr_num = GPIO_SPI_IRQ(i);
		intr_array[idx].intr_pri = PLAT_IRQ_PRI;
		intr_array[idx].intr_grp = INTR_TYPE_EL3;
		intr_array[idx].intr_cfg = GIC_INTR_CFG_EDGE;
		idx++;
	}

	/* Configure BPHY PSM IRQs */
	for (i = 0; i < BPHY_PSM_IRQS_NUMBER; i++) {
		intr_array[idx].intr_num = BPHY_PSM_IRQ(i);
		intr_array[idx].intr_pri = PLAT_IRQ_PRI;
		intr_array[idx].intr_grp = INTR_TYPE_EL3;
		intr_array[idx].intr_cfg = GIC_INTR_CFG_EDGE;
		idx++;
	}

	/* Configure CWD GTI IRQs */
	for (i = 0; i < GTI_CWD_SPI_IRQS; i++) {
		intr_array[idx].intr_num = GTI_CWD_SPI_IRQ(i);
		intr_array[idx].intr_pri = PLAT_IRQ_PRI;
		intr_array[idx].intr_grp = INTR_TYPE_EL3;
		intr_array[idx].intr_cfg = GIC_INTR_CFG_EDGE;
		idx++;
	}

	for (i = 0; i < MDC_SPI_IRQS; i++) {
		intr_array[idx].intr_num = MDC_SPI_IRQ(i);
		intr_array[idx].intr_pri = PLAT_RAS_PRI;
		intr_array[idx].intr_grp = INTR_TYPE_EL3;
		intr_array[idx].intr_cfg = GIC_INTR_CFG_EDGE;
		idx++;
	}

	for (i = 0; i < TAD_SPI_IRQS; i++) {
		intr_array[idx].intr_num = TAD_SPI_IRQ(i);
		intr_array[idx].intr_pri = PLAT_RAS_PRI;
		intr_array[idx].intr_grp = INTR_TYPE_EL3;
		intr_array[idx].intr_cfg = GIC_INTR_CFG_EDGE;
		idx++;
	}

	for (i = 0; i < DSS_SPI_IRQS; i++) {
		intr_array[idx].intr_num = DSS_SPI_IRQ(i);
		intr_array[idx].intr_pri = PLAT_RAS_PRI;
		intr_array[idx].intr_grp = INTR_TYPE_EL3;
		intr_array[idx].intr_cfg = GIC_INTR_CFG_EDGE;
		idx++;
	}

	for (i = 0; i < MCC_SPI_IRQS; i++) {
		intr_array[idx].intr_num = MCC_SPI_IRQ(i);
		intr_array[idx].intr_pri = PLAT_RAS_PRI;
		intr_array[idx].intr_grp = INTR_TYPE_EL3;
		intr_array[idx].intr_cfg = GIC_INTR_CFG_EDGE;
		idx++;
	}

	for (i = 0; i < LMC_SPI_IRQS; i++) {
		intr_array[idx].intr_num = LMC_SPI_IRQ(i);
		intr_array[idx].intr_pri = PLAT_RAS_PRI;
		intr_array[idx].intr_grp = INTR_TYPE_EL3;
		intr_array[idx].intr_cfg = GIC_INTR_CFG_EDGE;
		idx++;
	}

	for (i = 0; i < RAS_CORE_SPI_IRQS; i++) {
		intr_array[idx].intr_num = RAS_CORE_SPI_IRQ(i);
		intr_array[idx].intr_pri = PLAT_RAS_PRI;
		intr_array[idx].intr_grp = INTR_TYPE_EL3;
		intr_array[idx].intr_cfg = GIC_INTR_CFG_EDGE;
		idx++;
	}
}

static gicv3_driver_data_t octeontx_gic_data = {
	.interrupt_props_num = ARRAY_SIZE(interrupt_array),
	.rdistif_num = PLATFORM_CORE_COUNT,
	.rdistif_base_addrs = rdistif_base_addrs,
#if defined(PLAT_t83) || defined(PLAT_t81)
	/*
	 * T9X can use the generic driver implementation
	 * to obtain the core pos and hence define it only
	 * for T8X platforms
	 */
	.mpidr_to_core_pos = octeontx_calc_core_pos,
#endif
};
#endif

#if defined(PLAT_CN10K_FAMILY)
void octeontx_gic_redistif_probe(uintptr_t *rdistif_addrs,
				unsigned int rdistif_num,
				uintptr_t gicr_base)
{
	unsigned int proc_num;
	uint64_t typer_val;
	uint32_t r_pwrr;
	uintptr_t rdistif_base = gicr_base;

	assert(rdistif_addrs != NULL);

	/*
	 * Turn on the GIC redistibutor before probing the GICR frames.
	 * Iterate over the Redistributor frames and get the base address of each
	 * frame in the gic. Use the "Processor Number" field to index into the
	 * array.
	 */
	do {
		mmio_write_32(rdistif_base + GICR_PWRR, PWRR_ON);
		do {
			r_pwrr = mmio_read_32(rdistif_base + GICR_PWRR);
		} while (((r_pwrr & PWRR_RDGPD) >> PWRR_RDGPD_SHIFT) !=
			((r_pwrr & PWRR_RDGPO) >> PWRR_RDGPO_SHIFT));

		typer_val = mmio_read_64(rdistif_base + GICR_TYPER);
		proc_num = plat_core_pos_by_mpidr(((typer_val >> TYPER_AFF_VAL_SHIFT) & TYPER_AFF_VAL_MASK));

		if (proc_num < rdistif_num) {
			rdistif_addrs[proc_num] = rdistif_base;
#ifdef DEBUG_GICR
			VERBOSE("%s Core %d GICR_TYPER: 0x%llx, GICR Base: 0x%llx\n",
				__func__, proc_num, typer_val, rdistif_base_addrs[proc_num]);
#endif
		}
		rdistif_base += (1U << GICR_PCPUBASE_SHIFT);
	} while ((typer_val & TYPER_LAST_BIT) == 0U);
}

void octeontx_gic_anb_override(void)
{
	uint64_t val = 0;
	/* FIXME!: Need updated GIC CSRs */
#define GIC_CSR_WRITE(addr, value) cavm_csr_write(0, CSR_TYPE_RSL, 0, 8, addr, value)
	/*
	 * Per GIC spec all ITS tables are in the non-secure physical address space.
	 * Configure the AXI-NCB bridge for GIC bypass.
	 */
	val |= 3ull<<14;
	GIC_CSR_WRITE(CAVM_GIC_ANB_REG(CAVM_GIC_ANB_NCBI_P_OVR_OFFSET), val);
	GIC_CSR_WRITE(CAVM_GIC_ANB_REG(CAVM_GIC_ANB_NCBI_NP_OVR_OFFSET), val);
}
#endif

void octeontx_gic_driver_init(void)
{
	/*
	 * The GICv3 driver is initialized in EL3 and does not need
	 * to be initialized again in SEL1. This is because the S-EL1
	 * can use GIC system registers to manage interrupts and does
	 * not need GIC interface base addresses to be configured.
	 */
#if IMAGE_BL31
#if !(defined(PLAT_CN10K_FAMILY))
	/* ERRATUM GIC-28835 */
	if (IS_OCTEONTX_PASS(read_midr(), T83PARTNUM, 1, 0)) {
	        union cavm_gic_cfg_ctlr cfg_ctlr;
	        cfg_ctlr.u = CSR_READ(CAVM_GIC_CFG_CTLR);
	        cfg_ctlr.s.dis_cpu_if_load_balancer = 1;
	        CSR_WRITE(CAVM_GIC_CFG_CTLR, cfg_ctlr.u);
	}
#endif
	/* Initialize array of interrupts to be configured by GIC driver */
	initialize_interrupt_array(interrupt_array);
	octeontx_gic_data.interrupt_props = interrupt_array;

#if defined(PLAT_CN10K_FAMILY)
	octeontx_gic_redistif_probe(octeontx_gic_data.rdistif_base_addrs,
			octeontx_gic_data.rdistif_num,
			GIC_PF_BAR4);
	octeontx_gic_data.gicd_base = CAVM_GIC_BAR_E_GIC_PF_BAR0;
	octeontx_gic_data.gicr_base = 0ULL;
	gicv3_driver_init(&octeontx_gic_data);
	octeontx_gic_data.gicr_base = GIC_PF_BAR4;
	/* To fix warning in asim for gic-anb register access */
	if (!cavm_is_platform(PLATFORM_ASIM))
		octeontx_gic_anb_override();
#else
	octeontx_gic_data.gicd_base = CAVM_GIC_BAR_E_GIC_PF_BAR0;
	octeontx_gic_data.gicr_base = GIC_PF_BAR4;
	gicv3_driver_init(&octeontx_gic_data);
#endif
#endif
}

/******************************************************************************
 * ARM common helper to initialize the GIC. Only invoked by BL31
 *****************************************************************************/
void octeontx_gic_init(void)
{
	gicv3_distif_init();
	gicv3_rdistif_init(plat_my_core_pos());
	gicv3_cpuif_enable(plat_my_core_pos());
}

/******************************************************************************
 * Cavium common helper to initialize the per-cpu redistributor interface in GICv3
 *****************************************************************************/
void octeontx_gic_pcpu_init(void)
{
	gicv3_rdistif_init(plat_my_core_pos());
}

/******************************************************************************
 * Cavium common helper to enable the GIC CPU interface
 *****************************************************************************/
void octeontx_gic_cpuif_enable(void)
{
	gicv3_cpuif_enable(plat_my_core_pos());
}

/******************************************************************************
 * Cavium common helper to disable the GIC CPU interface
 *****************************************************************************/
void octeontx_gic_cpuif_disable(void)
{
	gicv3_cpuif_disable(plat_my_core_pos());
}

uintptr_t octeontx_gic_get_redistr_base(void)
{
	return rdistif_base_addrs[plat_my_core_pos()];
}
