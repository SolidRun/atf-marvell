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
#include <plat_cn10k_configuration.h>
#include <cavm-csrs-dss.h>
#include <cavm-csrs-gic.h>

#define DSS_SBE_ENABLE()	(0)

typedef struct {
	uint32_t dbe:1;
	uint32_t is_sbr:1;
	uint32_t ecc_err:8;
	uint32_t ecc_cnt:8;
	uint32_t ecc_bit:8;
	uint32_t rsvd0:6;
} dss_err_info_t;

static uint8_t get_num_channels(void)
{
	return MAX_CHANNELS;
}

int cn10k_ras_dss_probe(const struct err_record_info *info, int *probe_data)
{
	uint8_t ch;
	cavm_dssx_int_w1c_t int_stat;

	for (ch = 0; ch < get_num_channels(); ch++) {
		int_stat.u = CSR_READ(CAVM_DSSX_INT_W1C(ch));

		if (int_stat.s.ecc_corrected_err_intr ||
			int_stat.s.ecc_uncorrected_err_intr) {
			*probe_data = ch;
			return 1;
		}
	}
	return 0;
}

int cn10k_ras_enable_dss(void)
{
	uint8_t ch;
	cavm_dssx_int_ena_w1s_t int_enable;
	uint64_t vecaddr_reg;
	uint64_t vecctl_reg;
	uint64_t vecaddr;
	int irq;

	vecaddr = CAVM_GICD_SETSPI_SR | 1;
	irq = DSS_SPI_IRQ(0);

	for (ch = 0; ch < get_num_channels(); ch++) {
		vecaddr_reg = CAVM_DSSX_MSIX_VECX_ADDR(ch, 0);
		vecctl_reg = CAVM_DSSX_MSIX_VECX_CTL(ch, 0);

		/* Configure MSIx vector address and irq number */
		octeontx_write64(vecaddr_reg, vecaddr);
		octeontx_write64(vecctl_reg, irq);

		/* Clear any previous error interrupts */
		CSR_WRITE(CAVM_DSSX_INT_W1C(ch), ~0ULL);

		/* TODO: Check only ECC errors to be enabled */
		CSR_WRITE(CAVM_DSSX_INT_ENA_W1C(ch), ~0ULL);

		int_enable.u = 0ULL;
#if DSS_SBE_ENABLE()
		int_enable.s.ecc_corrected_err_intr = 1;
#endif
		int_enable.s.ecc_uncorrected_err_intr = 1;
		CSR_WRITE(CAVM_DSSX_INT_ENA_W1S(ch), int_enable.u);
		VERBOSE("DSS Int ENA 0x%llx ECC CTL 0x%llx\n", CSR_READ(CAVM_DSSX_INT_ENA_W1S(ch)),
			CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(ch)));
	}

	plat_ic_set_interrupt_type(irq, INTR_TYPE_EL3);
	plat_ic_set_interrupt_priority(irq, PLAT_RAS_PRI);
	plat_ic_clear_interrupt_pending(irq);
	plat_ic_set_spi_routing(irq, INTR_ROUTING_MODE_PE, (u_register_t)read_mpidr_el1());
	plat_ic_enable_interrupt(irq);

	return 0;
}

int cn10k_ras_disable_dss(void)
{
	uint8_t ch;

	for (ch = 0; ch < get_num_channels(); ch++) {
		CSR_WRITE(CAVM_DSSX_INT_ENA_W1C(ch), ~0ULL);
	}

	return 0;
}

int cn10k_ras_dss_isr(uint32_t id, uint32_t flags, void *cookie)
{
	cavm_dssx_int_w1c_t int_stat;
	cavm_dssx_ddrctl_regb_ddrc_ch0_eccstat_t eccstat;
	cavm_dssx_ddrctl_regb_ddrc_ch0_eccerrcnt_t eccerrcnt;
	cavm_dssx_ddrctl_regb_ddrc_ch0_eccctl_t eccctl;
	dss_err_info_t dss_err_info;
	uint8_t ch;

	for (ch = 0; ch < get_num_channels(); ch++) {
		/* Check DSS Errors */
		int_stat.u = CSR_READ(CAVM_DSSX_INT_W1C(ch));
		eccstat.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSTAT(ch));
		eccctl.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(ch));

		debug_ras("DSS %d error detected INT_W1C: 0x%llx ECCSTAT 0x%x ECCCTL 0x%x\n",
			(uint8_t) ch, (uint64_t) int_stat.u,
			eccstat.u, eccctl.u);
		if (!int_stat.u) {
			CSR_WRITE(CAVM_DSSX_INT_W1C(ch), int_stat.u);
			eccctl.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(ch));
			CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(ch), eccctl.u);
			debug_ras("DSS %d int status 0x%llx\n", ch, int_stat.u);
			continue;
		}

		/* Look for ECC errors */
		if (!int_stat.s.ecc_corrected_err_intr && !int_stat.s.ecc_uncorrected_err_intr) {
			CSR_WRITE(CAVM_DSSX_INT_W1C(ch), int_stat.u);
			eccctl.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(ch));
			CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(ch), eccctl.u);
			debug_ras("DSS %d int status 0x%llx\n", ch, int_stat.u);
			continue;
		}
		eccerrcnt.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCERRCNT(ch));

		if (int_stat.s.ecc_uncorrected_err_intr) {
			dss_err_info.dbe = 1;
			dss_err_info.is_sbr = eccstat.s.sbr_read_ecc_ue;
			dss_err_info.ecc_err = eccstat.s.ecc_uncorrected_err;
			dss_err_info.ecc_cnt = eccerrcnt.s.ecc_uncorr_err_cnt;

			/* Clear error count and uncorrected err */
			eccctl.s.ecc_uncorr_err_cnt_clr = 1;
			eccctl.s.ecc_uncorrected_err_clr = 1;
			ERROR("DSS Uncorrected error %d is_sbr %d ecc cnt %d eccctl 0x%x\n",
				dss_err_info.dbe, dss_err_info.is_sbr, dss_err_info.ecc_cnt, eccctl.u);
			ERROR("System needs to be rebooted\n");
			while (1)
				;
		} else {
			dss_err_info.dbe = 0;
			dss_err_info.is_sbr = eccstat.s.sbr_read_ecc_ce;
			dss_err_info.ecc_err = eccstat.s.ecc_corrected_err;
			dss_err_info.ecc_cnt = eccerrcnt.s.ecc_corr_err_cnt;
			dss_err_info.ecc_bit = eccstat.s.ecc_corrected_bit_num;

			/* Clear error count and corrected err */
			eccctl.s.ecc_corr_err_cnt_clr = 1;
			eccctl.s.ecc_corrected_err_clr = 1;
			debug_ras("error %d is_sbr %d ecc cnt %d eccctl 0x%x\n",
				dss_err_info.dbe, dss_err_info.is_sbr, dss_err_info.ecc_cnt, eccctl.u);
		}

		CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(ch), eccctl.u);

		CSR_WRITE(CAVM_DSSX_INT_W1C(ch), int_stat.u);
	}
	return 0;
}
