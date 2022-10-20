/*
 * Copyright (c) 2021 Marvell.
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
#include <octeontx_mmap_utils.h>
#include <drivers/delay_timer.h>
#include "dss_ras.h"

typedef union {
	struct {
		uint32_t dbe:1;
		uint32_t is_sbr:1;
		uint32_t ecc_err:8;
		uint32_t ecc_cnt:8;
		uint32_t ecc_bit:8;
		uint32_t rsvd0:6;
	};
	uint32_t u;
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

extern int cn10k_get_ch_size(void);
       cn10k_get_ch_size();

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

extern bool is_secure_address(uint64_t addr);

static bool cn10k_ras_dss_notify(uint64_t ch, dss_err_info_t info,
		 cavm_dssx_ddrctl_regb_ddrc_ch0_eccstat_t eccstat)
{
	struct otx2_ghes_err_record *err_rec;
	struct otx2_ghes_err_ring *err_ring;
	struct cper_sec_mem_err *dss;
	bool is_secure = 0;
	int fr = 0;

	cavm_dssx_ddrctl_regb_ddrc_ch0_ecccaddr0_t ecccaddr0;
	cavm_dssx_ddrctl_regb_ddrc_ch0_ecccaddr1_t ecccaddr1;

	addr_xlate_t addr;
	memset(&addr, 0, sizeof(addr));
	addr.ch_mask = cn10k_get_ch_mask();

	err_rec = otx2_begin_ghes(&plat_octeontx_bcfg->ras_config,
				  "dss", &err_ring);
	if (!err_rec)
		return 0;
#if SDEI_SUPPORT
	cm_el1_sysregs_context_save(NON_SECURE);
#endif
	dss = &err_rec->u.dss;

	if (info.dbe) {
		ecccaddr0.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR0(ch));
		ecccaddr1.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCUADDR1(ch));
	} else {
		ecccaddr0.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR0(ch));
		ecccaddr1.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCADDR1(ch));
	}

	addr.rank   = ecccaddr0.s.ecc_corr_rank;
	addr.row    = ecccaddr0.s.ecc_corr_row;
	addr.bg     = ecccaddr1.s.ecc_corr_bg;
	addr.bank   = ecccaddr1.s.ecc_corr_bank;
	addr.col    = ecccaddr1.s.ecc_corr_col;
	addr.ch     = ch;
	debug_ras("DMC%lld,R%d,BG%d,BA%d,r%d,c%d\n",
			ch, addr.rank, addr.bg, addr.bank, addr.row, addr.col);
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

	if (info.dbe) {
		is_secure = is_secure_address(addr.phys_addr);
		err_rec->severity = is_secure ?  CPER_SEV_FATAL : CPER_SEV_RECOVERABLE;
	} else
		err_rec->severity = CPER_SEV_CORRECTED;

	fr = snprintf(err_rec->fru_text, sizeof(err_rec->fru_text),
		      "%sDMC%lld,R%d,BG%d", (err_rec->severity == CPER_SEV_CORRECTED) ? "" : ((err_rec->severity == CPER_SEV_FATAL) ? "U," : "R,"),
			ch, addr.rank, addr.bg);
	err_rec->fru_text[fr] = '\0';

	otx2_send_ghes(err_rec, err_ring, OCTEONTX_SDEI_RAS_DSS_EVENT);

	return err_rec->severity == CPER_SEV_FATAL;
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
		dss_err_info.u = 0;
		int_stat.u = CSR_READ(CAVM_DSSX_INT_W1C(ch));
		eccstat.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCSTAT(ch));
		eccctl.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(ch));

		debug_ras("DSS %d error detected INT_W1C: 0x%llx ECCSTAT 0x%x ECCCTL 0x%x MPIDR 0x%x\n",
			(uint8_t) ch, (uint64_t) int_stat.u,
			eccstat.u, eccctl.u, (uint32_t)read_mpidr_el1());
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
		} else {
			dss_err_info.dbe = 0;
			dss_err_info.is_sbr = eccstat.s.sbr_read_ecc_ce;
			dss_err_info.ecc_err = eccstat.s.ecc_corrected_err;
			dss_err_info.ecc_cnt = eccerrcnt.s.ecc_corr_err_cnt;
			dss_err_info.ecc_bit = eccstat.s.ecc_corrected_bit_num;

			/* Clear error count and corrected err */
			eccctl.s.ecc_corr_err_cnt_clr = 1;
			eccctl.s.ecc_corrected_err_clr = 1;
			debug_ras("0x%08x: error %d is_sbr %d ecc cnt %d eccctl 0x%x\n", dss_err_info.u,
				dss_err_info.dbe, dss_err_info.is_sbr, dss_err_info.ecc_cnt, eccctl.u);
		}

		bool fatal = cn10k_ras_dss_notify(ch, dss_err_info, eccstat);

		CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCTL(ch), eccctl.u);

		CSR_WRITE(CAVM_DSSX_INT_W1C(ch), int_stat.u);
		if (int_stat.s.ecc_uncorrected_err_intr)
			cn10k_fatal_error_handler();

		if (fatal) {
			ERROR("System needs to be rebooted\n");
			cn10k_fatal_reboot();
			/* Should not reach here */
			while (1)
				;
		}
	}
	return 0;
}

#define ECCOPCTRL1	0x87e1c0210b84ll + 0x1000000ll
#define ECCSWCTL	0x87e1c0210c80ll + 0x1000000ll
#define ECCCFG2	0x87e1c0210668ll + 0x1000000ll
#define ECCCFG1	0x87e1c0210604ll + 0x1000000ll
#define ECCADDR0	0x87e1c0210648ll + 0x1000000ll
#define ECCADDR1	0x87e1c021064cll + 0x1000000ll
#define DATA_LANE_BITS 2 // for 32-bit channels
#define MAX_DATA_LANES (1 << DATA_LANE_BITS)
#define BLM (MAX_DATA_LANES - 1) // BLM == Byte-Lane Mask

#define ERASSBRST	1002

static int dss_disable_einj(int ch);

/*
 * @param address For DED/SEC: Physical address to corrupt, and
 *                 any byte alignment is supported
 *
 * @param etype   Error type: 0 = DED (double), 1 = SEC (single)
 * @param in_bits   For DED/SEC: LSbit to corrupt for SEC in the byte (0-7),
 *                 for DED, MSbit to corrupt in the byte.
 */
static int dss_setup_einj_addr(uint64_t address, int etype, int in_bits)
{
	cavm_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr0_t reg_ECCPOISONADDR0;
	cavm_dssx_ddrctl_regb_ddrc_ch0_eccpoisonaddr1_t reg_ECCPOISONADDR1;
	cavm_dssx_ddrctl_regb_ddrc_ch0_ecccfg0_t reg_ECCCFG0;
	cavm_dssx_ddrctl_regb_ddrc_ch0_ecccfg1_t reg_ECCCFG1;
	cavm_dssx_ddrctl_regb_ddrc_ch0_ecccfg2_t reg_ECCCFG2;

	cavm_dssx_ddrctl_regb_ddrc_ch0_opctrl1_t reg_OPCTRL1;
	cavm_dssx_ddrctl_regb_ddrc_ch0_opctrl1_t reg_OPCTRL1_2;

	cavm_dssx_ddrctl_regb_ddrc_ch0_swctl_t reg_SWCTL;
	cavm_dssx_ddrctl_regb_ddrc_ch0_swctl_t reg_SWCTL_2;

	cavm_dssx_ddrctl_regb_arb_port0_sbrctl_t reg_SBRCTL;
	cavm_dssx_ddrctl_regb_arb_port0_sbrstat_t reg_SBRSTAT;
	static uint32_t sbr_state;
	int ret;
	int time_out;
	uint64_t aligned_address = address & ~BLM;
	int byte_offset = (address & BLM);
	addr_xlate_t xlate;
	int ch = 0;

	xlate.phys_addr = aligned_address;
	xlate.ch_mask = cn10k_get_ch_mask();
	ret = cn10k_dram_xlate_from_pa(&xlate);
	if (ret)
		return ret;

	reg_ECCCFG0.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(xlate.ch));
	if (reg_ECCCFG0.s.ecc_mode == 0) {
		ERROR("%s no ecc mode\n", __func__);
		return -1;
	}

	if (xlate.col & 0x0F) {
		ERROR("%s unaligned address\n", __func__);
		return -1;
	}

	ch = xlate.ch;

	if (cavm_is_model(OCTEONTX_CN10KA) && (ch > 5))
		return -1;
	if (cavm_is_model(OCTEONTX_CN10KB) && (ch > 1))
		return -1;
	if (cavm_is_model(OCTEONTX_CNF10KA) && (ch > 3))
		return -1;
	if (cavm_is_model(OCTEONTX_CNF10KB) && (ch > 3))
		return -1;

	// Start poison prepare
	reg_ECCPOISONADDR0.u = 0;
	reg_ECCPOISONADDR0.s.ecc_poison_rank = xlate.rank;
	reg_ECCPOISONADDR0.s.ecc_poison_col = xlate.col;
	reg_ECCPOISONADDR1.u = 0;
	reg_ECCPOISONADDR1.s.ecc_poison_bg = xlate.bg;
	reg_ECCPOISONADDR1.s.ecc_poison_bank = xlate.bank;
	reg_ECCPOISONADDR1.s.ecc_poison_row = xlate.row;

	reg_ECCCFG2.u = 0;
	if (in_bits > 0x0FF) {
		byte_offset = 8;
	}

	int byte_offset_bits = byte_offset << 3;
	int bits = in_bits & 0xFF;
	int bit0 = (__builtin_ffs(bits) - 1) & 0x7;
	int bit1 = (__builtin_ffs(bits ^ (1 << bit0)) - 1) & 0x7;
	int pos0 = cn10k_dram_bit2flip(xlate.ch, bit0 + byte_offset_bits);
	int pos1 = cn10k_dram_bit2flip(xlate.ch, bit1 + byte_offset_bits);

	reg_ECCCFG2.s.flip_bit_pos0 = pos0;
	reg_ECCCFG2.s.flip_bit_pos1 = pos1;

	reg_ECCCFG1.u = 0;
	reg_ECCCFG1.s.data_poison_bit = !!etype;
	reg_ECCCFG1.s.data_poison_en = 1;
	debug_ras("%s ch%d addr0 %x addr1 %x cfg1 %x cfg2 %x\n", __func__, ch,
			reg_ECCPOISONADDR0.u, reg_ECCPOISONADDR1.u, reg_ECCCFG1.u,
			reg_ECCCFG2.u);
	// End poison prepare

	sbr_state = 0;
	reg_SBRCTL.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(ch));
	if (reg_SBRCTL.s.scrub_en) {
		sbr_state = reg_SBRCTL.s.scrub_en;
		reg_SBRCTL.s.scrub_en = 0x0;
		CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(ch), reg_SBRCTL.u);
		time_out = 0x1000;
		while (time_out-- > 0) {
			reg_SBRSTAT.u = CSR_READ(
					CAVM_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTAT(ch));
			if (reg_SBRSTAT.s.scrub_busy == 0)
				break;
		}
		if (time_out <= 0)
			return -ERASSBRST;
	}

	reg_SWCTL.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTL(ch));
	reg_SWCTL_2.u = reg_SWCTL.u;
	reg_SWCTL.s.sw_done = 0x0;

	reg_OPCTRL1.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL1(ch));
	reg_OPCTRL1_2.u = reg_OPCTRL1.u;
	reg_OPCTRL1.s.dis_hif = 0x1;

	reg_SWCTL_2.s.sw_done = 1;
	reg_OPCTRL1_2.s.dis_hif = 0;

	dmbsy();

	//setup poison start
	octeontx_write32((ECCOPCTRL1 * ch), reg_OPCTRL1.u);
	octeontx_write32((ECCSWCTL * ch), reg_SWCTL.u);

	octeontx_write32((ECCADDR0 * ch), reg_ECCPOISONADDR0.u);
	octeontx_write32((ECCADDR1 * ch), reg_ECCPOISONADDR1.u);
	octeontx_write32((ECCCFG2 * ch), reg_ECCCFG2.u);
	octeontx_write32((ECCCFG1 * ch), reg_ECCCFG1.u);

	octeontx_write32((ECCSWCTL * ch), reg_SWCTL_2.u);
	octeontx_write32((ECCOPCTRL1 * ch), reg_OPCTRL1_2.u);
	//setup poison end

	dmbsy();

	if (sbr_state) {
		reg_SBRCTL.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(ch));
		reg_SBRCTL.s.scrub_en = sbr_state;
		CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(ch), reg_SBRCTL.u);
	}

	return 0;
}

static int dss_disable_einj(int ch)
{
	cavm_dssx_ddrctl_regb_ddrc_ch0_ecccfg1_t reg_ECCCFG1;
	cavm_dssx_ddrctl_regb_ddrc_ch0_opctrl1_t reg_OPCTRL1;
	cavm_dssx_ddrctl_regb_ddrc_ch0_opctrl1_t reg_OPCTRL1_2;
	cavm_dssx_ddrctl_regb_ddrc_ch0_swctl_t reg_SWCTL;
	cavm_dssx_ddrctl_regb_ddrc_ch0_swctl_t reg_SWCTL_2;
	cavm_dssx_ddrctl_regb_arb_port0_sbrctl_t reg_SBRCTL;
	cavm_dssx_ddrctl_regb_arb_port0_sbrstat_t reg_SBRSTAT;
	static uint32_t sbr_state;
	int time_out;

	if (cavm_is_model(OCTEONTX_CN10KA) && (ch > 5))
		return -1;
	if (cavm_is_model(OCTEONTX_CN10KB) && (ch > 1))
		return -1;
	if (cavm_is_model(OCTEONTX_CNF10KA) && (ch > 3))
		return -1;
	if (cavm_is_model(OCTEONTX_CNF10KB) && (ch > 3))
		return -1;

	debug_ras("%s %d\n", __func__, ch);

	sbr_state = 0;
	reg_SBRCTL.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(ch));
	if (reg_SBRCTL.s.scrub_en) {
		sbr_state = reg_SBRCTL.s.scrub_en;
		reg_SBRCTL.s.scrub_en = 0x0;
		CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(ch), reg_SBRCTL.u);
		time_out = 0x1000;
		while (time_out-- > 0) {
			reg_SBRSTAT.u = CSR_READ(
					CAVM_DSSX_DDRCTL_REGB_ARB_PORT0_SBRSTAT(ch));
			if (reg_SBRSTAT.s.scrub_busy == 0)
				break;
		}
		if (time_out <= 0)
			return -ERASSBRST;
	}

	reg_SWCTL.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_SWCTL(ch));
	reg_SWCTL_2.u = reg_SWCTL.u;
	reg_SWCTL.s.sw_done = 0x0;

	reg_OPCTRL1.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_OPCTRL1(ch));
	reg_OPCTRL1_2.u = reg_OPCTRL1.u;
	reg_OPCTRL1.s.dis_hif = 0x1;

	reg_SWCTL_2.s.sw_done = 1;
	reg_OPCTRL1_2.s.dis_hif = 0;

	reg_ECCCFG1.s.data_poison_en = 0;

	dmbsy();

	//setup poison start
	octeontx_write32((ECCOPCTRL1 * ch), reg_OPCTRL1.u);
	octeontx_write32((ECCSWCTL * ch), reg_SWCTL.u);

	octeontx_write32((ECCCFG1 * ch), reg_ECCCFG1.u);

	octeontx_write32((ECCSWCTL * ch), reg_SWCTL_2.u);
	octeontx_write32((ECCOPCTRL1 * ch), reg_OPCTRL1_2.u);
	//setup poison end

	dmbsy();

	if (sbr_state) {
		reg_SBRCTL.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(ch));
		reg_SBRCTL.s.scrub_en = sbr_state;
		CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_ARB_PORT0_SBRCTL(ch), reg_SBRCTL.u);
	}

	return 0;
}

static int dss_read_poisoned_address(uint64_t address, uint64_t etype)
{
	cavm_dssx_ddrctl_regb_ddrc_ch0_ecccfg0_t reg_ECCCFG0;

	int64_t aligned_address = address & ~BLM;
	addr_xlate_t xlate;
	int32_t ret = 0;

	xlate.phys_addr = aligned_address;
	xlate.ch_mask = cn10k_get_ch_mask();
	ret = cn10k_dram_xlate_from_pa(&xlate);
	if (ret)
		return ret;

	if (!is_secure_address(xlate.phys_addr)) {
		ret = octeontx_mmap_add_dynamic_region_with_sync(address, address,
			PAGE_SIZE, MT_EXECUTE_NEVER | MT_NS | MT_MEMORY | MT_RW);
	} else {
		ret = octeontx_mmap_add_dynamic_region_with_sync(address, address,
			PAGE_SIZE, MT_EXECUTE_NEVER | MT_MEMORY | MT_RW);
	}
	if (ret)
		goto err;

	reg_ECCCFG0.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(xlate.ch));
	if (reg_ECCCFG0.s.ecc_mode == 0) {
		ERROR("%s(%x): Inject ECC error ignored - ECC not enabled.\n", __func__,
				reg_ECCCFG0.u);
	} else {
		debug_ras("ECCCFG0: ECC mode 0x%x, type 0x%x\n", reg_ECCCFG0.s.ecc_mode,
				reg_ECCCFG0.s.ecc_type);
	}

	INFO("INJECT: Injecting ECC %s at DSS%d (Rank%d,BG%1d,Bank%1d,Row 0x%05x,Col 0x%04x)[0x%llx/0x%llx]\n",
			(!etype) ? "double" : "single", xlate.ch, xlate.rank, xlate.bg,
			xlate.bank, xlate.row, xlate.col, xlate.phys_addr, xlate.offset);

	if (xlate.col & 0x0F) {
		debug_ras("Address has unaligned COL bits - ignoring; try another address\n");
	}

	dmbsy();
#if DATA_LANE_BITS == 2
	uint32_t before = (uint32_t)*(volatile uint32_t *)aligned_address;
#else
	uint64_t before = (uint64_t)*(volatile uint64_t *)aligned_address;
#endif
	dmbsy();
	udelay(1000);

	debug_ras("Poison original value 0x%llx: %x\n", aligned_address, before);

	dmbsy();
#if DATA_LANE_BITS == 2
	*(volatile uint32_t *) aligned_address = before;
#else
	*(volatile uint64_t *) aligned_address = before;
#endif
	dmbsy();
	flush_dcache_range(aligned_address, 64);
	dmbsy();
	udelay(1000);

	dss_disable_einj(xlate.ch);
	debug_ras("Trigger ECC for 0x%llx\n", aligned_address);

	dmbsy();
#if DATA_LANE_BITS == 2
	uint32_t after = (uint32_t)*(volatile uint32_t *) aligned_address;
#else
	uint64_t after = (uint64_t)*(volatile uint64_t *) aligned_address;
#endif
	dmbsy();

	if (after != before) {
		debug_ras("INJECT: before and after data not the same: XOR 0x%llx\n",
				(uint64_t) (before ^ after));
		dmbsy();
#if DATA_LANE_BITS == 2
		*(volatile uint32_t*) aligned_address = before;
#else
		*(volatile uint64_t*) aligned_address = before;
#endif
		dmbsy();
		flush_dcache_range(aligned_address, 64);
		dmbsy();
		udelay(1000);
	}

	octeontx_mmap_remove_dynamic_region_with_sync(address, PAGE_SIZE);

	return 0;

err:
	dss_disable_einj(xlate.ch);

	return -1;
}

int cn10k_inject_dss_error(uint64_t address, uint64_t etype, uint64_t in_bits)
{
	debug_ras("%s param1 0x%llx param2 0x%llx param3 0x%llx\n", __func__,
			address, etype, in_bits);

	*(uint32_t *)DSS_INJ_FLAG_ADDR = DSS_INJ_FLAG;

	int ret = dss_setup_einj_addr(address, etype, in_bits);

	if (ret) {
		ERROR("%s error %d\n", __func__, ret);
		*(uint32_t *)DSS_INJ_FLAG_ADDR = 0;
		return -1;
	}

	ret = dss_read_poisoned_address(address, etype);

	*(uint32_t *)DSS_INJ_FLAG_ADDR = 0;

	return ret;
}
