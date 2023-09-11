/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * https://spdx.org/licenses
 *
 */

#ifndef __PLATFORM_SVC_H__
#define __PLATFORM_SVC_H__

#include <plat_svc.h>
#include <plat_svc_dbg.h>

/* OcteonTX Service Calls version numbers */
#define PLAT_OCTEONTX_VERSION_MAJOR	0x1
#define PLAT_OCTEONTX_VERSION_MINOR	0x2

#define PLAT_OCTEONTX_INSTALL_BPHY_PSM_ERRINT	0xc2000803
#define PLAT_OCTEONTX_REMOVE_BPHY_PSM_ERRINT	0xc2000804
#define PLAT_OCTEONTX_GET_BPHY_PSM_MAX_IRQ	0xc2000805
#define PLAT_OCTEONTX_GET_BPHY_PSM_IRQS_BITMASK	0xc2000806

/* Number of platform specific SMCs */
#define PLAT_OCTEONTX_NUM_SMC_CALLS	(4 + OTX3_NUM_SMC_CALLS + DBG_OTX3_NUM_SMC_CALLS)

#endif /* __PLATFORM_SVC_H__ */
