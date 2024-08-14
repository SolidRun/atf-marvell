/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __FW_LOAD_H__
#define __FW_LOAD_H__

/**
 * Load an EFI image
 */
int load_image_from_boot_device(uintptr_t img_buf, uint64_t *image_size,
		   uint64_t load_params, char *image_name, bool nsec);
int load_switch_fw(uintptr_t super_img_buf, uintptr_t cm3_img_buf,
			   uint64_t *cm3_size, uint64_t load_params, bool nsec);
#endif /* __FW_LOAD_H__ */
