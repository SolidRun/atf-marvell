/*
 * Copyright (C) 2020 Marvell International Ltd.
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
#include <tim_update.h>
#include <spi_smc_load.h>
#include <octeontx_dram.h>
#include <platform_def.h>
#include <phy_mgmt.h>
#include <mac_data_mgmt.h>

extern void *scmi_handle;
extern int spi_update_preserve_memconfig(uintptr_t wrbuf, uint64_t wrsize);

typedef struct {
	uint64_t user_def_preserve_size : 62;
	uint64_t not_modified : 1;
	uint64_t not_valid : 1;
} mempres_config_t;

WEAK uintptr_t cn10k_svc_smc_handler(uint32_t smc_fid,
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

/*
 * SMC handler to update user defined preserve memory size.
 * x1 - UPDATE_USERDEF_PRESERVE_MEMSZ
 * x2 - size
 */
static int memory_preserve_smc_handler(u_register_t x1,
					u_register_t x2)
{
	mempres_config_t cfg;

	cfg.user_def_preserve_size = x2;
	cfg.not_modified = 0;
	cfg.not_valid = 0;
	return spi_update_preserve_memconfig((uintptr_t)&cfg, (uint64_t)sizeof(mempres_config_t));
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
	uintptr_t size, user_buf, user_buf1;
	uint64_t dram_end = 0, img_size = 0;
	uint64_t reg_addr = 0, reg_size = 0;
	int ret = 0;

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

	case PLAT_OCTEONTX_RVU_RSVD_REG_INFO:
		ret = rvu_rsvd_region_info(&reg_addr, &reg_size);
		SMC_RET3(handle, ret, reg_addr, reg_size);
		break;

	case PLAT_OCTEONTX_LOAD_EFI_APP:
		user_buf = x1;

		/* Check if NS user_buf is a valid DRAM address */
		if (NULL == (void *)user_buf) {
			ret = -1;
		} else {
			/* Perform EFI App load */
			ret = spi_smc_load_efi_image(user_buf, &img_size,
						     1);
		}
		SMC_RET2(handle, ret, img_size);
		break;

	case PLAT_OCTEONTX_WRITE_EFI_VAR:
		user_buf = x1;
		img_size = x2;

		/* Check if NS user_buf is a valid DRAM address */
		if (NULL == (void *)user_buf) {
			ret = -1;
		} else {
			/* Perform EFI variable store write to SPI-NOR */
			ret = spi_smc_write_efi_var(user_buf, img_size,
						     x3, x4);
		}
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_LOAD_SWITCH_FW:
		user_buf = x1;
		user_buf1 = x2;

		/* Check if NS user_buf is a valid DRAM address */
		if ((NULL == (void *)user_buf) ||
		    (NULL == (void *)user_buf1)) {
			ret = -1;
			goto err1;
		}

		/* Perform Switch firmware load */
		ret = spi_smc_load_switch_fw(user_buf, user_buf1, &img_size);
err1:
		SMC_RET2(handle, ret, img_size);
		break;

	case PLAT_OCTEONTX_SPI_SECURE_UPDATE:
		user_buf = x1;
		size = x2;
		enum update_ret uret;

		/* Check if NS user_buf is a valid DRAM address */
		if (NULL == (void *)user_buf) {
			ret = -1;
			goto err;
		}

		dram_end = octeontx_dram_size();
		/*
		 * Sanity check
		 *
		 * NOTE: the size check may need to change for future versions
		 */
		if ((user_buf < NS_IMAGE_BASE) ||
		    (user_buf > (dram_end - 1)) ||
		    ((user_buf + size) > (dram_end - 1)) ||
		    (size != sizeof(struct smc_update_descriptor))) {
			ERROR("Invalid descriptor address or size\n");
			ret = -1;
			goto err;
		}
		ret = spi_smc_update(user_buf, size, dram_end, &uret);

err:
		SMC_RET2(handle, ret, uret);
		break;

#ifdef DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS
	case PLAT_OCTEONTX_PHY_DBG_PRBS:
	{
		int cmd, cfg, host_side, param, prbs;

		cmd = x1;
		cfg = x2;
		host_side = cfg & 1;
		param = (cfg >> 1) & 1;
		prbs = (cfg >> 2) & 0x3;

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
		int cmd = x1;

		switch (cmd) {
		case PHY_DISABLE_LINE_LPBCK_CMD:
			ret = phy_set_loopback(x2, x3, 0);
			break;
		case PHY_ENABLE_LINE_LPBCK_CMD:
			ret = phy_set_loopback(x2, x3, 1);
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

#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */

	case PLAT_OCTEONTX_MAC_MGMT_SET_ADDR:
		SMC_RET1(handle, mac_mgmt_update(x1, x2));
		break;

	case PLAT_OCTEONTX_GET_EFI_SHARED_MEM:
		SMC_RET3(handle, 0, EFI_VAR_MEM_BASE, EFI_VAR_MEM_SIZE);
		break;

	case PLAT_OCTEONTX_SEC_SPI_OP:
		/* Perform an operation on secure SPI */
		img_size = x3;
		SMC_RET2(handle, sec_spi_operation(x1, x2, &img_size, x4),
			img_size);
		break;

	case PLAT_OCTEONTX_VERIFY_FIRMWARE:
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

		ret = smc_check_versions(user_buf, size, dram_end, &uret);
		SMC_RET2(handle, ret, uret);
		break;

	case PLAT_OCTEONTX_PERSIST_DATA_COMMAND:
	{
		if (x1 == UPDATE_USERDEF_PRESERVE_MEMSZ) {
			ret = memory_preserve_smc_handler(x1, x2);
			SMC_RET1(handle, ret);
		} else
			SMC_RET1(handle, -1);

	}	break;

	default:
		return cn10k_svc_smc_handler(smc_fid, x1, x2, x3, x4,
					    cookie, handle, flags);
	}
}
