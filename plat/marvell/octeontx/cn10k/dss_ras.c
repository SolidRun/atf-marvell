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
#include "dss_ras.h"

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

	if (!cavm_is_platform(PLATFORM_HW))
		return 0;

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

	if (!cavm_is_platform(PLATFORM_HW))
		return 0;

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
		int_enable.s.ecc_corrected_err_intr = 1;
		int_enable.s.ecc_uncorrected_err_intr = 1;
		CSR_WRITE(CAVM_DSSX_INT_ENA_W1S(ch), int_enable.u);
		VERBOSE("DSS Int ENA 0x%llx ECC CTL 0x%llx\n", CSR_READ(CAVM_DSSX_INT_ENA_W1S(ch)),
			CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(ch)));
	}

	plat_ic_set_spi_routing(irq, INTR_ROUTING_MODE_PE, (u_register_t)read_mpidr_el1());
	plat_ic_enable_interrupt(irq);

	return 0;
}

int cn10k_ras_disable_dss(void)
{
	uint8_t ch;

	if (!cavm_is_platform(PLATFORM_HW))
		return 0;

	for (ch = 0; ch < get_num_channels(); ch++) {
		CSR_WRITE(CAVM_DSSX_INT_ENA_W1C(ch), ~0ULL);
	}

	return 0;
}

static void cn10k_ras_dss_notify(uint64_t ch, dss_err_info_t info,
		 cavm_dssx_ddrctl_regb_ddrc_ch0_eccstat_t eccstat)
{
	struct otx2_ghes_err_record *err_rec;
	struct otx2_ghes_err_ring *err_ring;
	struct cper_sec_mem_err_old *dss;

	cavm_dssx_ddrctl_regb_ddrc_ch0_ecccaddr0_t ecccaddr0;
	cavm_dssx_ddrctl_regb_ddrc_ch0_ecccaddr1_t ecccaddr1;

	addr_xlate_t addr;

	err_rec = otx2_begin_ghes(&plat_octeontx_bcfg->ras_config,
				  "dss", &err_ring);
	if (!err_rec)
		return;

	cm_el1_sysregs_context_save(NON_SECURE);

	dss = &err_rec->u.dss;

	ecccaddr0.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR0(ch));
	ecccaddr1.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR1(ch));
	addr.rank   = ecccaddr0.s.ecc_corr_rank;
	addr.row    = ecccaddr0.s.ecc_corr_row;
	addr.bg     = ecccaddr1.s.ecc_corr_bg;
	addr.bank   = ecccaddr1.s.ecc_corr_bank;
	addr.col    = ecccaddr1.s.ecc_corr_col;
	addr.ch     = ch;
	cn10k_dram_xlate_to_pa(&addr);

	dss->error_status  = eccstat.u;
	dss->physical_addr = addr.phys_addr;
	dss->physical_addr_mask = 0;
	dss->node          = 0;
	dss->card          = 0;
	dss->module        = 0;
	dss->bank          = addr.bank;
	dss->device        = ch;
	dss->row           = addr.row;
	dss->column        = addr.col;
	dss->bit_pos       = info.ecc_bit;
	dss->error_type    = info.dbe ? 3 : 2;
	if (info.is_sbr && info.dbe)
		dss->error_type = 14;
	else if (info.is_sbr)
		dss->error_type = 13;

	dss->validation_bits |= (
			CPER_MEM_VALID_ERROR_STATUS |
			CPER_MEM_VALID_PA |
			CPER_MEM_VALID_BANK |
			CPER_MEM_VALID_ROW |
			CPER_MEM_VALID_COLUMN |
			CPER_MEM_VALID_ERROR_TYPE);
	dss->validation_bits |= !info.dbe ? CPER_MEM_VALID_BIT_POSITION : 0;

	if (info.dbe)
		err_rec->severity = CPER_SEV_FATAL;
	else
		err_rec->severity = CPER_SEV_CORRECTED;

	snprintf(err_rec->fru_text, sizeof(err_rec->fru_text),
		 "DMC%lld,R%d,BG%d,BA%d,r%d,c%d",
		 ch, addr.rank, addr.bg, addr.bank, addr.row, addr.col);

	otx2_send_ghes(err_rec, err_ring, OCTEONTX_SDEI_RAS_DSS_EVENT);
}

int cn10k_ras_dss_isr(uint32_t id, uint32_t flags, void *cookie)
{
	cavm_dssx_int_w1c_t int_stat;
	cavm_dssx_ddrctl_regb_ddrc_ch0_eccstat_t eccstat;
	cavm_dssx_ddrctl_regb_ddrc_ch0_eccerrcnt_t eccerrcnt;
	cavm_dssx_ddrctl_regb_ddrc_ch0_eccctl_t eccctl;
	dss_err_info_t dss_err_info;
	uint8_t ch;

	if (!cavm_is_platform(PLATFORM_HW))
		return 0;

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

		cn10k_ras_dss_notify(ch, dss_err_info, eccstat);
		if (int_stat.s.ecc_uncorrected_err_intr)
			while (1)
				;

		CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(ch), eccctl.u);

		CSR_WRITE(CAVM_DSSX_INT_W1C(ch), int_stat.u);
	}
	return 0;
}
