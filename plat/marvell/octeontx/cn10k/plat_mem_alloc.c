/*
 * Copyright (C) 2021 Marvell International Ltd.
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
#include <dlmalloc.h>

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

void *octeontx_malloc(size_t size)
{
	return dlmalloc(size);
}

void *octeontx_calloc(size_t nmemb, size_t size)
{
	return dlcalloc(nmemb, size);
}

void octeontx_free(void *ptr)
{
	dlfree(ptr);
}

void *octeontx_realloc(void *ptr, size_t size)
{
	return dlrealloc(ptr, size);
}

void *octeontx_memalign(size_t alignment, size_t size)
{
	return dlmemalign(alignment, size);
}

int posix_memalign(void **memptr, size_t alignment, size_t size)
{
	return dlposix_memalign(memptr, alignment, size);
}

void *octeontx_valloc(size_t size)
{
	return dlvalloc(size);
}

