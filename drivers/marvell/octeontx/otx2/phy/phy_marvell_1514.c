/*
 * Copyright (c) 2019 Marvell.
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
#include <eth_intf.h>
#include <phy_marvell.h>
#include <phy_mgmt.h>
#include <smi.h>

#define reg_set_field(_reg, _field, _val) do {\
		_reg &= ~(_field##_M << _field##_O);\
		_reg |= (_val & _field##_M) << _field##_O;\
	} while (0)

#define reg_get_field(_reg, _field) ({\
		int val;\
		val = (_reg >> _field##_O) & _field##_M;\
		val;\
	})


/* Misc Test: Temperature Sensor Alternative Reading (27_6) */
#define MII_88E1512_TEMP_SENS_ALT_READ	27
#define AVG_TEMP_O 0
#define AVG_TEMP_M 0xff


/*  Fiber Specific Control Register (26_1) */
#define MII_88E1512_FB_CTRL_REG2	26
#define SGMII_VOD_O 0
#define SGMII_VOD_M 0x7


/* MAC Specific Control Register 2 (21_2) */
#define MII_88E1512_MAC_CTRL_REG2	21
#define CP_LINE_LPBCK_O 14
#define CP_LINE_LPBCK_M 0x1


/* MII_88E1514_STATUS_REG (17_0) */
#define DUPLEX_O 13
#define DUPLEX_M 0x1

#define SPD_DPX_RSLVD_O 11
#define SPD_DPX_RSLVD_M 0x1

#define COPPER_LINK_UP_O 10
#define COPPER_LINK_UP_M 0x1


/* MII_CONTROL_REG (0_0) */
#define COPPER_RESET_O 15
#define COPPER_RESET_M 0x1

#define SPEED_LSB_O 13
#define SPEED_LSB_M 0x1

#define COPPER_AN_O 12
#define COPPER_AN_M 0x1

#define CP_DUPLEX_O 8
#define CP_DUPLEX_M 0x1

#define SPEED_MSB_O 6
#define SPEED_MSB_M 0x1


/* Fiber Control Register (0_1) */
#define MII_FIBER_CONTROL_REG 0
#define FIBER_RESET_O 15
#define FIBER_RESET_M 0x1

#define FIBER_AN_O 12
#define FIBER_AN_M 0x1


/* PRBS Control (23_1) */
#define MII_88E1512_PRBS_CTRL_REG 23
#define CLEAR_CNT_O 4
#define CLEAR_CNT_M 0x1

#define PATTERN_SEL_O 2
#define PATTERN_SEL_M 0x3

#define PRBS_GEN_EN_O 0
#define PRBS_GEN_EN_M 0x1

/* PRBS Error Counter LSB (24_1) */
#define MII_88E1512_PRBS_ERR_LSB_REG 24

/* PRBS Error Counter MSB (25_1) */
#define MII_88E1512_PRBS_ERR_MSB_REG 25


/* Set the register page number to use for Marvell clause 22 phys */
static void marvell_set_22_page(phy_config_t *phy, int page)
{
	/* Do nothing if we're not switching pages */
	if (page == phy->last_page)
		return;

	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22,
		  MII_MARVELL_22_PAGE_REG, page);
	phy->last_page = page;
}

/* Maps link speed bits to QLM link speed */
static const enum eth_link_speed mv_1g_link_speed[4] = {
	ETH_LINK_10M, ETH_LINK_100M, ETH_LINK_1G, ETH_LINK_NONE,
};

static inline int link_speed_to_speed_sel(enum eth_link_speed speed)
{
	switch (speed) {
	case ETH_LINK_10M:
		return 0;
	case ETH_LINK_100M:
		return 1;
	case ETH_LINK_1G:
		return 2;
	default: return -1;
	};
}

/* One time initialization for the PHY if required */
void phy_marvell_1514_probe(int eth_id, int lmac_id)
{
	int val;
	phy_config_t *phy;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	phy->req_an = 1;

	debug_phy_driver("%s: %d:%d\n", __func__, phy->mdio_bus, phy->addr);

	/* Read the PHY ID and print it to user */
	val = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1, MII_PHY_ID1_REG);
	NOTICE("%s: bus %d addr 0x%x PHY ID1 0x%x\n", __func__, phy->mdio_bus,
					phy->addr, val);

	val = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1, MII_PHY_ID2_REG);
	NOTICE("%s: bus %d addr 0x%x PHY ID2 0x%x\n", __func__, phy->mdio_bus,
					phy->addr, val);

	/* EEE initialization */
	marvell_set_22_page(phy, 0xff);
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, 17, 0x214B);
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, 16, 0x2144);
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, 17, 0x0C28);
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, 16, 0x2146);
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, 17, 0xB233);
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, 16, 0x214D);
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, 17, 0xCC0C);
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, 16, 0x2159);
	marvell_set_22_page(phy, 0x00);

	/* SGMII-to-Copper mode initialization */
	/* Select page 18 */
	marvell_set_22_page(phy, 18);

	/* In reg 20, write MODE[2:0] = 0x1 (SGMII to Copper) */
	val = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1, 20);
	val &= ~0x7; /* Clear Mode[2:0] */
	val |= 0x1; /* Mode[2:0} = SGMII */
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, 20, val);

	/* PHY reset is necessary after changing MODE[2:0] */
	val |= 0x8000;
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22, 20, val);

	udelay(100);

	/* Reset page selection */
	marvell_set_22_page(phy, 0);
}

/* Function handling mode changes of the PHY */
void phy_marvell_1514_config(int eth_id, int lmac_id)
{
	int copper_ctrl_reg;
	int fiber_ctrl_reg;
	phy_config_t *phy;
	int speed_sel;
	int speed_sel_msb = 1;
	int speed_sel_lsb = 0;
	int req_duplex = 1;
	int req_an;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	speed_sel = link_speed_to_speed_sel(phy->req_speed);
	req_an = phy->req_an;

	/* Check if speed request is valid when AN is off */
	if (!req_an) {

		if (speed_sel == -1) {
			WARN("%s(): Invalid speed request\n",
					__func__);
			return;
		}

		if (phy->req_speed == ETH_LINK_1G) {
			WARN("%s(): 1G is not available when AN is off\n",
					__func__);
			return;
		}

		speed_sel_msb = (speed_sel >> 1) & 1;
		speed_sel_lsb = speed_sel & 1;
		req_duplex = phy->duplex;
	}

	/* Set AN, speed & duplex on the copper side */
	copper_ctrl_reg = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1,
				MII_CONTROL_REG);

	reg_set_field(copper_ctrl_reg, COPPER_AN, req_an ? 1 : 0);
	reg_set_field(copper_ctrl_reg, SPEED_MSB, speed_sel_msb);
	reg_set_field(copper_ctrl_reg, SPEED_LSB, speed_sel_lsb);
	reg_set_field(copper_ctrl_reg, CP_DUPLEX, req_duplex ? 1 : 0);

	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22,
				MII_CONTROL_REG, copper_ctrl_reg);

	/* Trigger copper reset */
	reg_set_field(copper_ctrl_reg, COPPER_RESET, 1);
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22,
				MII_CONTROL_REG, copper_ctrl_reg);

	/* wait after triggering copper reset */
	udelay(1000);


	/* Perform corresponding setting for AN on the MAC side */
	marvell_set_22_page(phy, 1);

	fiber_ctrl_reg = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1,
				MII_FIBER_CONTROL_REG);

	reg_set_field(fiber_ctrl_reg, FIBER_AN, req_an ? 1 : 0);
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22,
				MII_FIBER_CONTROL_REG, fiber_ctrl_reg);

	/* Trigger fiber reset */
	reg_set_field(fiber_ctrl_reg, FIBER_RESET, 1);
	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22,
				MII_FIBER_CONTROL_REG, fiber_ctrl_reg);

	/* wait after triggering fiber reset */
	udelay(1000);

	marvell_set_22_page(phy, 0);
}

/* To obtain link status for 88e1514 */
void phy_marvell_1514_get_link_status(int eth_id, int lmac_id,
					link_state_t *link)
{
	int addr;
	int mdio;
	int status;		/* vendor specific reg 17 */
	phy_config_t *phy;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);
	addr = phy->addr;
	mdio = phy->mdio_bus;

	if ((mdio == -1) || (addr == -1)) {
		ERROR("%s: mdio bus/addr not valid\n", __func__);
		return;
	}
	debug_phy_driver("%s: mdio_bus %d phy_addr 0x%x\n",
			__func__, mdio, addr);

	link->u64 = 0;

	/* As per 88E1514 Data sheet, either
	 * status register 0 should be read back-to-back or
	 * reg 17 should be read once for the current link status
	 */
	status = smi_read(mdio, CLAUSE22, addr, -1, MII_88E1514_STATUS_REG);
	debug_phy_driver("%s: 88E1514 status 0x%x\n", __func__, status);
	if (!(status & (1 << 10)))	/* Check bit 10 for real time status */
		return;			/* Link is down, return link down */

	/* Before reading the link speed, resolve bit needs to be checked
	 * As per datasheet, link speed bits are valid only when bit 11 of REG
	 * 17 is set (resolve bit). This bit indicates AN complete if
	 * AN is enabled or AN is disabled
	 */
	if (status & (1 << 11)) {
		link->s.speed = mv_1g_link_speed[(status >> 14) & 0x3];
		if (link->s.speed == ETH_LINK_NONE)
			return;

		link->s.link_up = 1;
		/* Bit 13 for duplex */
		link->s.full_duplex = ((status >> 13) & 1);
	}
}

#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS

int phy_marvell_1514_set_loopback(int eth_id, int lmac_id, int host_side, int lbk_type, int enable)
{
	int mac_ctrl_reg2;
	int status_reg;
	phy_config_t *phy;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);

	/* This PHY only supports Line side PCS shallow loopback */
	if ((lbk_type != 0) || (host_side)) {
		WARN("Unsupported Loopback mode - host_side:%d type:%d\n",
			host_side, lbk_type);
		return -1;
	}

	if (enable) {
		/* If Line Loopback is requested we need to make sure
		 * that the link is up and set to full duplex
		 */
		status_reg = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1,
				MII_88E1514_STATUS_REG);

		if (!reg_get_field(status_reg, COPPER_LINK_UP)) {
			WARN("%s(): Failed to enable line loopback - "
				"Link must be up\n",
					__func__);

			return -1;
		}

		if (reg_get_field(status_reg, SPD_DPX_RSLVD) &&
			!reg_get_field(status_reg, DUPLEX)) {
			WARN("%s(): Failed to enable line loopback - "
				"Full Duplex is required\n",
					__func__);

			return -1;
		}
	}

	marvell_set_22_page(phy, 2);
	mac_ctrl_reg2 = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1,
			MII_88E1512_MAC_CTRL_REG2);

	reg_set_field(mac_ctrl_reg2, CP_LINE_LPBCK, enable ? 1 : 0);

	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22,
			MII_88E1512_MAC_CTRL_REG2, mac_ctrl_reg2);

	marvell_set_22_page(phy, 0);

	return 0;
}

int phy_marvell_1514_get_temp(int eth_id, int lmac_id, int *temp)
{
	int temp_alt_reg;
	phy_config_t *phy;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);

	marvell_set_22_page(phy, 6);
	temp_alt_reg = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1,
			MII_88E1512_TEMP_SENS_ALT_READ);

	marvell_set_22_page(phy, 0);
	*temp = reg_get_field(temp_alt_reg, AVG_TEMP) - 25;

	return 0;
}

int phy_marvell_1514_set_serdes_cfg(int eth_id, int lmac_id, phy_serdes_cfg_t *cfg)
{
	int fb_ctrl_reg2;
	phy_config_t *phy;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);

	marvell_set_22_page(phy, 1);
	fb_ctrl_reg2 = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1,
			MII_88E1512_FB_CTRL_REG2);

	reg_set_field(fb_ctrl_reg2, SGMII_VOD, cfg->vod);

	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22,
			MII_88E1512_FB_CTRL_REG2, fb_ctrl_reg2);

	marvell_set_22_page(phy, 0);

	return 0;
}

int phy_marvell_1514_get_serdes_cfg(int eth_id, int lmac_id, phy_serdes_cfg_t *cfg)
{
	int fb_ctrl_reg2;
	phy_config_t *phy;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);

	marvell_set_22_page(phy, 1);
	fb_ctrl_reg2 = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1,
			MII_88E1512_FB_CTRL_REG2);

	marvell_set_22_page(phy, 0);

	cfg->vod = reg_get_field(fb_ctrl_reg2, SGMII_VOD);

	/* pre and post emphasis not supported */
	cfg->pre_emphasis = -1;
	cfg->post_emphasis = -1;

	return 0;
}
#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */

void phy_marvell_1514_supported_modes(int eth_id, int lmac_id)
{
	phy_config_t *phy;

	debug_phy_driver("%s: %d:%d\n", __func__, eth_id, lmac_id);

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);

	phy->supported_link_modes = ((1 << ETH_MODE_SGMII_BIT) |
			(1 << ETH_MODE_1000_BASEX_BIT));
}

#if defined(DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS) ||\
	defined(DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS)
int phy_marvell_1514_enable_prbs(int eth_id, int lmac_id,
			int host_side, int prbs, int dir)
{
	int prbs_ctrl_reg;
	phy_config_t *phy;

	/* Only host side PRBS supported */
	if (!host_side)
		return -1;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);

	marvell_set_22_page(phy, 1);
	prbs_ctrl_reg = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1,
			MII_88E1512_PRBS_CTRL_REG);

	reg_set_field(prbs_ctrl_reg, PATTERN_SEL, prbs);
	reg_set_field(prbs_ctrl_reg, CLEAR_CNT, 1);
	reg_set_field(prbs_ctrl_reg, PRBS_GEN_EN, 1);

	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22,
			MII_88E1512_PRBS_CTRL_REG, prbs_ctrl_reg);

	marvell_set_22_page(phy, 0);

	return 0;
}

int phy_marvell_1514_disable_prbs(int eth_id, int lmac_id,
			int host_side, int prbs)
{
	int prbs_ctrl_reg;
	phy_config_t *phy;

	/* Only host side PRBS supported */
	if (!host_side)
		return -1;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);

	marvell_set_22_page(phy, 1);
	prbs_ctrl_reg = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1,
			MII_88E1512_PRBS_CTRL_REG);

	reg_set_field(prbs_ctrl_reg, PRBS_GEN_EN, 0);

	smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22,
			MII_88E1512_PRBS_CTRL_REG, prbs_ctrl_reg);

	marvell_set_22_page(phy, 0);

	return 0;
}

uint64_t phy_marvell_1514_get_prbs_errors(int eth_id, int lmac_id,
			int host_side, int clear, int prbs)
{
	int err_lsb_reg;
	int err_msb_reg;
	int prbs_ctrl_reg;
	int error_count;
	phy_config_t *phy;

	/* Only host side PRBS supported */
	if (!host_side)
		return 0U;

	phy = plat_eth_get_phy_cfg(eth_id, lmac_id);

	marvell_set_22_page(phy, 1);
	err_lsb_reg = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1,
			MII_88E1512_PRBS_ERR_LSB_REG);

	err_msb_reg = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1,
			MII_88E1512_PRBS_ERR_MSB_REG);

	if (clear) {
		/* Clear PRBS error counters */
		prbs_ctrl_reg = smi_read(phy->mdio_bus, CLAUSE22, phy->addr, -1,
				MII_88E1512_PRBS_CTRL_REG);

		reg_set_field(prbs_ctrl_reg, CLEAR_CNT, 1);

		smi_write(phy->mdio_bus, phy->addr, -1, CLAUSE22,
				MII_88E1512_PRBS_CTRL_REG, prbs_ctrl_reg);
	}

	marvell_set_22_page(phy, 0);

	error_count = (err_msb_reg << 16) + err_lsb_reg;
	return error_count;
}
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS ||
	* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
	*/

phy_drv_t marvell_1514_drv = {
		.drv_name		= "MARVELL-88E1514",
		.drv_type		= PHY_MARVELL_88E1514,
		.flags			= 0,
		.probe			= phy_marvell_1514_probe,
		.config			= phy_marvell_1514_config,
		.set_an			= phy_generic_set_an,
		.reset			= phy_generic_reset,
		.get_link_status	= phy_marvell_1514_get_link_status,
		.set_supported_modes	= phy_marvell_1514_supported_modes,
#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
		.get_temp		= phy_marvell_1514_get_temp,
		.set_loopback		= phy_marvell_1514_set_loopback,
		.set_serdes_cfg		= phy_marvell_1514_set_serdes_cfg,
		.get_serdes_cfg		= phy_marvell_1514_get_serdes_cfg,
#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */

#if defined(DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS) ||\
	defined(DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS)
		.enable_prbs		= phy_marvell_1514_enable_prbs,
		.disable_prbs		= phy_marvell_1514_disable_prbs,
		.get_prbs_errors	= phy_marvell_1514_get_prbs_errors,
#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS ||
	* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
	*/
		.shutdown		= phy_generic_shutdown,
	};

phy_drv_t *marvell_1514_check_type(int type)
{
	if (marvell_1514_drv.drv_type == type)
		return &marvell_1514_drv;
	return NULL;
}
