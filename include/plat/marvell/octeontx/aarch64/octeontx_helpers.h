/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __OCTEONTX_HELPERS_H__
#define __OCTEONTX_HELPERS_H__

#define CN10K_CORE_PWROFF	0
#define CN10K_CORE_ONFINISH	1
#define CN10K_CORE_RESET	2
#define CN10K_CORE_CLEAR_RESET	3

#ifndef __ASSEMBLER__
void plat_secondary_cold_boot_setup(void);

#if defined(PLAT_CN10K_FAMILY) || defined(PLAT_CN20K_FAMILY)
extern volatile int8_t enable_hotplug[PLATFORM_CORE_COUNT];
#endif
#endif

#endif /* __OCTEONTX_HELPERS_H__ */
