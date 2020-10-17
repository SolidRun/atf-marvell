/*
 * Copyright (C) 2018-2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __OCTEONTX_IO_STORAGE_H__
#define __OCTEONTX_IO_STORAGE_H__

#if defined(PLAT_cn10ka)
#include <libtim.h>
#include <drivers/io/io_storage.h>

#define TIM_SPEC_BL31          0
#define TIM_SPEC_BL33          1
#ifdef NT_FW_CONFIG
# define TIM_SPEC_NT_FW_CONFIG 2
# define TIM_NUM_SPECS         3
#else
# define TIM_NUM_SPECS         2
#endif

#define TIM_SPEC_SIGNATURE     (0xf65689bb7775c42eULL)

/**
 * SPEC data is encapsulated along with TIM data
 */
typedef struct {
	io_block_spec_t spec;
	uint64_t signature;     /** To verify container */
	struct tim_load_info tim_info;
	unsigned int image_id;
} tim_spec_info_t;
#endif

void octeontx_io_setup(void);

#if defined(PLAT_cn10ka) || defined(PLAT_cnf10ka)
int plat_read_tim(int boot_type, unsigned int image_id,
				uintptr_t dev_handle, uintptr_t *image_spec);

const tim_spec_info_t *plat_find_tim_spec(unsigned int image_id);
#endif

#endif /* __OCTEONTX_IO_STORAGE_H__ */
