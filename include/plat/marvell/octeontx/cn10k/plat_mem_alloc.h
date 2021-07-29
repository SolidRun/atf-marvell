/*
 * Copyright (C) 2021 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_MEM_ALLOC_H__
#define __PLAT_MEM_ALLOC_H__

void *octeontx_alloc_heap_block(intptr_t increment);

int octeon_init_heap(void);

/** Wrapper for malloc() */
void *octeontx_malloc(size_t size);

/** Wrapper for calloc() */
void *octeontx_calloc(size_t nmemb, size_t size);

/** Wrapper for free() */
void octeontx_free(void *ptr);

/** Wrapper for realloc() */
void *octeontx_realloc(void *ptr, size_t size);

/** Wrapper for memalign() */
void *octeontx_memalign(size_t alignment, size_t size);

/** Wrapper for valloc() */
void *octeontx_valloc(size_t size);

#endif /* __PLAT_MEM_ALLOC_H__ */
