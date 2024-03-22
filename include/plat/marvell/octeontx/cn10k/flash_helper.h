
/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <stdio.h>
#include <string.h>
#include <debug.h>

#ifndef __FLASH_HELPER_H__
#define __FLASH_HELPER_H__

struct flash_data {
	uint32_t bus;
	uint32_t cs;
	uint32_t mode;
	uint32_t erase_size;
	uint32_t location;
};

int save_to_flash(void *blk, uint32_t size, struct flash_data *fdata);

#endif
