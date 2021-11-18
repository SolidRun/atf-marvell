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
#include <cavm-csrs-mdc.h>
#include <cavm-csrs-gic.h>

int cn10k_ras_mdc_probe(const struct err_record_info *info, int *probe_data)
{
	return CSR_READ(CAVM_MDC_INT_W1C) ? 1 : 0;
}

int cn10k_ras_enable_mdc(void)
{
	uint64_t vecaddr_reg = CAVM_MDC_PF_MSIX_VECX_ADDR(0);
	uint64_t vecctl_reg = CAVM_MDC_PF_MSIX_VECX_CTL(0);
	uint64_t vecaddr, vecctl;
	int irq = MDC_SPI_IRQ(0);

	vecctl = irq;
	vecaddr = CAVM_GICD_SETSPI_SR | 1;

	debug_ras("MDC RAS Vec 0x%llx@0x%llx\n", vecctl, vecaddr);
	/* Configure MSIx vector address and irq number */
	octeontx_write64(vecaddr_reg, vecaddr);
	octeontx_write64(vecctl_reg, vecctl);

	/* Clear any previous error interrupts */
	CSR_WRITE(CAVM_MDC_INT_W1C, 1);

	/* Enable ECC interrupt */
	CSR_WRITE(CAVM_MDC_INT_ENA_W1S, 1);

	plat_ic_set_spi_routing(irq, INTR_ROUTING_MODE_PE, (u_register_t)read_mpidr_el1());
	plat_ic_enable_interrupt(irq);
	return 0;
}

int cn10k_ras_diable_mdc(void)
{
	CSR_WRITE(CAVM_MDC_INT_ENA_W1C, 1);
	return 0;
}

int cn10k_ras_mdc_isr(uint32_t id, uint32_t flags, void *cookie)
{
	cavm_mdc_int_w1c_t mdc_int;
	cavm_mdc_ecc_status_t ecc_status;

	/* Check MDC Errors */
	mdc_int.u = CSR_READ(CAVM_MDC_INT_W1C);
	if (mdc_int.s.ecc_error) {
		printf("MDC RAS error detected\n");
		ecc_status.u = CSR_READ(CAVM_MDC_ECC_STATUS);
		printf("MDC Error type : ");
		if (ecc_status.s.sbe)
			printf("SBE\n");
		if (ecc_status.s.dbe)
			printf("DBE\n");
		if (ecc_status.s.sbe_plus)
			printf("SBE Plus\n");
		if (ecc_status.s.dbe_plus)
			printf("DBE Plus\n");
		printf("node %d hub %d chain %d\n",
			ecc_status.s.node_id,
			ecc_status.s.hub_id,
			ecc_status.s.chain_id);
		printf("SRAM row address 0x%x\n", ecc_status.s.row);
		CSR_WRITE(CAVM_MDC_INT_W1C, mdc_int.u);
	}
	return 0;
}
