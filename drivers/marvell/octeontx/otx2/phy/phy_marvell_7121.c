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

#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
typedef struct phy_pkt_gen_config {
	/* mode 0 - generator 1 - capture 2 - both */
	int mode;
	/* pkt gen status 1 - enabled 0 - disabled */
	int status;
	/* which interface being checked  1 - host 0 - line */
	int host_or_line;
	/* 1 indicates to start CRC checking after the
	 * first 8 bytes in the packet, 0 indicates
	 * to look for SFD before starting CRC checking
	 */
	int dontuseSFDinChecker;
	/* pktPatternControl - controls the generation of the payload. One of the
	 * following:
	 * MZD_PKT_NO_MASK
	 * MZD_PKT_INV_SKIP_WRD
	 * MZD_PKT_2INV_2NOT
	 * MZD_PKT_LFT_SHFT_BYTE
	 * MZD_PKT_RHT_SHFT_BYTE
	 * MZD_PKT_LFT_SHFT_WRD
	 * MZD_PKT_RHT_SHFT_WRD
	 * MZD_PKT_INC_BYTE
	 * MZD_PKT_DEC_BYTE
	 * MZD_PKT_RANDOM_BYTE
	 * MZD_PKT_RANDOM_WORD
	 */
	int pktPatternControl;
	/* generateCRCoff - MZD_TRUE turns CRC generation off
	 *  MZD_FALSE turns CRC generation on
	 */
	int generateCRCoff;
	/* initialPayload - start of payload value. Format is from MS bit to
	 * LS bit: BYTE3:BYTE2:BYTE1:BYTE0, bit 31 to bit 0,
	 * left to right
	 */
	int initialPayload;
	/* frameLengthControl - controls the length of the frame in bytes.
	 * values 0...5 (see above) pick various random lengths
	 * from 64 to a different stop value. 6/7 is undefined
	 * and values 8 and greater are the exact frame length
	 * in bytes. See definitions above MZD_PKT_RAND_LEN0-5.
	 */
	int frameLengthControl;
	/* numPktsToSend - 0 stops generation, 0x001-0xFFFE sends exactly that number
	 * of packets then stops. 0xFFFF sends continuously.
	 */
	int numPktsToSend;
	/* randomIPG - MZD_TRUE uses a random IPG from 5 bytes to value specified
	 * in ipgDuration. MZD_FALSE uses fixed IPG as specified in
	 * ipgDuration.
	 */
	int randomIPG;
	/* ipgDuration - Meaning depends on randomIPG (see above). Each bit
	 * equals 4 bytes of idle. Valid range is 0...0x7FFF.
	 */
	int ipgDuration;
} phy_pkt_gen_config_t;

phy_pkt_gen_config_t phy_pkt_gen_config[MAX_CGX][MAX_LMAC_PER_CGX];

#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */

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
#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
	phy->phy_7121_pktgen = &phy_pkt_gen_config[cgx_id][lmac_id];
#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */
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

#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS

/*
 * loopback modes
 */
static MZD_PCS_MODE_LOOPBACK phy_marvell_7121_get_lbk_selector(int lbk_type)
{
	MZD_PCS_MODE_LOOPBACK lbk_sel;

	switch (lbk_type) {
	case 0:
		lbk_sel = MZD_PCS_SHALLOW_LOOPBACK;
		break;
	case 1:
		lbk_sel = MZD_PCS_DEEP_LOOPBACK;
		break;
	case 2:
		lbk_sel = MZD_PMA_DEEP_LOOPBACK;
		break;
	default:
		WARN("Unsupported Loopback type %d\n", lbk_type);
		lbk_sel = -1;
		break;
	}

	return lbk_sel;
}

int phy_marvell_7121_set_loopback(int cgx_id, int lmac_id, int host_side, int lbk_type, int enable)
{
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MZD_DEV_PTR pDev;
	MZD_U16 lane;
	int lbk_sel;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];

	debug_phy_driver("%s: %d:%d fec %d line fec %d\n", __func__, cgx_id, lmac_id,
			lmac_cfg->fec, lmac_cfg->line_fec);

	phy = &lmac_cfg->phy_config;
	pDev = phy->priv;
	lane = phy->port;

	lbk_sel = phy_marvell_7121_get_lbk_selector(lbk_type);

	if (lbk_sel == -1)
		return -1;

	if (host_side) {
		/* Host side loopback */
		MZD_ATTEMPT(mzdSetPCSHostLoopback(pDev,
							phy->addr,
							lane,
							lbk_sel,
							enable ? MZD_ENABLE:MZD_DISABLE));
	} else {
		/* Line side loopback */
		MZD_ATTEMPT(mzdSetPCSLineLoopback(pDev,
							phy->addr,
							lane,
							lbk_sel,
							enable ? MZD_ENABLE:MZD_DISABLE));
	}

	return 0;
}

/*
 * Phy temperature
 */
extern MCESD_STATUS API_C112GX4_GetTemperature(
	MCESD_DEV_PTR devPtr,
	int32_t *temperature
);

static int phy_marvell_7121_get_temp(int cgx_id, int lmac_id, int *temp)
{
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MZD_DEV_PTR pDev;
	MCESD_DEV_PTR pSerdesDev;
	MZD_U16 lane;
	MZD_32 dataSigned32;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];

	debug_phy_driver("%s: %d:%d fec %d line fec %d\n", __func__, cgx_id, lmac_id,
			lmac_cfg->fec, lmac_cfg->line_fec);

	phy = &lmac_cfg->phy_config;
	pDev = phy->priv;
	lane = phy->port;
	pSerdesDev = &pDev->serdesCntl.serdesDev;

	/*
	 * Must call mzdSetSerdesDevInfo() to setup the port before calling
	 * the API_C112GX4_ SerDes API.
	 * Read temperature doesn't matter if host or line interface
	 */
	MZD_ATTEMPT(mzdSetSerdesDevInfo(pDev, lane, MZD_LINE_SIDE));

	MZD_ATTEMPT(API_C112GX4_GetTemperature(pSerdesDev, &dataSigned32));
	*temp = dataSigned32/1000;

	debug_phy_driver("%s: Temperature:%d %d\n", __func__, dataSigned32, *temp);

	return MZD_OK;

}

/*
 *  Eye Capture
 */

extern MCESD_STATUS API_C112GX4_EOMGetWidthHeight(
	MCESD_DEV_PTR devPtr,
	MCESD_U8 lane,
	E_C112GX4_EYE_TMB eyeTMB,
	uint16_t *width,
	uint16_t *heightUpper,
	uint16_t *heightLower
);

extern MCESD_STATUS API_C112GX4_EOMConvertWidthHeight(
	MCESD_DEV_PTR devPtr,
	MCESD_U8 lane,
	MCESD_U16 width,
	MCESD_U16 heightUpper,
	MCESD_U16 heightLower,
	uint16_t *widthmUI,
	uint16_t *height100uV
);
extern const MZD_U16 opModeTable[MZD_OP_MODE_COUNT][MZD_OP_TABLE_COUNT];

MZD_SERDES_EYE_RAW eyeRawData;

static int phy_marvell_7121_get_eye_measure(int cgx_id, int lmac_id, int host_side)
{
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MZD_U16 lane, side;
	MZD_DEV_PTR pDev;
	MCESD_DEV_PTR pSerdesDev;
	MZD_U16 eyeWidthCW, eyeHeightUpperCW, eyeHeightLowerCW;
	MZD_U16 eyeWidth, eyeHeight;
	E_C112GX4_EYE_TMB eyeTMB;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];

	debug_phy_driver("%s: %d:%d fec %d line fec %d\n", __func__, cgx_id, lmac_id,
			lmac_cfg->fec, lmac_cfg->line_fec);

	phy = &lmac_cfg->phy_config;
	lane = phy->port;

	pDev = phy->priv;
	pSerdesDev = &pDev->serdesCntl.serdesDev;
	side = host_side ? MZD_HOST_SIDE : MZD_LINE_SIDE;

	debug_phy_driver("%s: mdio_addr: 0x%x lane: 0x%x host_side: 0x%x\n",
				__func__, phy->addr, lane, host_side);

	MZD_CHECK_DEV_SIDE(pDev, phy->addr, lane, side);

	MZD_ATTEMPT(mzdSetSerdesDevInfo(pDev, phy->addr, side));
	eyeTMB = C112GX4_EYE_MID;

	MZD_ATTEMPT(API_C112GX4_EOMGetWidthHeight(
							pSerdesDev,
							(MZD_U8)lane,
							eyeTMB,
							&eyeWidthCW,
							&eyeHeightUpperCW,
							&eyeHeightLowerCW));
	MZD_ATTEMPT(API_C112GX4_EOMConvertWidthHeight(
							pSerdesDev,
							(MZD_U8)lane,
							eyeWidthCW,
							eyeHeightUpperCW,
							eyeHeightLowerCW,
							&eyeWidth,
							&eyeHeight));

	printf("%s side Eye Width Height(mid-point): %d mUI height_mV:%d mV\n",
		host_side ? "Host" : "Line",  eyeWidth, eyeHeight/10);
	return 0;
}

static MZD_STATUS mzdSerdesEyePlotStats_7121
(
	IN MZD_DEV_PTR pDev,
	IN PMZD_SERDES_EYE_RAW pEyeRawData,
	IN MZD_U16 voltageSteps,
	IN MZD_U16 phaseLevels
)
{
	MZD_U16 phaseIndex, voltageIndex;
	MZD_U16 phaseInterval, timeUnit;

	MZD_CHECK_DEV(pDev, pDev->mdioPort, 0);

	if (!pEyeRawData) {
		ERROR("mzdSerdesEyePlotStats: pEyeRawData point is NULL.\n");
		return MZD_FAIL;
	}

	if ((voltageSteps == 0) || (voltageSteps > MZD_EYE_MAX_VOLT_STEPS)) {
		voltageSteps = MZD_EYE_DEFAULT_VOLT_STEPS;
	}

	if ((phaseLevels == 0) || (voltageSteps > MZD_EYE_MAX_PHASE_LEVEL)) {
		phaseLevels = MZD_EYE_DEFAULT_PHASE_LEVEL;
	}

	phaseInterval = (phaseLevels*2)+1;
	timeUnit = (voltageSteps*2)+1;

	/* through all amplitudes */
	for (voltageIndex = 0; voltageIndex < timeUnit; voltageIndex++)  {
		/* through all phases */
		for (phaseIndex = 0; phaseIndex < phaseInterval; phaseIndex++) {
			if (phaseIndex+1 >= phaseInterval) {
				printf("\n");
			} else if (voltageIndex == voltageSteps+1) {
				printf("-");
			} else if (phaseIndex == phaseLevels+1) {
				printf("|");
			} else if (pEyeRawData->eyeRawData[phaseIndex][voltageIndex] == 0) {
				printf(" ");
			} else if (pEyeRawData->eyeRawData[phaseIndex][voltageIndex] < 1000) {
				printf(".");
			} else {
				printf("X");
			}
		}
	}
	return MZD_OK;
}

static int phy_marvell_7121_get_eye_plot(int cgx_id, int lmac_id, int host_side)
{
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MZD_U16 lane, side;
	MZD_DEV_PTR pDev;
	MZD_U16 eyeWidth;
	MZD_U16 eyeHeight;
	MZD_U16 voltageSteps, phaseLevels;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];

	phy = &lmac_cfg->phy_config;
	lane = phy->port;
	pDev = phy->priv;
	side = host_side ? MZD_HOST_SIDE : MZD_LINE_SIDE;

	debug_phy_driver("%s: mdio_addr: 0x%x lane: 0x%x host_side: 0x%x side:%d\n",
			__func__, phy->addr, lane, host_side, side);

	/*
	 * Top and bottom eye only apply to PAM4 mode
	 * Guidelines for voltageSteps and phaseLevels based on lane speed:
	 * Lane speed  voltageSteps  phaseLevels
	 * 10G             40            90
	 * 25G             50            40
	 * 50G             32            32
	 */
	voltageSteps = 50;
	phaseLevels = 40;

	MZD_ATTEMPT(mzdSerdesGetEye(
					pDev,
					phy->addr,
					side,
					lane,
					C112GX4_EYE_MID,
					voltageSteps,
					phaseLevels,
					&eyeWidth,
					&eyeHeight,
					&eyeRawData));

	MZD_ATTEMPT(mzdSerdesEyePlotStats_7121(
					pDev,
					&eyeRawData,
					voltageSteps,
					phaseLevels));

	printf("%s side Eye Plot (mid-point):\n"
		"Phase Levels (horizontal) = %d\n"
		"Voltage steps (vertical) = %d\n",
		host_side ? "Host" : "Line", phaseLevels, voltageSteps);

	return 0;
}

static int phy_marvell_7121_get_eye(int cgx_id, int lmac_id, int host_side, int type)
{
	int ret = -1;

	/*
	 * Eye plot can take upto 1 minute to complete
	 * By default use eye measure API instead
	 */
	ret = phy_marvell_7121_get_eye_measure(cgx_id, lmac_id, host_side);
	if (ret) {
		return ret;
	}

	if (type == PHY_EYE_PLOT) {
		ret = phy_marvell_7121_get_eye_plot(cgx_id, lmac_id, host_side);
	}

	return ret;
}

/*
 * Packet Generator
 */

typedef enum phy_pktgen_cmd {
	PHY_PKTGEN_START_CMD = 1,
	PHY_PKTGET_STOP_CMD,
	PHY_PKTGEN_SET_CMD,
	PHY_PKTGET_GET_CMD,
} phy_pktgen_cmd_t;

typedef enum phy_pktgen_mode {
	PHY_PKTGEN_GENERATOR = 0,
	PHY_PKTGEN_CHECKER,
	PHY_PKTGEN_GEN_CHECK,
} phy_pktgen_mode_t;


typedef enum phy_pktgen_side {
	PKTGEN_SIDE_LINE = 0,
	PKTGEN_SIDE_HOST,
} phy_pktgen_side_t;

typedef enum phy_pktgen_type {
	PKTGEN_TYPE_SFD = 0,
	PKTGEN_TYPE_PATTERN_CTL,
	PKTGEN_TYPE_GEN_CRC,
	PKTGEN_TYPE_IN_PAYLOAD,
	PKTGEN_TYPE_FRAME_LEN_CTL,
	PKTGEN_TYPE_NUM_PACKETS,
	PKTGEN_TYPE_RANDOM_IPG,
	PKTGEN_TYPE_IPG_DURATION,
} phy_pktgen_type_t;

static int phy_marvell_7121_pktgen_start(int cgx_id,
				int lmac_id,
				phy_pktgen_cmd_t pktgen_cmd,
				phy_pktgen_mode_t mode,
				phy_pktgen_side_t side)
{
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MZD_U16 lane;
	MZD_DEV_PTR pDev;

	int enableGenerator = 0, enableChecker = 0;

	phy_pkt_gen_config_t *pPkt_gen_cfg;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];

	phy = &lmac_cfg->phy_config;
	lane = phy->port;
	pDev = phy->priv;
	pPkt_gen_cfg = phy->phy_7121_pktgen;

	pPkt_gen_cfg->host_or_line = side;
	pPkt_gen_cfg->mode = mode;

	switch (mode) {
	case PHY_PKTGEN_GENERATOR:
		enableGenerator = (pktgen_cmd == PHY_PKTGEN_START_CMD)?1:0;
		break;
	case PHY_PKTGEN_CHECKER:
		enableChecker = (pktgen_cmd == PHY_PKTGEN_START_CMD)?1:0;
		break;
	case PHY_PKTGEN_GEN_CHECK:
		enableGenerator = (pktgen_cmd == PHY_PKTGEN_START_CMD)?1:0;
		enableChecker = (pktgen_cmd == PHY_PKTGEN_START_CMD)?1:0;
		break;
	}

	/* case to stop traffic */
	if (pktgen_cmd == PHY_PKTGET_STOP_CMD) {
		pPkt_gen_cfg->numPktsToSend = 0;
		pPkt_gen_cfg->status = 0;

		debug_phy_driver("pktgen command %d\n", pktgen_cmd);
		MZD_ATTEMPT(mzdStartStopPktGenTraffic(pDev,
						phy->addr,
						pPkt_gen_cfg->host_or_line,
						lane,
						pPkt_gen_cfg->numPktsToSend));

		/* Disable packet gen/checker */
		MZD_ATTEMPT(mzdEnablePktGeneratorChecker(pDev,
							phy->addr,
							pPkt_gen_cfg->host_or_line,
							lane,
							enableGenerator,
							enableChecker));

		/* reset the packet counter to 0 */
		MZD_ATTEMPT(mzdPktGeneratorCounterReset(pDev,
							phy->addr,
							pPkt_gen_cfg->host_or_line,
							lane));
		return 0;
	}

	/* case to start traffic */
	pPkt_gen_cfg->status = 1;
	debug_phy_driver("pktgen command %d\n", pktgen_cmd);
	/* using the saved parameters, configure the packet generator */
	MZD_ATTEMPT(mzdConfigurePktGeneratorChecker(
			pDev,
			phy->addr,
			pPkt_gen_cfg->host_or_line,
			lane,
			0, //readToClear,
			pPkt_gen_cfg->dontuseSFDinChecker,
			pPkt_gen_cfg->pktPatternControl,
			pPkt_gen_cfg->generateCRCoff,
			pPkt_gen_cfg->initialPayload,
			pPkt_gen_cfg->frameLengthControl,
			pPkt_gen_cfg->numPktsToSend,
			pPkt_gen_cfg->randomIPG,
			pPkt_gen_cfg->ipgDuration));

	/* reset the packet counter to 0 */
	MZD_ATTEMPT(mzdPktGeneratorCounterReset(pDev,
						phy->addr,
						pPkt_gen_cfg->host_or_line,
						lane));

	/* give it a little time 500ms(example) to reset the counter */
	mdelay(500);

	/* Start the packet generator/checker */
	MZD_ATTEMPT(mzdEnablePktGeneratorChecker(pDev,
						phy->addr,
						pPkt_gen_cfg->host_or_line,
						lane,
						enableGenerator, enableChecker));

	return 0;
}

static int phy_marvell_7121_pktgen_config(int cgx_id,
				int lmac_id,
				phy_pktgen_cmd_t pktgen_cmd,
				phy_pktgen_type_t type,
				int value)
{
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MZD_U16 lane;
	MZD_DEV_PTR pDev;
	phy_pkt_gen_config_t *pPkt_gen_cfg;
	MZD_U64 pktCount;
	MZD_U64 byteCount;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];

	phy = &lmac_cfg->phy_config;
	pPkt_gen_cfg = phy->phy_7121_pktgen;
	lane = phy->port;
	pDev = phy->priv;

	if (pktgen_cmd == PHY_PKTGEN_SET_CMD) {

		switch (type) {

		case PKTGEN_TYPE_SFD:
		pPkt_gen_cfg->dontuseSFDinChecker = value;
		break;

		case PKTGEN_TYPE_PATTERN_CTL:
		pPkt_gen_cfg->pktPatternControl = value;
		break;

		case PKTGEN_TYPE_GEN_CRC:
		pPkt_gen_cfg->generateCRCoff = value;
		break;

		case PKTGEN_TYPE_IN_PAYLOAD:
		pPkt_gen_cfg->initialPayload = value;
		break;

		case PKTGEN_TYPE_FRAME_LEN_CTL:
		pPkt_gen_cfg->frameLengthControl = value;
		break;

		case PKTGEN_TYPE_NUM_PACKETS:
		pPkt_gen_cfg->numPktsToSend = value;
		break;

		case PKTGEN_TYPE_RANDOM_IPG:
		pPkt_gen_cfg->randomIPG = value;
		break;

		case PKTGEN_TYPE_IPG_DURATION:
		pPkt_gen_cfg->ipgDuration = value;
		break;

		default:
		WARN("Unsupported pktgen set command type %d\n", type);
		return -1;
		}
	} else if (pktgen_cmd == PHY_PKTGET_GET_CMD) {

		/* Print the pktgen config */
		printf("PKTGEN Configuration:\n"
			"mode:%d\n"
			"status:%d\n"
			"host_or_line:%s\n"
			"dontuseSFDinChecker:%d\n"
			"pktPatternControl:%d\n"
			"generateCRCoff:%d\n"
			"initialPayload:%d\n"
			"frameLengthControl:%d\n"
			"numPktsToSend:%d\n"
			"randomIPG:%d\n"
			"ipgDuration:%d\n",
			pPkt_gen_cfg->mode,
			pPkt_gen_cfg->status,
			pPkt_gen_cfg->host_or_line == MZD_HOST_SIDE?"host":"line",
			pPkt_gen_cfg->dontuseSFDinChecker,
			pPkt_gen_cfg->pktPatternControl,
			pPkt_gen_cfg->generateCRCoff,
			pPkt_gen_cfg->initialPayload,
			pPkt_gen_cfg->frameLengthControl,
			pPkt_gen_cfg->numPktsToSend,
			pPkt_gen_cfg->randomIPG,
			pPkt_gen_cfg->ipgDuration);

		if (pPkt_gen_cfg->status == 1) {

			MZD_ATTEMPT(mzdPktGeneratorGetCounter(pDev,
							phy->addr,
							pPkt_gen_cfg->host_or_line,
							lane,
							MZD_PKT_GET_TX,
							&pktCount,
							&byteCount));

			printf("PKTGEN: TxPktCount:%llu TxByteCount:%llu\n",
				pktCount, byteCount);

			MZD_ATTEMPT(mzdPktGeneratorGetCounter(pDev,
							phy->addr,
							pPkt_gen_cfg->host_or_line,
							lane,
							MZD_PKT_GET_RX,
							&pktCount,
							&byteCount));

			printf("PKTGEN: RxPktCount:%llu RxByteCount:%llu\n",
				pktCount, byteCount);

			MZD_ATTEMPT(mzdPktGeneratorGetCounter(pDev,
							phy->addr,
							pPkt_gen_cfg->host_or_line,
							lane,
							MZD_PKT_GET_ERR,
							&pktCount,
							&byteCount));

			printf("PKTGEN: ErrorPktCount:%llu\n",
				pktCount);

		}
	}
	return 0;
}

static int phy_marvell_7121_pkt_gen(int cgx_id, int lmac_id, int cmd, int value)
{
	int ret = -1;
	phy_pktgen_cmd_t pktgen_cmd = 0;
	phy_pktgen_mode_t mode = 0;
	phy_pktgen_type_t type = 0;
	phy_pktgen_side_t side = 0;

	pktgen_cmd = (cmd >> 8) & 0xff;

	debug_phy_driver("pktgen command %d\n", pktgen_cmd);
	switch (pktgen_cmd) {
	case PHY_PKTGEN_START_CMD:
	case PHY_PKTGET_STOP_CMD:
		mode = cmd & 0xff;
		side = (value == 1) ?  MZD_HOST_SIDE : MZD_LINE_SIDE;
		ret = phy_marvell_7121_pktgen_start(cgx_id, lmac_id, pktgen_cmd, mode, side);
		break;
	case PHY_PKTGEN_SET_CMD:
	case PHY_PKTGET_GET_CMD:
		type = cmd & 0xff;
		ret = phy_marvell_7121_pktgen_config(cgx_id, lmac_id, pktgen_cmd, type, value);
		break;
	default:
		WARN("Unsupported pktgen command %d\n", cmd);
		return -1;
	}
	return ret;
}

#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */

#if defined(DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS) ||\
	defined(DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS)

static int phy_marvell_7121_get_prbs_selector(int prbs)
{
	MZD_PRBS_SELECTOR_TYPE prbs_sel;

	switch (prbs) {
	case 0:
		prbs_sel = MZD_PRBS7;
		break;
	case 1:
		prbs_sel = MZD_PRBS23;
		break;
	case 2:
		prbs_sel = MZD_PRBS31;
		break;
	default:
		WARN("Unsupported PRBS mode %d\n", prbs);
		return -1;
	}

	return prbs_sel;
}


static int phy_marvell_7121_enable_prbs(int cgx_id, int lmac_id,
			int host_side, int prbs, int dir)
{
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MZD_DEV_PTR pDev;
	int prbs_sel;
	int enable_tx, enable_rx;
	MZD_U16 disableWaitforLock;
	MZD_U16 lane;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];

	debug_phy_driver("%s: %d:%d fec %d line fec %d\n", __func__, cgx_id, lmac_id,
			lmac_cfg->fec, lmac_cfg->line_fec);

	phy = &lmac_cfg->phy_config;
	pDev = phy->priv;
	lane = phy->port;

	prbs_sel = phy_marvell_7121_get_prbs_selector(prbs);
	if (prbs_sel == -1)
		return -1;

	enable_tx = dir & QLM_DIRECTION_TX;
	enable_rx = dir & QLM_DIRECTION_RX;

	/* set the PRBS pattern. */
	MZD_ATTEMPT(mzdSetPRBSPattern(
					pDev,
					phy->addr,
					host_side ? MZD_HOST_SIDE : MZD_LINE_SIDE,
					lane,
					prbs_sel,
					MZD_PRBS_NONE));

	/* Wait for lock */
	disableWaitforLock = 0;
	MZD_ATTEMPT(mzdSetPRBSWaitForLock(
						pDev,
						phy->addr,
						host_side ? MZD_HOST_SIDE : MZD_LINE_SIDE,
						lane,
						disableWaitforLock));

	/* Enable PRBS tx/rx */
	MZD_ATTEMPT(mzdSetPRBSEnableTxRx(
					pDev,
					phy->addr,
					host_side ? MZD_HOST_SIDE : MZD_LINE_SIDE,
					lane,
					(enable_tx) ? MZD_ENABLE : MZD_DISABLE, /* TX */
					(enable_rx) ? MZD_ENABLE : MZD_DISABLE, /* RX */
					prbs_sel));

	if (enable_rx) {
		/* reset the PRBS counter */
		/* Only works when PRBS is enabled */
		MZD_ATTEMPT(mzdPRBSCounterReset(
					pDev,
					phy->addr,
					host_side ? MZD_HOST_SIDE : MZD_LINE_SIDE,
					lane));
	}

	return 0;
}

static int phy_marvell_7121_disable_prbs(int cgx_id, int lmac_id,
			int host_side, int prbs)
{
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MZD_DEV_PTR pDev;
	MZD_PRBS_SELECTOR_TYPE prbs_sel;
	MZD_U16 waitTimer;
	MZD_U16 lane;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];

	debug_phy_driver("%s: %d:%d fec %d line fec %d\n", __func__, cgx_id, lmac_id,
			lmac_cfg->fec, lmac_cfg->line_fec);

	phy = &lmac_cfg->phy_config;
	pDev = phy->priv;
	lane = phy->port;

	prbs_sel = phy_marvell_7121_get_prbs_selector(prbs);

	/* Disable the PRBS */
	MZD_ATTEMPT(mzdSetPRBSEnableTxRx(
						pDev,
						phy->addr,
						host_side ? MZD_HOST_SIDE : MZD_LINE_SIDE,
						lane,
						MZD_DISABLE, /* TX */
						MZD_DISABLE, /* RX */
						prbs_sel));

	/* Do a lane soft reset */
	waitTimer = 10;
	MZD_ATTEMPT(mzdLaneSoftReset(
					pDev,
					phy->addr,
					host_side ? MZD_HOST_SIDE : MZD_LINE_SIDE,
					lane,
					waitTimer));

	return 0;
}


static uint64_t phy_marvell_7121_get_prbs_errors(int cgx_id, int lmac_id,
			int host_side, int clear, int prbs)
{
	phy_config_t *phy;
	cgx_lmac_config_t *lmac_cfg;
	MZD_DEV_PTR pDev;
	MZD_PRBS_SELECTOR_TYPE prbs_sel;
	MZD_BOOL prbsLocked;
	MZD_U64 txBitCount, rxBitCount, rxBitErrorCount;
	uint64_t errors = 0;
	MZD_U16 lane;

	lmac_cfg = &plat_octeontx_bcfg->cgx_cfg[cgx_id].lmac_cfg[lmac_id];

	debug_phy_driver("%s: %d:%d fec %d line fec %d\n", __func__, cgx_id, lmac_id,
			lmac_cfg->fec, lmac_cfg->line_fec);

	phy = &lmac_cfg->phy_config;
	pDev = phy->priv;
	lane = phy->port;

	prbs_sel = phy_marvell_7121_get_prbs_selector(prbs);

	MZD_ATTEMPT(mzdGetPRBSLocked(
					pDev,
					phy->addr,
					host_side ? MZD_HOST_SIDE : MZD_LINE_SIDE,
					lane,
					&prbsLocked));
	if (!prbsLocked) {
		WARN("CGX%d(%d): did not get PRBS lock on %s side\n",
			cgx_id, lane, host_side ? "host":"line");
		return -1;
	}

	MZD_ATTEMPT(mzdGetPRBSCounts(
					pDev,
					phy->addr,
					host_side ? MZD_HOST_SIDE : MZD_LINE_SIDE,
					lane,
					prbs_sel,
					&txBitCount,
					&rxBitCount,
					&rxBitErrorCount));

	printf("%s side PRBS stats:\n"
		"txBitCount:%llu\n"
		"rxBitCount:%llu\n"
		"rxBitErrorCount:%llu\n",
		host_side ? "Host" : "Line", txBitCount, rxBitCount, rxBitErrorCount);

	if (host_side) {
		errors = lmac_cfg->prbs_errors_host + rxBitErrorCount;
		lmac_cfg->prbs_errors_host = (clear) ? 0 : errors;
		return errors;
	}

	errors = lmac_cfg->prbs_errors_line + rxBitErrorCount;
	lmac_cfg->prbs_errors_line = (clear)  ?  0 : errors;
	return errors;

}

#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS ||
	* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
	*/

phy_drv_t marvell_7121_drv = {
		.drv_name		= "MARVELL-88X7121",
		.drv_type			= PHY_MARVELL_7121,
		.flags			= PHY_FLAG_SUPPORTS_CHANGING_MOD_TYPE |
					  PHY_FLAG_HAS_FEC_STATS,
		.probe			= phy_marvell_7121_probe,
		.config			= phy_marvell_7121_config,
		.reset			= phy_generic_reset,
		.get_link_status	= phy_marvell_7121_get_link_status,
		.set_supported_modes	= phy_marvell_7121_supported_modes,
#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
		.get_temp		= phy_marvell_7121_get_temp,
		.set_loopback		= phy_marvell_7121_set_loopback,
		.get_eye			= phy_marvell_7121_get_eye,
		.pkt_gen			= phy_marvell_7121_pkt_gen,
#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */
#if defined(DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS) ||\
	defined(DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS)
		.enable_prbs		= phy_marvell_7121_enable_prbs,
		.disable_prbs		= phy_marvell_7121_disable_prbs,
		.get_prbs_errors		= phy_marvell_7121_get_prbs_errors,
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS ||
	* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
	*/
		.shutdown		= phy_generic_shutdown,
	};

phy_drv_t *marvell_7121_check_type(int type)
{
	if (marvell_7121_drv.drv_type == type)
		return &marvell_7121_drv;
	return NULL;
}
