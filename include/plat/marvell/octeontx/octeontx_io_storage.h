/*
 * Copyright (C) 2018 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __OCTEONTX_IO_STORAGE_H__
#define __OCTEONTX_IO_STORAGE_H__

void octeontx_io_setup(void);

#if defined(PLAT_cn10ka) || defined(PLAT_cnf10ka)
int plat_read_tim(int boot_type, unsigned int image_id,
				uintptr_t dev_handle, uintptr_t *image_spec);
#endif

#endif /* __OCTEONTX_IO_STORAGE_H__ */
