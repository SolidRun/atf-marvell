/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __OCTEONTX_DRAM_H__
#define __OCTEONTX_DRAM_H__

#include <plat_board_cfg.h>

uint64_t octeontx_dram_size();
uint64_t memory_region_get_info(int index, uint64_t *start);
#ifdef PLAT_CN10K_FAMILY
uint64_t octeontx_dram_reserve(uint64_t size, ccs_region_index_t index, int *new_index);
int adjust_asc_region(ccs_region_index_t index, uint64_t size, int *new_index);
int adjust_asc_region_next_avail(uint64_t size, int *new_index, uint64_t *new_base);
uint64_t octeontx_dram_cut_region_tail(uint64_t size, ccs_region_index_t index);
uint64_t plat_get_memory_size(void);
int memory_region_get_last_nsec(uint64_t *start, uint64_t alloc_sz);
void dump_ccs_region_config(void);
#else
uint64_t octeontx_dram_reserve(uint64_t size, int index);
#endif

#endif /* __OCTEONTX_DRAM_H__ */
