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
static void phy_marvell_1780_probe(int eth_id, int lmac_id)
{
	phy_1780_priv_t *priv;
	phy_config_t *phy;
	MAD_STATUS ret;

	priv = &phy_1780_priv[eth_id];

	if (priv->initialized)
		return;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	if (!phy)
		return;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	priv->mdev.appData = (void *)phy;
	mad_sys_cfg.smiBaseAddr = phy->addr;
	mad_sys_cfg.switchType = MAD_SYS_SW_TYPE_NO;

	ret = mdLoadDriver(&mad_sys_cfg, &priv->mdev);
	if (ret != MAD_OK) {
		ERROR("%s: for eth%d.lmac%d failed\n",
		      __func__, eth_id, lmac_id);
		return;
	}

	mdUSGMIIEnableScrambler(&priv->mdev, 0, 0);
	mdUSGMIIEnableDescrambler(&priv->mdev, 0, 0);

	phy->init = 1;
	phy->priv = (void *)priv;
	priv->initialized = 1;
}

static void _lmac_get_an_cfg(rpm_lmac_config_t *lmac, MAD_BOOL *an_enable, MAD_U32 *speed)
{
	if (!lmac->an_disable) {
		*an_enable = MAD_TRUE;
		*speed =
			MAD_AUTO_AD_100FDX |
			MAD_AUTO_AD_100HDX |
			MAD_AUTO_AD_10FDX |
			MAD_AUTO_AD_10HDX |
			MAD_AUTO_AD_1000FDX |
			MAD_AUTO_AD_1000HDX;

	} else {
		*an_enable = MAD_FALSE;

		switch (lmac->sgmii_speed) {
		case ETH_LINK_10M:
			*speed = (lmac->sgmii_duplex) ? MAD_PHY_10FDX : MAD_PHY_10HDX;
			break;

		case ETH_LINK_100M:
			*speed = (lmac->sgmii_duplex) ? MAD_PHY_100FDX : MAD_PHY_100HDX;
			break;

		case ETH_LINK_1G:
		default:
			*speed = (lmac->sgmii_duplex) ? MAD_PHY_1000FDX : MAD_PHY_1000HDX;
			break;
		}
	}
}

/* To set the operating mode of the PHY if required */
static void phy_marvell_1780_config(int eth_id, int lmac_id)
{
	phy_config_t *phy;
	phy_1780_priv_t *priv;
	MAD_STATUS ret;
	MAD_LPORT lport;
	MAD_U32 speed;
	MAD_BOOL an_enable;
	rpm_lmac_config_t *lmac;

	lmac = plat_eth_get_lmac_cfg(eth_id, lmac_id);
	if (!lmac)
		return;

	phy = lmac->phy_config;
	if (!phy)
		return;

	priv = (phy_1780_priv_t *)phy->priv;
	if (!priv)
		return;

	lport = lmac->phy_port;

	debug_phy_driver("%s: %d:%d lport %d\n", __func__, eth_id, lmac_id, lport);

	ret = mdSysSetPhyEnable(&priv->mdev, lport, MAD_TRUE);
	if (ret != MAD_OK) {
		ERROR("%s: %d:%d SysSetPhyEnable failed\n",
			__func__, eth_id, lmac_id);
		return;
	}

	_lmac_get_an_cfg(lmac, &an_enable, &speed);
	ret = mdCopperSetAutoNeg(&priv->mdev, lport, an_enable, speed);
	if (ret != MAD_OK) {
		ERROR("%s: %d:%d CopperSetAutoNeg failed\n",
			__func__, eth_id, lmac_id);
		return;
	}
}

/* To enable/disable AN */
static void phy_marvell_1780_set_an(int eth_id, int lmac_id)
{
	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);
}

/* To obtain the link status */
static void phy_marvell_1780_get_link_status(int eth_id, int lmac_id,
					link_state_t *link)
{
	phy_config_t *phy;
	rpm_lmac_config_t *lmac;
	phy_1780_priv_t *priv;
	int speed = ETH_LINK_NONE, duplex = 0;
	MAD_STATUS ret;
	MAD_LPORT lport;
	MAD_SPEED_MODE speed_mode = MAD_SPEED_UNKNOWN;
	MAD_DUPLEX_MODE dplx_mode = MAD_DUPLEX_UNKNOWN;
	MAD_BOOL link_on = MAD_FALSE;

	lmac = plat_eth_get_lmac_cfg(eth_id, lmac_id);
	phy = lmac->phy_config;
	if (!phy)
		return;

	priv = (phy_1780_priv_t *)phy->priv;
	if (!priv)
		return;

	lport = lmac->phy_port;

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

	debug_phy_driver("%s: %d:%d speed_mode=%d dplx_mode=%d link_on=%d\n",
		__func__, eth_id, lmac_id, speed_mode, dplx_mode, link_on);


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

static void phy_marvell_1780_supported_modes(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	if (!phy)
		return;

	phy->supported_link_modes =
				(1ULL << ETH_MODE_SGMII_BIT) |
				(1ULL << ETH_MODE_1000_BASEX_BIT) |
				(1ULL << ETH_MODE_O_USGMII_BIT) |
				(1ULL << ETH_MODE_Q_USGMII_BIT);
}

#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS

enum host_lpbk_e {
	HOST_LPBK_SERDES,
	HOST_LPBK_PCS,
};

static int phy_marvell_1780_set_loopback(int eth_id, int lmac_id, int host_side, int lbk_type, int enable)
{
	phy_config_t *phy;
	phy_1780_priv_t *priv;
	MAD_LPORT lport;
	MAD_STATUS ret;
	MAD_BOOL en = enable ? MAD_TRUE : MAD_FALSE;
	rpm_lmac_config_t *lmac;

	debug_phy_driver("%s: %d:%d host_side %d, lbk_type %d, en %d\n",
			 __func__, eth_id, lmac_id, host_side, lbk_type, enable);

	lmac = plat_eth_get_lmac_cfg(eth_id, lmac_id);
	if (!lmac)
		return -1;

	phy = lmac->phy_config;
	if (!phy)
		return -1;

	priv = (phy_1780_priv_t *)phy->priv;
	if (!priv)
		return -1;

	lport = lmac->phy_port;

	if (!host_side) {
		/* Line-side Loopback */
		ret = mdDiagSetLineLoopback(&priv->mdev, lport, en);
	} else {
		/* Host-side Loopback */
		MAD_MAC_LOOPBACK_MODE mode;

		switch (lbk_type) {
		case HOST_LPBK_SERDES:
			mode = MAD_MAC_LOOPBACK_MODE_SYNC_SERDES_10;
			break;

		case HOST_LPBK_PCS:
			mode = MAD_MAC_LOOPBACK_MODE_SYS;
			break;

		default:
			/* Others are not supported */
			return -1;
		}

		ret = mdDiagSetMACIfLoopback(&priv->mdev, lport, en, mode, MAD_SPEED_1000M);

		/* Restore the previous config on loopback disable */
		if (!en) {
			MAD_BOOL an_enable;
			MAD_U32 speed;

			_lmac_get_an_cfg(lmac, &an_enable, &speed);
			ret = mdCopperSetAutoNeg(&priv->mdev, lport, an_enable, speed);
		}
	}

	return (ret == MAD_OK) ? 0 : -1;
}

enum prbs_pattern_e {
	PRBS_7,
	PRBS_23,
	PRBS_31,
	PRBS_1010
};

enum prbs_dir_e {
	PRBS_GEN = 1,
	PRBS_CHECK,
	PRBS_BOTH
};

#define PRBS_GENERATOR (1 << 0)
#define PRBS_CHECKER (1 << 1)

static int phy_marvell_1780_enable_prbs(int eth_id, int lmac_id, int host_side, int prbs, int dir)
{
	phy_config_t *phy;
	rpm_lmac_config_t *lmac;
	phy_1780_priv_t *priv;
	MAD_LPORT lport;
	MAD_STATUS ret;
	MAD_PRBS_GEN_CONFIG prbs_cfg = {0};

	debug_phy_driver("%s: %d:%d host_side %d prbs %d gen_check %d\n",
			 __func__, eth_id, lmac_id, host_side, prbs, dir);

	if (!host_side) {
		ERROR("%s: Host-side PRBS supported only\n", __func__);
		return -1;
	}

	switch (prbs) {
	case PRBS_7:
		prbs_cfg.patternSel = MAD_PAT_SEL_PRBS_7;
		break;

	case PRBS_23:
		prbs_cfg.patternSel = MAD_PAT_SEL_PRBS_23;
		break;

	case PRBS_31:
		prbs_cfg.patternSel = MAD_PAT_SEL_PRBS_31;
		break;

	case PRBS_1010:
		prbs_cfg.patternSel = MAD_PAT_SEL_101010;
		break;

	default:
		ERROR("%s: PRBS %d is not supported\n", __func__, prbs);
		return -1;
	}

	if (!dir) {
		ERROR("%s: invalid gen_check (%d) provided\n", __func__, dir);
		return -1;
	}

	if (dir & PRBS_GENERATOR)
		prbs_cfg.genEn = 1;

	if (dir & PRBS_CHECKER) {
		prbs_cfg.countEn = 1;
		prbs_cfg.counterLock = 0;
	}

	lmac = plat_eth_get_lmac_cfg(eth_id, lmac_id);
	phy = lmac->phy_config;
	if (!phy)
		return -1;

	priv = (phy_1780_priv_t *)phy->priv;
	if (!priv)
		return -1;

	lport = lmac->phy_port;

	ret = madPatCtrlSetPRBS(&priv->mdev, lport, &prbs_cfg);
	return (ret == MAD_OK) ? 0 : -1;
}

static int phy_marvell_1780_disable_prbs(int eth_id, int lmac_id, int host_side, int prbs)
{
	phy_config_t *phy;
	rpm_lmac_config_t *lmac;
	phy_1780_priv_t *priv;
	MAD_LPORT lport;
	MAD_STATUS ret;
	MAD_PRBS_GEN_CONFIG prbs_cfg = {0};

	debug_phy_driver("%s: %d:%d host_side %d\n",
			 __func__, eth_id, lmac_id, host_side);

	if (!host_side) {
		ERROR("%s: Host-side PRBS supported only\n", __func__);
		return -1;
	}

	lmac = plat_eth_get_lmac_cfg(eth_id, lmac_id);
	phy = lmac->phy_config;
	if (!phy)
		return -1;

	priv = (phy_1780_priv_t *)phy->priv;
	if (!priv)
		return -1;

	lport = lmac->phy_port;

	ret = madPatCtrlSetPRBS(&priv->mdev, lport, &prbs_cfg);
	return (ret == MAD_OK) ? 0 : -1;
}

static uint64_t phy_marvell_1780_get_prbs_errors(int eth_id, int lmac_id, int host_side, int clear, int prbs)
{
	phy_config_t *phy;
	rpm_lmac_config_t *lmac;
	phy_1780_priv_t *priv;
	MAD_LPORT lport;
	MAD_STATUS ret;
	MAD_PRBS_GEN_CONFIG prbs_cfg = {0};
	uint64_t err_cnt;

	debug_phy_driver("%s: %d:%d host_side %d clear %d\n",
			 __func__, eth_id, lmac_id, host_side, clear);

	if (!host_side) {
		ERROR("%s: Host-side PRBS supported only\n", __func__);
		return (uint64_t)-1;
	}

	lmac = plat_eth_get_lmac_cfg(eth_id, lmac_id);
	phy = lmac->phy_config;
	if (!phy)
		return (uint64_t)-1;

	priv = (phy_1780_priv_t *)phy->priv;
	if (!priv)
		return (uint64_t)-1;

	lport = lmac->phy_port;

	ret = madPatCtrlGetPRBS(&priv->mdev, lport, &prbs_cfg);
	if (ret != MAD_OK) {
		ERROR("%s: GetPRBS failed\n", __func__);
		return (uint64_t)-1;
	}

	err_cnt = prbs_cfg.errCounter;
	return err_cnt;
}

#endif

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

#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
		.set_loopback		= phy_marvell_1780_set_loopback,
		.enable_prbs		= phy_marvell_1780_enable_prbs,
		.disable_prbs		= phy_marvell_1780_disable_prbs,
		.get_prbs_errors	= phy_marvell_1780_get_prbs_errors,
#endif
};

phy_drv_t *marvell_1780_check_type(int type)
{
	if (marvell_1780_drv.drv_type == type)
		return &marvell_1780_drv;
	return NULL;
}

