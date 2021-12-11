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

#include <ppr.h>
#include <spi.h>
#include <plat_board_cfg.h>
#include <spi_smc_load.h>
#include <cavm-csrs-dss.h>

#undef PPR_DEBUG
#ifdef PPR_DEBUG
#define debug(...) printf(__VA_ARGS__)
#else
#define debug(...) ((void) (0))
#endif

static uint32_t timer_hd;

static struct ppr_mrr_header ppr_mrr = {
	.head_mrr   = 0,
	.head_ppr   = 0,
	.mrr_cycle  = 0
};

static uint32_t bus;
static uint32_t cs;
static uint32_t mode;

#define ERASE_SIZE			4096
#define MRR_REC_PER_BLK		(ERASE_SIZE / sizeof(struct mrr))
#define PPR_REC_PER_BLK		(ERASE_SIZE / sizeof(struct ppr))

__aligned(8) static uint8_t buffer[ERASE_SIZE] = {0};
__aligned(8) static uint8_t wr_buffer[ERASE_SIZE] = {0};
static mrr_t buf_m[ERASE_SIZE];
static ppr_t buf_p[ERASE_SIZE];

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

static uint8_t dramx_mr16[MAX_CS][MAX_GRP][MAX_DRAM];
static uint8_t dramx_mr17[MAX_CS][MAX_GRP][MAX_DRAM];
static uint8_t dramx_mr18[MAX_CS][MAX_GRP][MAX_DRAM];
static uint8_t dramx_mr19[MAX_CS][MAX_GRP][MAX_DRAM];
static uint8_t dramx_mr20[MAX_CS][MAX_GRP][MAX_DRAM];

static mrr_t mrx[MAX_CS * MAX_GRP * MAX_DRAM];

static uint32_t ppr_ddrc_ddr5_read_mr(uint32_t ch, uint32_t rank_num,
		uint32_t mr, uint32_t phy_snoop_en, uint32_t *mr_val)
{
	uint32_t time_out = MAX_POLL_COUNT;
	uint32_t val;
	union cavm_dssx_ddrctl_regb_ddrc_ch0_cmdctl reg_CMDCTL;
	debug("ch: %d - %s\n", ch, __func__);

	CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(ch), 0);
	reg_CMDCTL.s.cmd_ctrl = mr | (phy_snoop_en << 18) | (rank_num << 20);
	reg_CMDCTL.s.cmd_code = 0x1; //MRR
	reg_CMDCTL.s.cmd_seq_last = 0x1;
	reg_CMDCTL.s.cmd_start = 0x1;
	CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCTL(ch), reg_CMDCTL.u);

	//Polling for CMD Done
	while (time_out > 0) {
		val = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(ch));
		time_out--;
		if (val & 0x80000000ull)
			break;
	}
	if (time_out <= 0)
		WARN("%s: time_out\n", __func__);
	if (val & 0x40000000ull)
		WARN("%s: command error\n", __func__);

	//Polling for MRR data Valid
	time_out = MAX_POLL_COUNT;
	while (time_out > 0) {
		time_out--;
		val = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDSTAT(ch));
		if (val & 0x1)
			break;
	}

	*mr_val = CSR_READ(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDMRRDATA(ch));

	return 0;
}

uint32_t ppr_ddrc_ddr5_read_failure_row(uint32_t ch)
{
	uint32_t status = 0;
	uint32_t dram_grp = 0;
	uint32_t dram_idx = 0;
	uint32_t ranks = 0, r = 0;

	uint32_t mr16_val = 0;
	uint32_t mr17_val = 0;
	uint32_t mr18_val = 0;
	uint32_t mr19_val = 0;
	uint32_t mr20_val = 0;

	union cavm_dssx_ddrctl_regb_ddrc_ch0_cmdcfg reg_CMDCFG;

	debug("%s entry\n", __func__);

	memset(dramx_mr16, 0, sizeof(dramx_mr16));
	memset(dramx_mr17, 0, sizeof(dramx_mr17));
	memset(dramx_mr18, 0, sizeof(dramx_mr18));
	memset(dramx_mr19, 0, sizeof(dramx_mr19));
	memset(dramx_mr20, 0, sizeof(dramx_mr20));

	CSR_INIT(mstr0, CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_MSTR0(ch));

	ranks = (mstr0.s.active_ranks == 3) ? 2 : 1;

	for (r = 0; r < ranks; r++) {
		for (dram_grp = 0; dram_grp < MAX_GRP; dram_grp++) {

			reg_CMDCFG.s.mrr_grp_sel = dram_grp;
			CSR_WRITE(CAVM_DSSX_DDRCTL_REGB_DDRC_CH0_CMDCFG(ch), reg_CMDCFG.u);

			status = ppr_ddrc_ddr5_read_mr(ch, r, 16, 0, &mr16_val);
			debug("%s: MR16 rank0 val = 0x%x\n", __func__, mr16_val);
			if (!status)
				goto err;

			status = ppr_ddrc_ddr5_read_mr(ch, r, 17, 0, &mr17_val);
			debug("%s: MR17 rank0 val = 0x%x\n", __func__, mr17_val);
			if (!status)
				goto err;

			status = ppr_ddrc_ddr5_read_mr(ch, r, 18, 0, &mr18_val);
			debug("%s: MR18 rank0 val = 0x%x\n", __func__, mr18_val);
			if (!status)
				goto err;

			status = ppr_ddrc_ddr5_read_mr(ch, r, 19, 0, &mr19_val);
			debug("%s: MR19 rank0 val = 0x%x\n", __func__, mr19_val);
			if (!status)
				goto err;

			status = ppr_ddrc_ddr5_read_mr(ch, r, 20, 0, &mr20_val);
			debug("%s: MR20 rank0 val = 0x%x\n", __func__, mr20_val);
			if (!status)
				goto err;

			for (dram_idx = 0; dram_idx < MAX_DRAM; dram_idx++) {
				dramx_mr16[r][dram_grp][dram_idx] = (mr16_val >> (DEV0_OFFS - dram_idx * 8)) & 0xFF;
				dramx_mr17[r][dram_grp][dram_idx] = (mr17_val >> (DEV0_OFFS - dram_idx * 8)) & 0xFF;
				dramx_mr18[r][dram_grp][dram_idx] = (mr18_val >> (DEV0_OFFS - dram_idx * 8)) & 0xFF;
				dramx_mr19[r][dram_grp][dram_idx] = (mr19_val >> (DEV0_OFFS - dram_idx * 8)) & 0xFF;
				dramx_mr20[r][dram_grp][dram_idx] = (mr20_val >> (DEV0_OFFS - dram_idx * 8)) & 0xFF;
			}
		}
	}

	return 0;

err:
	return -1;
}

static inline int32_t spi_flash_config(void)
{
	debug("%s entry\n", __func__);
	/* Check if device is present */
	if (!plat_octeontx_bcfg->spi_cfg[bus].cs[cs]) {
		WARN("Config flash config absent\n");
		return -1;
	}
	if (spi_config(CONFIG_SPI_FREQUENCY, 0, 0, 0, bus, cs)) {
		WARN("Config flash failed\n");
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

	debug("%s entry l=0x%x o=0x%x\n", __func__, length, loc);

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
				WARN("Failed read flash offset: 0x%x\n", sector_addr);
				return length - bytes_remain;
			}
			memcpy(wr + sector_offset, buf, chunk);
		}

		if (spi_nor_erase(sector_addr, mode, bus, cs)) {
			WARN("Failed erase flash offset: 0x%x\n", sector_addr);
			return length - bytes_remain;
		}
		if (spi_nor_write(wr, ERASE_SIZE, sector_addr, mode, bus, cs) < 0) {
			WARN("Failed write flash offset 0x%x\n", sector_addr);
			return length - bytes_remain;
		}

		bytes_remain -= chunk;
		loc += chunk;

		if (cavm_is_platform(PLATFORM_ASIM))
			continue;

		memset(buffer, 0, ERASE_SIZE);
		if (spi_nor_read(buffer, ERASE_SIZE, sector_addr, mode, bus, cs) < 0) {
			WARN("Failed read flash offset 0x%x\n", sector_addr);
			return length - bytes_remain;
		}
		ret = memcmp(buffer, wr, ERASE_SIZE);
		if (ret) {
			WARN("Failed compare flash data failed 0x%x %d\n", sector_addr, ret);
			return length - bytes_remain;
		}
	}

	return length;
}

static int32_t ppr_mrr_read_header(void)
{
	uint32_t offset = PPR_MRR_HEADER_ADDR;
	uint32_t header[3] = {0};
	int32_t ret = 0;

	debug("%s entry\n", __func__);

	ret = spi_nor_read((uint8_t *)header, sizeof(header), offset, mode, bus, cs);
	if (ret < 0) {
		WARN("Failed read PPR header\n");
		return -1;
	}

	ppr_mrr.head_mrr  = header[0];
	ppr_mrr.head_ppr  = header[1];
	ppr_mrr.mrr_cycle = header[2];

	if (header[0] == FLASH_ERASE_MARK &&
			header[1] == FLASH_ERASE_MARK &&
			header[2] == FLASH_ERASE_MARK)
		return  0;

	if (ppr_mrr.head_mrr >= MRR_REGION_SIZE / sizeof(mrr_t) ||
			ppr_mrr.head_ppr >= PPR_REGION_SIZE / sizeof(mrr_t)) {
		WARN("%s Failed validate PPR header mrr=0x%x, ppr=0x%x, 0x%x\n", __func__,
				ppr_mrr.head_mrr, ppr_mrr.head_ppr, ppr_mrr.mrr_cycle);
		return -1;
	}

	return 0;
}

static int32_t ppr_mrr_update_header(void)
{
	uint32_t offset = PPR_MRR_HEADER_ADDR;
	uint32_t header[3] = {0};
	int32_t ret = 0;

	debug("%s entry\n", __func__);

	if (ppr_mrr.head_mrr > MRR_REGION_SIZE / sizeof(mrr_t) ||
			ppr_mrr.head_ppr > PPR_REGION_SIZE / sizeof(mrr_t)) {
		WARN("%s Failed update PPR header mrr=0x%x, ppr=0x%x, 0x%x\n", __func__,
				ppr_mrr.head_mrr, ppr_mrr.head_ppr, ppr_mrr.mrr_cycle);
		return -1;
	}

	header[0] = ppr_mrr.head_mrr;
	header[1] = ppr_mrr.head_ppr;
	header[2] = ppr_mrr.mrr_cycle;

	debug("%s Update PPR header mrr=0x%x, ppr=0x%x, 0x%x\n", __func__,
			ppr_mrr.head_mrr, ppr_mrr.head_ppr, ppr_mrr.mrr_cycle);

	ret = spi_flash_write(header, sizeof(header), offset);
	if (ret < 0) {
		WARN("Failed to update PPR header 0x%x\n", offset);
		return -1;
	}

	return 0;
}

static int32_t mrr_read_record(mrr_t *record, uint32_t first, uint32_t number)
{
	uint32_t offset = 0;
	uint32_t length = number * sizeof(mrr_t);
	int32_t ret = 0;

	debug("%s entry\n", __func__);

	if (!record || !number)
		return -1;

	offset = MRR_OFFSET(first);

	if (offset < MRR_REGION_ADDR ||
			offset > MRR_REGION_END) {
		WARN("%s Failed MRR region offset %x\n", __func__, offset);
		return -1;
	}

	ret = spi_nor_read((uint8_t *)record, length, offset, mode, bus, cs);

	if (ret < 0) {
		WARN("Failed MRR region read records\n");
		return -1;
	}

	return 0;
}

static int32_t ppr_read_record(ppr_t *record, uint32_t first, uint32_t number)
{
	uint32_t offset = 0;
	uint32_t length = number * sizeof(ppr_t);
	int32_t ret = 0;

	debug("%s entry\n", __func__);

	if (!record || !number)
		return -1;

	offset = PPR_OFFSET(first);

	if (offset < PPR_REGION_ADDR ||
			offset > PPR_REGION_END) {
		WARN("%s Failed PPR region offset %x\n", __func__, offset);
		return -1;
	}

	ret = spi_nor_read((uint8_t *)record, length, offset, mode, bus, cs);

	if (ret < 0) {
		WARN("Failed PPR region read records\n");
		return -1;
	}

	return 0;
}

static int32_t mrr_write_record(mrr_t *record, uint32_t number)
{
	uint32_t offset = 0;
	uint32_t length = number * sizeof(mrr_t);
	int32_t ret = 0;

	debug("%s entry\n", __func__);

	if (!record || !number)
		return -1;

	offset = MRR_OFFSET(ppr_mrr.head_mrr);

	if (offset + length > MRR_REGION_END) {
		WARN("%s Failed MRR region not fit records\n", __func__);
		return -1;
	}

	ret = spi_flash_write(record, length, offset);

	if (ret != length) {
		WARN("Failed MRR region write records %d/%d\n", length, ret);
		return -1;
	}

	ppr_mrr.head_mrr += number;

	return 0;
}

static int32_t ppr_write_record(ppr_t *record, uint32_t number)
{
	uint32_t offset = 0;
	uint32_t length = number * sizeof(ppr_t);
	int32_t ret = 0;

	debug("%s entry\n", __func__);

	if (!record || !number)
		return -1;

	offset = PPR_OFFSET(ppr_mrr.head_ppr);

	if (offset + length > PPR_REGION_END) {
		WARN("%s Failed PPR region not fit records\n", __func__);
		return -1;
	}

	ret = spi_flash_write(record, length, offset);

	if (ret != length) {
		WARN("Failed PPR region write records %d/%d\n", length, ret);
		return -1;
	}

	ppr_mrr.head_ppr += number;

	return 0;
}

static int32_t mrr_clear_region(void)
{
	uint32_t offset = MRR_REGION_ADDR;

	debug("%s entry\n", __func__);

	if (MRR_OFFSET(ppr_mrr.head_mrr) >= MRR_REGION_END) {
		WARN("%s Failed validate head 0x%lx\n", __func__, MRR_OFFSET(ppr_mrr.head_mrr));
		return -1;
	}

	memset(wr_buffer, 0, ERASE_SIZE);

	while (offset < MRR_OFFSET(ppr_mrr.head_mrr)) {
		if (spi_nor_erase(offset, mode, bus, cs)) {
			WARN("Unable erase MRR region 0x%x, 0x%lx\n", offset,
					MRR_OFFSET(ppr_mrr.head_mrr));
			return -1;
		}
		if (spi_nor_write(wr_buffer, ERASE_SIZE, offset, mode, bus, cs) < 0) {
			WARN("Write flash failed offset: 0x%x\n", offset);
			return -1;
		}
		offset += ERASE_SIZE;
	}

	return 0;
}

static int32_t ppr_mrr_clear_header(void)
{
	uint32_t offset = PPR_MRR_HEADER_ADDR;

	debug("%s entry\n", __func__);

	memset(wr_buffer, 0, ERASE_SIZE);

	while (offset < PPR_MRR_HEADER_END) {
		if (spi_nor_erase(offset, mode, bus, cs)) {
			WARN("%s Unable erase MRR region offset=0x%x\n", __func__, offset);
			return -1;
		}
		if (spi_nor_write(wr_buffer, ERASE_SIZE, offset, mode, bus, cs) < 0) {
			WARN("Write flash failed offset: 0x%x\n", offset);
			return -1;
		}
		offset += ERASE_SIZE;
	}

	return 0;
}

static int32_t ppr_make_statistic(void)
{
	uint32_t i = 0, j = 0, k = 0;
	mrr_t rec_m = 0;
	ppr_t rec_p = 0;

	struct ppr *ppr_rec = NULL;
	int32_t ret = 0;
	uint32_t old_index = 0;
	bool present = false;

	memset(buf_m, 0, ERASE_SIZE);
	memset(buf_p, FLASH_ERASE_MARK, ERASE_SIZE);

	old_index = ppr_mrr.head_ppr;

	debug("%s cycle %d head %d/%d\n", __func__, ppr_mrr.mrr_cycle,
			ppr_mrr.head_mrr, ppr_mrr.head_ppr);

	for (i = 0; i < ppr_mrr.head_mrr; i++) {

		if (!(i % MRR_REC_PER_BLK)) {
			mrr_read_record(buf_m, i, MRR_REC_PER_BLK);
		}

		rec_m = buf_m[i % MRR_REC_PER_BLK];

		present = false;

		debug("Mrr records %d, search for record 0x%x\n", ppr_mrr.head_mrr, rec_m);

		// While buffer has space use it rather than flash
		if (k < MRR_REC_PER_BLK) {
			j = 0;
			while (j < k) {
				ppr_rec = (struct ppr *)&buf_p[j];
				if (ppr_rec->record == rec_m) {
					ppr_rec->record_counter++;
					present = true;
					debug("Found match record [%d] %d\n", j, ppr_rec->record_counter);
					break;
				}
				j++;
			}
		}
		else {
			j = old_index;
			while (j < ppr_mrr.head_ppr) {
				ret = ppr_read_record(&rec_p, j, 1);
				if (ret < 0) {
					WARN("Failed read PPR region for statistic\n");
					return -1;
				}
				ppr_rec = (struct ppr *)&rec_p;
				if (ppr_rec->record == rec_m) {
					ppr_rec->record_counter++;
					ret = spi_flash_write(&rec_p, sizeof(rec_p), PPR_OFFSET(j));
					if (ret < 0) {
						WARN("Failed write PPR record statistic\n");
						return -1;
					}
					present = true;
					debug("Found record [%d] %d\n", j, ppr_rec->record_counter);
					break;
				}
				j++;
			}
		}

		if (ppr_rec && !present && k < PPR_REC_PER_BLK) {
			ppr_rec->record = rec_m;
			ppr_rec->record_counter = 1;
			ppr_rec->record_flag = 0;
			// TODO: not implemented
			ppr_rec->cycle = 0;
			buf_p[k] = rec_p;
			k++;
			debug("Update record %x [%d]\n", ppr_rec->record, ppr_rec->record_counter);
		} else if (ppr_rec && !present) {
			ppr_rec->record = rec_m;
			ppr_rec->record_counter = 1;
			ppr_rec->record_flag = 0;
			// TODO: not implemented
			ppr_rec->cycle = 0;
			ret = ppr_write_record(&rec_p, 1);
			if (ret < 0) {
				WARN("Failed PPR region for statistic\n");
				return -1;
			}
			ppr_mrr.head_ppr++;
			debug("Update rec %x [%d]\n", ppr_rec->record, ppr_rec->record_counter);
		}

		if (k == PPR_REC_PER_BLK) {
			ret = ppr_write_record(buf_p, PPR_REC_PER_BLK);
			if (ret < 0) {
				WARN("Failed PPR region update statistic\n");
				return -1;
			}
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

	debug("%s entry\n", __func__);

	ret = spi_flash_config();
	if (ret < 0)
		return -1;

	ret = ppr_mrr_read_header();
	if (ret < 0)
		return -1;

	if (ppr_mrr.head_mrr == FLASH_ERASE_MARK ||
		ppr_mrr.head_ppr == FLASH_ERASE_MARK ||
		ppr_mrr.mrr_cycle == FLASH_ERASE_MARK) {

		ppr_mrr.head_mrr = 0;
		ppr_mrr.head_ppr = 0;
		ppr_mrr.mrr_cycle = 0;

		ret = ppr_mrr_clear_header();
		if (ret < 0)
			return -1;

		ret = mrr_clear_region();
		if (ret < 0)
			return -1;

		debug("Initialize PPR flash [%d, %d, %d]\n", ppr_mrr.head_mrr,
				ppr_mrr.head_ppr, ppr_mrr.mrr_cycle);

	} else if (ppr_mrr.mrr_cycle == 0) {

		ret = mrr_clear_region();
		if (ret < 0)
			return -1;

		debug("Start PPR cycle, clear MRR region [%d, %d]\n", ppr_mrr.head_mrr,
				ppr_mrr.head_ppr);

		ppr_mrr.head_mrr = 0;

		ret = ppr_mrr_update_header();
		if (ret < 0)
			return -1;
	}

	ret = ppr_mrr_read_header();
	if (ret < 0)
		return -1;

	ppr_mrr.mrr_cycle++;

	debug("MRR cycle %d MRR head %d PPR head %d\n", ppr_mrr.mrr_cycle,
			ppr_mrr.head_mrr, ppr_mrr.head_ppr);

	//TODO: find number of channels
	for (ch = 0; ch < 2; ch++) {

		ret = ppr_ddrc_ddr5_read_failure_row(ch);

		if (ret < 0) {
			WARN("Failed to scan channels MRR %d\n", ch);
			continue;
		}

		rec = 0;
		for (r = 0; r < MAX_CS; r++) {
			for (g = 0; g < MAX_GRP; g++) {
				for (d = 0; d < MAX_DRAM; d++) {

					if (!(dramx_mr19[r][g][d] & MR_REC_MASK))
						continue;

					mr.channel   = ch;
					mr.rank      = r;
					mr.device    = d + (g * MAX_DRAM);
					mr.bank_gr   = (dramx_mr18[r][g][d] >> MR_BG_SHIFT) & MR_BG_MASK;
					mr.bank_addr = (dramx_mr18[r][g][d] >> MR_BA_SHIFT) & MR_BA_MASK;
					mr.row_num   = ((dramx_mr18[r][g][d] & MR_R17_MASK) << MR18_OFFS) |
											((dramx_mr17[r][g][d] & 0xFF) << MR17_OFFS) |
											(dramx_mr16[r][g][d] & 0xFF);

					if (rec >= MRR_REC_PER_BLK) {
						WARN("%s Record buffer overflow\n", __func__);
						continue;
					}

					memcpy(mrx + rec, &mr, sizeof(mr));
					rec++;

					debug("CH=%d, RANK=%d, DEV=%d, BG=%d, BA=%d, ROW=%d\n",
							mr.channel, mr.rank, mr.device, mr.bank_gr,
							mr.bank_addr, mr.row_num);
				}
			}
		}

		if (!rec) {
			debug("PPR zero Fail Row address\n");
			continue;
		}

		ret = mrr_write_record(mrx, rec);
		if (ret < 0) {
			WARN("Failure to write MRR record %d\n", rec);
		}

		debug("PPR %d/%d, MRR cycle %d MRR head %d PPR head %d\n",
				rec, ch, ppr_mrr.mrr_cycle, ppr_mrr.head_mrr, ppr_mrr.head_ppr);
	}

	/*
	 * Record most failed record into PPR region
	 */
	if (ppr_mrr.mrr_cycle >= MRR_CYCLES) {
		ret = ppr_make_statistic();
		if (ret < 0) {
			WARN("Failed make statistic\n");
			return -1;
		}
	}

	debug("MRR cycle %d MRR head %d PPR head %d\n", ppr_mrr.mrr_cycle,
			ppr_mrr.head_mrr, ppr_mrr.head_ppr);

	ret = ppr_mrr_update_header();
	if (ret < 0) {
		WARN("Failed update PPR MRR header\n");
		return -1;
	}

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

	debug("Setup PPR timer\n");

	/* Start timer to handle MRR statistics collection */
	timer_hd = timer_create(TM_PERIODIC, MRR_POLL_INTERVAL, ppr_timer_cb);
	if ((int)timer_hd < 0) {
		WARN("PPR: can't create new timer\n");
	} else {
		debug("PPR: timer id = %d created successfully\n", timer_hd);
		timer_start(timer_hd);
	}
}
