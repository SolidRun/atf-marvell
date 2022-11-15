/*
 * Copyright (c) 2020 Marvell.
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
#include <spi_ops.h>
#include <octeontx_dram.h>
#include <platform_def.h>
#include <phy_mgmt.h>
#include <mac_data_mgmt.h>
#include <gserm.h>
#include <sh_fwdata.h>
#include <spinlock.h>
#include <octeontx_semaphore.h>
#include <rnm.h>
#include <ehsm-drv.h>

#include "cavm-csrs-gpio.h"

extern void *scmi_handle;
extern int spi_update_preserve_memconfig(uintptr_t wrbuf, uint64_t wrsize);

typedef struct {
	uint64_t user_def_preserve_size : 62;
	uint64_t not_modified : 1;
	uint64_t not_valid : 1;
} mempres_config_t;

#define NSEC_BUF	1

#if RAS_EXTENSION
	extern int cn10k_inject_dss_error(uint64_t addr, uint64_t etype,
		uint64_t bits);
#endif

octeontx_ctr_sem_t octeontx_smc_spi_lock;
static spinlock_t octeontx_smc_rvu_lock;
static spinlock_t mdio_lock;
static spinlock_t serdes_lock;

/* Octeon have 2 SPI buses*/
enum GPIO_STATE {
	GPIO_SPI = 0,
	GPIO_SW  = 1
};
static enum GPIO_STATE gpio_spi_state[MAX_SPI_BUS] = {GPIO_SPI, GPIO_SPI};

enum spi_gpio_dir {
	GPIO_AS_SW = 0,
	GPIO_AS_SPI
};

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
 *
 * NOTE: SMC calls can be received from any CPU core, therefore in many
 * cases locking is required.  In most cases spinlocks may be used since
 * the calls return fairly quickly but in cases where the call may take
 * a long time, counting semaphores are used.  If the semaphore cannot be
 * acquired then either -2 is returned in the return code or some other
 * method is returned to notify the caller that it should try again later.
 *
 * Care must also be taken to make sure that there is no interaction
 * between the various lock types that could cause data corruption.
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

int handle_gpio_as_sw(int spi_bus)
{
	if (gpio_spi_state[spi_bus] == GPIO_SW)
		return 0;

	VERBOSE("GPIO CHANGE: SPI: %d, DIR: %s\n", spi_bus, "GPIO");

	if (spi_bus == 0) {
		CSR_INIT(bitcfg, CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_CLK));
		bitcfg.s.pin_sel = 0;
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_CLK), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_IO0));
		bitcfg.s.pin_sel = 0;
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_IO0), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_IO1));
		bitcfg.s.pin_sel = 0;
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_IO1), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_CS0));
		bitcfg.s.pin_sel = 0;
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_CS0), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_CS1));
		bitcfg.s.pin_sel = 0;
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_CS1), bitcfg.u);
	} else {
		CSR_INIT(bitcfg, CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_CLK));
		bitcfg.s.pin_sel = 0;
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_CLK), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_IO0));
		bitcfg.s.pin_sel = 0;
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_IO0), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_IO1));
		bitcfg.s.pin_sel = 0;
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_IO1), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_CS0));
		bitcfg.s.pin_sel = 0;
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_CS0), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_CS1));
		bitcfg.s.pin_sel = 0;
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_CS1), bitcfg.u);
	}
	gpio_spi_state[spi_bus] = GPIO_SW;

	return 1;
}

int handle_gpio_as_spi(int spi_bus)
{
	if (gpio_spi_state[spi_bus] == GPIO_SPI)
		return 0;

	VERBOSE("GPIO CHANGE: SPI: %d, DIR: %s\n", spi_bus, "SPI");

	if (spi_bus == 0) {
		CSR_INIT(bitcfg, CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_CLK));
		bitcfg.s.pin_sel = CAVM_GPIO_PIN_SEL_E_SPI0_CLK;
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_CLK), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_IO0));
		bitcfg.s.pin_sel = CAVM_GPIO_PIN_SEL_E_SPI0_IOX(0);
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_IO0), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_IO1));
		bitcfg.s.pin_sel = CAVM_GPIO_PIN_SEL_E_SPI0_IOX(1);
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_IO1), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_CS0));
		bitcfg.s.pin_sel = CAVM_GPIO_PIN_SEL_E_SPI0_CSX(0);
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_CS0), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_CS1));
		bitcfg.s.pin_sel = CAVM_GPIO_PIN_SEL_E_SPI0_CSX(1);
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI0_CS1), bitcfg.u);
	} else {
		CSR_INIT(bitcfg, CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_CLK));
		bitcfg.s.pin_sel = CAVM_GPIO_PIN_SEL_E_SPI1_CLK;
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_CLK), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_IO0));
		bitcfg.s.pin_sel = CAVM_GPIO_PIN_SEL_E_SPI1_IOX(0);
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_IO0), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_IO1));
		bitcfg.s.pin_sel = CAVM_GPIO_PIN_SEL_E_SPI1_IOX(1);
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_IO1), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_CS0));
		bitcfg.s.pin_sel = CAVM_GPIO_PIN_SEL_E_SPI1_CSX(0);
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_CS0), bitcfg.u);

		bitcfg.u = CSR_READ(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_CS1));
		bitcfg.s.pin_sel = CAVM_GPIO_PIN_SEL_E_SPI1_CSX(1);
		CSR_WRITE(CAVM_GPIO_BIT_CFGX(CAVM_GPIO_ASSIGNED_PIN_E_SPI1_CS1), bitcfg.u);
	}
	gpio_spi_state[spi_bus] = GPIO_SPI;

	return 1;
}

int handle_gpio_switch(int spi_bus, enum spi_gpio_dir dir)
{
	int ret = 0;

	if (spi_bus >= MAX_SPI_BUS)
		return -1;

	if (dir == GPIO_AS_SW)
		ret = handle_gpio_as_sw(spi_bus);
	else
		ret = handle_gpio_as_spi(spi_bus);

	return ret;
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
 *   mem_len - uint32_t, amount of memory under test
 *
 * for x1 - 1 (Set operation),
 *   x2 - uint32_t, type of test executed at reboot (warm boot)
 *   x3 - uint32_t, type of test executed at power on (cold boot)
 *   x4 - uint32_t, memory length ought to be tested, unit is megabytes.
 *   output parameters are ignored:
 *   reboot, power_on and mem_len should be != NULL, with value of 0.
 *
 * return value:
 *   r - 0 for success, error otherwise
 *
 */
static int memtest_config_smc_handler(u_register_t x1, u_register_t x2,
				      u_register_t x3, u_register_t x4,
				      uint32_t *reboot, uint32_t *power_on,
				      uint32_t *mem_len)
{
	static struct {
		uint32_t memory_length;  /* Value expressed in megabytes */
		uint32_t reboot;
		uint32_t power_on;
	} config __aligned(8);
	uint64_t sz = sizeof(config);
	int r;

	if (x1 > 1 || !reboot || !power_on || !mem_len)
		return -22; /* Return EINVAL */

	if (!x1) { /* This is get operation */
		r = spi_read_memtest_persistent_data((uintptr_t)&config, &sz);
		if (r >=  0) { /* Read has been successful */
			*mem_len = config.memory_length;
			*reboot = config.reboot;
			*power_on = config.power_on;
		}
	} else { /* This is set operation */
		config.memory_length = x4;
		config.reboot = x2;
		config.power_on = x3;
		r = spi_write_memtest_persistent_data((uintptr_t)&config, sz);
	}

	return r;
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
		spin_lock(&octeontx_smc_rvu_lock);
		ret = octeontx_clear_lf_to_pf_mapping();
		spin_unlock(&octeontx_smc_rvu_lock);
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
		spin_lock(&octeontx_smc_rvu_lock);
		ret = rvu_rsvd_region_info(&reg_addr, &reg_size);
		spin_unlock(&octeontx_smc_rvu_lock);
		SMC_RET3(handle, ret, reg_addr, reg_size);
		break;

	case PLAT_OCTEONTX_LOAD_EFI_APP:
		user_buf = x1;
		if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0) {
			ret = -2;
		} else {
			/* Check if NS user_buf is a valid DRAM address */
			if (NULL == (void *)user_buf) {
				ret = -1;
			} else {
				/* Perform EFI App load */
				ret = load_efi_image(user_buf, &img_size,
						     1, NSEC_BUF);
			}
		}
		octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);
		SMC_RET2(handle, ret, img_size);
		break;

	case PLAT_OCTEONTX_WRITE_EFI_VAR:
		user_buf = x1;
		img_size = x2;

		if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0) {
			ret = -2;
		} else {
			/* Check if NS user_buf is a valid DRAM address */
			if (NULL == (void *)user_buf) {
				ret = -1;
			} else {
				/* Perform EFI variable store write to SPI-NOR */
				ret = spi_write_efi_var(user_buf, img_size);
			}
		}
		octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_LOAD_SWITCH_FW:
		user_buf = x1;
		user_buf1 = x2;

		if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0) {
			ret = -2;
		} else {
			/* Check if NS user_buf is a valid DRAM address */
			if ((NULL == (void *)user_buf) ||
			(NULL == (void *)user_buf1)) {
				ret = -1;
				goto err1;
			}

			/* Perform Switch firmware load */
			ret = load_switch_fw(user_buf, user_buf1, &img_size, NSEC_BUF);
		}
err1:
		octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);
		SMC_RET2(handle, ret, img_size);
		break;

	case PLAT_OCTEONTX_SPI_SECURE_UPDATE:
		user_buf = x1;
		size = x2;
		enum update_ret uret = SPI_BAD_PARAMETER;

		if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0) {
			uret = SPI_ALREADY_IN_PROGRESS;
			ret = -1;
		} else {
			/* Check if NS user_buf is a valid DRAM address */
			if (NULL == (void *)user_buf) {
				ret = -1;
				goto err;
			}

			dram_end = octeontx_dram_size();
			/*
			 * Sanity check
			 *
			 * NOTE: the size check may need to change for future
			 * versions
			 */
			if ((user_buf < NS_IMAGE_BASE) ||
			    (user_buf > (dram_end - 1)) ||
			    ((user_buf + size) > (dram_end - 1)) ||
			    ((size != sizeof(struct smc_update_descriptor)) &&
			    (size != sizeof(struct smc_update_descriptor_prev)))
			    ) {
				ERROR("Invalid descriptor address or size\n");
				ret = -1;
				goto err;
			}
			ret = spi_smc_update(user_buf, size, dram_end, &uret);
		}
err:
		octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);
		SMC_RET2(handle, ret, uret);
		break;

#ifdef DEBUG_ATF_ENABLE_SERDES_DIAGNOSTIC_CMDS

	case PLAT_OCTEONTX_SERDES_DBG_RX_TUNING:
	{
		int portm_idx, lane_idx, ret_x2 = 0, max_idx, mask;
		uint8_t lanes_num, gserm_idx;
		uint16_t mapping;
		rx_eq_params_t *rx_eq_params =
			(rx_eq_params_t *)SERDES_SETTINGS_DATA_BASE;

		portm_idx = x1 & 0xff;
		lane_idx = (x1 >> 8) & 0xff;
		max_idx = lane_idx + 1;
		mask = x2 & 0x7f;

		spin_lock(&serdes_lock);
		if (gserm_portm_get_gserm_mapping(portm_idx, &gserm_idx,
						&mapping, &lanes_num)) {
			ret = -1;
			goto err2;
		}
		if (lane_idx == 0xff) {
			lane_idx = 0;
			max_idx = lanes_num;
		}

		for (; lane_idx < max_idx; lane_idx++) {
			ret = mask ?
				gserm_rx_eq_params_set(portm_idx, lane_idx,
					mask) :
				gserm_rx_eq_params_get(portm_idx, lane_idx,
					rx_eq_params);
			if (ret)
				break;
		}
		ret_x2 = (gserm_idx << 24) | (mapping << 8) | (lanes_num);
err2:
		spin_unlock(&serdes_lock);
		SMC_RET3(handle, ret, rx_eq_params, ret_x2);
	}
	break;

	case PLAT_OCTEONTX_SERDES_DBG_RX_TRAINING:
	{
		int portm_idx, max_idx, lane_idx, ret_x1 = 0, ret_x2 = 0, cmd;
		int completed, res;
		uint8_t lanes_num, gserm_idx;
		uint16_t mapping;

		portm_idx = x1 & 0xff;
		lane_idx = (x1 >> 8) & 0xff;
		cmd = x2;

		spin_lock(&serdes_lock);
		if (gserm_portm_get_gserm_mapping(portm_idx, &gserm_idx,
						&mapping, &lanes_num)) {
			ret = -1;
			goto out_rx_tr;
		}

		ret_x1 = (gserm_idx << 24) | (mapping << 8) | (lanes_num);

		/* Check training status can only be called per lane */
		if (cmd == RX_TRAIN_CHECK) {
			ret = gserm_rx_training_check(
					portm_idx, lane_idx,
					&completed, &res);

			ret_x2 = (res << 1) | completed;

			spin_unlock(&serdes_lock);
			SMC_RET3(handle, ret, ret_x1, ret_x2);
		}

		if (lane_idx == 0xff) {
			lane_idx = 0;
			max_idx = lanes_num;
		} else {
			max_idx = lane_idx + 1;
		}

		for (; lane_idx < max_idx; lane_idx++) {

			switch (cmd) {
			case RX_TRAIN_START:
				ret = gserm_rx_training_start(
					portm_idx, lane_idx);
				break;

			case RX_TRAIN_STOP:
				ret = gserm_rx_training_stop(
					portm_idx, lane_idx);
				break;

			default:
				ret = -1;
				goto out_rx_tr;
			}

			if (ret)
				goto out_rx_tr;
		}
out_rx_tr:
		spin_unlock(&serdes_lock);
		SMC_RET2(handle, ret, ret_x1);
	} break;


	case PLAT_OCTEONTX_SERDES_DBG_TX_TUNING:
	{
		int ret_x2, portm_idx, lane_idx, max_idx, mask;
		uint8_t lanes_num, gserm_idx;
		uint16_t mapping;
		tx_eq_params_t *tx_eq_params =
			(tx_eq_params_t *)SERDES_SETTINGS_DATA_BASE;

		portm_idx = x1 & 0xff;
		lane_idx = (x1 >> 8) & 0xff;
		max_idx = lane_idx + 1;
		mask = x4 & 0x3ff;

		spin_lock(&serdes_lock);
		if (gserm_portm_get_gserm_mapping(portm_idx, &gserm_idx,
						&mapping, &lanes_num)) {
			ret = -1;
			ret_x2 = 0;
			goto err3;
		}

		if (lane_idx == 0xff) {
			lane_idx = 0;
			max_idx = lanes_num;
		}

		if (!mask)
			goto read_tx_tuning;

		for (; lane_idx < max_idx; lane_idx++) {
			tx_eq_params_t tx_eq;

			tx_eq.s.pre2 = (x2 >> 16) & 0xffff;
			tx_eq.s.pre1 = x2 & 0xffff;
			tx_eq.s.post = (x3 >> 16) & 0xffff;
			tx_eq.s.main = x3 & 0xffff;
			ret = gserm_tx_eq_params_set(portm_idx, lane_idx,
					mask, &tx_eq);
			if (ret)
				break;
		}
		ret_x2 = (gserm_idx << 24) | (mapping << 8) | (lanes_num);
		tx_eq_params = 0;
		spin_unlock(&serdes_lock);
		SMC_RET3(handle, ret, 0, ret_x2);

read_tx_tuning:
		for (; lane_idx < max_idx; lane_idx++) {
			ret = gserm_tx_eq_params_get(portm_idx, lane_idx,
						tx_eq_params);
			if (ret)
				break;
		}
		ret_x2 = (gserm_idx << 24) | (mapping << 8) | (lanes_num);
err3:
		spin_unlock(&serdes_lock);
		SMC_RET3(handle, ret, tx_eq_params, ret_x2);
	}
	break;

	case PLAT_OCTEONTX_SERDES_DBG_LOOPBACK:
	{
		int ret_x1, portm_idx, lane_idx, lpbk_mode, max_idx;
		uint8_t lanes_num, gserm_idx;
		uint16_t mapping;

		portm_idx = x1 & 0xff;
		lane_idx = (x1 >> 8) & 0xff;
		max_idx = lane_idx + 1;
		lpbk_mode = x2;

		spin_lock(&serdes_lock);
		if (gserm_portm_get_gserm_mapping(portm_idx, &gserm_idx,
						&mapping, &lanes_num)) {
			spin_unlock(&serdes_lock);
			SMC_RET1(handle, -1);
		}

		if (lane_idx == 0xff) {
			lane_idx = 0;
			max_idx = lanes_num;
		}

		for (; lane_idx < max_idx; lane_idx++) {
			ret = gserm_loopback_mode_set(portm_idx, lane_idx,
						lpbk_mode);
			if (ret)
				break;
		}
		ret_x1 = (gserm_idx << 24) | (mapping << 8) | (lanes_num);
		spin_unlock(&serdes_lock);
		SMC_RET2(handle, ret, ret_x1);
	}
	break;

	case PLAT_OCTEONTX_SERDES_DBG_PRBS:
	{
		int portm_idx, lane_idx, cmd, gen_pattern;
		int ret_x2, err_inject_cnt, check_pattern, max_idx;
		uint8_t lanes_num, gserm_idx;
		uint16_t mapping;
		prbs_stats_t *stats;

		portm_idx = x1 & 0xff;
		lane_idx = (x1 >> 8) & 0xff;
		max_idx = lane_idx + 1;
		cmd = x1 >> 16;
		gen_pattern = x2;
		check_pattern = x3;
		err_inject_cnt = x4;

		spin_lock(&serdes_lock);
		if (gserm_portm_get_gserm_mapping(portm_idx, &gserm_idx,
						&mapping, &lanes_num)) {
			spin_unlock(&serdes_lock);
			SMC_RET1(handle, -1);
		}

		if (lane_idx == 0xff) {
			lane_idx = 0;
			max_idx = lanes_num;
		}

		for (; lane_idx < max_idx; lane_idx++) {
			switch (cmd) {
			case PRBS_CMD_START:
				ret = gserm_prbs_start(portm_idx, lane_idx,
					gen_pattern, check_pattern);
				break;
			case PRBS_CMD_SHOW:
			{
				stats = (prbs_stats_t *)
						SERDES_PRBS_DATA_BASE;

				ret = gserm_prbs_show(portm_idx, lane_idx,
						stats);
			} break;

			case PRBS_CMD_CLEAR:
				ret = gserm_prbs_clear(portm_idx, lane_idx);
				break;

			case PRBS_CMD_STOP:
				ret = gserm_prbs_stop(portm_idx, lane_idx,
								x2, x3);
				break;
			case PRBS_CMD_INJECT:
				ret = gserm_prbs_inject_err(portm_idx, lane_idx,
								err_inject_cnt);
				break;
			default:
				ret = -1;
				break;
			}

			if (ret)
				break;
		}
		ret_x2 = (gserm_idx << 24) | (mapping << 8) | (lanes_num);
		spin_unlock(&serdes_lock);
		SMC_RET3(handle, ret,
			(cmd == PRBS_CMD_SHOW) ? stats : 0, ret_x2);
	}
	break;

	case PLAT_OCTEONTX_SERDES_DBG_NOTIFY_ECP: {
		int portm_idx, cmd, gen, check;

		portm_idx = x1 & 0xff;
		cmd = x2 & 0xf;

		/* Check if the command is valid */
		if (cmd > ECP_NOTIFY_PRBS_MODE_GEN_CHECK_DIS)
			SMC_RET1(handle, -1);

		spin_lock(&serdes_lock);

		if (cmd <= ECP_NOTIFY_LOOPBACK_FED) {
			ret = gserm_ecp_update_loopback_mode(portm_idx, cmd);
		} else if (cmd <= ECP_NOTIFY_PRBS_MODE_GEN_CHECK_ENA) {
			gen = (cmd - ECP_NOTIFY_LOOPBACK_FED) & 1;
			check = ((cmd - ECP_NOTIFY_LOOPBACK_FED) >> 1) & 1;

			ret = gserm_ecp_update_prbs_mode(portm_idx,
				gen ? 1 : -1,
				check ? 1 : -1);
		} else {
			gen = (cmd - ECP_NOTIFY_PRBS_MODE_GEN_CHECK_ENA) & 1;
			check = ((cmd - ECP_NOTIFY_PRBS_MODE_GEN_CHECK_ENA) >> 1) & 1;

			ret = gserm_ecp_update_prbs_mode(portm_idx,
				gen ? 0 : -1,
				check ? 0 : -1);
		}

		spin_unlock(&serdes_lock);
		SMC_RET1(handle, ret);
	}
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

		spin_lock(&mdio_lock);
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

		spin_unlock(&mdio_lock);
		SMC_RET1(handle, ret);
	}
	break;

	case PLAT_OCTEONTX_PHY_LOOPBACK:
	{
		int cmd, cfg, host_side, lbk_type;

		cmd = x1;
		cfg = x2;
		host_side = cfg & 1;
		lbk_type = (cfg >> 2) & 0x3;

		spin_lock(&mdio_lock);
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

		spin_unlock(&mdio_lock);
		SMC_RET1(handle, ret);
	}
	break;

	case PLAT_OCTEONTX_PHY_GET_TEMP:
	{
		int temp = 0;

		spin_lock(&mdio_lock);
		ret = phy_get_temp(x1, x2, &temp);
		spin_unlock(&mdio_lock);
		SMC_RET2(handle, ret, temp);
	}
	break;

	case PLAT_OCTEONTX_PHY_SERDES_CFG:
	{
		int cmd;
		int res;
		phy_serdes_cfg_t cfg;

		cfg.vod = 0;
		cmd = x1;

		spin_lock(&mdio_lock);
		switch (cmd) {
		case PHY_GET_SERDES_CFG:
			ret = phy_get_serdes_cfg(x3, x4, &cfg);
			res = (cfg.vod) & 0x7;
			spin_unlock(&mdio_lock);
			SMC_RET2(handle, ret, res);
			break;
		case PHY_SET_SERDES_CFG:
			cfg.vod = x2 & 0x7;
			ret = phy_set_serdes_cfg(x3, x4, &cfg);
			break;
		default:
			ret = -1;
		};
		spin_unlock(&mdio_lock);
		SMC_RET1(handle, ret);

	}
	break;

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
			spin_lock(&mdio_lock);
			ret = phy_read_reg(x3, x4, clause, dev_page, reg, &val);
			spin_unlock(&mdio_lock);
			SMC_RET2(handle, ret, val);
			break;
		case PHY_MDIO_WRITE:
			val = (x2 >> 16) & 0xffff;
			spin_lock(&mdio_lock);
			ret = phy_write_reg(x3, x4, clause, dev_page, reg, val);
			spin_unlock(&mdio_lock);
			SMC_RET1(handle, ret);
			break;
		default:
			ret = -1;
			SMC_RET1(handle, ret);
		};

	}
	break;

#endif /* DEBUG_ATF_ENABLE_PHY_DIAGNOSTIC_CMDS */

	case PLAT_OCTEONTX_MAC_MGMT_SET_ADDR:
		if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0) {
			ret = -2;
		} else {
			ret = mac_mgmt_update(x1, x2);
		}
		octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);
		SMC_RET1(handle, ret);
		break;

	case PLAT_OCTEONTX_GET_EFI_SHARED_MEM:
		SMC_RET3(handle, 0, EFI_VAR_MEM_BASE, EFI_VAR_MEM_SIZE);
		break;

	case PLAT_OCTEONTX_SEC_SPI_OP:
		/* Perform an operation on secure SPI */
		img_size = x3;
		if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0) {
			ret = -2;
		} else {
			ret = sec_spi_operation(x1, x2, &img_size, x4);
		}
		octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);
		SMC_RET2(handle, ret, img_size);
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

		if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0) {
			uret = SPI_ALREADY_IN_PROGRESS;
			ret = -2;
			goto err4;
		}
		ret = smc_check_versions(user_buf, size, dram_end, &uret);
err4:
		octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);
		SMC_RET2(handle, ret, uret);
		break;

	case PLAT_OCTEONTX_PERSIST_DATA_COMMAND:
	{
		if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0) {
			ret = -2;
		} else {
			if (x1 == UPDATE_USERDEF_PRESERVE_MEMSZ) {
				ret = memory_preserve_smc_handler(x1, x2);
			} else {
				ret = -1;
			}
		}
		octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);
		SMC_RET1(handle, ret);
	}
	break;

	case PLAT_OCTEONTX_RESET_RNG_EBG_HEALTH_STATE:
	{
		ret = cn10k_rng_reset_health();
		SMC_RET1(handle, ret);
	}
	break;

	case PLAT_OCTEONTX_ASYNC_SPI_STATUS:
	{
		SMC_RET1(handle, async_spi_is_ready());
	}
	break;

	case PLAT_OCTEONTX_INJECT_ERROR:
	{
		switch (x1) {
		case PLAT_OCTEONTX_EINJ_DSS:
#if RAS_EXTENSION
			if (cavm_is_platform(PLATFORM_HW))
				ret = cn10k_inject_dss_error(x2, x3, x4);
#endif
			SMC_RET1(handle, ret);
		break;
		}
	}
	break;

	case PLAT_OCTEONTX_SPI_READ_FLASH:
	{
		user_buf = x1;
		size = x2;

		if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0) {
			ret = -1;
		} else {
			/* Check if NS user_buf is a valid DRAM address */
			if (NULL == (void *)user_buf) {
				ret = -1;
				goto err5;
			}

			if ((user_buf < NS_IMAGE_BASE) ||
			    (size != sizeof(struct smc_read_flash_descriptor))) {
				ERROR("Invalid descriptor address or size\n");
				ret = -1;
				goto err5;
			}
			ret = spi_smc_read_flash(user_buf, size);
		}
err5:
		octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);
		SMC_RET1(handle, ret);
	}
	break;

	case PLAT_OCTEONTX_GET_FWDATA_BASE:
		SMC_RET3(handle, 0, SH_FWDATA_BASE, SH_FWDATA_SIZE);
		break;

	case PLAT_OCTEONTX_GET_SFP_INFO_OFFSET: {
		int offset;
		int eth, lmac;

		if (x2) {
			eth = (x1 >> 16) & 0xffff;
			lmac = x1 & 0xffff;
		} else {
			int portm_idx;
			portm_config_t *portm;

			portm_idx = x1;
			if (portm_idx >= MAX_PORTM)
				SMC_RET1(handle, -1);

			portm = &plat_octeontx_bcfg->portm_cfg[portm_idx];
			if (portm->mac_type != PORTM_ETH &&
				portm->mac_type != PORTM_CPRI)
				SMC_RET1(handle, -2);

			eth = cn10k_portm_get_rpm_num(portm_idx);
			lmac = cn10k_portm_get_rpm_lmac_num(portm_idx);

			if (eth == -1 || lmac == -1)
				SMC_RET1(handle, -2);

			/*
			 * For NIX ports parsing EEPROM data is done during
			 * link bringup, but for BPHY ports need to call it
			 * explicitly, otherwise EEPROM data will not be
			 * visible to kernel.
			 */
			sfp_parse_eeprom_data(portm_idx);
		}

		offset = sh_fwdata_get_sfp_info_offset(eth, lmac);
		if (offset < 0)
			SMC_RET1(handle, offset);

		SMC_RET2(handle, 0, offset);
	}
		break;

	case PLAT_OCTEONTX_SPI_CHANGE:
	{
		SMC_RET1(handle, handle_gpio_switch(x1, x2));
	}
	break;

	case PLAT_OCTEONTX_MEM_TEST_CONFIG:
	{
		uint32_t next, power_on, mem_len;

		next = 0;
		power_on = 0;
		mem_len = 0;
		if (octeontx_ctr_sem_try_lock(&octeontx_smc_spi_lock) != 0) {
			ret = -16; /* Set result to busy */
		} else {
			/* Perform actual work */
			ret = memtest_config_smc_handler(x1, x2, x3, x4,
							 &next, &power_on,
							 &mem_len);
		}
		octeontx_ctr_sem_unlock(&octeontx_smc_spi_lock);
		SMC_RET4(handle, ret, next, power_on, mem_len);
	}
	break;

	case PLAT_OCTEONTX_EHSM_READ_CSR:
	{
		uint32_t reg_val;
		int reg_off = x1 & 0xfff;

		ret = ehsm_csr_read(reg_off, &reg_val);
		SMC_RET2(handle, ret, reg_val);
	}
	break;

	default:
		return cn10k_svc_smc_handler(smc_fid, x1, x2, x3, x4,
					    cookie, handle, flags);
	}

	return 0;
}
