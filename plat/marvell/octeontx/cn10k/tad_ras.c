/*
 * Copyright (C) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <debug.h>
#include <lib/extensions/ras.h>
#include <octeontx_common.h>
#include <octeontx_utils.h>
#include <octeontx_irqs_def.h>
#include <arch_helpers.h>
#include <drivers/arm/gicv3.h>
#include <plat_ras.h>
#include <plat/common/platform.h>
#include <bl31/interrupt_mgmt.h>
#include <cavm-csrs-tad.h>
#include <cavm-csrs-tad_cmn.h>
#include <cavm-csrs-gic.h>

/* Enable SBE, MBE, Parity, NDERR and NxM Errors */
#define TAD_ERROR_MASK		0xFFF

static uint8_t get_num_tads(void)
{
	cavm_tad_cmn_const_t tcc = { .u = CSR_READ(CAVM_TAD_CMN_CONST) };

	return tcc.s.num_tads;
}

int cn10k_ras_tad_probe(const struct err_record_info *info, int *probe_data)
{
	uint8_t tad;

	for (tad = 0; tad < get_num_tads(); tad++) {
		if (CSR_READ(CAVM_TADX_INT_W1C(tad))) {
			*probe_data = tad;
			return 1;
		}
	}
	return 0;
}

int cn10k_ras_enable_tad(void)
{
	uint8_t tad;
	uint64_t vecaddr_reg;
	uint64_t vecctl_reg;
	uint64_t vecaddr, vecctl;
	int irq = TAD_SPI_IRQ(0);

	if (cavm_is_platform(PLATFORM_ASIM))
		return 0;

	vecctl = irq;
	vecaddr = CAVM_GICD_SETSPI_SR | 1;

	for (tad = 0; tad < get_num_tads(); tad++) {
		vecaddr_reg = CAVM_TADX_MSIX_VECX_ADDR(tad, 0);
		vecctl_reg = CAVM_TADX_MSIX_VECX_CTL(tad, 0);

		debug_ras("TAD %d 0x%llx@0x%llx\n", tad, vecctl, vecaddr);

		/* Configure MSIx vector address and irq number */
		octeontx_write64(vecaddr_reg, vecaddr);
		octeontx_write64(vecctl_reg, vecctl);

		/* Clear any previous error interrupts */
		CSR_WRITE(CAVM_TADX_INT_W1C(tad), ~0ULL);
		/* Enable ECC interrupt */
		CSR_WRITE(CAVM_TADX_INT_ENA_W1S(tad), TAD_ERROR_MASK);
	}

	plat_ic_set_spi_routing(irq, INTR_ROUTING_MODE_PE, (u_register_t)read_mpidr_el1());
	plat_ic_enable_interrupt(irq);

	return 0;
}

int cn10k_ras_diable_tad(void)
{
	uint8_t tad;

	if (cavm_is_platform(PLATFORM_ASIM))
		return 0;

	for (tad = 0; tad < get_num_tads(); tad++)
		CSR_WRITE(CAVM_TADX_INT_ENA_W1C(tad), 1);

	return 0;
}

int cn10k_ras_tad_isr(uint32_t id, uint32_t flags, void *cookie)
{
	uint8_t tad;
	cavm_tadx_int_w1c_t tad_int;

	for (tad = 0; tad < get_num_tads(); tad++) {
		/* Check TAD Errors */
		tad_int.u = CSR_READ(CAVM_TADX_INT_W1C(tad));
		if (tad_int.u) {
			debug_ras("TAD %d error detected 0x%llx\n", (uint8_t) tad, (uint64_t) tad_int.u);
			CSR_WRITE(CAVM_TADX_INT_W1C(tad), tad_int.u);
		}
	}
	return 0;
}
