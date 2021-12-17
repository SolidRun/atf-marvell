/*
 * Copyright (C) 2021 Marvell.
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

#ifdef PPR_DEBUG
#define debug(...) printf(__VA_ARGS__)
#else
#define debug(...) ((void) (0))
#endif

static uint32_t timer_hd;

static struct ppr_mrr_header ppr_mrr = {
	.signature    = 0,
	.head_mrr     = 0,
	.head_ppr     = 0,
	.mrr_cycle    = 0,
	.ppr_cycle    = 0,
	.mrr_max_EpRC = 0
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

#define MR_REC_MASK		0x1F
#define MR_BG_MASK		0x07
#define MR_BG_SHIFT		4
#define MR_BA_MASK		0x03
#define MR_BA_SHIFT		2
#define MR_R17_MASK		0x03

#define MAX_POLL_COUNT	1000

#define MAX_CS			2
#define MAX_GRP			2
#define MAX_DRAM		4

#define DEV0_OFFS		24
#define MR17_OFFS		8
#define MR18_OFFS		16

#define printh() \
		debug("%s\nSIG\t%08x\nMRR\t%d\tPPR\t%d\nMRC\t%d\tPRC\t%d\nERC\t%d\n", __func__, \
		ppr_mrr.signature, \
		ppr_mrr.head_mrr, \
		ppr_mrr.head_ppr, \
		ppr_mrr.mrr_cycle, \
		ppr_mrr.ppr_cycle, \
		ppr_mrr.mrr_max_EpRC)

static uint8_t dramx_mr16[MAX_CS][MAX_GRP][MAX_DRAM];
static uint8_t dramx_mr17[MAX_CS][MAX_GRP][MAX_DRAM];
static uint8_t dramx_mr18[MAX_CS][MAX_GRP][MAX_DRAM];
static uint8_t dramx_mr19[MAX_CS][MAX_GRP][MAX_DRAM];
static uint8_t dramx_mr20[MAX_CS][MAX_GRP][MAX_DRAM];

static mrr_t mrx[MAX_CS * MAX_GRP * MAX_DRAM];

int ddrc_ddr5_sw_cmd_poling(int ch, char *printf_header)
{
	/*Polling for CMD Done*/
	int time_out = MAX_POLL_COUNT;
	int val;

	while (time_out > 0) {
		val = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(ch));
		time_out--;
		if (val & 0x80000000ull)
			break;
	}
	if (time_out <= 0) {
		ERROR("%s: %s : time_out\n", __func__, printf_header);
		return -1;
	}
	if (val & 0x40000000ull) {
		ERROR("%s: %s : command error\n", __func__, printf_header);
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

	union cavm_dssx_ddrctl_regb_ddrc_ch0_cmdcfg reg_CMDCFG;

	memset(dramx_mr16, 0, sizeof(dramx_mr16));
	memset(dramx_mr17, 0, sizeof(dramx_mr17));
	memset(dramx_mr18, 0, sizeof(dramx_mr18));
	memset(dramx_mr19, 0, sizeof(dramx_mr19));
	memset(dramx_mr20, 0, sizeof(dramx_mr20));

	CSR_INIT(mstr0, CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0(ch));

	ranks = (mstr0.s.active_ranks == 3) ? 2 : 1;

	reg_CMDCFG.u = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(ch));

	for (r = 0; r < ranks; r++) {
		for (dram_grp = 0; dram_grp < MAX_GRP; dram_grp++) {

			reg_CMDCFG.s.mrr_grp_sel = dram_grp;
			CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(ch), reg_CMDCFG.u);

			ddrc_ddr5_read_mr_ppr(ch, r, 16, 0, &mr16_val);
			debug("%s ch%d rank%d grp%d MR16 %08x\n", __func__, ch, r, dram_grp, mr16_val);

			ddrc_ddr5_read_mr_ppr(ch, r, 17, 0, &mr17_val);
			debug("%s ch%d rank%d grp%d MR17 %08x\n", __func__, ch, r, dram_grp, mr17_val);

			ddrc_ddr5_read_mr_ppr(ch, r, 18, 0, &mr18_val);
			debug("%s ch%d rank%d grp%d MR18 %08x\n", __func__, ch, r, dram_grp, mr18_val);

			ddrc_ddr5_read_mr_ppr(ch, r, 19, 0, &mr19_val);
			debug("%s ch%d rank%d grp%d MR19 %08x\n", __func__, ch, r, dram_grp, mr19_val);

			ddrc_ddr5_read_mr_ppr(ch, r, 20, 0, &mr20_val);
			debug("%s ch%d rank%d grp%d MR20 %08x\n", __func__, ch, r, dram_grp, mr20_val);

			uint64_t valid = mr16_val + mr17_val + mr18_val + mr19_val + mr20_val;

			if (!valid)
				continue;

			for (dram_idx = 0; dram_idx < MAX_DRAM; dram_idx++) {
				dramx_mr16[r][dram_grp][dram_idx] = (mr16_val >> (DEV0_OFFS - dram_idx * 8)) & 0xFF;
				dramx_mr17[r][dram_grp][dram_idx] = (mr17_val >> (DEV0_OFFS - dram_idx * 8)) & 0xFF;
				dramx_mr18[r][dram_grp][dram_idx] = (mr18_val >> (DEV0_OFFS - dram_idx * 8)) & 0xFF;
				dramx_mr19[r][dram_grp][dram_idx] = (mr19_val >> (DEV0_OFFS - dram_idx * 8)) & 0xFF;
				dramx_mr20[r][dram_grp][dram_idx] = (mr20_val >> (DEV0_OFFS - dram_idx * 8)) & 0xFF;
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
	if (!plat_octeontx_bcfg->spi_cfg[bus].cs[cs]) {
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
static int32_t spi_flash_write(void *buf, int length, int loc)
{
	int bytes_remain = length;
	int sector_addr = 0;
	int sector_offset = 0;
	int chunk = 0;
	int ret = 0;
	void *wr = 0;

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
	uint32_t header[6] = {0};
	int32_t ret = 0;

	ret = spi_nor_read((uint8_t *)header, sizeof(header), offset, mode, bus, cs);
	if (ret < 0) {
		ERROR("Failed read PPR header\n");
		return ret;
	}

	ppr_mrr.signature = header[0];
	ppr_mrr.head_mrr  = header[1];
	ppr_mrr.head_ppr  = header[2];
	ppr_mrr.mrr_cycle = header[3];
	ppr_mrr.ppr_cycle = header[4];
	ppr_mrr.mrr_max_EpRC  = header[5];

	printh();

	return ret;
}

static int32_t ppr_mrr_update_header(void)
{
	uint32_t offset = PPR_MRR_HEADER_ADDR;
	uint32_t header[6] = {0};
	int32_t ret = 0;

	header[0] = ppr_mrr.signature;
	header[1] = ppr_mrr.head_mrr;
	header[2] = ppr_mrr.head_ppr;
	header[3] = ppr_mrr.mrr_cycle;
	header[4] = ppr_mrr.ppr_cycle;
	header[5] = ppr_mrr.mrr_max_EpRC;

	ret = spi_flash_write(header, sizeof(header), offset);
	if (ret < 0) {
		ERROR("Failed to update PPR header 0x%x\n", offset);
		return ret;
	}

	printh();

	return ret;
}

static int32_t mrr_read_record(mrr_t *record, uint32_t first, uint32_t number)
{
	uint32_t offset = 0;
	uint32_t length = number * sizeof(mrr_t);
	int32_t ret = 0;

	debug("%s [%d - %d]\n", __func__, first, first + number - 1);

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

	debug("%s [%d - %d] at 0x%x\n", __func__, first, first + number - 1, offset);

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

	if (!record || !number)
		return -1;

	offset = MRR_OFFSET(ppr_mrr.head_mrr);

	if (offset + length > MRR_REGION_END) {
		ERROR("%s Failed MRR region not fit records %d\n", __func__, ppr_mrr.head_mrr);
		return -1;
	}

	ret = spi_flash_write(record, length, offset);

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

	if (!record || !number)
		return -1;

	offset = PPR_OFFSET(ppr_mrr.head_ppr);

	debug("%ss %d at index %d offset 0x%x\n", __func__, number, ppr_mrr.head_ppr, offset);

	if (offset + length > PPR_REGION_END) {
		ERROR("%s Failed PPR region not fit records\n", __func__);
		return -1;
	}

	ret = spi_flash_write(record, length, offset);

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
			ERROR("Unable erase MRR region 0x%x, 0x%lx\n", offset,
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
	union record_t rec;
	int i = 0;

	printf("%s 0x%lx - 0x%lx\n", __func__, MRR_OFFSET(0), MRR_OFFSET(ppr_mrr.head_mrr));
	mrr_read_record(buf_m, 0, ppr_mrr.head_mrr);
	for (i = 0; i < ppr_mrr.head_mrr; i++) {
		rec.u = (uint32_t)(buf_m[i] >> 32);
		if (!(i % 8))
			printf("\n");
		else
			printf("[%d %d %d %d %d %d] %d   ",
					rec.channel, rec.rank, rec.device,
					rec.bank_gr, rec.bank_addr, rec.row_num, (uint32_t)(buf_m[i] & 0xFFFFFFFF));
	}
	printf("\n");
}

__attribute__((unused))
static void print_ppr(void)
{
	union record_t rec;
	int i = 0;

	memset(buf_p, 0, ERASE_SIZE);

	printf("%s 0x%lx - 0x%lx\n", __func__, PPR_OFFSET(0), PPR_OFFSET(ppr_mrr.head_ppr));
	for (i = 0; i < ppr_mrr.head_ppr; i++) {

		rec.u = (uint32_t)(buf_p[i] & 0xFFFFFFFF);

		if (i % PPR_REC_PER_BLK == 0)
			ppr_read_record(buf_p, i, PPR_REC_PER_BLK);

		if (!(i % 6))
			printf("\n");
		else
			printf("%08x [%d %d %d %d %d %d]   ", (uint32_t)(buf_p[i] >> 32),
					rec.channel, rec.rank, rec.device,
					rec.bank_gr, rec.bank_addr, rec.row_num);
	}
	printf("\n");
}

__attribute__((unused))
static void loop_last_ppr_cycle(void)
{
	ppr_t ppr;
	struct ppr *ppr_p;
	int32_t i;
	uint16_t c;

	ppr_mrr_read_header();

	if (ppr_mrr.head_ppr == 0 || ppr_mrr.ppr_cycle == 0)
		return;

	i = ppr_mrr.head_ppr - 1;
	c = (uint16_t)ppr_mrr.ppr_cycle - 1;

	ppr_read_record(&ppr, i, 1);
	ppr_p = (struct ppr *)&ppr;

	if (ppr_p->cycle != c) {
		ERROR("%s last ppr record do mot match cycle\n", __func__);
		return;
	}

	while ((ppr_p->cycle == c)) {
		debug("%s(%16llx)\nPRC\t%04x\nEpRC\t%02x\nFLG\t%02x\nREC\t%08x\n", __func__,
			  ppr, ppr_p->cycle, ppr_p->EpRC, ppr_p->cases, ppr_p->record);
		i--;
		if (i < 0)
			break;
		ppr_read_record(&ppr, i, 1);
		ppr_p = (struct ppr *)&ppr;
	}
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

	uint32_t eprc = 0;
	uint32_t row = 0;
	uint32_t cntr = 0;

#ifdef PPR_DEBUG
	uint64_t tmp = 0;
#endif

	struct ppr ppr_rec;

	memset(buf_m, 0, MRR_REGION_SIZE);
	memset(buf_p, 0, ERASE_SIZE);

	printh();

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

		eprc = buf_m[i] & 0x00000000FFFFFFFF;
		row  = buf_m[i] >> 32;
		cntr = 1;
#ifdef PPR_DEBUG
		tmp = buf_m[i];
#endif
		buf_m[i] = 0;

		// calculate all records from previous find
		for (j = i + 1; j < ppr_mrr.head_mrr; j++) {
			if (row == (uint32_t)(buf_m[j] >> 32)) {
				eprc += (buf_m[j] & 0x00000000FFFFFFFF);
				cntr++;
				buf_m[j] = 0;
			}
		}

#ifdef PPR_DEBUG
		debug("%s (%16llx) row %08x EpRC %d cases %d\n", __func__, tmp, row, eprc, cntr);
#else
		debug("%s row %08x EpRC %d cases %d\n", __func__, row, eprc, cntr);
#endif
		ppr_rec.cycle  = ppr_mrr.ppr_cycle;
		ppr_rec.EpRC   = eprc > 0xFF ? 0xFF:eprc;
		ppr_rec.cases  = cntr > 0xFF ? 0xFF:cntr;
		ppr_rec.record = row;

		buf_p[k++] = *(ppr_t *)&ppr_rec;
		if ((k >= PPR_REC_PER_BLK) || (i == ppr_mrr.head_mrr - 1)) {
			ppr_write_record(buf_p, k);
			k = 0;
			memset(buf_p, 0, ERASE_SIZE);
		}
	}

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

	ret = spi_flash_config();
	if (ret < 0)
		return -1;

	ret = ppr_mrr_read_header();
	if (ret < 0) {
		ERROR("%s Failed read header\n", __func__);
		return -1;
	}

	printf("%s scan\n", __func__);
	printh();

	if (ppr_mrr.signature     != SIGNATURE ||
			ppr_mrr.head_mrr  == FLASH_ERASE_MARK ||
			ppr_mrr.head_ppr  == FLASH_ERASE_MARK ||
			ppr_mrr.mrr_cycle == FLASH_ERASE_MARK ||
			ppr_mrr.ppr_cycle == FLASH_ERASE_MARK ||
			ppr_mrr.head_ppr  >= (PPR_REGION_SIZE / sizeof(ppr_t))) {

		ret = ppr_mrr_clear_flash();
		if (ret < 0)
			return -1;
		ppr_mrr.signature    = SIGNATURE;
		ppr_mrr.head_mrr     = 0;
		ppr_mrr.head_ppr     = 0;
		ppr_mrr.mrr_cycle    = 0;
		ppr_mrr.ppr_cycle    = 0;
		ppr_mrr.mrr_max_EpRC = 0;

		ret = ppr_mrr_update_header();
		if (ret < 0) {
			ERROR("Failed update header\n");
			return -1;
		}

		ret = ppr_mrr_read_header();
		if (ret < 0) {
			ERROR("Failed read header\n");
			return -1;
		}

	} else if (ppr_mrr.mrr_cycle == 0) {

		ret = mrr_clear_region();
		if (ret < 0)
			return -1;

		ppr_mrr.head_mrr = 0;

		ret = ppr_mrr_update_header();
		if (ret < 0) {
			ERROR("Failed update head\n");
			return -1;
		}

		ret = ppr_mrr_read_header();
		if (ret < 0) {
			ERROR("Failed read head\n");
			return -1;
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

					if (!(dramx_mr19[r][g][d] & MR_REC_MASK))
						continue;

					mr.record.channel   = ch;
					mr.record.rank      = r;
					mr.record.device    = d + (g * MAX_DRAM);
					mr.record.bank_gr   = (dramx_mr18[r][g][d] >> MR_BG_SHIFT) & MR_BG_MASK;
					mr.record.bank_addr = (dramx_mr18[r][g][d] >> MR_BA_SHIFT) & MR_BA_MASK;
					mr.record.row_num   = ((dramx_mr18[r][g][d] & MR_R17_MASK) << MR18_OFFS) |
										  ((dramx_mr17[r][g][d] & 0xFF) << MR17_OFFS) |
										  (dramx_mr16[r][g][d] & 0xFF);
					mr.EpRC             = dramx_mr19[r][g][d] & MR_REC_MASK;

					if (rec >= ARRAY_SIZE(mrx)) {
						ERROR("%s mrr record buffer overflow %d\n", __func__, rec);
						break;
					}

					ppr_mrr.mrr_max_EpRC = ppr_mrr.mrr_max_EpRC < mr.EpRC ? mr.EpRC : ppr_mrr.mrr_max_EpRC;
					memcpy(mrx + rec, &mr, sizeof(mr));
					rec++;
				}
			}
		}

		if (!rec) {
			debug("%s PPR zero Fail Row address\n", __func__);
			continue;
		}

		ret = mrr_write_record(mrx, rec);
		if (ret < 0) {
			ERROR("Failure to write MRR record %d\n", rec);
		}
	}

	ppr_mrr.mrr_cycle++;

#ifdef PPR_DEBUG
	print_mrr();
#endif

	/*
	 * Record most failed record into PPR region after 30 MRR cycles
	 */
	if (ppr_mrr.mrr_cycle >= MRR_CYCLES) {
		ret = ppr_make_statistic();
		if (ret < 0) {
			ERROR("Failed make statistic\n");
			return -1;
		}
#ifdef PPR_DEBUG
		print_ppr();
#endif
		ppr_mrr.mrr_cycle = 0;
		ppr_mrr.ppr_cycle++;
		ppr_mrr.mrr_max_EpRC = 0;

	} else if (ppr_mrr.mrr_max_EpRC > MAX_EpRC_THRESHOLD) {
		debug("%s error threshold reached\n", __func__);
		ret = ppr_make_statistic();
		if (ret < 0) {
			ERROR("Failed make statistic\n");
			return -1;
		}
		ppr_mrr.mrr_max_EpRC = 0;
	}

	ret = ppr_mrr_update_header();
	if (ret < 0) {
		ERROR("Failed update PPR MRR header\n");
	}


#ifdef PPR_DEBUG
		loop_last_ppr_cycle();
#endif

	debug("%s exit\n", __func__);

	return 0;
}

/*
 * Initialize Post Package Repair thread for periodic action
 */
void ppr_fw_init(void)
{
	/* Currently fixed for BUS:0, CS:0 */
	bus = 0;
	cs = 0;
	mode = SPI_ADDRESSING_32BIT;

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
