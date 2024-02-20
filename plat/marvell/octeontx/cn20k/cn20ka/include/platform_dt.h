/*
 * Copyright (c) 2023 Marvell.
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

/* Total number of USB Buses */
#define MAX_USB_BUS		2

#define MAX_RPM			3
#define BPHY_BITMAP             0x0 /* No BPHY connected RPMs */

#define MAX_GSERM		2
#define MAX_PORTM		6
#define MAX_REFCLK		2 /* Qty of REF_CLK's - TODO: confirm for cn20k */

#define MAX_LMAC_PER_RPM	8
#define MAX_LANES_PER_PORTM	4

/* Global, default number of VFs */
#define DEFAULT_VFS		3 // TODO: confirm for cn20k

/*
 * Default number of MSIX vectors for LMAC RVU PFs, based on
 * NPA_LF (66) + NIX_LF (131) + RVU_PF (13) = 210, which addresses
 * the bare minimum configuration of NIX + NPA.
 */
#define DEFAULT_MSIX_LMAC	210 // TODO: confirm for cn20k

#endif
