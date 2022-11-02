/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:	 BSD-3-Clause
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
/* ATF's Post Package Repair (PPR) driver for CN10K */

#include <stdint.h>
#include <stdio.h>
#include <errno.h>
#include <octeontx_common.h>
#include <spi_smc_load.h>
#include <libfdt.h>
#include <timers.h>
#include <time.h>

#include <ppr.h>
#include <spi.h>
#include <plat_board_cfg.h>
#include <spi_smc_load.h>
#include <cavm-csrs-dss.h>
#include <plat_cn10k_configuration.h>
#include <octeontx_semaphore.h>

#undef PPR_DEBUG
#ifdef PPR_DEBUG
#define debug(...) printf(__VA_ARGS__)
#else
#define debug(...) ((void) (0))
#endif

// MRR (Mode Register Read) region statistics for PPR registers
// 20 ch_max * 2 ranks * 5 dev = 200 max fail rows
// 200 * 30 days * 4 byte = 24000

#define PERSIST_PPR_OFFSET			0x4000
#define PERSIST_PPR_LEN			0x20000
#define PPR_MRR_HEADER_SIZE			0x00001000
#define MRR_REGION_SIZE			0x00006000
#define PPR_REGION_SIZE			(PERSIST_PPR_LEN - MRR_REGION_SIZE - PPR_MRR_HEADER_SIZE)

static uint32_t PPR_MRR_HEADER_ADDR;
static uint32_t MRR_REGION_ADDR;
static uint32_t MRR_REGION_END;
static uint32_t PPR_REGION_ADDR;
static uint32_t PPR_REGION_END;

static uint32_t timer_hd;
extern octeontx_ctr_sem_t octeontx_smc_spi_lock;

static struct ppr_mrr_header ppr_mrr = {
	.signature    = 0,
	.head_mrr     = 0,
	.head_ppr     = 0,
	.mrr_cycle    = 0,
	.ppr_cycle    = 0,
	.mrr_max_EpRC = 0,
	.head_ppr_start = 0
};

static uint32_t bus;
static uint32_t cs;
static uint32_t mode;

#define ERASE_SIZE			4096
#define MRR_REC_PER_BLK		(ERASE_SIZE / sizeof(struct mrr))
#define PPR_REC_PER_BLK		(ERASE_SIZE / sizeof(struct ppr))

__aligned(8) static uint8_t buffer[ERASE_SIZE] = {0};
__aligned(8) static uint8_t wr_buffer[ERASE_SIZE] = {0};
static mrr_t buf_m[MRR_REGION_SIZE / sizeof(mrr_t)];
static ppr_t buf_p[PPR_REC_PER_BLK];

#define MR_REC_MASK		0x3F
#define MR_BG_MASK		0x07
#define MR_BG_SHIFT		4
#define MR_BA_MASK		0x03
#define MR_BA_SHIFT		2
#define MR_R17_MASK		0x03
#define MR17_OFFS		8
#define MR18_OFFS		16

#define MAX_POLL_COUNT	1000

#define MAX_CS			2
#define MAX_GRP			2
#define MAX_DRAM		4

/*
 * 1.	If working with 4 devices by 8 without ECC, then the needs to configure the mrr_grp_sel to 0x0(group0), which represents the following:
-	cmd_mrr_data[31:24] is relevant for DRAM3
-	cmd_mrr_data[23:16] is relevant for DRAM2
-	cmd_mrr_data[15:8] is relevant for DRAM1
-	cmd_mrr_data[7:0] is relevant for DRAM0

2.	If working with 2 devices by 16 without ECC, then the needs to configure the mrr_grp_sel to 0x0(group0), which represents the following:
Which represents the following:
-	cmd_mrr_data[15:8] is relevant for DRAM1
-	cmd_mrr_data[7:0] is relevant for DRAM0

3.	If working with 4 devices by 8 with ECC, then the needs to configure the mrr_grp_sel to 0x0(group0),
Then do “1” and after configure the mrr_grp_sel to 0x1(group1), which represents the following:
-	cmd_mrr_data[31:24] is relevant for DRAM3 (GRP0)
-	cmd_mrr_data[23:16] is relevant for DRAM2(GRP0)
-	cmd_mrr_data[15:8] is relevant for DRAM1(GRP0)
-	cmd_mrr_data[7:0] is relevant for DRAM0(GRP0)
-	cmd_mrr_data[7:0] is relevant for DRAM4(GRP1) – ECC byte

4.	If working with 2 devices by 16 with ECC, then the needs to configure the mrr_grp_sel to 0x0(group0),
Then do “1” and after configure the mrr_grp_sel to 0x1(group1), which represents the following:
-	cmd_mrr_data[15:8] is relevant for DRAM1(GRP0)
-	cmd_mrr_data[7:0] is relevant for DRAM0(GRP0)
-	cmd_mrr_data[7:0] is relevant for DRAM4(GRP1) – ECC byte
*/

#define printh() \
		VERBOSE("hPPR SIG\t%08x\nMRRid\t%u\tPPRid\t%u\nMRRc\t%u\tPPRc\t%u\nmaxEpRC\t%u\thPPRnxt\t%u\n",\
		ppr_mrr.signature, \
		ppr_mrr.head_mrr, \
		ppr_mrr.head_ppr, \
		ppr_mrr.mrr_cycle, \
		ppr_mrr.ppr_cycle, \
		ppr_mrr.mrr_max_EpRC, \
		ppr_mrr.head_ppr_start)

static uint8_t dramx_mr16[MAX_CS][MAX_GRP][MAX_DRAM];
static uint8_t dramx_mr17[MAX_CS][MAX_GRP][MAX_DRAM];
static uint8_t dramx_mr18[MAX_CS][MAX_GRP][MAX_DRAM];
static uint8_t dramx_mr19[MAX_CS][MAX_GRP][MAX_DRAM];
static uint8_t dramx_mr20[MAX_CS][MAX_GRP][MAX_DRAM];

static mrr_t mrx[MAX_CS * MAX_GRP * MAX_DRAM];

static inline uint32_t MRR_OFFSET(int idx)
{
	return MRR_REGION_ADDR + idx * sizeof(struct mrr);
}

static inline uint32_t PPR_OFFSET(int idx)
{
	return PPR_REGION_ADDR + idx * sizeof(struct ppr);
}

static inline uint32_t MRR_IDX(int addr)
{
	return (addr - MRR_REGION_ADDR) / sizeof(struct mrr);
}

int ddrc_ddr5_sw_cmd_poling(int ch, char *printf_header)
{
	int time_out = MAX_POLL_COUNT;
	union cavm_dssx_ddrctl_regb_ddrc_ch0_cmdstat ddr_stat;

	/*Polling for CMD Done*/
	while (time_out > 0) {
		ddr_stat.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(ch));
		time_out--;
		if (ddr_stat.s.cmd_done)
			break;
	}

	if (time_out <= 0) {
		printf("%s: time_out ch : %d\n", __func__, ch);
		return -1;
	}

	if (ddr_stat.s.cmd_err) {
		printf("%s: command error ch: %d\n", __func__, ch);
		return -1;
	}

	/*Polling for MRR data Valid*/
	time_out = MAX_POLL_COUNT;
	while (time_out > 0) {
		time_out--;
		ddr_stat.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(ch));
		if (ddr_stat.s.mrr_data_vld)
			break;
	}

	if (time_out <= 0) {
		debug("%s: mrr data invalid ch : %d\n", printf_header, ch);
		return -1;
	}

	return 0;
}

static void ddrc_ddr5_read_mr_ppr(uint32_t ch, uint32_t rank_num,
								  uint32_t mr, uint32_t phy_snoop_en, uint32_t *mr_val)
{
	int32_t ret;
	union cavm_dssx_ddrctl_regb_ddrc_ch0_cmdctl reg_CMDCTL;

	CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(ch), 0); //TODO: CSR_WRITE -> CSR_READ
	reg_CMDCTL.s.cmd_ctrl = mr | (phy_snoop_en << 18) | (rank_num << 20);
	reg_CMDCTL.s.cmd_code = 0x1; //MRR
	reg_CMDCTL.s.cmd_seq_last = 0x1;
	reg_CMDCTL.s.cmd_start = 0x0;
	CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(ch), reg_CMDCTL.u);
	reg_CMDCTL.s.cmd_start = 0x1;
	CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(ch), reg_CMDCTL.u);

	ret = ddrc_ddr5_sw_cmd_poling(ch, "read mrr ppr");

	if (!ret)
		*mr_val = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDMRRDATA(ch));
	else
		*mr_val = 0;
}

static uint32_t ppr_ddrc_ddr5_read_failure_row(uint32_t ch)
{
	uint32_t dram_grp = 0;
	uint32_t dram_idx = 0;
	uint32_t ranks = 0, r = 0;
	uint32_t ret = 0;

	uint32_t mr16_val = 0;
	uint32_t mr17_val = 0;
	uint32_t mr18_val = 0;
	uint32_t mr19_val = 0;
	uint32_t mr20_val = 0;
	uint32_t ecc_is_enabled = 0;
	uint32_t max_grp = 0;

	union cavm_dssx_ddrctl_regb_ddrc_ch0_cmdcfg reg_CMDCFG;

	memset(dramx_mr16, 0, sizeof(dramx_mr16));
	memset(dramx_mr17, 0, sizeof(dramx_mr17));
	memset(dramx_mr18, 0, sizeof(dramx_mr18));
	memset(dramx_mr19, 0, sizeof(dramx_mr19));
	memset(dramx_mr20, 0, sizeof(dramx_mr20));

	CSR_INIT(ecccfg0, CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_ECCCFG0(ch));
	ecc_is_enabled = (ecccfg0.s.ecc_mode != 0);

	CSR_INIT(mstr0, CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0(ch));
	max_grp = mstr0.s.device_config == 2 ? 1 : 2;

	ranks = (mstr0.s.active_ranks == 3) ? 2 : 1;

	reg_CMDCFG.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(ch));

	for (r = 0; r < ranks; r++) {
		for (dram_grp = 0; dram_grp < max_grp; dram_grp++) {

			reg_CMDCFG.s.mrr_grp_sel = dram_grp;
			CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(ch), reg_CMDCFG.u);

			mr16_val = 0;
			mr17_val = 0;
			mr18_val = 0;
			mr19_val = 0;
			mr20_val = 0;

			ddrc_ddr5_read_mr_ppr(ch, r, 16, 0, &mr16_val);
			ddrc_ddr5_read_mr_ppr(ch, r, 17, 0, &mr17_val);
			ddrc_ddr5_read_mr_ppr(ch, r, 18, 0, &mr18_val);
			ddrc_ddr5_read_mr_ppr(ch, r, 19, 0, &mr19_val);
			ddrc_ddr5_read_mr_ppr(ch, r, 20, 0, &mr20_val);

#if 0
			// Simulate injection:
			if (ch == 0 && r == 0) {
				mr16_val = 0; //dev0, row 0
				mr18_val = 0b00000000000000000000000000000000 << 0; //dev0, BG0, BA0
				mr19_val = 0b00001000000010000000100000001000 << 0; //dev0, EpRC8
			}
#endif

			uint64_t valid = mr16_val + mr17_val + mr18_val + mr19_val + mr20_val;

			if (!valid)
				continue;

			for (dram_idx = 0; dram_idx < MAX_DRAM; dram_idx++) {
				/*
				 * MR17 - MR16 [R15...R0] - row
				 * MR18 - [RES, BG2, BG1, BG0, BA1, BA0, R17, R16]
				 * MR19 - rec
				 */
				dramx_mr16[r][dram_grp][dram_idx] = (mr16_val >> (dram_idx * 8)) & 0xFF;
				dramx_mr17[r][dram_grp][dram_idx] = (mr17_val >> (dram_idx * 8)) & 0xFF;
				dramx_mr18[r][dram_grp][dram_idx] = (mr18_val >> (dram_idx * 8)) & 0xFF;
				dramx_mr19[r][dram_grp][dram_idx] = (mr19_val >> (dram_idx * 8)) & 0xFF;
				dramx_mr20[r][dram_grp][dram_idx] = (mr20_val >> (dram_idx * 8)) & 0xFF;

				// ECC DRAM device is located at group 1
				// group 1 has only one ECC device dramxx_mr[r][1][0] the rest 3 is empty and can be skipped
				if (ecc_is_enabled && dram_grp == 1)
					break;
			}
			ret++;
		}
	}

	return ret;
}

static inline int32_t spi_flash_config(void)
{
	debug("%s\n", __func__);
	/* Check if device is present */
	if (!plat_octeontx_bcfg->persist_cfg.valid) {
		ERROR("Config flash config absent\n");
		return -1;
	}
	if (spi_config(CONFIG_SPI_FREQUENCY, 0, 0, 0, bus, cs)) {
		ERROR("Config flash failed\n");
		return -1;
	}
	return 0;
}

/*
 * spi_flash_write - read block of memory starting from aligned address
 * (erase block size aligned), modify any chunk of data from block
 * and write back.
 */
static int32_t spi_flash_write(void *in, int length, int loc)
{
	int bytes_remain = length;
	int sector_addr = 0;
	int sector_offset = 0;
	int chunk = 0;
	int ret = 0;
	void *wr = 0;
	void *buf = in;

	debug("%s size 0x%x to 0x%x\n", __func__, length, loc);

	while (bytes_remain > 0) {

		buf += chunk;
		wr = buf;

		sector_addr   = loc & ~(ERASE_SIZE - 1);
		sector_offset = loc &  (ERASE_SIZE - 1);

		chunk = ERASE_SIZE - sector_offset;
		chunk = (chunk <= bytes_remain) ? chunk : bytes_remain;

		debug("sector_addr=0x%x, sector_offset=0x%x, chunk=0x%x\n",
			  sector_addr, sector_offset, chunk);

		if (sector_offset || (chunk < ERASE_SIZE)) {
			wr = wr_buffer;
			memset(wr, 0, ERASE_SIZE);
			if (spi_nor_read(wr, ERASE_SIZE, sector_addr, mode, bus, cs) < 0) {
				ERROR("Failed read flash offset: 0x%x\n", sector_addr);
				return length - bytes_remain;
			}
			memcpy(wr + sector_offset, buf, chunk);
		}

		if (spi_nor_erase(sector_addr, mode, bus, cs)) {
			ERROR("Failed erase flash offset: 0x%x\n", sector_addr);
			return length - bytes_remain;
		}
		if (spi_nor_write(wr, ERASE_SIZE, sector_addr, mode, bus, cs) < 0) {
			ERROR("Failed write flash offset 0x%x\n", sector_addr);
			return length - bytes_remain;
		}

		bytes_remain -= chunk;
		loc += chunk;

		if (cavm_is_platform(PLATFORM_ASIM))
			continue;

		memset(buffer, 0, ERASE_SIZE);
		if (spi_nor_read(buffer, ERASE_SIZE, sector_addr, mode, bus, cs) < 0) {
			ERROR("Failed read flash offset 0x%x\n", sector_addr);
			return length - bytes_remain;
		}
		ret = memcmp(buffer, wr, ERASE_SIZE);
		if (ret) {
			ERROR("Failed compare flash data failed 0x%x %d\n", sector_addr, ret);
			return length - bytes_remain;
		}
	}

	return length;
}

static int32_t ppr_mrr_read_header(void)
{
	uint32_t offset = PPR_MRR_HEADER_ADDR;
	int32_t ret = 0;

	ret = spi_nor_read((uint8_t *)&ppr_mrr, sizeof(ppr_mrr), offset, mode, bus, cs);
	if (ret < 0) {
		ERROR("Failed read PPR header\n");
		return ret;
	}
	printh();

	return ret;
}

static int32_t ppr_mrr_update_header(void)
{
	uint32_t offset = PPR_MRR_HEADER_ADDR;
	int32_t ret = 0;
	int32_t err_cnt = 2;

	ret = spi_flash_write(&ppr_mrr, sizeof(ppr_mrr), offset);
	while (ret < sizeof(ppr_mrr) && err_cnt > 0) {
		ret = spi_flash_write(&ppr_mrr, sizeof(ppr_mrr), offset);
		err_cnt--;
	}
	if (ret != sizeof(ppr_mrr))
		ERROR("Failed to update PPR header 0x%x\n", offset);
	printh();

	return ret;
}

static int32_t mrr_read_record(mrr_t *record, uint32_t first, uint32_t number)
{
	uint32_t offset = 0;
	uint32_t length = number * sizeof(mrr_t);
	int32_t ret = 0;

	debug("%s [%d - %d]\n", __func__, first, first + number);

	if (!record || !number)
		return -1;

	offset = MRR_OFFSET(first);

	if (offset < MRR_REGION_ADDR ||
			offset >= MRR_REGION_END) {
		ERROR("%s Failed MRR region offset %x\n", __func__, offset);
		return -1;
	}

	ret = spi_nor_read((uint8_t *)record, length, offset, mode, bus, cs);

	if (ret < 0) {
		ERROR("Failed MRR region read records\n");
		return -1;
	}

	return 0;
}

__attribute__((unused))
static int32_t ppr_read_record(ppr_t *record, uint32_t first, uint32_t number)
{
	uint32_t offset = 0;
	uint32_t length = number * sizeof(ppr_t);
	int32_t ret = 0;

	if (!record || !number)
		return -1;

	offset = PPR_OFFSET(first);

	debug("%s [%d - %d] at 0x%x\n", __func__, first, first + number, offset);

	if (offset < PPR_REGION_ADDR ||
			offset > PPR_REGION_END) {
		ERROR("%s Failed PPR region offset %x\n", __func__, offset);
		return -1;
	}

	ret = spi_nor_read((uint8_t *)record, length, offset, mode, bus, cs);

	if (ret < 0) {
		ERROR("Failed PPR region read records\n");
		return -1;
	}

	return 0;
}

static int32_t mrr_write_record(mrr_t *record, uint32_t number)
{
	uint32_t offset = 0;
	uint32_t length = number * sizeof(mrr_t);
	int32_t ret = 0;
	int32_t err_cnt = 2;

	if (!record || !number)
		return -1;

	offset = MRR_OFFSET(ppr_mrr.head_mrr);

	if (offset + length > MRR_REGION_END) {
		ERROR("%s Failed MRR region not fit records %d\n", __func__, ppr_mrr.head_mrr);
		return -1;
	}

	ret = spi_flash_write(record, length, offset);
	while (ret < length && err_cnt > 0) {
		ret = spi_flash_write(record, length, offset);
		err_cnt--;
	}
	if (ret != length) {
		ERROR("Failed MRR region write records %d/%d\n", length, ret);
		return -1;
	}

	debug("%ss %d at index %d\n", __func__, number, ppr_mrr.head_mrr);

	ppr_mrr.head_mrr += number;

	return 0;
}

static int32_t ppr_write_record(ppr_t *record, uint32_t number)
{
	uint32_t offset = 0;
	uint32_t length = number * sizeof(ppr_t);
	int32_t ret = 0;
	int32_t err_cnt = 2;

	if (!record || !number)
		return -1;

	offset = PPR_OFFSET(ppr_mrr.head_ppr);

	debug("%ss %u at index %u offset 0x%x\n", __func__, number, ppr_mrr.head_ppr, offset);

	if (offset + length > PPR_REGION_END) {
		ERROR("%s Failed PPR region not fit records\n", __func__);
		return -1;
	}

	ret = spi_flash_write(record, length, offset);
	while (ret < length && err_cnt > 0) {
		ret = spi_flash_write(record, length, offset);
		err_cnt--;
	}

	if (ret != length) {
		ERROR("Failed PPR region write records %d/%d\n", length, ret);
		return -1;
	}

	ppr_mrr.head_ppr += number;

	return 0;
}

static int32_t mrr_clear_region(void)
{
	uint32_t offset = MRR_REGION_ADDR;

	debug("%s\n", __func__);

	memset(wr_buffer, 0, ERASE_SIZE);

	while (offset < MRR_REGION_END) {
		if (spi_nor_erase(offset, mode, bus, cs)) {
			ERROR("Unable erase MRR region 0x%x, 0x%x\n", offset,
				  MRR_OFFSET(ppr_mrr.head_mrr));
			return -1;
		}
		if (spi_nor_write(wr_buffer, ERASE_SIZE, offset, mode, bus, cs) < 0) {
			ERROR("Write flash failed offset: 0x%x\n", offset);
			return -1;
		}
		offset += ERASE_SIZE;
	}

	return 0;
}

__attribute__((unused))
static void print_mrr(void)
{
	struct mrr *mrr_p;
	int i = 0;

	debug_ppr("%s 0x%x - 0x%x\n", __func__, MRR_OFFSET(0), MRR_OFFSET(ppr_mrr.head_mrr));
	mrr_read_record(buf_m, 0, ppr_mrr.head_mrr);
	for (i = 0; i < ppr_mrr.head_mrr; i++) {
		mrr_p = (struct mrr *)&buf_m[i];
		debug_ppr("[%d %d %d %d %d %d]%d\t", mrr_p->mrr.channel,  mrr_p->mrr.rank, mrr_p->mrr.device,
			  mrr_p->mrr.bank_gr, mrr_p->mrr.bank_addr, mrr_p->mrr.row_num, mrr_p->EpRC);
	}
	debug_ppr("\n");
}

__attribute__((unused))
static void print_ppr(void)
{
	struct ppr *ppr_p;
	uint32_t i = 0;

	memset(buf_p, 0, ERASE_SIZE);

	debug_ppr("%s [%u - %u] 0x%x - 0x%x\n", __func__, 0,
			ppr_mrr.head_ppr, PPR_OFFSET(0), PPR_OFFSET(ppr_mrr.head_ppr));
	for (i = 0; i < ppr_mrr.head_ppr; i++) {

		if (i % PPR_REC_PER_BLK == 0)
			ppr_read_record(buf_p, i, PPR_REC_PER_BLK);
		ppr_p = (struct ppr *)&buf_p[i % PPR_REC_PER_BLK];

		debug_ppr("[%u %u %u %u %u %u] EpRCacc %u cases %u cycle %u %s\n",
			  ppr_p->mrr.channel,  ppr_p->mrr.rank, ppr_p->mrr.device,
			  ppr_p->mrr.bank_gr, ppr_p->mrr.bank_addr, ppr_p->mrr.row_num,
			  ppr_p->EpRCacc, ppr_p->cases, (ppr_p->cycle & ~REPAIRED) & 0xFFFF,
			  (ppr_p->cycle & REPAIRED) ? "<- repaired":"");
	}
}

__attribute__((unused))
static void print_stat(void)
{
	int ret = 0;

	if (!(mrvl_tf_log_modules & MRVL_TF_LOG_MODULE_PPR))
		return;

	if (spi_dev_lock(bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, bus);
		return;
	}

	if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0)
		goto err;

	ret = spi_flash_config();
	if (ret < 0)
		goto err;

	ret = ppr_mrr_read_header();
	if (ret < 0)
		goto err;

	if (ppr_mrr.signature     != SIGNATURE ||
			ppr_mrr.head_mrr  == FLASH_ERASE_MARK ||
			ppr_mrr.head_ppr  == FLASH_ERASE_MARK)
		goto err;

	print_ppr();

err:

	octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);
	spi_dev_unlock(bus);
}

static int32_t ppr_mrr_clear_flash(void)
{
	uint32_t offset = PPR_MRR_HEADER_ADDR;

	debug("%s\n", __func__);

	memset(wr_buffer, 0x0, ERASE_SIZE);

	while (offset < PPR_REGION_END) {
		if (spi_nor_erase(offset, mode, bus, cs)) {
			ERROR("%s Unable erase MRR region offset=0x%x\n", __func__, offset);
			return -1;
		}
		if (spi_nor_write(wr_buffer, ERASE_SIZE, offset, mode, bus, cs) < 0) {
			ERROR("Write flash failed offset: 0x%x\n", offset);
			return -1;
		}
		offset += ERASE_SIZE;
	}

	return 0;
}

static int32_t ppr_make_statistic(void)
{
	uint32_t i = 0;
	uint32_t j = 0;
	uint32_t k = 0;

	uint16_t eprc = 0;
	uint16_t cycle = 0;
	union record_t row;
	uint32_t cntr = 0;

	struct ppr ppr_rec;

	memset(buf_m, 0, MRR_REGION_SIZE);
	memset(buf_p, 0, ERASE_SIZE);

	if (ppr_mrr.head_mrr == 0) {
		debug("%s mrr empty\n", __func__);
		return 0;
	}

	if (ppr_mrr.head_mrr > MRR_IDX(MRR_REGION_END)) {
		debug("%s mrr overflow\n", __func__);
		ppr_mrr.head_mrr = MRR_IDX(MRR_REGION_END) - 1;
	}

	mrr_read_record(buf_m, 0, ppr_mrr.head_mrr);

	for (i = 0, k = 0; i < ppr_mrr.head_mrr; i++) {
		// find first mrr valid record
		if (buf_m[i] == 0)
			continue;

		eprc = buf_m[i] & 0xFFFF;
		cycle = (buf_m[i] >> 16) & 0xFFFF;
		cntr = 1;
		row.u  = (uint32_t)(buf_m[i] >> 32);

		buf_m[i] = 0;

		// calculate all records from previous find
		for (j = i + 1; j < ppr_mrr.head_mrr; j++) {
			if (row.u == (uint32_t)(buf_m[j] >> 32)) {
				eprc += (buf_m[j] & 0xFFFF);
				cntr++;
				buf_m[j] = 0;
			}
		}

		ppr_rec.cycle   = cycle;
		ppr_rec.EpRCacc = eprc > 0xFF ? 0xFF:eprc;
		ppr_rec.cases   = cntr > 0xFF ? 0xFF:cntr;
		ppr_rec.mrr.u   = row.u;

		VERBOSE("%s row %08x [%u %u %u %u %u %u] EpRCacc %u cases %u cycle %u\n", __func__,
			  ppr_rec.mrr.u,
			  ppr_rec.mrr.channel,  ppr_rec.mrr.rank, ppr_rec.mrr.device,
			  ppr_rec.mrr.bank_gr, ppr_rec.mrr.bank_addr, ppr_rec.mrr.row_num,
			  ppr_rec.EpRCacc, ppr_rec.cases, ppr_rec.cycle);

		buf_p[k++] = *(ppr_t *)&ppr_rec;
		if (k >= PPR_REC_PER_BLK) {
			debug("%s %d %d\n", __func__, k, i);
			ppr_write_record(buf_p, k);
			k = 0;
			memset(buf_p, 0, ERASE_SIZE);
		}
	}

	if (k)
		ppr_write_record(buf_p, k);

	return 0;
}

static int ppr_timer_cb(int hd)
{
	int32_t ret = 0;
	uint32_t ch = 0;
	uint32_t r = 0;
	uint32_t g = 0;
	uint32_t d = 0;

	struct mrr mr;
	uint32_t rec = 0;

	if (spi_dev_lock(bus)) {
		ERROR("%s: SPI_%d: Lock failed\n", __func__, bus);
		return -1;
	}

	if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0) {
		ERROR("%s Failed to get lock\n", __func__);
		ret = -2;
		goto err1;
	}

	ret = spi_flash_config();
	if (ret < 0) {
		ret = -1;
		goto err1;
	}

	ret = ppr_mrr_read_header();
	if (ret < 0) {
		ERROR("%s Failed read header\n", __func__);
		ret = -1;
		goto err1;
	}

	if (ppr_mrr.signature     != SIGNATURE ||
			ppr_mrr.head_mrr  == FLASH_ERASE_MARK ||
			ppr_mrr.head_ppr  == FLASH_ERASE_MARK ||
			ppr_mrr.mrr_cycle == FLASH_ERASE_MARK ||
			ppr_mrr.ppr_cycle == FLASH_ERASE_MARK ||
			ppr_mrr.head_ppr  >= (PPR_REGION_SIZE / sizeof(ppr_t))) {

		ret = ppr_mrr_clear_flash();
		if (ret < 0) {
			goto err1;
		}
		ppr_mrr.signature    = SIGNATURE;
		ppr_mrr.head_mrr     = 0;
		ppr_mrr.head_ppr     = 0;
		ppr_mrr.mrr_cycle    = 0;
		ppr_mrr.ppr_cycle    = 0;
		ppr_mrr.mrr_max_EpRC = 0;
		ppr_mrr.head_ppr_start = 0;

		ret = ppr_mrr_update_header();
		if (ret < 0) {
			ERROR("Failed update header\n");
			goto err1;
		}

		ret = ppr_mrr_read_header();
		if (ret < 0) {
			ERROR("Failed read header\n");
			goto err1;
		}

	} else if (ppr_mrr.mrr_cycle == 0) {

		ret = mrr_clear_region();
		if (ret < 0) {
			ret = -1;
			goto err1;
		}

		ppr_mrr.head_mrr = 0;

		ret = ppr_mrr_update_header();
		if (ret < 0) {
			ERROR("Failed update head\n");
			goto err1;
		}

		ret = ppr_mrr_read_header();
		if (ret < 0) {
			ERROR("Failed read head\n");
			goto err1;
		}
	}

	for (ch = 0; ch < MAX_CHANNELS; ch++) {

		ret = ppr_ddrc_ddr5_read_failure_row(ch);
		if (!ret)
			continue;

		rec = 0;
		for (r = 0; r < MAX_CS; r++) {
			for (g = 0; g < MAX_GRP; g++) {
				for (d = 0; d < MAX_DRAM; d++) {

					uint64_t valid = dramx_mr16[r][g][d] +
							dramx_mr17[r][g][d] +
							dramx_mr18[r][g][d] +
							dramx_mr19[r][g][d] +
							dramx_mr20[r][g][d];
					if (!valid)
						continue;

					if (!(dramx_mr19[r][g][d] & MR_REC_MASK) && !dramx_mr20[r][g][d])
						continue;

					mr.mrr.channel   = ch;
					mr.mrr.rank      = r;
					mr.mrr.device    = d + (g * MAX_DRAM);
					mr.mrr.bank_gr   = (dramx_mr18[r][g][d] >> MR_BG_SHIFT) & MR_BG_MASK;
					mr.mrr.bank_addr = (dramx_mr18[r][g][d] >> MR_BA_SHIFT) & MR_BA_MASK;
					mr.mrr.row_num   = ((dramx_mr18[r][g][d] & MR_R17_MASK) << MR18_OFFS) |
									   ((dramx_mr17[r][g][d] & 0xFF) << MR17_OFFS) |
									   (dramx_mr16[r][g][d] & 0xFF);
					mr.EpRC          = dramx_mr19[r][g][d] & MR_REC_MASK;
					mr.cycle          = ppr_mrr.ppr_cycle;

					if (rec >= ARRAY_SIZE(mrx)) {
						ERROR("%s mrr record buffer overflow %d\n", __func__, rec);
						break;
					}

					ppr_mrr.mrr_max_EpRC = ppr_mrr.mrr_max_EpRC < mr.EpRC ? mr.EpRC : ppr_mrr.mrr_max_EpRC;
					memcpy(mrx + rec, &mr, sizeof(mr));
					rec++;

					VERBOSE("[%u %u %u %u %u %u] EpRC %u\n",
							mr.mrr.channel,  mr.mrr.rank, mr.mrr.device,
							mr.mrr.bank_gr, mr.mrr.bank_addr, mr.mrr.row_num, mr.EpRC);
				}
			}
		}

		if (!rec) {
			VERBOSE("%s PPR zero Fail Row address\n", __func__);
			continue;
		}

		ret = mrr_write_record(mrx, rec);
		if (ret < 0) {
			ERROR("Failure to write MRR record %d\n", rec);
		}
	}

	ppr_mrr.mrr_cycle++;
	ppr_mrr.ppr_cycle++;
	ppr_mrr.ppr_cycle %= 0x3FFF;

#ifdef PPR_DEBUG
	print_mrr();
#endif

	/*
	 * Record most failed record into PPR region after 30 MRR cycles
	 */
	if ((ppr_mrr.mrr_cycle >= MRR_CYCLES) ||
			(ppr_mrr.mrr_max_EpRC > plat_octeontx_bcfg->ppr_config.eprc_th)) {

		ret = ppr_make_statistic();
		if (ret < 0) {
			ERROR("Failed make statistic\n");
			goto err1;
		}

#ifdef PPR_DEBUG
		print_ppr();
#endif

		ppr_mrr.mrr_cycle = 0;
		ppr_mrr.mrr_max_EpRC = 0;
	}

	ret = ppr_mrr_update_header();
	if (ret < 0) {
		ERROR("Failed update PPR MRR header\n");
	}

err1:
	debug("%s exit\n", __func__);
	octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);
	spi_dev_unlock(bus);

	return ret;
}

/*
 * Initialize Post Package Repair thread for periodic action
 */
void ppr_fw_init(void)
{
	if (plat_octeontx_bcfg->persist_cfg.valid) {
		bus = plat_octeontx_bcfg->persist_cfg.bus;
		cs = plat_octeontx_bcfg->persist_cfg.cs;
	} else
		return;

	mode = SPI_ADDRESSING_32BIT;

	PPR_MRR_HEADER_ADDR = plat_octeontx_bcfg->persist_cfg.offset + PERSIST_PPR_OFFSET;
	MRR_REGION_ADDR     = PPR_MRR_HEADER_ADDR + PPR_MRR_HEADER_SIZE;
	MRR_REGION_END      = MRR_REGION_ADDR + MRR_REGION_SIZE;
	PPR_REGION_ADDR     = MRR_REGION_END;
	PPR_REGION_END      = PPR_REGION_ADDR + PPR_REGION_SIZE;

	print_stat();

	if (!plat_octeontx_bcfg->ppr_config.is_enabled)
		return;

	debug("%s Setup PPR timer\n", __func__);

	/* Start timer to handle MRR statistics collection */
	timer_hd = timer_create(TM_PERIODIC, MRR_POLL_INTERVAL, ppr_timer_cb);
	if (timer_hd < 0) {
		ERROR("PPR: can't create new timer\n");
	} else {
		debug("PPR: timer id = %d created successfully\n", timer_hd);
		timer_start(timer_hd);
	}
}
