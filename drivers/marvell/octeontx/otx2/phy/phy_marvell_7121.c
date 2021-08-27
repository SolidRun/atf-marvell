/*
 * Copyright (C) 2021 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <arch.h>
#include <stdio.h>
#include <debug.h>
#include <drivers/delay_timer.h>
#include <platform_def.h>
#include <octeontx_common.h>
#include <plat_board_cfg.h>
#include <cgx.h>
#include <eth_intf.h>
#include <phy_marvell.h>
#include <phy_mgmt.h>
#include <smi.h>

#include "mzdApiRegs.h"
#include "mzdApiTypes.h"
#include "mzdAPI.h"
#include "mzdDiagnostics.h"
#include "mzdUtils.h"
#include "mzdInitialization.h"
#include "mzdFwImages.h"
#include "mzdHwSerdesCntl.h"
#include "mzdFEC.h"

/* 7121 PHY Device Stucture */
MZD_DEV mzd_dev;

static MZD_STATUS mzd_read_mdio(MZD_DEV_PTR pDev, MZD_U16 mdioPort,
				MZD_U16 mmd, MZD_U16 reg, MZD_U16 *value)
{
	int read;
	phy_config_t *phy = pDev->hostContext;

	read = smi_read(phy->mdio_bus, CLAUSE45, mdioPort, mmd, reg);
	*value = read;
	return MZD_OK;
}

static MZD_STATUS mzd_write_mdio(MZD_DEV_PTR pDev, MZD_U16 mdioPort,
				 MZD_U16 mmd, MZD_U16 reg, MZD_U16 value)
{
	phy_config_t *phy = pDev->hostContext;

	smi_write(phy->mdio_bus, mdioPort, mmd, CLAUSE45, reg, value);
	return MZD_OK;
}

static MZD_STATUS mzd_wait( IN MZD_DEV_PTR pDev, IN MZD_UINT waitTime)
{
	//mdelay(waitTime*10);
	mdelay(waitTime);
	return MZD_OK;
}

static MZD_STATUS set_serdes_mux(IN MZD_DEV_PTR pDev)
{
	MZD_STATUS status;
	MZD_U8 serdesMux[MZD_MAX_PORTS*MZD_NUM_LANES];

	serdesMux[0] = 0x0;
	serdesMux[1] = 0x1;
	serdesMux[2] = 0x8;
	serdesMux[3] = 0x9;

	serdesMux[4] = 0x2;
	serdesMux[5] = 0x3;
	serdesMux[6] = 0xa;
	serdesMux[7] = 0xb;

	serdesMux[8] = 0x4;
	serdesMux[9] = 0x5;
	serdesMux[10] = 0xc;
	serdesMux[11] = 0xd;

	serdesMux[12] = 0x6;
	serdesMux[13] = 0x7;
	serdesMux[14] = 0xe;
	serdesMux[15] = 0xf;

	status =  mzdSetSerdesMux(pDev, MZD_HOST_SIDE, serdesMux);

	if (status != MZD_OK)
	{
		MZD_DBG_ERROR("mzdSampleSerdesMux: mzdSetSerdesMux call failed\n");
		return MZD_FAIL;
	}

	//MZD_ATTEMPT(mzd_wait(pDev, 5000));
	MZD_ATTEMPT(mzd_wait(pDev, 500));

	return MZD_OK;
}

void phy_marvell_7121_probe(int cgx_id, int lmac_id)
{
	MZD_STATUS status;
	phy_config_t *phy;
	MZD_U8 major, minor, buildID;
	MZD_U32 x7121_serdes_image_size;
	MZD_DEV_PTR pdev = &mzd_dev;

	debug_phy_driver("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;

	phy->priv = pdev;
	if (pdev->devEnabled)
	{
		debug_phy_driver("%s: %d:%d Device Already Enabled\n ", __func__, cgx_id, lmac_id);
		return;
	}

	mzdGetAPIVersion(&major, &minor, &buildID);
	NOTICE("MZD API version %d.%d.%d\n", major, minor, buildID);

	debug_phy_driver("%s: %d:%d phy->addr %d\n ", __func__, cgx_id, lmac_id, phy->addr);

	/* Loading firmware */
	NOTICE("Loading firmware to 7121 PHY at address %d \n", phy->addr);
	x7121_serdes_image_size = x7121_serdes_image_end -
					x7121_serdes_image_start;
	debug_phy_driver("x7121_serdes_image_start %p x7121_serdes_image_end %p x7121_serdes_image_size %d\n",
			x7121_serdes_image_start, x7121_serdes_image_end, x7121_serdes_image_size);

	((MZD_DEV_PTR)phy-> priv) -> devFlash  = MZD_FALSE;

       	status = mzdInitDriver(mzd_read_mdio,
				mzd_write_mdio,
				mzd_wait, phy->addr,
				(MZD_U8 *)x7121_serdes_image_start,
				x7121_serdes_image_size,
				phy,
				phy->priv);

	if (status != MZD_OK)
	{
		ERROR("%s: %d:%d mzdInitDriver() failed\n", __func__, cgx_id,
								lmac_id);
		return;
	}

	if (phy->addr == 0)
	{
		MZD_U16 fw_major, fw_minor, fw_patch, fw_build;

		if (mzdGetChipFWRevision(phy->priv, &fw_major, &fw_minor, &fw_patch, &fw_build))
		{
			ERROR("%s: mzdGetChipFWRevision() failed\n", __func__);
        	}
		NOTICE("Firmware version: %d.%d.%d.%d\n", fw_major, fw_minor, fw_patch, fw_build);
	}

	if ((!strncmp(plat_octeontx_bcfg->bcfg.board_model, "f95o-vdu", 8))
		|| (!strncmp(plat_octeontx_bcfg->bcfg.board_model, "cnf95n-vDU", 8)))
		set_serdes_mux(phy->priv);

	debug_phy_driver("%s: %d:%d phy->addr %d Init Done\n ", __func__, cgx_id, lmac_id, phy->addr);
	return;
}

void phy_marvell_7121_config(int cgx_id, int lmac_id)
{
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MZD_STATUS status = 0;
	MZD_U16 result;
	MZD_OP_MODE host_mode, line_mode;
	MZD_U16 lane;
	IN MZD_MODE_OPTION_STRUCT mode_option;
	IN MZD_U32  modeOptionSel;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];

	debug_phy_driver("%s: %d:%d fec %d line fec %d\n", __func__, cgx_id, lmac_id,
			lmac_cfg->fec, lmac_cfg->line_fec);

	phy = &lmac_cfg->phy_config;

	//lane = lmac_cfg->lane_to_sds & 3;
	lane = phy -> port;

	switch (lmac_cfg->mode_idx) {

	case QLM_MODE_1G_X:
		host_mode = line_mode = MZD_P1X;
		debug_phy_driver("%s: %d:%d Setting 1G_X \n", __func__, cgx_id, lmac_id);
	break;

	case QLM_MODE_XFI:
	case QLM_MODE_SFI:
	case QLM_MODE_10G_KR:
		switch (lmac_cfg->fec) {
		case CGX_FEC_BASE_R:
			if (lmac_cfg->mode_idx == QLM_MODE_10G_KR)
				host_mode = MZD_P10KF;
			else
				//host_mode = MZD_P10LF;
				host_mode = MZD_P10KN;
			break;
		case CGX_FEC_NONE:
		default:
			if (lmac_cfg->mode_idx == QLM_MODE_10G_KR)
				host_mode = MZD_P10KN;
			else
				host_mode = MZD_P10LN;
			break;
		}

		switch (lmac_cfg->line_fec) {
		case CGX_FEC_BASE_R:
			if (lmac_cfg->mode_idx == QLM_MODE_10G_KR)
				line_mode = MZD_P10KF;
			else
			//line_mode = MZD_P10LF;
				line_mode = MZD_P10LN;
			break;
		case CGX_FEC_NONE:
			default:
			if (lmac_cfg->mode_idx == QLM_MODE_10G_KR)
				line_mode = MZD_P10KN;
			else
				line_mode = MZD_P10LN;
			break;
		}
		break;

	case QLM_MODE_25GAUI_C2C:
	case QLM_MODE_25GAUI_C2M:
		/* Update host_mode based on HOST FEC type
		 * and line_mode based on LINE FEC type
		 */
		switch (lmac_cfg->fec) {
		case CGX_FEC_RS:
			host_mode = MZD_P25LR;
			break;
		case CGX_FEC_BASE_R:
			host_mode = MZD_P25LF;
			break;
		case CGX_FEC_NONE:
		default:
			host_mode = MZD_P25LN;
			break;
		}

		switch (lmac_cfg->line_fec) {
		case CGX_FEC_RS:
			line_mode = MZD_P25LR;
			break;
		case CGX_FEC_BASE_R:
			line_mode = MZD_P25LF;
			break;
		case CGX_FEC_NONE:
		default:
			line_mode = MZD_P25LN;
			break;
		}
		break;

	case QLM_MODE_25GAUI_2_C2C:
		/* Update host_mode FEC to none as 25GAUI_2_C2C
		 * doesn't FEC
		 * set line_mode based on LINE FEC type
		 */
		host_mode = MZD_P25YN; /* 25GBASE-R2, no FEC, no AN */
		switch (lmac_cfg->line_fec) {
		case CGX_FEC_RS:
			line_mode = MZD_P25LR;
			break;
		case CGX_FEC_BASE_R:
			line_mode = MZD_P25LF;
			break;
		case CGX_FEC_NONE:
		default:
			line_mode = MZD_P25LN;
			break;
		}
		break;

	case QLM_MODE_50GAUI_2_C2C:
	case QLM_MODE_50GAUI_4_C2C:
		if (phy->mod_type == PHY_MOD_TYPE_PAM4) {
			line_mode = MZD_P50UP; /* 50GBASE-R, RS-FEC, no AN */
		} else {
			switch (lmac_cfg->line_fec) {
			case CGX_FEC_RS:
				line_mode = MZD_P50MR;
				break;
			case CGX_FEC_BASE_R:
				line_mode = MZD_P50MF;
				break;
			case CGX_FEC_NONE:
			default:
				line_mode = MZD_P50MN;
				break;
			}
		}

		if (lmac_cfg->mode_idx == QLM_MODE_50GAUI_2_C2C) {
			switch (lmac_cfg->fec) {
			case CGX_FEC_BASE_R:
				host_mode = MZD_P50MF;
				break;
			case CGX_FEC_RS:
				host_mode = MZD_P50MR;
				break;
			case CGX_FEC_NONE:
			default:
				host_mode = MZD_P50MN;
				break;
			}
		} else
			host_mode = MZD_P50LN; /* 50GBASE-R4, no-FEC, no AN */
		break;

	default:
		ERROR("%s: %d:%d QLM_MODE %d is not supported\n", __func__,
		      cgx_id, lmac_id, lmac_cfg->mode_idx);
		return;
	}

	debug_phy_driver("%s: %d:%d phy->addr %d lane %d host_mode %d line_mode %d \n",
			 __func__, cgx_id, lmac_id, phy->addr, lane, host_mode, line_mode);

 	mzdMemSet(&mode_option, 0, (sizeof(MZD_MODE_OPTION_STRUCT)));
 	modeOptionSel = MZD_MODE_FORCE_RECONFIG;

	status = mzdSetModeSelection(phy->priv,
	             phy->addr,
		     lane,
		     host_mode,
		     line_mode,
		     modeOptionSel,
		     mode_option,
		     &result);

	if (status == MZD_OK) {
		return;
	}

	ERROR("%s: %d:%d mzdSetModeSelection() failed, lane=%d, result=%d\n",
	      __func__, cgx_id, lmac_id, lane, result);
}

void phy_marvell_7121_get_link_status(int cgx_id, int lmac_id,
				      link_state_t *link)
{
	MZD_U16 latchedStatus, currentStatus;
	MZD_PCS_LINK_STATUS statusDetail;
	MZD_STATUS status;
	MZD_U16 lane;
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MZD_DEV_PTR mzd_dev_p;
	PMZD_MODE_CONFIG mzd_mode_config;

	debug_phy_driver("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];
	phy = &lmac_cfg->phy_config;

	//lane = lmac_cfg->lane_to_sds & 3;
	lane = phy -> port;

	debug_phy_driver("%s: %d:%d phy->addr %d lane %d \n",
			 __func__, cgx_id, lmac_id, phy->addr, lane);

	mzdMemSet(&statusDetail, 0, sizeof(MZD_PCS_LINK_STATUS));
	link->u64 = 0;

	status = mzdCheckPCSLinkStatus(phy->priv,
			               phy->addr,
				       lane,
				       &currentStatus,
				       &latchedStatus,
				       &statusDetail);

	if (status != MZD_OK) {
		ERROR("%s: %d:%d mzdCheckPCSLinkStatus failed for lane %d.\n",
		      __func__, cgx_id, lmac_id, lane);
		return;
	}


        debug_phy_driver("%s: %d:%d phy->addr %d lane %d currentStatus %d latchedStatus %d\n",
		 __func__, cgx_id, lmac_id, phy->addr, lane, currentStatus, latchedStatus);

	if (currentStatus != MZD_LINK_UP) {
		debug_phy_driver("%s: %d:%d  Link Not Up", __func__,cgx_id, lmac_id);
		return;
	}

	link->s.link_up = 1;
	link->s.full_duplex = 1;

	mzd_dev_p = phy->priv;
	mzd_mode_config = &mzd_dev_p->lineConfig[0][lane];
	switch (mzd_mode_config->opMode) {
	case MZD_P1X:
		link->s.speed = ETH_LINK_1G;
		link->s.fec = CGX_FEC_NONE;
		break;
	case MZD_P10LN:
		link->s.speed = ETH_LINK_10G;
		link->s.fec = CGX_FEC_NONE;
		break;
	case MZD_P10KF:
		link->s.speed = ETH_LINK_10G;
		link->s.fec = CGX_FEC_BASE_R;
		break;
	case MZD_P25LN:
		link->s.speed = ETH_LINK_25G;
		link->s.fec = CGX_FEC_NONE;
		break;
	case MZD_P25LR:
		link->s.speed = ETH_LINK_25G;
		link->s.fec = CGX_FEC_RS;
		break;
	case MZD_P25LF:
		link->s.speed = ETH_LINK_25G;
		link->s.fec = CGX_FEC_BASE_R;
		break;
	case MZD_P50MN:
		link->s.speed = ETH_LINK_50G;
		link->s.fec = CGX_FEC_NONE;
		break;
	case MZD_P50MF:
		link->s.speed = ETH_LINK_50G;
		link->s.fec = CGX_FEC_BASE_R;
		break;
	case MZD_P50MR:
	case MZD_P50UP:
		link->s.speed = ETH_LINK_50G;
		link->s.fec = CGX_FEC_RS;
		break;
	default:
		ERROR("%s: %d:%d Unexpected line mode %d\n",
		      __func__, cgx_id, lmac_id,
		      mzd_mode_config->speed);
		break;
	}
	debug_phy_driver("%s: %d:%d phy->addr %d lane %d speed %d  Exit\n",
			 __func__, cgx_id, lmac_id, phy->addr, lane, link->s.speed);
}

void phy_marvell_7121_supported_modes(int cgx_id, int lmac_id)
{
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, cgx_id, lmac_id);

	phy = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id].phy_config;

	phy->supported_link_modes = ((1 << ETH_MODE_1000_BASEX_BIT) |
			(1 << ETH_MODE_10G_KR_BIT) |
			(1 << ETH_MODE_10G_C2C_BIT) |
			(1 << ETH_MODE_10G_C2M_BIT) |
			(1 << ETH_MODE_25G_C2C_BIT) |
			(1 << ETH_MODE_25G_2_C2C_BIT) |
			(1 << ETH_MODE_50G_C2C_BIT) |
			(1 << ETH_MODE_50G_4_C2C_BIT));
}

phy_drv_t marvell_7121_drv = {
		.drv_name		= "MARVELL-88X7121",
		.drv_type		= PHY_MARVELL_7121,
		.flags			= PHY_FLAG_SUPPORTS_CHANGING_MOD_TYPE |
					  PHY_FLAG_HAS_FEC_STATS,
		.probe			= phy_marvell_7121_probe,
		.config			= phy_marvell_7121_config,
		.reset			= phy_generic_reset,
		.get_link_status	= phy_marvell_7121_get_link_status,
		.set_supported_modes	= phy_marvell_7121_supported_modes,
		.shutdown		= phy_generic_shutdown,
	};

phy_drv_t *marvell_7121_check_type(int type)
{
	if (marvell_7121_drv.drv_type == type)
		return &marvell_7121_drv;
	return NULL;
}
