/*
 * Copyright (c) 2019 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#include <debug.h>
#include <runtime_svc.h>
#include <octeontx_svc.h>
#include <platform_svc.h>
#include <octeontx_common.h>
#include <stdint.h>
#include <tools_share/uuid.h>
#include <rvu.h>
#include <plat_board_cfg.h>
#include <plat_scmi.h>
#include <cgx.h>
#include <spi_smc_load.h>
#include <phy_mgmt.h>
#include <sh_fwdata.h>
#include <octeontx_dram.h>

extern void *scmi_handle;

WEAK uintptr_t otx2_svc_smc_handler(uint32_t smc_fid,
				    u_register_t x1,
				    u_register_t x2,
				    u_register_t x3,
				    u_register_t x4,
				    void *cookie,
				    void *handle,
				    u_register_t flags)
{
	WARN("Unimplemented OcteonTX Service Call: 0x%x\n", smc_fid);
	SMC_RET1(handle, SMC_UNK);
}

uintptr_t plat_octeontx_svc_smc_handler(uint32_t smc_fid,
					u_register_t x1,
					u_register_t x2,
					u_register_t x3,
					u_register_t x4,
					void *cookie,
					void *handle,
					u_register_t flags)
{
	uint64_t ret = 0;
	switch (smc_fid) {
	case PLAT_OCTEONTX_DISABLE_RVU_LFS:
		ret = octeontx_clear_lf_to_pf_mapping();
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_FLSF_FW_BOOTED:
		ret = scmi_octeontx_flsf_fw_booted(scmi_handle);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_FLSF_CLEAR_FORCE_2NDRY:
		ret = scmi_octeontx_flsf_clear_force_2ndry(scmi_handle);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_OOO_CONFIG:
		INFO("SVC OOO CONFIG: x1 = 0x%lx\n", x1);
		ret = octeontx2_configure_ooo(x1);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_OOO_MASK:
		INFO("SVC OOO MASK: x1 = 0x%lx\n", x1);
		ret = octeontx2_configure_ooo_mask(x1);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_WFE_CONFIG:
		INFO("SVC WFE CONFIG: x1 = 0x%lx\n", x1);
		ret = octeontx2_configure_wfe(x1);
		SMC_RET1(handle, ret);
		break;

#ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS
	case PLAT_OCTEONTX_SERDES_DBG_GET_EYE:
		ret = cgx_display_eye(x1, x2, x3);
		if (ret == CGX_DISPLAY_OK)
			ret = SMC_OK;
		else if (ret == CGX_DISPLAY_PENDING)
			ret = OCTEONTX_SMC_PENDING;
		else
			ret = OCTEONTX_SMC_FAIL;

		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_SERDES_DBG_GET_CONF:
		ret = cgx_display_serdes_settings(x1, x2, x3);
		ret = ret == CGX_DISPLAY_OK ? SMC_OK : OCTEONTX_SMC_FAIL;

		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_SERDES_DBG_PRBS:
		ret = cgx_smc_do_prbs(x1, x2, x3, x4);
		ret = ret == CGX_DISPLAY_OK ? SMC_OK : OCTEONTX_SMC_FAIL;

		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_SERDES_DBG_SET_CONF:
		ret = cgx_smc_set_serdes_tune(x1, x2, x3, x4);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_SERDES_DBG_SET_LOOP:
		ret = cgx_smc_set_serdes_loop(x1, x2, x3);
		SMC_RET1(handle, ret);
		break;

#endif /* DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS */
#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
	case PLAT_OCTEONTX_PHY_DBG_PRBS:
	{
		int cmd, cfg, host_side, param, prbs;

		cmd = x1;
		cfg = x2;
		host_side = cfg & 1;
		param = (cfg >> 1) & 0x3;
		prbs = (cfg >> 3) & 0x3;

		switch (cmd) {
		case PHY_PRBS_START_CMD:
			ret = phy_enable_prbs(x3, x4, host_side, prbs, param);
			break;
		case PHY_PRBS_STOP_CMD:
			ret = phy_disable_prbs(x3, x4, host_side, prbs);
			break;
		case PHY_PRBS_GET_DATA_CMD:
			ret = phy_get_prbs_errors(x3, x4, host_side, param, prbs);
			break;
		default:
			ret = -1;
			break;
		};

		SMC_RET1(handle, ret);
	} break;

	case PLAT_OCTEONTX_PHY_LOOPBACK:
	{
		int cmd, cfg, host_side, lbk_type;

		cmd = x1;
		cfg = x2;
		host_side = cfg & 1;
		lbk_type = (cfg >> 2) & 0x3;

		switch (cmd) {
		case PHY_LOOPBACK_STOP_CMD:
			ret = phy_set_loopback(x3, x4, host_side, lbk_type, 0);
			break;
		case PHY_LOOPBACK_START_CMD:
			ret = phy_set_loopback(x3,  x4,  host_side, lbk_type, 1);
			break;
		default:
			ret = -1;
			break;
		};

		SMC_RET1(handle, ret);
	} break;

	case PLAT_OCTEONTX_PHY_GET_TEMP:
	{
		int temp = 0;

		ret = phy_get_temp(x1, x2, &temp);
		SMC_RET2(handle, ret, temp);
	} break;

	case PLAT_OCTEONTX_PHY_SERDES_CFG:
	{
		int cmd;
		int res;
		phy_serdes_cfg_t cfg;

		cfg.vod = 0;
		cmd = x1;

		switch (cmd) {
		case PHY_GET_SERDES_CFG:
			ret = phy_get_serdes_cfg(x3, x4, &cfg);
			res = (cfg.vod) & 0x7;
			SMC_RET2(handle, ret, res);
			break;
		case PHY_SET_SERDES_CFG:
			cfg.vod = x2 & 0x7;
			ret = phy_set_serdes_cfg(x3, x4, &cfg);
			SMC_RET1(handle, ret);
			break;
		default:
			ret = -1;
			SMC_RET1(handle, ret);
		};

	} break;

	case PLAT_OCTEONTX_PHY_MDIO:
	{
		int cmd;
		int clause, dev_page, reg, val = 0;

		cmd = x1 & 1;
		clause = (x1 >> 1) & 1;

		dev_page = (x1 >> 2);
		if (dev_page == (1 << 5))
			dev_page = -1;
		else
			dev_page &=  0x1f;

		reg = clause ? x2 & 0xffff : x2 & 0x1f;

		switch (cmd) {
		case PHY_MDIO_READ:
			ret = phy_read_reg(x3, x4, clause, dev_page, reg, &val);
			SMC_RET2(handle, ret, val);
			break;
		case PHY_MDIO_WRITE:
			val = (x2 >> 16) & 0xffff;
			ret = phy_write_reg(x3, x4, clause, dev_page, reg, val);
			SMC_RET1(handle, ret);
			break;
		default:
			ret = -1;
			SMC_RET1(handle, ret);
		};

	} break;

	case PLAT_OCTEONTX_PHY_EYE_CAPTURE:
	{
		int host_side, type;

		host_side = x1 & 1;
		type = x2 & 1;

		ret = phy_eye_capture(x3, x4, host_side, type);
		SMC_RET1(handle, ret);
	} break;

	case PLAT_OCTEONTX_PHY_PKT_GEN:
	{
		int cmd, value;

		cmd = x1;
		value = x2;
		ret = phy_pkt_gen(x3, x4, cmd, value);
		SMC_RET1(handle, ret);
	} break;

#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */

#if defined(PLAT_t96)
	case PLAT_OCTEONTX_GET_EFI_SHARED_MEM:
		SMC_RET3(handle, 0, EFI_VAR_MEM_BASE, EFI_VAR_MEM_SIZE);
		break;

	case PLAT_OCTEONTX_WRITE_EFI_VAR:
		/* Check if NS user_buf is a valid DRAM address */
		if (NULL == (void *)x1) {
			ret = -1;
		} else {
			/* Perform EFI variable store write to SPI-NOR */
			ret = spi_smc_write_efi_var(x1, x2);
		}
		SMC_RET1(handle, ret);
		break;
#endif

	case PLAT_OCTEONTX_SET_AVS_STATUS:
		ret = scmi_octeontx_set_avs_status(scmi_handle, x1);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_GET_FWDATA_BASE:
		SMC_RET3(handle, 0, SH_FWDATA_BASE, SH_FWDATA_SIZE);
		break;

	case PLAT_OCTEONTX_GET_SFP_INFO_OFFSET: {
		int offset;
		int eth, lmac;

		/* Only the eth/lmac addressing supported in t9x */
		if (!x2)
			SMC_RET1(handle, -1);

		eth = (x1 >> 16) & 0xffff;
		lmac = x1 & 0xffff;

		offset = sh_fwdata_get_sfp_info_offset(eth, lmac);
		if (offset < 0)
			SMC_RET1(handle, -1);

		SMC_RET2(handle, 0, offset);
	}
		break;

#ifdef ATF_ENABLE_MAC_ADV_CMDS
	case PLAT_OCTEONTX_PHY_ADVANCE_CMDS:
	{
		uintptr_t size, user_buf;
		uint64_t dram_end;

		user_buf = x1;
		size = x2;

		dram_end = octeontx_dram_size();
		if (((void *)user_buf == NULL) ||
			(user_buf < NS_IMAGE_BASE) ||
			((user_buf + size) > dram_end) ||
			(user_buf % 8)) {
			ERROR("Error: invalid descriptor address 0x%lx, size: 0x%lx\n",
								user_buf, size);
			SMC_RET2(handle, -1, 0);
		}

		ret = phy_advance_commads(x3, x4, (uintptr_t *)user_buf, size);

		SMC_RET1(handle, ret);
	} break;
#endif
	default:
		return otx2_svc_smc_handler(smc_fid, x1, x2, x3, x4,
					    cookie, handle, flags);
	}
}
