/*
 * Copyright (c) 2021 Marvell.
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

#include "mtdFeatures.h"
#include "mtdApiTypes.h"
#include "mtdHwCntl.h"
#include "mtdAPI.h"
#include "mtdFwDownload.h"
#include "mtdInitialization.h"
#include "mtdDiagnostics.h"
#include "mtdCunit.h"
#include "mtdHunit.h"
#include "mtdHXunit.h"
#include "mtdXunit.h"
#include "mtdApiRegs.h"
#include "mtdIntr.h"
#include "Hwfw_88X33x0.h"

#ifdef PLAT_CN10K_FAMILY
#define ETH_ID_MAX MAX_RPM
#else
#define ETH_ID_MAX MAX_CGX
#endif //PLAT_CN10K_FAMILY

typedef struct _mdio_info {
	int bus_id;
	int addr;
} mdio_info;

typedef struct  {
	MTD_DEV mv_phy;
	mdio_info bus_info;
	MTD_BOOL x_hostside; //x unit is used as host if
} phy_mtd_priv_t;

phy_mtd_priv_t marvell_3310_priv;

static MTD_STATUS mtd_read_mdio(MTD_DEV_PTR pDev, MTD_U16 mdioPort,
	MTD_U16 mmd, MTD_U16 reg, MTD_U16 *value)
{
	int read;
	mdio_info *bus_info = &marvell_3310_priv.bus_info;

	read = smi_read(bus_info->bus_id, CLAUSE45, bus_info->addr, mmd, reg);
	*value = read;
	return MTD_OK;
}

static MTD_STATUS mtd_write_mdio(MTD_DEV_PTR pDev, MTD_U16 mdioPort,
	MTD_U16 mmd, MTD_U16 reg, MTD_U16 value)
{
	mdio_info *bus_info = &marvell_3310_priv.bus_info;

	smi_write(bus_info->bus_id, bus_info->addr, mmd, CLAUSE45, reg, value);
	return MTD_OK;
}


/* Wait delay x in milli seconds */
static MTD_STATUS mtd_wait
(
    MTD_DEV_PTR pDev,
    MTD_UINT x
)
{
    /* Instead of modifying the mtdWait() function, customer can implement system-dependent */
    udelay(x*1000);
    return MTD_OK;
}

static int init_dev(void)
{
	MTD_DEV_PTR devPtr = &marvell_3310_priv.mv_phy;
	mdio_info *p_bus_info = &marvell_3310_priv.bus_info;
	MTD_STATUS status = MTD_FAIL;
	MTD_U16  errCode;

	FMTD_READ_MDIO readMdio = mtd_read_mdio;
	FMTD_WRITE_MDIO writeMdio = mtd_write_mdio;
	FMTD_WAIT_FUNC waitFunc = mtd_wait;

	MTD_U16 anyPort = 0; /* port address of any MDIO port for this device */

	devPtr->appData = (void *)p_bus_info;

	if (!devPtr || !devPtr->appData) {
		ERROR("%s: handle or devPtr or appData is NULL\n", __func__);
		return MTD_FAIL;
	}

	/* Will be set to MTD_TRUE by mtdLoadDriver() if successful */
	devPtr->devEnabled = MTD_FALSE;

	status = mtdLoadDriver(readMdio, writeMdio, waitFunc, 
				anyPort, 0 /* force load */, devPtr, &errCode);
	return status;
}

static MTD_STATUS enable_rate_match(MTD_DEV_PTR mv_phy)
{
	MTD_U16 regValue = 0;

	mtdHwXmdioRead(mv_phy, 0, MTD_CUNIT_MODE_CONFIG, &regValue);
	mtdHwSetRegFieldToWord(regValue, 0x3, 12, 2, &regValue);
	mtdHwXmdioWrite(mv_phy, 0, MTD_CUNIT_MODE_CONFIG, regValue);

	mtd_write_mdio(mv_phy, 0, 31, 0x8c04, 0x1c00);
	mtd_write_mdio(mv_phy, 0, 31, 0x8c05, 0x0000);
	mtd_write_mdio(mv_phy, 0, 31, 0x8c00, 0x1383);

	mtd_write_mdio(mv_phy, 0, 31, 0x8c02, 0x1fff);
	mtd_write_mdio(mv_phy, 0, 31, 0x8c03, 0x0000);

	mtd_write_mdio(mv_phy, 0, 31, 0x8e02, 0x1fff);
	mtd_write_mdio(mv_phy, 0, 31, 0x8e03, 0x0000);

	mtd_write_mdio(mv_phy, 0, 31, 0x8c01, 0x0000);
	mtd_write_mdio(mv_phy, 0, 31, 0x8000, 0x0f3f);
	mtd_write_mdio(mv_phy, 0, 31, 0x8001, 0x7dd0);
	mtd_write_mdio(mv_phy, 0, 31, 0x800e, 0x1b0a);
	mtd_write_mdio(mv_phy, 0, 31, 0x800f, 0x0000);
	mtd_write_mdio(mv_phy, 0, 31, 0x80a2, 0x0001);
	mtd_write_mdio(mv_phy, 0, 31, 0x80a3, 0x0000);
	mtd_write_mdio(mv_phy, 0, 31, 0xF008, 0x04D0);
	mtd_write_mdio(mv_phy, 0, 31, 0xF001, 0x301E);
	mtd_write_mdio(mv_phy, 0, 31, 0xF001, 0x801E);
	return MTD_OK;
}

static MTD_STATUS set_fiber_speed(MTD_DEV_PTR mv_phy, MTD_UINT speed)
{
	MTD_U16 regValue = 0;

	mtdHwXmdioRead(mv_phy, 0, MTD_CUNIT_PORT_CTRL, &regValue);
	mtdHwSetRegFieldToWord(regValue, speed, 3, 3, &regValue);
	mtdHwXmdioWrite(mv_phy, 0, MTD_CUNIT_PORT_CTRL, regValue);
	mtdCunitSwReset(mv_phy, 0);
	return MTD_OK;
}

static int load_ram_img(MTD_DEV_PTR mv_phy)
{
	MTD_U16 error_code;
	MTD_U8 major;
	MTD_U8 minor;
	MTD_U8 inc;
	MTD_U8 test;
	MTD_STATUS status = MTD_FAIL;

	debug_phy_driver("%s: Load firmware for Marvell PHY 88x3310\n", __func__);

	status = mtdUpdateRamImage(mv_phy, 0, _33x0_fw, FW_SIZE, &error_code);

	if (status == MTD_OK) {
		/* If the mtdUpdateRamImage() is successful, calls the
		 * mtdGetFirmwareVersion() to check and verify the
		 * updated version number
		 */
		mtdWait(mv_phy, 1000);
		mtdGetFirmwareVersion(mv_phy, 0, &major, &minor, &inc, &test);
		debug_phy_driver("%s: Firmware version: %d.%d.%d.%d\n", __func__,
						major, minor, inc, test);
	} else
		ERROR("%s: FAIL when loading RAM image, error code: %d\n",
					__func__, error_code);

	return status;
}

/* One time initialization for the PHY if required */
void phy_marvell_3310_probe(int eth_id, int lmac_id)
{
	static int init = 0;
	phy_config_t *phy, *phy1 = NULL;
	MTD_BOOL wait_for_fw = MTD_FALSE;

	if (init)
		return;

	printf("%s: Initializing Marvell 88x3310 PHY...\n", __func__);

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	/* Update PHY AN to be enabled as by default AN is enabled */
	phy->req_an = 1;
	for (int i = eth_id + 1; i < ETH_ID_MAX; i++) {
		phy1 = plat_eth_get_phy_cfg(i, lmac_id);
		if (phy1->type == PHY_MARVELL_3310)
			break;
	}

	phy->priv = &marvell_3310_priv;
	marvell_3310_priv.bus_info.bus_id = phy->mdio_bus;
	marvell_3310_priv.bus_info.addr = phy->addr;

#ifdef PLAT_CN10K_FAMILY
	if (phy->fdt_offset && !fdt_node_check_compatible(
			fdt_ptr, phy->fdt_offset, "marvell,88x3310")) {

		phy_check_reg_init(phy, CLAUSE45, fdt_ptr, phy->fdt_offset);
	}
#endif
	init_dev();

	mtdIsPhyInMdioDownloadMode(&marvell_3310_priv.mv_phy, 0, &wait_for_fw);
	if (wait_for_fw == MTD_TRUE)
		load_ram_img(&marvell_3310_priv.mv_phy);
	init = 1;
}

/* To set the operating mode of the PHY if required */
void phy_marvell_3310_config(int eth_id, int lmac_id)
{
	/* Speed of copper port */
	MTD_U16 allowed_speed_c = 0;
	/* Speed of fiber port when used as line side */
	MTD_U16 allowed_speed_x = 0;
	MTD_BOOL is_x_hostside = MTD_FALSE;
	MTD_BOOL rate_match_on = MTD_FALSE;
	MTD_U16 media_sel = MTD_MS_CU_ONLY;
	phy_config_t *phy;
	MTD_U16 temp;
	MTD_BOOL is_copper_enable;
	MTD_BOOL is_fiber_enable;
	int forced_speed = 0;
	int mode_idx;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);

	if (!phy->forceconfig)
		return;

#ifdef PLAT_CN10K_FAMILY
	mode_idx = plat_eth_get_portm_cfg(
		plat_eth_get_lmac_cfg(eth_id, lmac_id)->portm_idx)->portm_mode;
#else
	mode_idx = plat_eth_get_lmac_cfg(phy)->mode_idx;
#endif //PLAT_CN10K_FAMILY


	debug_phy_driver("%s: %d:%d mode %d an %d\n", __func__, eth_id,
		lmac_id, mode_idx, phy->req_an);

	switch (mode_idx) {
#ifdef PLAT_CN10K_FAMILY
	case PORTM_MODE_XFI:
	case PORTM_MODE_SFI:
#else
	case QLM_MODE_XFI:
	case QLM_MODE_SFI:
#endif //PLAT_CN10K_FAMILY
		allowed_speed_c = MTD_SPEED_ALL_33X0_35X0;
		allowed_speed_x = MTD_FT_10GBASER;
		if (phy->req_an)
			rate_match_on = MTD_TRUE;
		is_x_hostside = MTD_FALSE;
	break;
	default:
		ERROR("%s: 88x3310 doesn't support current host mode\n", __func__);
		return;
	}
	/* Get media sel mode */
	mtdHwXmdioRead(&marvell_3310_priv.mv_phy, 0, MTD_CUNIT_MODE_CONFIG, &temp);
	mtdHwGetRegFieldFromWord(temp, 0, 3, &media_sel);
	is_copper_enable = media_sel != MTD_MS_FBR_ONLY;
	is_fiber_enable = media_sel != MTD_MS_FBR_ONLY;
	if (is_copper_enable) {
		/* Turn on/off rate match*/
		if (rate_match_on)
			enable_rate_match(&marvell_3310_priv.mv_phy);

		if ((phy->forceconfig) &&
				(!phy->req_an)) {
			/* call mtdForceSpeed() */
			switch (phy->req_speed) {
			case ETH_LINK_10M:
				if (!phy->duplex)
					forced_speed = MTD_SPEED_10M_FD_AN_DIS;
				else
					forced_speed = MTD_SPEED_10M_HD_AN_DIS;
			break;
			case ETH_LINK_100M:
				if (!phy->duplex)
					forced_speed = MTD_SPEED_100M_FD_AN_DIS;
				else
					forced_speed = MTD_SPEED_100M_HD_AN_DIS;
			break;
			default:
			break;
			}
			mtdForceSpeed(&marvell_3310_priv.mv_phy, 0,
						forced_speed);
		} else {
			/* Set allowed speeds and restart copper port*/
			mtdEnableSpeeds(&marvell_3310_priv.mv_phy, 0,
					allowed_speed_c, MTD_TRUE);
		}
	}

	if ((is_fiber_enable) && (phy->req_an)) {
		/* Set allowed speeds for fiber port*/
		if (!is_x_hostside)
			set_fiber_speed(&marvell_3310_priv.mv_phy, allowed_speed_x);
	}
	marvell_3310_priv.x_hostside = is_x_hostside;
}

/* To enable/disable AN */
void phy_marvell_3310_set_an(int eth_id, int lmac_id)
{
	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);
}

/* To obtain the link status */
void phy_marvell_3310_get_link_status(int eth_id, int lmac_id,
					link_state_t *link)
{
	MTD_U16 media_sel = 0;
	MTD_U16 fiber_type = 0;
	MTD_U16 frame_to_reg = 0;
	MTD_BOOL data1 = 0, data2 = 0;
	MTD_BOOL data3 = 0, data4 = 0, data5 = 0, data6 = 0;
	MTD_BOOL h_link_up = MTD_FALSE;
	MTD_BOOL x_link_up = MTD_FALSE;
	MTD_BOOL t_link_up = MTD_FALSE;
	MTD_U16 tmp_speed = 0;
	MTD_U16 t_speed = 0;
	MTD_U16 x_speed = 0;
	MTD_U16 full_duplex = 1;
	MTD_BOOL final_link_up = MTD_FALSE;
	MTD_UINT final_speed = 0;
	MTD_U16 val = 0;
	MTD_U16 link_up;
	MTD_U16 an_done;
	phy_config_t *phy;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	link->u64 = 0;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	mtdGetCunitTopConfig(&marvell_3310_priv.mv_phy, 0, &frame_to_reg,
				&media_sel, &fiber_type, &data1, &data2);
	mtdGet10GBRStatus1(&marvell_3310_priv.mv_phy, 0, MTD_H_UNIT,
				&data1, &data2, &data3, &data4, &data5,
				&data6, &h_link_up);
	mtdIsBaseTUp(&marvell_3310_priv.mv_phy, 0, &t_speed, &t_link_up);

	switch (fiber_type) {
	case MTD_FT_1000BASEX:
		mtdGetBaseXrealTimeStatus(&marvell_3310_priv.mv_phy, 0,
					MTD_X_UNIT, &val);
		mtdHwGetRegFieldFromWord(val, 11, 1, &an_done);
		mtdHwGetRegFieldFromWord(val, 10, 1, &link_up);
		if ((link_up == 1) && an_done)
			mtdHwGetRegFieldFromWord(val, 14, 2, &x_speed);
		break;
	case MTD_FT_10GBASER:
		mtdGet10GBRStatus1(&marvell_3310_priv.mv_phy, 0, MTD_X_UNIT,
			&data1, &data2, &data3, &data4, &data5,
			&data6, &x_link_up);
		x_speed = x_link_up ? MTD_SPEED_10GIG_FD : 0;
		break;
	default:
		debug_phy_driver("%s: fiber type %d is not supported\n",
					__func__, fiber_type);
	}

	if (h_link_up && x_link_up)
		tmp_speed = x_speed;
	else if (h_link_up && t_link_up)
		tmp_speed = t_speed;
	else
		tmp_speed = MTD_ADV_NONE;

	switch (tmp_speed) {
	case MTD_SPEED_10M_HD:
	case MTD_SPEED_10M_HD_AN_DIS:
		final_speed = ETH_LINK_10M;
		full_duplex = 0;
		break;
	case MTD_SPEED_10M_FD:
	case MTD_SPEED_10M_FD_AN_DIS:
		final_speed = ETH_LINK_10M;
		full_duplex = 1;
		break;
	case MTD_SPEED_100M_HD:
	case MTD_SPEED_100M_HD_AN_DIS:
		final_speed = ETH_LINK_100M;
		full_duplex = 0;
		break;
	case MTD_SPEED_100M_FD:
	case MTD_SPEED_100M_FD_AN_DIS:
		final_speed = ETH_LINK_100M;
		full_duplex = 1;
		break;
	case MTD_SPEED_1GIG_HD:
		final_speed = ETH_LINK_1G;
		full_duplex = 0;
		break;
	case MTD_SPEED_1GIG_FD:
		final_speed = ETH_LINK_1G;
		full_duplex = 1;
		break;
	case MTD_SPEED_10GIG_FD:
		final_speed = ETH_LINK_10G;
		full_duplex = 1;
		break;
	case MTD_SPEED_2P5GIG_FD:
		final_speed = ETH_LINK_2HG;
		full_duplex = 1;
		break;
	case MTD_SPEED_5GIG_FD:
		final_speed = ETH_LINK_5G;
		full_duplex = 1;
		break;
	default:
		final_speed = ETH_LINK_NONE;
		full_duplex = 0;
		break;
	}

	final_link_up = h_link_up && (x_link_up || t_link_up);

	link->s.full_duplex = full_duplex;
	link->s.link_up = final_link_up;
	link->s.speed = final_speed;
	phy->media_copper = x_link_up ? 0 : 1;
	debug_phy_driver("%s : current speed is %d, link speed %d from %s t_link_up %d h_link_up %d\n",
		__func__, final_speed, link->s.speed,
		x_link_up ? " fiber" : "copper", t_link_up, h_link_up);
}

void phy_marvell_3310_supported_modes(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);

	phy->supported_link_modes =
			((1 << ETH_MODE_10G_C2C_BIT) |
			(1 << ETH_MODE_10G_C2M_BIT));
}

phy_drv_t marvell_3310_drv = {
		.drv_name		= "MARVELL-88X3310",
		.drv_type		= PHY_MARVELL_3310,
		.flags			= 0,
		.probe			= phy_marvell_3310_probe,
		.config			= phy_marvell_3310_config,
		.set_an			= phy_marvell_3310_set_an,
		.reset			= phy_generic_reset,
		.get_link_status	= phy_marvell_3310_get_link_status,
		.set_supported_modes	= phy_marvell_3310_supported_modes,
		.shutdown		= phy_generic_shutdown,
	};

phy_drv_t *marvell_3310_check_type(int type)
{
	if (marvell_3310_drv.drv_type == type)
		return &marvell_3310_drv;
	return NULL;
}
