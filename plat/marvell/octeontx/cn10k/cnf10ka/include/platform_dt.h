/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef _PLATFORM_DT_H_
#define _PLATFORM_DT_H_

/* Total number of SPI Bus */
#define MAX_SPI_BUS		2

/* Total number of SPI CS */
#define MAX_SPI_CS		4

#define MAX_RPM			4
#define BPHY_BITMAP		0xc /* RPMs 2 & 3 are connected to BPHY */

#define MAX_GSERM		7
#define MAX_PORTM		28
#define MAX_REFCLK		3  /* Qty of REF_CLK's */

#define MAX_LMAC_PER_RPM	4
#define MAX_LANES_PER_PORTM	4

/* Total number of Hardware VFs */
#define MAX_RVU_HWVFS		256

/* Maximum number of RVU VFs per PF */
#define MAX_VFS_PER_PF		128

/* Global, default number of VFs */
#define DEFAULT_VFS		3

/* Default number of VFs for PF0 (admin PF) */
#define DEFAULT_AF_PF0_VFS	0

/* Default number of VFs for PF15 (CPT PF) */
#define DEFAULT_CPT_PF15_VFS	64

/* Default number of MSIX vectors for software
 * provisioned (SSO_TIM/NPA) RVU PFs */
#define DEFAULT_MSIX_SW		133

/*
 * Default number of MSIX vectors for LMAC RVU PFs, based on
 * NPA_LF (66) + NIX_LF (131) + RVU_PF (13) = 210, which addresses
 * the bare minimum configuration of NIX + NPA.
 */
#define DEFAULT_MSIX_LMAC	210

/*
 * Default number of MSIX vectors for AF PF
 5 RVU_AF + 7 RVU_PF + 5 NIX + 5 NPA + 3 SSO + 5 TIM + (3 * (1 NDC)) + 5 CPT
 */
#define DEFAULT_MSIX_AF		38

/* RVU node names definitions */
#define RVU_ADMIN_FDT_NODE	"rvu-admin@0"
#define RVU_SSO_TIM_FDT_NODE	"rvu-sso-tim@0"
#define RVU_NPA_FDT_NODE	"rvu-npa@0"
#define RVU_SDP_FDT_NODE	"rvu-sdp@0"

#endif
