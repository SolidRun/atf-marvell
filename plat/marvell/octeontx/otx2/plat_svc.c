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
#include <spi_ops.h>
#include <octeontx_mmap_utils.h>

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

/*
 * SMC handler to update memory self test configuration.
 * x1 - type of operation, 0 is get, 1 is set
 *
 * Depending on the operation, arguments are used in following way
 *
 * for x1 = 0 (Get operation),
 *   x2, x3 and x4 are ignored. The value for x2, x3 and x4 should be 0.
 *   Values are returned in output parameters
 *   reboot - uint32_t, type of test executed at reboot
 *   power_on - uint32_t, type of test executed at power_on
 *   reboot_mem_len - uint32_t, amount of memory under test for reboot
 *   poweron_mem_len - uint32_t, amount of memory under test for power_on
 *
 * for x1 - 1 (Set operation),
 *   x2 - uint32_t, type of test executed at reboot (warm boot)
 *   x3 - uint32_t, type of test executed at power on (cold boot)
 *   x4 - uint64_t, memory length ought to be tested, unit is megabytes.
 *   reboot_memory_len - lower 32 bits of x4
 *   poweron_memory_len - upper 32 bits of x4
 *
 *   output parameters are ignored:
 *   reboot, power_on, poweron_mem_len and reboot_mem_len
 *   should be != NULL, with value of 0.
 *
 * return value:
 *   r - 0 for success, error otherwise
 *
 */
static int memtest_config_smc_handler(u_register_t x1, u_register_t x2,
				      u_register_t x3, u_register_t x4,
				      uint32_t *reboot, uint32_t *power_on,
				      uint32_t *reboot_mem_len,
				      uint32_t *poweron_mem_len)
{
	static struct {
		uint32_t reboot_memory_len;  /* Value expressed in megabytes */
		uint32_t reboot;
		uint32_t power_on;
		uint32_t poweron_memory_len;  /* Value expressed in megabytes */
	} config __aligned(8);
	uint64_t sz = sizeof(config);
	int r;

	if (x1 > 1 || !reboot || !power_on || !reboot_mem_len || !poweron_mem_len)
		return -22; /* Return EINVAL */

	if (!x1) { /* This is get operation */
		r = spi_read_memtest_persistent_data((uintptr_t)&config, &sz);
		if (r >=  0) { /* Read has been successful */
			*reboot_mem_len = config.reboot_memory_len;
			*poweron_mem_len = config.poweron_memory_len;
			*reboot = config.reboot;
			*power_on = config.power_on;
		}
	} else { /* This is set operation */
		config.reboot_memory_len = x4 & 0xffffffff;
		config.poweron_memory_len = (x4 >> 32) & 0xffffffff;
		config.reboot = x2;
		config.power_on = x3;
		r = spi_write_memtest_persistent_data((uintptr_t)&config, sz);
	}

	return r;
}

int send_fw_version(void *p, uint32_t fw_ver, uintptr_t *version_str, int size)
{
	int ret = -1;
	uint64_t base_addr = 0;
	const uint64_t mask = ~((uint64_t)PAGE_SIZE_MASK);
	int ns_map_size;

	/* User Buffer  */
	ns_map_size = (size + PAGE_SIZE - 1) & -PAGE_SIZE;
	base_addr = (uintptr_t)version_str & mask;

	if (((uintptr_t)version_str + size) > (base_addr + ns_map_size))
		ns_map_size += PAGE_SIZE;

	ret = octeontx_mmap_add_dynamic_region_with_sync(base_addr, base_addr,
						ns_map_size, MT_RW | MT_NS);
	if (ret) {
		WARN("Version check descriptor mmap failed (%d)\n", ret);
		goto error;
	}

	ret = scmi_octeontx_send_fw_version(p, fw_ver, (char *)version_str, size);

	if (base_addr && ns_map_size)
		octeontx_mmap_remove_dynamic_region_with_sync(base_addr,
							ns_map_size);

error:
	return ret;
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

#if defined(PLAT_t96) || defined(PLAT_t98)
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

	case PLAT_OCTEONTX_MEM_TEST_CONFIG:
	{
		uint32_t next, power_on, reboot_mem_len, poweron_mem_len;
		uint64_t ret_x3 = 0;

		next = 0;
		power_on = 0;
		reboot_mem_len = 0;
		poweron_mem_len = 0;

		/* Perform actual work */
		ret = memtest_config_smc_handler(x1, x2, x3, x4,
						 &next, &power_on,
						 &reboot_mem_len,
						 &poweron_mem_len);

		ret_x3 = poweron_mem_len;
		ret_x3 <<= 32;
		ret_x3 |= reboot_mem_len;

		SMC_RET4(handle, ret, next, power_on, ret_x3);
	}
	break;

	case PLAT_OCTEONTX_SEND_FW_VERSION_TO_SCP:
	{
		uint32_t fw_ver;
		uintptr_t size, user_buf;
		uint64_t dram_end;

		fw_ver = x1;
		user_buf = x2;
		size = x3;

		dram_end = octeontx_dram_size();
		if (((void *)user_buf == NULL) ||
			(user_buf < NS_IMAGE_BASE) ||
			((user_buf + size) > dram_end) ||
			(size == 0)) {
			ERROR("Error: invalid descriptor address 0x%lx, size: 0x%lx\n",
								user_buf, size);
			SMC_RET1(handle, -1);
		}

		ret = send_fw_version(scmi_handle, fw_ver, (uintptr_t *)user_buf, size);

		SMC_RET1(handle, ret);
	}
	break;

	default:
		return otx2_svc_smc_handler(smc_fid, x1, x2, x3, x4,
					    cookie, handle, flags);
	}
}
