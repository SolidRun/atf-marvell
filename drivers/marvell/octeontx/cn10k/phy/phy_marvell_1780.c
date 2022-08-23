/*
 * Copyright (C) 2022 Marvell.
 *
 * SPDX-License-Identifier:		BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <arch.h>
#include <stdio.h>
#include <debug.h>
#include <drivers/delay_timer.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <phy_marvell.h>
#include <phy_mgmt.h>
#include <smi.h>
#include <eth_intf.h>
#include <libfdt.h>

#include <madApiDefs.h>
#include <madApiPrototype.h>

typedef struct {
	MAD_DEV mdev;
	int initialized;
} phy_1780_priv_t;

static phy_1780_priv_t phy_1780_priv[MAX_RPM];

static inline int get_mdio_bus_id(MAD_DEV *mdev)
{
	phy_config_t *phy = (phy_config_t *)mdev->appData;
	if (!phy)
		return -1;

	return phy->mdio_bus;
}

static MAD_BOOL mad_mdio_c22_read(MAD_DEV *dev,
				  unsigned int phyAddr,
				  unsigned int miiReg,
				  unsigned int *value)
{
	int mdio_bus = get_mdio_bus_id(dev);

	if (mdio_bus == -1)
		return MAD_FALSE;

	*value = smi_read(mdio_bus, CLAUSE22, phyAddr, -1, miiReg);
	return MAD_TRUE;
}

static MAD_BOOL mad_mdio_c22_write(MAD_DEV *dev,
				   unsigned int phyAddr,
				   unsigned int miiReg,
				   unsigned int value)
{
	int mdio_bus = get_mdio_bus_id(dev);

	if (mdio_bus == -1)
		return MAD_FALSE;

	smi_write(mdio_bus, phyAddr, -1, CLAUSE22, miiReg, value);
	return MAD_TRUE;
}

static MAD_BOOL mad_mdio_c45_read(MAD_DEV *dev,
				  unsigned int phyAddr,
				  unsigned int devAddr,
				  unsigned int xmiiReg,
				  unsigned int *value)
{
	int mdio_bus = get_mdio_bus_id(dev);

	if (mdio_bus == -1)
		return MAD_FALSE;

	*value = smi_read(mdio_bus, CLAUSE45, phyAddr, devAddr, xmiiReg);
	return MAD_TRUE;
}

static MAD_BOOL mad_mdio_c45_write(MAD_DEV *dev,
				   unsigned int phyAddr,
				   unsigned int devAddr,
				   unsigned int xmiiReg,
				   unsigned int value)
{
	int mdio_bus = get_mdio_bus_id(dev);

	if (mdio_bus == -1)
		return MAD_FALSE;

	smi_write(mdio_bus, phyAddr, devAddr, CLAUSE45, xmiiReg, value);
	return MAD_TRUE;
}

static MAD_SYS_CONFIG mad_sys_cfg = {
	.BSPFunctions = {
		.readMii = mad_mdio_c22_read,
		.writeMii = mad_mdio_c22_write,
		.readXMii = mad_mdio_c45_read,
		.writeXMii = mad_mdio_c45_write,
	},
};

/* One time initialization for the PHY if required */
void phy_marvell_1780_probe(int eth_id, int lmac_id)
{
	phy_1780_priv_t *priv;
	phy_config_t *phy;
	MAD_STATUS ret;

	priv = &phy_1780_priv[eth_id];

	if (priv->initialized)
		return;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	phy->req_an = 1;
	priv->mdev.appData = (void *)phy;

	mad_sys_cfg.smiBaseAddr = phy->addr;
	mad_sys_cfg.switchType = MAD_SYS_SW_TYPE_NO;

	ret = mdLoadDriver(&mad_sys_cfg, &priv->mdev);
	if (ret != MAD_OK)
		ERROR("%s: for ETH%dLMAC%d failed\n",
		      __func__, eth_id, lmac_id);

	/* Make the PHY initialized on other LMACs too */
	for (int id = 0; id < MAX_LMAC_PER_RPM; id++) {
		phy = plat_eth_get_phy_cfg(eth_id, id);
		phy->init = 1;
		phy->priv = (void *)priv;
	}

	priv->initialized = 1;
}

/* To set the operating mode of the PHY if required */
void phy_marvell_1780_config(int eth_id, int lmac_id)
{
	phy_config_t *phy;
	phy_1780_priv_t *priv;
	MAD_STATUS ret;
	MAD_LPORT lport;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	priv = (phy_1780_priv_t *)phy->priv;
	lport = phy->port;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	ret = mdSysSetPhyEnable(&priv->mdev, lport, MAD_TRUE);
	if (ret != MAD_OK) {
		ERROR("%s: %d:%d SysSetPhyEnable failed\n",
			__func__, eth_id, lmac_id);
		return;
	}

	ret = mdCopperSetAutoNeg(&priv->mdev, lport, MAD_TRUE,
		MAD_AUTO_AD_100FDX |
		MAD_AUTO_AD_100HDX |
		MAD_AUTO_AD_10FDX |
		MAD_AUTO_AD_10HDX |
		MAD_AUTO_AD_1000FDX |
		MAD_AUTO_AD_1000HDX);

	if (ret != MAD_OK) {
		ERROR("%s: %d:%d CopperSetAutoNeg failed\n",
			__func__, eth_id, lmac_id);
		return;
	}
}

/* To enable/disable AN */
void phy_marvell_1780_set_an(int eth_id, int lmac_id)
{
	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);
}

/* To obtain the link status */
void phy_marvell_1780_get_link_status(int eth_id, int lmac_id,
					link_state_t *link)
{
	phy_config_t *phy;
	phy_1780_priv_t *priv;
	int speed, duplex;
	MAD_STATUS ret;
	MAD_LPORT lport;
	MAD_SPEED_MODE speed_mode;
	MAD_DUPLEX_MODE dplx_mode;
	MAD_BOOL link_on;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	priv = (phy_1780_priv_t *)phy->priv;
	lport = phy->port;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	ret = mdGetSpeedStatus(&priv->mdev, lport, &speed_mode);
	if (ret != MAD_OK) {
		ERROR("%s: %d:%d GetSpeedStatus failed\n",
			__func__, eth_id, lmac_id);
		return;
	}

	switch (speed_mode) {
	case MAD_SPEED_10M:
		speed = ETH_LINK_10M;
		break;
	case MAD_SPEED_100M:
		speed = ETH_LINK_100M;
		break;
	case MAD_SPEED_1000M:
		speed = ETH_LINK_1G;
		break;
	default:
		speed = ETH_LINK_NONE;
		break;
	}

	ret = mdGetDuplexStatus(&priv->mdev, lport, &dplx_mode);
	if (ret != MAD_OK) {
		ERROR("%s: %d:%d GetDuplexStatus failed\n",
			__func__, eth_id, lmac_id);
		return;
	}

	switch (dplx_mode) {
	case MAD_FULL_DUPLEX:
		duplex = 1;
		break;
	case MAD_HALF_DUPLEX:
	default:
		duplex = 0;
		break;
	}

	ret = mdGetLinkStatus(&priv->mdev, lport, &link_on);
	if (ret != MAD_OK) {
		ERROR("%s: %d:%d GetLinkStatus failed\n",
			__func__, eth_id, lmac_id);
		return;
	}

	if (link_on) {
		link->s.speed = speed;
		link->s.full_duplex = duplex;
		link->s.link_up = 1;
		return;
	} else {
		link->s.speed = ETH_LINK_NONE;
		link->s.full_duplex = 0;
		link->s.link_up = 0;
	}
}

void phy_marvell_1780_supported_modes(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	phy->supported_link_modes =
				(1 << ETH_MODE_SGMII_BIT) |
				(1 << ETH_MODE_1000_BASEX_BIT);
}

phy_drv_t marvell_1780_drv = {
		.drv_name		= "MARVELL-88X1780",
		.drv_type		= PHY_MARVELL_1780,
		.flags			= 0,
		.probe			= phy_marvell_1780_probe,
		.config			= phy_marvell_1780_config,
		.set_an			= phy_marvell_1780_set_an,
		.reset			= phy_generic_reset,
		.get_link_status	= phy_marvell_1780_get_link_status,
		.set_supported_modes	= phy_marvell_1780_supported_modes,
		.shutdown		= phy_generic_shutdown,
};

phy_drv_t *marvell_1780_check_type(int type)
{
	if (marvell_1780_drv.drv_type == type)
		return &marvell_1780_drv;
	return NULL;
}

