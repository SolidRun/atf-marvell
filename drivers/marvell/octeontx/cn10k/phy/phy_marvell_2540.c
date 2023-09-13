/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:		BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <stdio.h>
#include <drivers/delay_timer.h>
#include <plat_board_cfg.h>
#include <phy_marvell.h>
#include <phy_mgmt.h>
#include <smi.h>
#include <eth_intf.h>

#include "mtdFeatures.h"
#include "mtdApiTypes.h"
#include "mtdHwCntl.h"
#include "mtdAPI.h"
#include "mtdFwDownload.h"
#include "mtdInitialization.h"
#include "mtdCunit.h"
#include "mtdHunit.h"
#include "mtdHXunit.h"
#include "mtdApiRegs.h"

#define MTD_API_CALL(_eth, _lmac, _func, args...) \
	({if (_func(args) != MTD_OK) { \
		ERROR("%s %d:%d %s() call failed!\n", __func__, _eth, _lmac, #_func); \
		return; }\
	})

typedef struct  {
	MTD_DEV mtd_dev;
	int initialized;
} phy_2540_priv_t;

phy_2540_priv_t phy_2540_priv[MAX_RPM];

static MTD_STATUS mtd_read_mdio(MTD_DEV_PTR dev, MTD_U16 port,
				MTD_U16 mmd, MTD_U16 reg, MTD_U16 *value)
{
	int addr;
	phy_config_t *phy_cfg = (phy_config_t *)dev->appData;
	if (!phy_cfg)
		return MTD_FAIL;

	addr = phy_cfg->addr + port;
	*value = smi_read(phy_cfg->mdio_bus, CLAUSE45, addr, mmd, reg);
	return MTD_OK;
}

static MTD_STATUS mtd_write_mdio(MTD_DEV_PTR dev, MTD_U16 port,
				 MTD_U16 mmd, MTD_U16 reg, MTD_U16 value)
{
	int addr;
	phy_config_t *phy_cfg = (phy_config_t *)dev->appData;
	if (!phy_cfg)
		return MTD_FAIL;

	addr = phy_cfg->addr + port;
	smi_write(phy_cfg->mdio_bus, addr, mmd, CLAUSE45, reg, value);
	return MTD_OK;
}

static MTD_STATUS mtd_wait(MTD_DEV_PTR dev, MTD_UINT x)
{
	udelay(x*1000);
	return MTD_OK;
}

void phy_marvell_2540_probe(int eth_id, int lmac_id)
{
	MTD_STATUS status;
	MTD_U16 err_code = 0;
	phy_2540_priv_t *priv;
	phy_config_t *phy_cfg;
	MTD_U16 any_port = 0;

	priv = &phy_2540_priv[eth_id];
	if (priv->initialized)
		return;

	phy_cfg = plat_eth_get_phy_cfg(eth_id, lmac_id);
	if (!phy_cfg)
		return;

	priv->mtd_dev.appData = (void *)phy_cfg;

	printf("%s: Initializing Marvell 88x2540 PHY...\n", __func__);

	/* Will be set to MTD_TRUE by mtdLoadDriver() if successful */
	priv->mtd_dev.devEnabled = MTD_FALSE;
	status = mtdLoadDriver(mtd_read_mdio, mtd_write_mdio, mtd_wait,
			       any_port, MTD_FALSE, &priv->mtd_dev, &err_code);

	if (status != MTD_OK) {
		ERROR("%s: mtdLoadDriver failed!\n", __func__);
		return;
	}

	phy_cfg->init = 1;
	phy_cfg->priv = (void *)priv;
	priv->initialized = 1;
}

/* To set the operating mode of the PHY if required */
void phy_marvell_2540_config(int eth_id, int lmac_id)
{
	cn10k_portm_modes_t portm_mode;
	rpm_lmac_config_t *lmac;
	phy_config_t *phy_cfg;
	phy_2540_priv_t *priv;
	MTD_U16 mac_mode, port;
	MTD_U16 forced_speed = 0;
	int usxgmii_mp = 0;
	MTD_U16 avail_speeds = MTD_ALL_SPEEDS_AVAILABLE;

	lmac = plat_eth_get_lmac_cfg(eth_id, lmac_id);
	if (!lmac)
		return;

	phy_cfg = lmac->phy_config;
	if (!phy_cfg)
		return;

	priv = (phy_2540_priv_t *)phy_cfg->priv;
	if (!priv)
		return;

	portm_mode = plat_eth_get_portm_cfg(
		plat_eth_get_lmac_cfg(eth_id, lmac_id)->portm_idx)->portm_mode;

	debug_phy_driver("%s: %d:%d mode %d an %d\n",
			 __func__, eth_id, lmac_id,
			 portm_mode, phy_cfg->req_an);

	port = lmac->phy_port;
	if (port > 3) {
		ERROR("%s %d:%d requested port: %u is invalid\n",
		       __func__, eth_id, lmac_id, port);
		return;
	}

	switch (portm_mode) {
	case PORTM_MODE_XFI:
	case PORTM_MODE_SFI:
		/* 10GR MAC mode with rate matching */
		mac_mode = MTD_MAC_TYPE_10GR_RM_AMD_OFF;
		break;

	case PORTM_MODE_SGMII:
		mac_mode = MTD_MAC_TYPE_10GR_SGMII_AN_EN;
		avail_speeds =
			MTD_SPEED_10M_HD | MTD_SPEED_10M_FD |
			MTD_SPEED_100M_HD | MTD_SPEED_100M_FD |
			MTD_SPEED_1GIG_HD | MTD_SPEED_1GIG_FD;


		if (lmac->an_disable) {
			switch (lmac->sgmii_speed) {
			case ETH_LINK_10M:
				forced_speed = (phy_cfg->duplex) ?
					MTD_SPEED_10M_HD_AN_DIS : MTD_SPEED_10M_FD_AN_DIS;
				break;
			case ETH_LINK_100M:
				forced_speed = (phy_cfg->duplex) ?
					MTD_SPEED_100M_HD_AN_DIS : MTD_SPEED_100M_FD_AN_DIS;
				break;
			default:
				debug_phy_driver("%s: %d:%d forced speed %d is not supported\n",
						  __func__, eth_id, lmac_id, phy_cfg->req_speed);
				return;
			}
		}
		break;

	case PORTM_MODE_10G_SXGMII:
		mac_mode = MTD_MAC_TYPE_SXGMII;
		break;

	case PORTM_MODE_10G_DXGMII:
		mac_mode = MTD_MAC_TYPE_10G_DXGMII;
		usxgmii_mp = 1;
		avail_speeds =  MTD_SPEED_10M_HD | MTD_SPEED_10M_FD |
				MTD_SPEED_100M_HD | MTD_SPEED_100M_FD |
				MTD_SPEED_1GIG_HD | MTD_SPEED_1GIG_FD |
				MTD_SPEED_2P5GIG_FD | MTD_SPEED_5GIG_FD;
		break;

	case PORTM_MODE_10G_QXGMII:
		mac_mode = MTD_MAC_TYPE_10G_QXGMII;
		usxgmii_mp = 1;
		avail_speeds =  MTD_SPEED_10M_HD | MTD_SPEED_10M_FD |
				MTD_SPEED_100M_HD | MTD_SPEED_100M_FD |
				MTD_SPEED_1GIG_HD | MTD_SPEED_1GIG_FD |
				MTD_SPEED_2P5GIG_FD;
		break;

	default:
		debug_phy_driver("%s: %d:%d unsupported portm_mode: %d\n",
				 __func__, eth_id, lmac_id, portm_mode);
		return;
	}

	if (!usxgmii_mp ||
		(mac_mode == MTD_MAC_TYPE_10G_DXGMII && (port == 0 || port == 2)) ||
		(mac_mode == MTD_MAC_TYPE_10G_QXGMII && port == 0)) {

		MTD_API_CALL(eth_id, lmac_id, mtdSetMacInterfaceCopperOnlyPhy,
			     &priv->mtd_dev, port, mac_mode,
			     MTD_TRUE, MTD_MAC_SPEED_NOT_APPLICABLE,
			     MTD_MAX_MAC_SPEED_NOT_APPLICABLE);
	}

	if (forced_speed)
		MTD_API_CALL(eth_id, lmac_id, mtdForceSpeed,
			     &priv->mtd_dev, port, forced_speed);
	else
		MTD_API_CALL(eth_id, lmac_id, mtdEnableSpeeds,
			     &priv->mtd_dev, port, avail_speeds, MTD_TRUE);
}

/* To enable/disable AN */
void phy_marvell_2540_set_an(int eth_id, int lmac_id)
{
	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);
}

/* To obtain the link status */
void phy_marvell_2540_get_link_status(int eth_id, int lmac_id,
					link_state_t *link)
{
	rpm_lmac_config_t *lmac;
	phy_config_t *phy_cfg;
	phy_2540_priv_t *priv;
	MTD_U16 port;
	MTD_BOOL fault, h_link_status_latch, h_link_up = MTD_FALSE;
	MTD_BOOL t_link_up = MTD_FALSE;
	MTD_U16 t_speed;
	MTD_U16 mac_mode, ld_speed, max_speed;
	MTD_BOOL mac_if_pd;
	int speed, duplex;

	lmac = plat_eth_get_lmac_cfg(eth_id, lmac_id);
	if (!lmac)
		return;

	phy_cfg = lmac->phy_config;
	if (!phy_cfg)
		return;

	priv = (phy_2540_priv_t *)phy_cfg->priv;
	if (!priv)
		return;

	port = lmac->phy_port;
	if (port > 3) {
		ERROR("%s %d:%d requested port: %u is invalid\n",
		       __func__, eth_id, lmac_id, port);
		return;
	}

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	MTD_API_CALL(eth_id, lmac_id, mtdIsBaseTUp,
		     &priv->mtd_dev, port, &t_speed, &t_link_up);

	MTD_API_CALL(eth_id, lmac_id, mtdGetMacInterfaceCopperOnlyPhy,
		     &priv->mtd_dev, port,
		     &mac_mode, &mac_if_pd,
		     &ld_speed, &max_speed);

	switch (t_speed) {
	case MTD_SPEED_10M_HD:
	case MTD_SPEED_10M_HD_AN_DIS:
		speed = ETH_LINK_10M;
		duplex = 0;
		break;
	case MTD_SPEED_10M_FD:
	case MTD_SPEED_10M_FD_AN_DIS:
		speed = ETH_LINK_10M;
		duplex = 1;
		break;
	case MTD_SPEED_100M_HD:
	case MTD_SPEED_100M_HD_AN_DIS:
		speed = ETH_LINK_100M;
		duplex = 0;
		break;
	case MTD_SPEED_100M_FD:
	case MTD_SPEED_100M_FD_AN_DIS:
		speed = ETH_LINK_100M;
		duplex = 1;
		break;
	case MTD_SPEED_1GIG_HD:
		speed = ETH_LINK_1G;
		duplex = 0;
		break;
	case MTD_SPEED_1GIG_FD:
		speed = ETH_LINK_1G;
		duplex = 1;
		break;
	case MTD_SPEED_10GIG_FD:
		speed = ETH_LINK_10G;
		duplex = 1;
		break;
	case MTD_SPEED_2P5GIG_FD:
		speed = ETH_LINK_2HG;
		duplex = 1;
		break;
	case MTD_SPEED_5GIG_FD:
		speed = ETH_LINK_5G;
		duplex = 1;
		break;
	default:
		speed = ETH_LINK_NONE;
		duplex = 0;
		break;
	}

	if (mac_mode == MTD_MAC_TYPE_10GR_SGMII_AN_EN) {
		MTD_BOOL an_compl;

		/* Get H-Unit 1000BASE-X/2.5GBASE-X status */
		MTD_API_CALL(eth_id, lmac_id, mtdGet1000BXSGMIIStatus,
			     &priv->mtd_dev, port, MTD_H_UNIT,
			     &an_compl, &fault,
			     &h_link_status_latch, &h_link_up);
	} else {
		MTD_BOOL data1, data2, data3, data4;
		MTD_U16 master_port;

		if (mac_mode == MTD_MAC_TYPE_10G_QXGMII)
			master_port = 0;
		else if (mac_mode == MTD_MAC_TYPE_10G_DXGMII)
			master_port = port - port % 2;
		else
			master_port = port;

		/* Get H-Unit 10G/5GBASE-R status */
		MTD_API_CALL(eth_id, lmac_id, mtdGet10GBRStatus1,
			     &priv->mtd_dev, master_port, MTD_H_UNIT,
			     &data1, &data2, &data3, &data4,
			     &fault, &h_link_status_latch, &h_link_up);
	}

	link->s.link_up = h_link_up && t_link_up;
	link->s.full_duplex = duplex;
	link->s.speed = speed;

	debug_phy_driver("%s : link speed %d t_link_up %d h_link_up %d\n",
			 __func__, link->s.speed, t_link_up, h_link_up);
}

void phy_marvell_2540_supported_modes(int eth_id, int lmac_id)
{
	phy_config_t *phy_cfg;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy_cfg = plat_eth_get_phy_cfg(eth_id, lmac_id);
	phy_cfg->supported_link_modes =
			(1 << ETH_MODE_10G_C2C_BIT) |
			(1 << ETH_MODE_10G_C2M_BIT) |
			(1 << ETH_MODE_1000_BASEX_BIT);
			/* (1 << ETH_MODE_10G_SXGMII_BIT) |
			   (1 << ETH_MODE_10G_DXGMII_BIT) |
			   (1 << ETH_MODE_10G_QXGMII_BIT);
			*/
}

phy_drv_t marvell_2540_drv = {
		.drv_name		= "MARVELL-88X2540",
		.drv_type		= PHY_MARVELL_2540,
		.flags			= 0,
		.probe			= phy_marvell_2540_probe,
		.config			= phy_marvell_2540_config,
		.set_an			= phy_marvell_2540_set_an,
		.reset			= phy_generic_reset,
		.get_link_status	= phy_marvell_2540_get_link_status,
		.set_supported_modes	= phy_marvell_2540_supported_modes,
		.shutdown		= phy_generic_shutdown,
	};

phy_drv_t *marvell_2540_check_type(int type)
{
	if (marvell_2540_drv.drv_type == type)
		return &marvell_2540_drv;
	return NULL;
}
