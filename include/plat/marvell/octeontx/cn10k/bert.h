/*
 * Copyright (c) 2024 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __BERT_H__
#define __BERT_H__

#include <octeontx_ras.h>

#define BERT_SIGNATURE  0x54524542

struct bert_block {
	uint32_t   signature;
	struct otx2_ghes_err_mem_rec rec;
} __attribute__((__packed__));

int bert_init(void *fdt);
int32_t bert_add(struct otx2_ghes_err_mem_rec *data);

#endif
