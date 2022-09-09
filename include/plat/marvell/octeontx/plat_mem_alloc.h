/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_MEM_ALLOC_H__
#define __PLAT_MEM_ALLOC_H__

#include <dlmalloc.h>

int octeontx_init_heap(void);

/** Wrapper for malloc() */
static inline void *octeontx_malloc(size_t size)
{
	return dlmalloc(size);
}

/** Wrapper for calloc() */
static inline void *octeontx_calloc(size_t nmemb, size_t size)
{
	return dlcalloc(nmemb, size);
}

/** Wrapper for free() */
static inline void octeontx_free(void *ptr)
{
	dlfree(ptr);
}

/** Wrapper for realloc() */
static inline void *octeontx_realloc(void *ptr, size_t size)
{
	return dlrealloc(ptr, size);
}

/** Wrapper for memalign() */
static inline void *octeontx_memalign(size_t alignment, size_t size)
{
	return dlmemalign(alignment, size);
}

/** Wrapper for posix_memalign() */
static inline int posix_memalign(void **memptr, size_t alignment, size_t size)
{
	return dlposix_memalign(memptr, alignment, size);
}

/** Wrapper for valloc() */
static inline void *octeontx_valloc(size_t size)
{
	return dlvalloc(size);
}


#endif /* __PLAT_MEM_ALLOC_H__ */
