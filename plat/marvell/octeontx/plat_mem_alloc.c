/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <arch.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <octeontx_mmap_utils.h>
#include <plat_mem_alloc.h>

extern int init_dlmalloc(void);

static void * const heap_start = (void *)HEAP_BASE;
static void * const heap_end = (void *)HEAP_BASE + HEAP_MAX_SIZE;
static void *current_ptr;

void *octeontx_alloc_heap_block(intptr_t increment)
{
	void *ptr;

	if ((current_ptr + increment > heap_end) ||
	    (current_ptr + increment) < heap_start)
		return (void *)(~(size_t)0);

	ptr = current_ptr;
	current_ptr += increment;
	return ptr;
}

int octeontx_init_heap(void)
{
#if defined(PLAT_XLAT_TABLES_DYNAMIC)
	octeontx_mmap_add_dynamic_region_with_sync(HEAP_BASE, HEAP_BASE,
						   HEAP_MAX_SIZE,
						   MT_DEVICE | MT_RW  | MT_SECURE);
#else
	mmap_add_region(HEAP_BASE, HEAP_BASE, HEAP_MAX_SIZE,
			MT_DEVICE | MT_RW | MT_SECURE);
#endif
	current_ptr = heap_start;

	init_dlmalloc();

	dlmalloc_set_footprint_limit(HEAP_MAX_SIZE);
	return 0;
}

