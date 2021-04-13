/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLATFORM_DEF_H__
#define __PLATFORM_DEF_H__

#include <plat_cn10k_def.h>

#define PLATFORM_CORE_PER_CLUSTER	12
#define PLATFORM_MAX_CPUS_PER_CLUSTER	PLATFORM_CORE_PER_CLUSTER
#define PLATFORM_CORE_COUNT		(PLATFORM_CLUSTER_COUNT * \
						PLATFORM_CORE_PER_CLUSTER)

/* Number of TWSI interfaces */
#define TWSI_NUM			12

#define MAX_GPIO_INTERRUPTS		76

#ifndef __ASSEMBLER__
int plat_is_irq_ns(uint32_t irq);
void plat_disable_secure_irq(uint32_t irq);
#endif

#endif
