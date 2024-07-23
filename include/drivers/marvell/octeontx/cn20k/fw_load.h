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
int load_efi_image(uintptr_t efi_img_buf, uint64_t *efi_image_size,
		   uint64_t load_params, int image_id, bool nsec);

#endif /* __FW_LOAD_H__ */
