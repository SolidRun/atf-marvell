/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __DLMALLOC_OPTS_H__
#define __DLMALLOC_OPTS_H__

#include <stddef.h>
#include <stdint.h>
#include <errno.h>
#include <octeontx_common.h>

#define FOOTERS			1
#define USE_DL_PREFIX		1
#define HAVE_MORECORE		1
#define MORECORE_CONTIGUOUS	1
#define MORECORE		octeontx_alloc_heap_block
#define HAVE_MMAP		0
#define HAVE_MREMAP		0
#define LACKS_UNISTD_H		1
#define LACKS_SYS_PARAM_H	1
#define LACKS_SYS_TYPES_H	1
#define LACKS_SCHED_H		1
#define LACKS_SYS_MMAN_H	1
#define LACKS_STRINGS_H		1
#define LACKS_ERRNO_H		1
#define LACKS_TIME_H		1
#define USE_BUILTIN_FFS		1
#define NO_MALLOC_STATS		1
#define MALLOC_FAILURE_ACTION	ERROR("%s: Out of memory\n", __func__);
#define DEFAULT_TRIM_THRESHOLD	HEAP_MAX_SIZE

extern void *octeontx_alloc_heap_block(intptr_t increment);

static inline int ffs(int i)
{
	return __builtin_ffs(i);
}

#endif /* __DLMALLOC_OPTS_H__ */
