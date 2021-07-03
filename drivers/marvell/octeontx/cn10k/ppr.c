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

#undef PPR_DEBUG
#ifdef PPR_DEBUG
#define debug(...) printf(__VA_ARGS__)
#else
#define debug(...) ((void) (0))
#endif

static uint32_t timer_hd;
static uint32_t timer_cycle;

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

static inline int32_t spi_flash_config(void)
{
	/* Check if device is present */
	if (!plat_octeontx_bcfg->spi_cfg[bus].cs[cs])
		return -1;
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
static int32_t spi_flash_write(const void *buf, int length, int loc)
{
	int bytes_remain = length;
	int sector_addr = 0;
	int sector_offset = 0;
	int chunk = 0;

	while (bytes_remain > 0) {

		sector_addr   = loc & ~(ERASE_SIZE - 1);
		sector_offset = loc &  (ERASE_SIZE - 1);

		chunk = ERASE_SIZE - sector_offset;
		chunk = (chunk <= bytes_remain) ? chunk : bytes_remain;

		if ((sector_offset != 0) || (chunk < ERASE_SIZE)) {
			memset(wr_buffer, 0, ERASE_SIZE);
			if (spi_nor_read(wr_buffer, ERASE_SIZE, sector_addr, mode, bus, cs) < 0) {
				WARN("Failed read flash offset: 0x%x\n", sector_addr);
				return length - bytes_remain;
			}
			memcpy(wr_buffer + sector_offset, buf, chunk);
		}

		if (spi_nor_erase(sector_addr, mode, bus, cs)) {
			WARN("Failed erase flash offset: 0x%x\n", sector_addr);
			return length - bytes_remain;
		}
		if (spi_nor_write(wr_buffer, ERASE_SIZE, sector_addr, mode, bus, cs) < 0) {
			WARN("Failed write flash offset 0x%x\n", sector_addr);
			return length - bytes_remain;
		}
		bytes_remain -= chunk;

		if (cavm_is_platform(PLATFORM_ASIM))
			continue;
		memset(buffer, 0, ERASE_SIZE);
		if (spi_nor_read(buffer, ERASE_SIZE, sector_addr, mode, bus, cs) < 0) {
			WARN("Failed read flash offset 0x%x\n", sector_addr);
			return length - bytes_remain;
		}
		if (memcmp(buffer, wr_buffer, ERASE_SIZE)) {
			WARN("Failed compare flash data failed 0x%x\n", sector_addr);
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

	ret = spi_nor_read((uint8_t *)header, sizeof(header), offset, mode, bus, cs);
	if (ret < 0) {
		WARN("Failed read PPR header\n");
		return -1;
	}

	ppr_mrr.head_mrr  = header[0];
	ppr_mrr.head_ppr  = header[1];
	ppr_mrr.mrr_cycle = header[2];

	if (ppr_mrr.head_mrr > MRR_REGION_SIZE / sizeof(mrr_t) ||
			ppr_mrr.head_ppr > PPR_REGION_SIZE / sizeof(mrr_t)) {
		WARN("%s Failed validate PPR header\n", __func__);
		return -1;
	}

	return 0;
}

static int32_t ppr_mrr_update_header(void)
{
	uint32_t offset = PPR_MRR_HEADER_ADDR;
	uint32_t header[3] = {0};
	int32_t ret = 0;

	if (ppr_mrr.head_mrr > MRR_REGION_SIZE / sizeof(mrr_t) ||
			ppr_mrr.head_ppr > PPR_REGION_SIZE / sizeof(mrr_t)) {
		WARN("%s Failed validate PPR header\n", __func__);
		return -1;
	}

	header[0] = ppr_mrr.head_mrr;
	header[1] = ppr_mrr.head_ppr;
	header[2] = ppr_mrr.mrr_cycle;

	ret = spi_flash_write(header, sizeof(header), offset);
	if (ret < 0) {
		WARN("Failed to update PPR header\n");
		return -1;
	}

	return 0;
}

__attribute__((unused))
static int32_t mrr_read_record(mrr_t *record, uint32_t first, uint32_t number)
{
	uint32_t offset = 0;
	uint32_t length = number * sizeof(mrr_t);
	int32_t ret = 0;

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

__attribute__((unused))
static int32_t mrr_write_record(mrr_t *record, uint32_t number)
{
	uint32_t offset = 0;
	uint32_t length = number * sizeof(mrr_t);
	int32_t ret = 0;

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

__attribute__((unused))
static int32_t ppr_write_record(ppr_t *record, uint32_t number)
{
	uint32_t offset = 0;
	uint32_t length = number * sizeof(ppr_t);
	int32_t ret = 0;

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

	if (MRR_OFFSET(ppr_mrr.head_mrr) >= MRR_REGION_END)
		return -1;

	memset(wr_buffer, 0, ERASE_SIZE);

	while (offset < MRR_OFFSET(ppr_mrr.head_mrr)) {
		if (spi_nor_erase(offset, mode, bus, cs)) {
			WARN("Unable erase MRR region\n");
			return -1;
		}
		if (spi_nor_write(wr_buffer, ERASE_SIZE, offset, mode, bus, cs) < 0) {
			WARN("Write flash failed offset: 0x%x\n", offset);
			return -1;
		}
		offset += ERASE_SIZE;
	}
	ppr_mrr.head_mrr = 0;

	return 0;
}

static int32_t ppr_mrr_clear_header(void)
{
	uint32_t offset = PPR_MRR_HEADER_ADDR;

	memset(wr_buffer, 0, ERASE_SIZE);

	while (offset < PPR_MRR_HEADER_END) {
		if (spi_nor_erase(offset, mode, bus, cs)) {
			WARN("%s Unable erase MRR region\n", __func__);
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

	mrr_t *buf_m = (mrr_t *)wr_buffer;
	ppr_t *buf_p = (ppr_t *)buffer;

	struct ppr *ppr_rec = NULL;
	int32_t ret = 0;
	uint32_t old_index = 0;
	bool present = false;

	if (ppr_mrr_read_header() < 0)
		return -1;

	memset(wr_buffer, 0, ERASE_SIZE);
	memset(buffer, FLASH_ERASE_MARK, ERASE_SIZE);

	old_index = ppr_mrr.head_ppr;

	for (i = 0; i < ppr_mrr.head_mrr; i++) {

		if (!(i % MRR_REC_PER_BLK)) {
			mrr_read_record(buf_m, i, MRR_REC_PER_BLK);
		}

		rec_m = buf_m[i % MRR_REC_PER_BLK];

		present = false;

		if (k < MRR_REC_PER_BLK) {
			j = 0;
			while (j < k) {
				ppr_rec = (struct ppr *)&buf_p[j];
				if (ppr_rec->record == rec_m) {
					ppr_rec->record_counter++;
					present = true;
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
					break;
				}
				j++;
			}
		}

		if (!present && k < PPR_REC_PER_BLK) {
			ppr_rec->record = rec_m;
			ppr_rec->record_counter = 1;
			buf_p[k] = rec_p;
			k++;
		} else if (!present) {
			ppr_rec->record = rec_m;
			ppr_rec->record_counter = 1;
			ret = ppr_write_record(&rec_p, 1);
			if (ret < 0) {
				WARN("Failed PPR region for statistic\n");
				return -1;
			}
			ppr_mrr.head_ppr++;
		}

		if (k == PPR_REC_PER_BLK) {
			if (ppr_mrr_read_header() < 0)
				return -1;
			ret = ppr_write_record(buf_p, PPR_REC_PER_BLK);
			if (ret < 0) {
				WARN("Failed PPR region update statistic\n");
				return -1;
			}
			if (ppr_mrr_update_header() < 0)
				return -1;
		}
	}

	return 0;
}

__attribute__((unused))
static int32_t ppr_mark_repaired(uint32_t idx)
{
	uint32_t offset = 0;
	uint8_t bitmap = 0;
	int32_t ret = 0;

	offset = (PPR_MRR_HEADER_ADDR + sizeof(struct ppr_mrr_header)) + idx / 8;
	if (offset >= PPR_MRR_HEADER_END) {
		WARN("Repaired record bitmap out of range\n");
		return -1;
	}

	ret = spi_nor_read(&bitmap, sizeof(bitmap), offset, mode, bus, cs);
	if (ret < 0) {
		WARN("Failed read ppr bitmap 0x%x\n", offset);
		return -1;
	}

	bitmap |= 1 << idx % 8;

	ret = spi_flash_write(&bitmap, sizeof(bitmap), offset);
	if (ret != sizeof(bitmap)) {
		WARN("Failed to update bitmap\n");
		return -1;
	}

	return 0;
}

__attribute__((unused))
static int32_t ppr_is_repaired(uint32_t idx)
{
	uint32_t offset = 0;
	uint8_t bitmap = 0;
	int32_t ret = 0;

	offset = (PPR_MRR_HEADER_ADDR + sizeof(struct ppr_mrr_header)) + idx/8;
	if (offset > PPR_MRR_HEADER_END) {
		WARN("Repaired record bitmap out of range\n");
		return -1;
	}

	ret = spi_nor_read(&bitmap, sizeof(bitmap), offset, mode, bus, cs);
	if (ret < 0) {
		WARN("Failed read PPR bitmap 0x%x\n", offset);
		return -1;
	}

	return bitmap & (1 << idx % 8);
}

static int ppr_timer_cb(int hd)
{
	int32_t ret = 0;

	ret = spi_flash_config();
	if (ret < 0) {
		WARN("Failed configure SPI\n");
		return -1;
	}

	ret = ppr_mrr_read_header();
	if (ret < 0) {
		WARN("Failed read PPR header\n");
		return -1;
	}

	if (ppr_mrr.mrr_cycle == 0) {
		ret = mrr_clear_region();
		if (ret < 0) {
			WARN("Failed clear MRR region\n");
			return -1;
		}
	}

	ppr_mrr.mrr_cycle++;
	ret = ppr_mrr_update_header();
	if (ret < 0) {
		WARN("Failed update PPR header\n");
		return -1;
	}

	/*
	 * Collect and write data here
	 */
	//mrr_write_record();

	/*
	 * Record most failed record into PPR region
	 */
	if (ppr_mrr.mrr_cycle >= MRR_CYCLES) {

		ret = ppr_mrr_read_header();
		if (ret < 0)
			return -1;

		ret = ppr_make_statistic();
		if (ret < 0) {
			WARN("Failed make statistic\n");
			return -1;
		}
	}

	ret = ppr_mrr_update_header();
	if (ret < 0) {
		WARN("Failed update PPR MRR header\n");
		return -1;
	}

	debug("%s timer_cycle = %d\n", __func__, timer_cycle);

	return 0;
}

/*
 * Initialize Post Package Repair thread for periodic action
 */
void ppr_fw_init(void)
{
	/* Currently fixed for BUS:0, CS:0 */
	int32_t ret = 0;
	bus = 0;
	cs = 0;
	mode = SPI_ADDRESSING_32BIT;

	debug("Setup PPR timer\n");

	ppr_mrr_read_header();

	if (ppr_mrr.head_mrr == FLASH_ERASE_MARK ||
		ppr_mrr.head_ppr == FLASH_ERASE_MARK ||
		ppr_mrr.mrr_cycle == FLASH_ERASE_MARK) {
		ppr_mrr_clear_header();
		ret = mrr_clear_region();
		if (ret < 0) {
			WARN("Failed clear MRR region\n");
		}
	}

	/* Start timer to handle MRR statistics collection */
	timer_hd = timer_create(TM_PERIODIC, MRR_POLL_INTERVAL, ppr_timer_cb);
	if (timer_hd < 0) {
		WARN("PPR: can't create new timer\n");
	} else {
		debug("PPR: timer id = %d created successfully\n", timer_hd);
		timer_start(timer_hd);
	}
}
