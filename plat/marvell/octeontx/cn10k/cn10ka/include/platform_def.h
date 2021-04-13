/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLATFORM_DEF_H__
#define __PLATFORM_DEF_H__

#include <plat_cn10k_def.h>

#define PLATFORM_CORE_PER_CLUSTER	24
#define PLATFORM_MAX_CPUS_PER_CLUSTER	PLATFORM_CORE_PER_CLUSTER
#define PLATFORM_CORE_COUNT		(PLATFORM_CLUSTER_COUNT * \
						PLATFORM_CORE_PER_CLUSTER)
/*
 * Memory used for SFP slot config/status, EEPROM info
 * between AP and MCP. SM should be part of non-secure
 * memory region as MCP can access only non-secure mem
 */
#define SFP_SHMEM_BASE			(RVU_MEM_BASE + RVU_MEM_SIZE)
#define SFP_SHMEM_SIZE			0x10000 /* 64KB to start with? */

#define ETH_LINK_SHMEM_BASE                 (SFP_SHMEM_BASE + SFP_SHMEM_SIZE)
#define ETH_LINK_SHMEM_SIZE                  0x100000 /* 1MB */

/* Number of TWSI interfaces */
#define TWSI_NUM			6

#define MAX_GPIO_INTERRUPTS		84

#endif
