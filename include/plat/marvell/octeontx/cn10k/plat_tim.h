/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_TIM_H__
#define __PLAT_TIM_H__
#include <libtim.h>
#include <drivers/io/io_storage.h>

int cn10k_get_firmware_layout_root(const void *fdt_addr);

int get_tim_address_size(const char *name, size_t *addr, size_t *size);

#endif /* __PLAT_TIM_H__ */
