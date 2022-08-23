/*
 * Copyright (c) 2018 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PHY_MARVELL_H__
#define __PHY_MARVELL_H__

#include <phy_mgmt.h>

/* define DEBUG_ATF_MARVELL_PHY_DRIVER to enable debug logs */

#undef  DEBUG_ATF_MARVELL_PHY_DRIVER

#ifdef DEBUG_ATF_MARVELL_PHY_DRIVER
#define debug_phy_driver printf
#else
#define debug_phy_driver(...) ((void) (0))
#endif

phy_drv_t *marvell_1514_check_type(int type);
#ifdef MARVELL_PHY_1548
phy_drv_t *marvell_1548_check_type(int type);
#endif /* MARVELL_PHY_1548 */
#ifdef MARVELL_PHY_5123
phy_drv_t *marvell_5123_check_type(int type);
#endif /* MARVELL_PHY_5123 */
#ifdef MARVELL_PHY_5113
phy_drv_t *marvell_5113_check_type(int type);
#endif /* MARVELL_PHY_5113 */
#ifdef MARVELL_PHY_6141
phy_drv_t *marvell_6141_check_type(int type);
#endif /* MARVELL_PHY_6141 */
#ifdef MARVELL_PHY_3310
phy_drv_t *marvell_3310_check_type(int type);
#endif /* MARVELL_PHY_3310 */
#ifdef MARVELL_PHY_7121
phy_drv_t *marvell_7121_check_type(int type);
#endif /* MARVELL_PHY_7121 */
#ifdef MARVELL_PHY_1780
phy_drv_t *marvell_1780_check_type(int type);
#endif /* MARVELL_PHY_1780 */

#endif /* __PHY_MARVELL_H__ */
