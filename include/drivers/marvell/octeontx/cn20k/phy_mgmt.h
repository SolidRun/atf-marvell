/*
 * Copyright (c) 2024 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __PHY_MGMT_H__
#define __PHY_MGMT_H__

#include <octeontx_common.h>
#include <rpm.h>

/* Forward declaration of structure from rpm.h */
typedef union rpm_link_status link_state_t;

/* PHY types */
typedef enum phy_type {
	PHY_NONE = 0,
} phy_type_t;

typedef struct phy_compat {
	char compatible[64];	/* compatible string */
	int phy_type;		/* phy_type_t */
} phy_compatible_type_t;

typedef struct phy_config {
	int type;
	int addr;	/* PHY ADDR on MDIO bus */
	int mdio_bus;	/* SMI bus number */
	int fdt_offset; /* offset of PHY node in Linux DT */
} phy_config_t;

#endif /* __CAVM_PHY_MGMT_H__ */
