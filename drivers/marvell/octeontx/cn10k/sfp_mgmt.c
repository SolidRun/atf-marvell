/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

/* SFP managemnet driver for CN10K */

#include <arch.h>
#include <stdio.h>
#include <debug.h>
#include <string.h>
#include <platform_def.h>
#include <timers.h>
#include <octeontx_common.h>
#include <drivers/delay_timer.h>
#include <plat_board_cfg.h>
#include <smi.h>
#include <eth_intf.h>
#include <rpm.h>
#include <sh_fwdata.h>
#include <eth_link_mgmt_intf.h>

/* For LEGACY logging, define DEBUG_ATF_SFP_MGMT to enable debug logs */
#undef DEBUG_ATF_SFP_MGMT

#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_ETH_SFP_MGMT
#  define debug_sfp_mgmt(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
			       tf_log(LOG_MARKER_NOTICE __VA_ARGS__) : (void)0
#elif DEBUG_ATF_SFP_MGMT
#define debug_sfp_mgmt printf
#else
#define debug_sfp_mgmt(...) ((void) (0))
#endif


sfp_shared_data_t *mcp_sh_data_global = (void *)SFP_SHMEM_BASE;

/* Static data to save the transceiver type and its
 * capabilities for each LMAC.
 */
static sfp_cap_info_t sfp_cap_info[PORTM_MAX];

sfp_shared_data_t *sfp_get_sh_mem_ptr(int portm_idx)
{
	sfp_shared_data_t *sh_data;

	sh_data = mcp_sh_data_global + portm_idx;
	return sh_data;
}

void sfp_init_shmem(void)
{
	int portm_idx;

	debug_sfp_mgmt("%s\n", __func__);
	debug_sfp_mgmt("sizeof = %d\n", (int)sizeof(sfp_shared_data_t));

	for (portm_idx = 0; portm_idx < PORTM_MAX; portm_idx++) {
		sfp_slot_info_t *sfp;
		sfp_shared_data_t *sh_data;

		sh_data = sfp_get_sh_mem_ptr(portm_idx);

		if (sh_data == NULL) {
			ERROR("%s: SM pointer is NULL\n", __func__);
			return;
		}

		/* Initialize shared memory for each LMAC */
		memset(sh_data, 0, sizeof(sfp_shared_data_t));
		sh_data->size = sizeof(sfp_shared_data_t);

		if (portm_idx >= MAX_PORTM)
			continue;

		sfp = &plat_octeontx_bcfg->sfp_slots[portm_idx];
		if (sfp->is_sfp || sfp->is_qsfp) {
			debug_sfp_mgmt("%s: PORTM%d: initializing SFP INFO\n",
				__func__, portm_idx);

			memcpy(&sh_data->sfp_slot, sfp,
				sizeof(sfp_slot_info_t));
			sh_data->sfp_ctx.valid = 1;
		}

		/* Assign RPM/LMAC IDs */
		sh_data->portm_idx = portm_idx;

		/* Program the AN/LT interface rev */
		sh_data->intf_rev = 0xABCD0000;

		/* Copy the board model */
		strlcpy(sh_data->board_model,
			plat_octeontx_bcfg->bcfg.board_model,
			sizeof(sh_data->board_model));
	}
}

int sfp_get_mod_status(int portm_idx)
{
	int retry_lock = 0;
	sfp_context_t *ctx;
	sfp_shared_data_t *sh_data;

	sh_data = sfp_get_sh_mem_ptr(portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return -1;
	}
	ctx = &sh_data->sfp_ctx;

retry_acquire_lock:
	if (ctx->lock == SFP_OWN_NONE) {
		ctx->lock = SFP_OWN_AP;
	} else {
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}

		debug_sfp_mgmt("%s PORTM%d lock %d not available for AP\n",
					__func__, portm_idx, ctx->lock);
		return -1;
	}
	debug_sfp_mgmt("%s: PORTM%d ctx %p state %d\n", __func__, portm_idx,
				ctx, ctx->mod_status);
	ctx->lock = SFP_OWN_NONE;

	if (ctx->mod_status == SFP_MOD_STATE_ABSENT)
		debug_sfp_mgmt("%s: PORTM%d module not present ctx %p\n",
			__func__, portm_idx, ctx);

	return ctx->mod_status;
}

static void sfp_get_info_1g(int portm_idx)
{
	sfp_mod_info_t *mod_info;
	sfp_cap_info_t *cap_info;
	sfp_shared_data_t *sh_data;

	sh_data = sfp_get_sh_mem_ptr(portm_idx);
	cap_info = &sfp_cap_info[portm_idx];

	/* transceiver compliance code : table 5-3 */
	debug_sfp_mgmt("%s: Read BYTE 6 capabilities\n", __func__);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return;
	}
	mod_info = (sfp_mod_info_t *)sh_data->buf;

	/* BYTE 6 : ethernet compliance codes */
	switch (mod_info->compliance_code[3]) {
	case 0x1:
		debug_sfp_mgmt("%s: 1G SX detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_1G_SX;
		break;
	case 0x2:
		debug_sfp_mgmt("%s: 1G LX detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_1G_LX;
		break;
	/* 0x4 - 1000BASE-CX ? */
	case 0x8:
		debug_sfp_mgmt("%s: 1000 BASE-T detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_1000_BASET;
		/* FIXME: detect PHY type */
		break;
	default:
		/* read BYTE 8 SFP+ cable technology fields */
		switch (mod_info->compliance_code[5]) {
		case 0x1:
			cap_info->trans_type = SFP_TRANS_TYPE_1G_PCC;
			debug_sfp_mgmt("%s: 1G passive copper detected\n", __func__);
			break;
		case 0x2:
			cap_info->trans_type = SFP_TRANS_TYPE_1G_ACC;
			debug_sfp_mgmt("%s: 1G active copper detected\n", __func__);
			break;
		default:
			cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
			ERROR("%s: PORTM%d unknown SFP/SFP+/SFP28 transceiver type\n",
						__func__, portm_idx);
			break;
		}
		break;
	}
	if (cap_info->trans_type != SFP_TRANS_TYPE_UNKNOWN) {
		debug_sfp_mgmt("%s: Connector type %d Rate %d\n", __func__,
				SFP_CONN_SFP, SFP_RATE_10G);
	}
}

static void sfp_get_info_10g(int portm_idx)
{
	sfp_mod_info_t *mod_info;
	sfp_cap_info_t *cap_info;
	sfp_shared_data_t *sh_data;

	sh_data = sfp_get_sh_mem_ptr(portm_idx);
	cap_info = &sfp_cap_info[portm_idx];

	debug_sfp_mgmt("%s: Read BYTE 3 capabilities\n", __func__);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return;
	}

	mod_info = (sfp_mod_info_t *)sh_data->buf;

	/* transceiver compliance codes */
	switch (mod_info->compliance_code[0]) {
	/* SFF 8272 : Table 5-3 : BYTE 3 : 10G ethernet compliance codes/
	 * Infiniband compliance codes
	 */
	case 0x1:
		debug_sfp_mgmt("%s: 10G passive copper inserted\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_PCC;
		break;
	case 0x2:
		debug_sfp_mgmt("%s: 10G active copper inserted\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_ACC;
		break;
	case 0x10:
		debug_sfp_mgmt("%s: 10G SR inserted\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_SR;
		break;
	case 0x20:
		debug_sfp_mgmt("%s: 10G LR inserted\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_LR;
		break;
	case 0x40:
		debug_sfp_mgmt("%s: 10G LRM inserted\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_LRM;
		break;
	case 0x80:
		debug_sfp_mgmt("%s: 10G ER inserted\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_ER;
		break;
	default:
		/* Read BYTE 8 SFP+ cable technology fields */
		switch (mod_info->compliance_code[5]) {
		case 0x4:
			debug_sfp_mgmt("%s: 10G passive copper inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_PCC;
			break;
		case 0x8:
			debug_sfp_mgmt("%s: 10G active copper inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_ACC;
			break;
		default:
			/* SFF 8472 : Table 4-3 connector types */
			switch (mod_info->connector_type) {
			case 0x22:	/* RJ45 */
				debug_sfp_mgmt("%s: 10GBASE-T detected\n", __func__);
				cap_info->trans_type = SFP_TRANS_TYPE_10G_BASET;
				/* FIXME : assert and deassert Tx disable ?
				 * get the PHY type
				 */
				break;
			/* FIXME: other connector types? */
			default:
				cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
				debug_sfp_mgmt("%s: PORTM%d Unknown SFP/SFP+/SFP28 detected\n",
						__func__, portm_idx);
				break;
			}
			break;
		}
		break;
	}
	if (cap_info->trans_type != SFP_TRANS_TYPE_UNKNOWN) {
		debug_sfp_mgmt("%s: Connector type %d Rate %d\n", __func__,
				SFP_CONN_SFP, SFP_RATE_10G);
	}
}

static void sfp_get_info_25g(int portm_idx)
{
	sfp_mod_info_t *mod_info;
	sfp_cap_info_t *cap_info;
	sfp_shared_data_t *sh_data;

	sh_data = sfp_get_sh_mem_ptr(portm_idx);
	cap_info = &sfp_cap_info[portm_idx];


	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return;
	}
	mod_info = (sfp_mod_info_t *)sh_data->buf;

	debug_sfp_mgmt("%s : Read BYTE 36 capabilities %d\n", __func__, mod_info->ext_compliance_code);

	/* Transceiver compliance codes */
	switch (mod_info->ext_compliance_code) {
	/* Table 5-3 : Bit 0 - 7 : Extended compliance codes
	 * Refer SFF-8024 transceiver management -
	 * TABLE 4-4 EXTENDED SPECIFICATION COMPLIANCE CODES
	 */
	case 0x1:
		debug_sfp_mgmt("%s: 25G active optical cable detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_AOC;
		break;
	case 0x2:
		debug_sfp_mgmt("%s: 25G SR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_SR;
		break;
	case 0x3:
		debug_sfp_mgmt("%s: 25G LR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_LR;
		break;
	case 0x4:
		debug_sfp_mgmt("%s: 25G ER detected\n", __func__);
		/*FIXME : cap_info->trans_type = SFP_TRANS_TYPE_25G_ER;  */
		break;
	case 0x8:
		debug_sfp_mgmt("%s: 25G active copper cable detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_ACC_M;
		break;
	case 0xb:
		debug_sfp_mgmt("%s: 25G CA-L detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_L;
		break;
	case 0xc:
		debug_sfp_mgmt("%s: 25G CA-S detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_S;
		break;
	case 0xd:
		debug_sfp_mgmt("%s: 25G CA-N detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_N;
		break;
	case 0x18:
		debug_sfp_mgmt("%s: 25G active optical cable detected BER of 10^(-12) or below\n",
								__func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_AOC;
		break;
	case 0x19:
		debug_sfp_mgmt("%s: 25G active copper cable detected BER of 10^(-12) or below\n",
								__func__);
		cap_info->trans_type = SFP_TRANS_TYPE_25G_ACC_M;
		break;
	case 0x30:
		debug_sfp_mgmt("%s:  50GAUI AOC detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_50G_AOC;
		break;
	case 0x31:
		debug_sfp_mgmt("%s:  50GAUI ACC detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_50G_ACC;
		break;
	case 0x40:
		debug_sfp_mgmt("%s:  50GAUI CR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_50G_CR;
		break;
	case 0x41:
		debug_sfp_mgmt("%s:  50GAUI SR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_50G_SR;
		break;
	case 0x42:
		debug_sfp_mgmt("%s:  50GAUI FR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_50G_FR;
		break;
	case 0x4A:
		debug_sfp_mgmt("%s:  50GAUI ER detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_50G_ER;
		break;
	default:
		/* Read byte 3 to check for copper -
		 * Infiniband compliance codes
		 */
		debug_sfp_mgmt("%s: Read BYTE 3 capabilities\n", __func__);
		switch (mod_info->compliance_code[0]) {
		case 1:
			debug_sfp_mgmt("%s: 25G passive copper detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_N;
			break;
		case 2:
			debug_sfp_mgmt("%s: 25G active copper detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_25G_ACC_S;
			break;
		default:
			debug_sfp_mgmt("%s : Infiniband compliance cable not detected\n", __func__);
			/* Read BYTE 8 SFP+ cable technology capabilities */
			switch (mod_info->compliance_code[5]) {
			case 4:
				debug_sfp_mgmt("%s: 25G passive copper detected\n", __func__);
				cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_N;
				break;
			default:
				/* Read BYTE 2 for optical or copper
				 * SFF-8024 Table 4-3 connector types
				 */
				switch (mod_info->connector_type) {
				case 0x1:
					debug_sfp_mgmt("%s: 25G Subscriber connector\n", __func__);
					cap_info->trans_type = SFP_TRANS_TYPE_25G_SR;
					break;
				case 0x7:
					debug_sfp_mgmt("%s: 25G Lucent connector\n", __func__);
					cap_info->trans_type = SFP_TRANS_TYPE_25G_SR;
					break;
				case 0xb:
					debug_sfp_mgmt("%s: 25G optical pigtail\n", __func__);
					cap_info->trans_type = SFP_TRANS_TYPE_25G_AOC;
					break;
				case 0x21:
					debug_sfp_mgmt("%s: 25G copper pigtail\n", __func__);
					cap_info->trans_type = SFP_TRANS_TYPE_25G_ACC_S;
					break;
				case 0x23:
					debug_sfp_mgmt("%s: 25G No seperable connector\n",
								__func__);
					cap_info->trans_type = SFP_TRANS_TYPE_25G_ACC_S;
					break;
				default:
					cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
					debug_sfp_mgmt("%s: Unknown cable type detected for 25G\n",
								 __func__);
					break;
				}
				break;
			}
			break;
		}
		break;
	}
	if (cap_info->trans_type != SFP_TRANS_TYPE_UNKNOWN) {
		debug_sfp_mgmt("%s: Connector type %d Rate %d\n", __func__,
				SFP_CONN_SFP, SFP_RATE_25G);
	}
}

/* FIXME : For now, add support for bit rate and update transceiver type */
static void sfp_get_info_cpri(int portm_idx)
{
	sfp_mod_info_t *mod_info;
	sfp_cap_info_t *cap_info;
	sfp_shared_data_t *sh_data;

	sh_data = sfp_get_sh_mem_ptr(portm_idx);
	cap_info = &sfp_cap_info[portm_idx];

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return;
	}
	mod_info = (sfp_mod_info_t *)sh_data->buf;

	debug_sfp_mgmt("%s: portm %d signal rate 0x%x\n", __func__, portm_idx, mod_info->bitrate);

	switch (mod_info->bitrate) {
	case 0x18:
		debug_sfp_mgmt("%s: 2.4 Gb/s\n", __func__);
		break;
	case 0x1E:
		debug_sfp_mgmt("%s: 3.07 Gb/s\n", __func__);
		break;
	case 0x31:
		debug_sfp_mgmt("%s: 4.9 Gb/s\n", __func__);
		break;
	case 0x3d:
		debug_sfp_mgmt("%s: 6.1 Gb/s\n", __func__);
		break;
	case 0x62:
		debug_sfp_mgmt("%s: 9.8 Gb/s\n", __func__);
		break;
	default:
	break;
	}
	cap_info->trans_type = SFP_TRANS_TYPE_CPRI;
}

/* SFP EEPROM contents
 * Refer SFF 8472 & SFF 8024
 */
static void sfp_get_info(int portm_idx)
{
	sfp_mod_info_t *mod_info;
	sfp_cap_info_t *cap_info;
	sfp_shared_data_t *sh_data;

	sh_data = sfp_get_sh_mem_ptr(portm_idx);
	cap_info = &sfp_cap_info[portm_idx];

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return;
	}
	mod_info = (sfp_mod_info_t *)sh_data->buf;

	/* check byte 12 for nominal bit rate */
	if (mod_info->bitrate >= 250) {
		debug_sfp_mgmt("%s: 25G signal rate\n", __func__);
		sfp_get_info_25g(portm_idx);
	} else if (mod_info->bitrate >= 100) {
		debug_sfp_mgmt("%s: 10G signal rate\n", __func__);
		sfp_get_info_10g(portm_idx);
	} else if ((mod_info->bitrate == 0xd) || (mod_info->bitrate == 0xc)) {	//signal bit rate of 1.25
		debug_sfp_mgmt("%s: 1G signal rate\n", __func__);
		sfp_get_info_1g(portm_idx);
	} else if (mod_info->bitrate >= 10) {
		debug_sfp_mgmt("%s: CPRI signal rate\n", __func__);
		sfp_get_info_cpri(portm_idx);
	} else {
		WARN("%s: PORTM%d signal rate not specified for SFP/SFP+/SFP28\n",
					__func__, portm_idx);
		/* FIXME : as per SFF-8472 5.7, a value of 0 indicates that
		 * the bit rate is not specified and must be determined
		 * from the transceiver technology. But,
		 * newer cables that support higher speeds are more likely
		 * have the bit rate programmed correctly. Hence, check for
		 * 10G ethernet compliance code in this case.
		 */
		switch (mod_info->compliance_code[0]) {
		/* SFF 8272 : Table 5-3 : BYTE 3 : 10G ethernet compliance codes/
		 * Infiniband compliance codes
		 */
		case 0x1:
			debug_sfp_mgmt("%s: 10G passive copper inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_PCC;
			break;
		case 0x2:
			debug_sfp_mgmt("%s: 10G active copper inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_ACC;
			break;
		case 0x10:
			debug_sfp_mgmt("%s: 10G SR inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_SR;
			break;
		case 0x20:
			debug_sfp_mgmt("%s: 10G LR inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_LR;
			break;
		case 0x40:
			debug_sfp_mgmt("%s: 10G LRM inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_LRM;
			break;
		case 0x80:
			debug_sfp_mgmt("%s: 10G ER inserted\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_10G_ER;
			break;
		default:
			/* Read BYTE 8 SFP+ cable technology fields */
			switch (mod_info->compliance_code[5]) {
			case 0x4:
				debug_sfp_mgmt("%s: 10G passive copper inserted\n", __func__);
				cap_info->trans_type = SFP_TRANS_TYPE_10G_PCC;
				break;
			case 0x8:
				debug_sfp_mgmt("%s: 10G active copper inserted\n", __func__);
				cap_info->trans_type = SFP_TRANS_TYPE_10G_ACC;
				break;
			default:
				debug_sfp_mgmt("%s: unknown cable type\n", __func__);
				cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
				break;
			}
			break;
		}
		if (cap_info->trans_type != SFP_TRANS_TYPE_UNKNOWN) {
			debug_sfp_mgmt("%s: Connector type %d Rate %d\n", __func__,
				SFP_CONN_SFP, SFP_RATE_10G);
		}
	}
	if (cap_info->trans_type == SFP_TRANS_TYPE_NONE) {
		/* if transceiver type is not identified, throw error */
		ERROR("%s : PORTM%d unknown cable type\n", __func__, portm_idx);
		return;
	}
	/* FIXME : Log the other vendor details if required */
	debug_sfp_mgmt("%s: Vendor name: %s Vendor OUI: %x:%x:%x\t",
			__func__, mod_info->vendor_name, mod_info->vendor_oui[0],
			mod_info->vendor_oui[1], mod_info->vendor_oui[2]);
	debug_sfp_mgmt("Vendor Part num: %s Revision %s\n",
			mod_info->vendor_pn, mod_info->vendor_rev);
}

static void qsfp_get_info(int portm_idx)
{
	int far_end = 0x0;
	qsfp_mod_info_t *mod_info;
	sfp_cap_info_t *cap_info;
	sfp_shared_data_t *sh_data;

	sh_data = sfp_get_sh_mem_ptr(portm_idx);
	cap_info = &sfp_cap_info[portm_idx];

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return;
	}

	/* QFSP module info from upper page */
	mod_info = (qsfp_mod_info_t *)&sh_data->buf[128]; /* upper 128 bytes */

	switch (mod_info->compliance_code[0]) {
	case 0x0:
		/* non-compliance cable : FIXME */
		debug_sfp_mgmt("%s: Non-compliance cable detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_NON_COMP;
		break;
	case 0x1:
		debug_sfp_mgmt("%s: 40G ACTIVE XLPPI detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_XLPPI;
		break;
	case 0x2:
		debug_sfp_mgmt("%s: 40G LR-4 detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_40G_LR4;
		break;
	case 0x4:
		debug_sfp_mgmt("%s: 40G SR-4 detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_40G_SR4;
		break;
	case 0x8:
		debug_sfp_mgmt("%s: 40G CR-4 detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_40G_CR4;
		break;
	case 0x10:
		debug_sfp_mgmt("%s: 10G SR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_SR;
		break;
	case 0x14:
		/* FIXME - multi-rate cases */
		debug_sfp_mgmt("%s: Multi-rate 10G/40G SR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_MULTI_RATE_10G_40G_SR;
		break;
	case 0x20:
		debug_sfp_mgmt("%s: 10G LR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_LR;
		break;
	case 0x40:
		debug_sfp_mgmt("%s: 10G LRM detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_10G_LRM;
		break;
	case 0x88:
		/* FIXME - multi-rate cases */
		debug_sfp_mgmt("%s: Multi-rate 40G/100G CR detected\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_MULTI_RATE_40G_100G_CR;
		break;
	case 0x80:
		/* Extended bit is set: Read byte 192 to identify the interface and the
		 * table is maintained in SFF 8024 extended specification
		 * compliance codes : table 4 - 4
		 */
		debug_sfp_mgmt("%s: Use extended technology field mod_info->ext_compliance 0x%x\n", __func__,
				mod_info->ext_compliance);
		switch (mod_info->ext_compliance) {
		case 0x0:
			debug_sfp_mgmt("%s: unspecified transceiver type detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
			break;
		case 0x1:
			/* FIXME: need to turn on CDR for optics */
			debug_sfp_mgmt("%s: 100G active optical cable detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_AOC;
			break;
		case 0x2:
			/* FIXME: need to turn on CDR for optics */
			debug_sfp_mgmt("%s: 100G SR-4 detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_SR4;
			break;
		case 0x3:
			/* FIXME: need to turn on CDR for optics */
			debug_sfp_mgmt("%s: 100G LR-4 detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_LR4;
			break;
		case 0x4:
			/* FIXME: need to turn on CDR for optics */
			debug_sfp_mgmt("%s: 100G ER-4 detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_ER4;
			break;
		case 0x8:
			debug_sfp_mgmt("%s: 100G active copper cable detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_ACC;
			break;
		case 0xb:
			debug_sfp_mgmt("%s: 100G CR-4 detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_CR4;
			break;
		case 0xc:
			debug_sfp_mgmt("%s: 25G CR CA-S detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_S;
			break;
		case 0xd:
			debug_sfp_mgmt("%s: 100G CA-N detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_25G_CA_N;
			break;
		case 0x10:
			/* FIXME */
			debug_sfp_mgmt("%s: 40G ER-4 detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
			break;
		case 0x11:
			debug_sfp_mgmt("%s: 4X10G SR detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_4x10G_SR;
			break;
		case 0x18:
			debug_sfp_mgmt("%s: 100G active optical cable detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_AOC;
			break;
		case 0x19:
			debug_sfp_mgmt("%s: 100G active copper cable detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_ACC;
			break;
		case 0x21:
			debug_sfp_mgmt("%s: 100G PAM4 detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_100G_AOC;
			break;
		case 0x30:
		case 0x32:
			debug_sfp_mgmt("%s:  200GBASE-4 AOC detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_200G_AOC;
			break;
		case 0x31:
		case 0x33:
			debug_sfp_mgmt("%s:  200GBASE-4 ACC detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_200G_ACC;
			break;
		case 0x40:
			debug_sfp_mgmt("%s:  200GBASE-CR4 detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_200G_CR4;
			break;
		case 0x41:
			debug_sfp_mgmt("%s:  200GBASE-SR4 detected\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_200G_SR4;
			break;
		default:
			debug_sfp_mgmt("%s: Unknown medium\n", __func__);
			cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
			break;
		}
	break;
	default:
		debug_sfp_mgmt("%s: Unknown medium\n", __func__);
		cap_info->trans_type = SFP_TRANS_TYPE_UNKNOWN;
		break;
	}
	/* FIXME: If the above couldn't detect the cable type, try
	 * checking the bit rate (byte 140) and using the device type
	 */

	/* Check cable for breakout - byte 113 */
	far_end = sh_data->buf[113] & 0x70; /* generate bit mask with bits 4-6 set */
	switch (far_end) {
	case 0x0:
		debug_sfp_mgmt("%s: FAR END unspecified\n", __func__);
		break;
	case 0x20:
	case 0x50:
		debug_sfp_mgmt("%s: Two FAR END specified\n", __func__);
		break;
	case 0x30:
		debug_sfp_mgmt("%s: 1 FAR END specified\n", __func__);
		break;
	case 0x40:
		debug_sfp_mgmt("%s: 4X1 breakout\n", __func__);
		break;
	case 0x60:
		debug_sfp_mgmt("%s: 2X1 breakout\n", __func__);
		break;
	case 0x10:
	default:
		debug_sfp_mgmt("%s: Single FAR END specified\n", __func__);
		break;
	}

	if (cap_info->trans_type == SFP_TRANS_TYPE_NONE) {
		/* if transceiver type is not identified, throw error */
		debug_sfp_mgmt("%s : PORTM%d unknown cable type\n",
					__func__, portm_idx);
		return;
	}

	/* FIXME : Log the other vendor details if required */
	debug_sfp_mgmt("%s: Vendor name: %s Vendor OUI: %x:%x:%x\t",
			__func__, mod_info->vendor_name, mod_info->vendor_oui[0],
			mod_info->vendor_oui[1], mod_info->vendor_oui[2]);
	debug_sfp_mgmt("Vendor Part num: %s Revision %s\n",
			mod_info->vendor_pn, mod_info->vendor_rev);
}

/* AN capabilities are determined based on the module
 * connected as specified by IEEE 802.3 SPEC
 */
int sfp_get_an_capability(int portm_idx)
{
	int an = 0;
	sfp_cap_info_t *cap_info = &sfp_cap_info[portm_idx];

	debug_sfp_mgmt("%s: PORTM%d trans_type %d\n", __func__, portm_idx,
			cap_info->trans_type);

	switch (cap_info->trans_type) {
	case SFP_TRANS_TYPE_25G_CA_N:
	case SFP_TRANS_TYPE_25G_CA_S:
	case SFP_TRANS_TYPE_25G_CA_L:
	case SFP_TRANS_TYPE_40G_CR4:
	case SFP_TRANS_TYPE_100G_CR4:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_CR:
	case SFP_TRANS_TYPE_200G_CR4:
	case SFP_TRANS_TYPE_50G_CR:
		an = 1;	/* AN supported */
		break;
	default:
		an = 0;	/* AN not supported */
		break;
	}
	cap_info->an_enable = an;

	debug_sfp_mgmt("%s: PORTM%d an %d\n", __func__, portm_idx, an);

	return an;
}

/* FEC capabilities are determined based on the module
 * connected as specified by IEEE 802.3 SPEC
 * 10G/40G - FIRECODE FEC
 * 25G/50G - RS/FIRECODE FEC
 * 100G	   - RS FEC
 */
int sfp_get_fec_capability(int portm_idx)
{
	int fec = 0;
	sfp_cap_info_t *cap_info = &sfp_cap_info[portm_idx];

	debug_sfp_mgmt("%s: PORTM%d trans_type %d\n", __func__, portm_idx,
			cap_info->trans_type);
	switch (cap_info->trans_type) {
	case SFP_TRANS_TYPE_10G_SR:
	case SFP_TRANS_TYPE_10G_LR:
	case SFP_TRANS_TYPE_10G_LRM:
	case SFP_TRANS_TYPE_10G_ER:
	case SFP_TRANS_TYPE_10G_PCC:
	case SFP_TRANS_TYPE_10G_ACC:
	case SFP_TRANS_TYPE_4x10G_SR:
	case SFP_TRANS_TYPE_40G_CR4:
	case SFP_TRANS_TYPE_40G_LR4:
	case SFP_TRANS_TYPE_40G_SR4:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_CR:
		fec = SFP_FEC_MODE_FIRECODE;
		break;
	case SFP_TRANS_TYPE_25G_SR:
	case SFP_TRANS_TYPE_25G_LR:
	case SFP_TRANS_TYPE_25G_CA_N:
	case SFP_TRANS_TYPE_25G_CA_L:
	case SFP_TRANS_TYPE_25G_CA_S:
	case SFP_TRANS_TYPE_25G_ACC_S:
	case SFP_TRANS_TYPE_25G_ACC_L:
	case SFP_TRANS_TYPE_25G_AOC:
	case SFP_TRANS_TYPE_4x25G_CR:
	/* FIXME for multi-rate */
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_CR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_AOC:
		fec = SFP_FEC_MODE_RS_FIRECODE;
		break;
	case SFP_TRANS_TYPE_100G_AOC:
	case SFP_TRANS_TYPE_100G_SR4:
	case SFP_TRANS_TYPE_100G_LR4:
	case SFP_TRANS_TYPE_100G_ER4:
	case SFP_TRANS_TYPE_100G_ACC:
	case SFP_TRANS_TYPE_100G_CR4:
		fec = SFP_FEC_MODE_RS_FIRECODE;
		break;
	case SFP_TRANS_TYPE_200G_AOC:
	case SFP_TRANS_TYPE_200G_SR4:
	case SFP_TRANS_TYPE_200G_CR4:
	case SFP_TRANS_TYPE_200G_ACC:
	case SFP_TRANS_TYPE_50G_AOC:
	case SFP_TRANS_TYPE_50G_ACC:
	case SFP_TRANS_TYPE_50G_SR:
	case SFP_TRANS_TYPE_50G_CR:
	case SFP_TRANS_TYPE_50G_ER:
	case SFP_TRANS_TYPE_50G_FR:
		fec = SFP_FEC_MODE_RS;
		break;
	default:
		fec = SFP_FEC_MODE_NONE;
		break;
	}
	cap_info->fec_type = fec;
	debug_sfp_mgmt("%s: PORTM%d fec %d\n", __func__, portm_idx, fec);

	return fec;
}

/* Get Speed capabilities */
int sfp_get_speed_capability(int portm_idx)
{
	int max_speed = 0;
	sfp_cap_info_t *cap_info = &sfp_cap_info[portm_idx];

	debug_sfp_mgmt("%s: PORTM%d trans_type %d\n", __func__, portm_idx,
			cap_info->trans_type);
	switch (cap_info->trans_type) {
	case SFP_TRANS_TYPE_1G_PCC:
	case SFP_TRANS_TYPE_1G_ACC:
	case SFP_TRANS_TYPE_1G_LX:
	case SFP_TRANS_TYPE_1G_SX:
	case SFP_TRANS_TYPE_1000_BASET:
		max_speed = 1000;
		break;
	case SFP_TRANS_TYPE_10G_SR:
	case SFP_TRANS_TYPE_10G_LR:
	case SFP_TRANS_TYPE_10G_LRM:
	case SFP_TRANS_TYPE_10G_ER:
	case SFP_TRANS_TYPE_10G_PCC:
	case SFP_TRANS_TYPE_10G_ACC:
	case SFP_TRANS_TYPE_10G_BASET:
	case SFP_TRANS_TYPE_4x10G:
		max_speed = 10000;
		break;
	case SFP_TRANS_TYPE_25G_SR:
	case SFP_TRANS_TYPE_25G_LR:
	case SFP_TRANS_TYPE_25G_CA_N:
	case SFP_TRANS_TYPE_25G_CA_L:
	case SFP_TRANS_TYPE_25G_CA_S:
	case SFP_TRANS_TYPE_25G_ACC_S:
	case SFP_TRANS_TYPE_25G_ACC_L:
	case SFP_TRANS_TYPE_25G_AOC:
	case SFP_TRANS_TYPE_4x25G_CR:
	case SFP_TRANS_TYPE_50G_AOC:
	case SFP_TRANS_TYPE_50G_ACC:
	case SFP_TRANS_TYPE_50G_SR:
	case SFP_TRANS_TYPE_50G_CR:
	case SFP_TRANS_TYPE_50G_FR:
	case SFP_TRANS_TYPE_50G_ER:
		max_speed = 50000;
		break;
	case SFP_TRANS_TYPE_40G_LR4:
	case SFP_TRANS_TYPE_40G_SR4:
	case SFP_TRANS_TYPE_40G_CR4:
	case SFP_TRANS_TYPE_XLPPI:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_CR:
		max_speed = 40000;
		break;
	case SFP_TRANS_TYPE_100G_AOC:
	case SFP_TRANS_TYPE_100G_SR4:
	case SFP_TRANS_TYPE_100G_LR4:
	case SFP_TRANS_TYPE_100G_ER4:
	case SFP_TRANS_TYPE_100G_ACC:
	case SFP_TRANS_TYPE_100G_CR4:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_CR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_AOC:
		max_speed = 100000;
		break;
	case SFP_TRANS_TYPE_200G_AOC:
	case SFP_TRANS_TYPE_200G_SR4:
	case SFP_TRANS_TYPE_200G_CR4:
	case SFP_TRANS_TYPE_200G_ACC:
		max_speed = 200000;
		break;
	/* FIXME for Multirate */
	default:
		max_speed = 0;
		break;
	}
	cap_info->speed_limit = max_speed;
	return max_speed;
}

int sfp_is_transceiver_optical(int portm_idx)
{
	int optical = 0;
	sfp_cap_info_t *cap_info = &sfp_cap_info[portm_idx];

	debug_sfp_mgmt("%s: PORTM%d\n", __func__, portm_idx);

	switch (cap_info->trans_type) {
	case SFP_TRANS_TYPE_1G_LX:
	case SFP_TRANS_TYPE_1G_SX:
	case SFP_TRANS_TYPE_10G_SR:
	case SFP_TRANS_TYPE_10G_LR:
	case SFP_TRANS_TYPE_10G_LRM:
	case SFP_TRANS_TYPE_10G_ER:
	case SFP_TRANS_TYPE_40G_LR4:
	case SFP_TRANS_TYPE_40G_SR4:
	case SFP_TRANS_TYPE_100G_AOC:
	case SFP_TRANS_TYPE_100G_SR4:
	case SFP_TRANS_TYPE_100G_LR4:
	case SFP_TRANS_TYPE_100G_ER4:
	case SFP_TRANS_TYPE_4x10G_SR:
	case SFP_TRANS_TYPE_25G_SR:
	case SFP_TRANS_TYPE_25G_LR:
	case SFP_TRANS_TYPE_25G_AOC:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_AOC:
	case SFP_TRANS_TYPE_200G_AOC:
	case SFP_TRANS_TYPE_200G_SR4:
	case SFP_TRANS_TYPE_50G_AOC:
	case SFP_TRANS_TYPE_50G_SR:
		optical = 1;
		break;
	default:
		optical = 0;
		break;
	}

	cap_info->optical = optical;

	return optical;
}

int sfp_is_transceiver_active(int portm_idx)
{
	int active = 0;
	sfp_cap_info_t *cap_info = &sfp_cap_info[portm_idx];

	debug_sfp_mgmt("%s: PORTM%d\n", __func__, portm_idx);

	switch (cap_info->trans_type) {
	case SFP_TRANS_TYPE_1G_ACC:
	case SFP_TRANS_TYPE_1G_LX:
	case SFP_TRANS_TYPE_1G_SX:
	case SFP_TRANS_TYPE_1000_BASET:
	case SFP_TRANS_TYPE_10G_BASET:
	case SFP_TRANS_TYPE_10G_SR:
	case SFP_TRANS_TYPE_10G_LR:
	case SFP_TRANS_TYPE_10G_LRM:
	case SFP_TRANS_TYPE_10G_ER:
	case SFP_TRANS_TYPE_10G_ACC:
	case SFP_TRANS_TYPE_40G_LR4:
	case SFP_TRANS_TYPE_40G_SR4:
	case SFP_TRANS_TYPE_100G_AOC:
	case SFP_TRANS_TYPE_100G_SR4:
	case SFP_TRANS_TYPE_100G_LR4:
	case SFP_TRANS_TYPE_100G_ER4:
	case SFP_TRANS_TYPE_100G_ACC:
	case SFP_TRANS_TYPE_4x10G_SR:
	case SFP_TRANS_TYPE_25G_ACC_S:
	case SFP_TRANS_TYPE_25G_ACC_M:
	case SFP_TRANS_TYPE_25G_ACC_L:
	case SFP_TRANS_TYPE_25G_SR:
	case SFP_TRANS_TYPE_25G_LR:
	case SFP_TRANS_TYPE_25G_AOC:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_10G_40G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_SR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_LR:
	case SFP_TRANS_TYPE_MULTI_RATE_40G_100G_AOC:
	case SFP_TRANS_TYPE_50G_AOC:
	case SFP_TRANS_TYPE_50G_ACC:
		active = 1;
		break;
	default:
		active = 0;
		break;
	}
	cap_info->active = active;

	return active;
}

int sfp_parse_eeprom_data(int portm_idx)
{
	int flag = 0, ret = 0, retry_count = 0;
	int retry_lock = 0;
	uint16_t sff_id = 0;
	sfp_context_t *ctx;
	sfp_mod_info_t *mod_info;
	sfp_cap_info_t *cap_info;
	sfp_shared_data_t *sh_data;
	portm_config_t *portm;
	int lmac_enabled = 0;

	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

	if (portm->mac_type == PORTM_ETH) {
		int eth_id, lmac_id;
		rpm_lmac_config_t *lmac;

		eth_id = portm->mac_num;
		lmac_id = portm->mac_lane;
		lmac = &plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id];
		lmac_enabled = lmac->lmac_enable;
	}

	sh_data = sfp_get_sh_mem_ptr(portm_idx);
	cap_info = &sfp_cap_info[portm_idx];

	debug_sfp_mgmt("%s: PORTM%d\n", __func__, portm_idx);

	if (sh_data == NULL) {
		ERROR("%s: SM pointer is NULL\n", __func__);
		return SFP_TRANS_TYPE_NONE;
	}
	ctx = &sh_data->sfp_ctx;
	mod_info = (sfp_mod_info_t *)sh_data->buf;

	/* Check if lock is free and if available, check the current state
	 * to parse the buffer
	 */
retry_acquire_lock:
	if (ctx->lock == SFP_OWN_NONE) {
		ctx->lock = SFP_OWN_AP;
retry_read_eeprom:
		if (ctx->data_status == SFP_DATA_STATE_EEPROM_VALID) {
			/* Read BYTE 0 for the identifier val
			 * SFF 8024 : TABLE 4-1 IDENTIFIER VALUES
			 */
			switch (mod_info->id) {
			case 0x3:
				debug_sfp_mgmt("%s: SFP/SFP+/SFP28 inserted\n", __func__);
				sfp_get_info(portm_idx);
				ret = cap_info->trans_type;
				sff_id = ETH_MODULE_SFF_8472;
				break;
			case 0xc:
				debug_sfp_mgmt("%s: QSFP inserted\n", __func__);
				qsfp_get_info(portm_idx);
				ret = cap_info->trans_type;
				sff_id = ETH_MODULE_SFF_8436;
				flag = 1; /* fall through */
			case 0xd:
				if (flag == 0) {
					debug_sfp_mgmt("%s: QSFP+ detected\n", __func__);
					sff_id = ETH_MODULE_SFF_8436;
					flag = 1; /* fall through */
				}
			case 0x11:
				if (flag == 0) {
					debug_sfp_mgmt("%s: QSFP-28 detected\n", __func__);
					sff_id = ETH_MODULE_SFF_8636;
					flag = 1;
				}
				/* INF-8438 Table 18 - Status Indicators
				 * read BYTE 2 (lower page 00) to check if transceiver
				 * is ready :
				 * Bit remains high until data is ready to be read at which time
				 * the device sets the bit low.
				 */
				if ((sh_data->buf[2] & 1) == 0) {
					debug_sfp_mgmt("%s: QSFP detected and transceiver ready\n",
								__func__);
					qsfp_get_info(portm_idx);
					ret = cap_info->trans_type;
				} else
					debug_sfp_mgmt("%s: QSFP detected and transceiver not ready\n",
								__func__);
				break;
			case 0x12:
				debug_sfp_mgmt("%s: CXP-28 inserted\n", __func__);
				break;
			case 0x18:
				debug_sfp_mgmt("%s: QSFP-DD inserted\n", __func__);
				qsfp_get_info(portm_idx);
				sff_id = ETH_MODULE_SFF_8024;
				ret = cap_info->trans_type;
				break;
			default:
				if (lmac_enabled)
					ERROR("%s: PORTM%d unknown transceiver type inserted\n", __func__,
									portm_idx);
				ret = SFP_TRANS_TYPE_UNKNOWN;
			}
		} else	{
			if (retry_count++ < 5) {
				mdelay(1);
				goto retry_read_eeprom;
			}

			debug_sfp_mgmt("%s PORTM%d EEPROM not valid state %d\n",
					 __func__, portm_idx,
					ctx->data_status);
			ret = SFP_TRANS_TYPE_NONE;
		}
	} else {
		if (retry_lock++ < 5) {
			mdelay(1);
			goto retry_acquire_lock;
		}
		debug_sfp_mgmt("%s PORTM%d lock %d not available for AP\n",
					 __func__,
					portm_idx, ctx->lock);
		ret = SFP_TRANS_TYPE_NONE;
	}

	/* Copy the data to SH FW data
	 * whenever valid EEPROM data is
	 * obtained. Since the lock is owned
	 * by AP, MCP is not updating the
	 * buffer now.
	 */
	if (ret != SFP_TRANS_TYPE_NONE)
		sh_fwdata_update_eeprom_data(portm_idx, sff_id);

	/* set the lock to free */
	ctx->lock = SFP_OWN_NONE;

	return ret;
}

int sfp_validate_user_options(int portm_idx)
{
	int speed_conf = 0;
	int an_enabled = 0, fec_type = 0;
	int eth_id, lmac_id;
	rpm_lmac_config_t *lmac_cfg;
	phy_config_t *phy;
	portm_config_t *portm;
	sfp_cap_info_t *cap_info;
	char *fec_str[5] = {"none", "baser", "rs", "rs",/* RS 528 */ "rs"/* RS 544 */};

	debug_sfp_mgmt("%s: PORTM%d\n", __func__, portm_idx);
	portm = &(plat_octeontx_bcfg->portm_cfg[portm_idx]);

	if (portm->mac_type != PORTM_ETH) {
		WARN("%s: PORTM%d is not ethernet\n",
			__func__, portm_idx);
		return 0;
	}

	eth_id = cn10k_portm_get_rpm_num(portm_idx);
	lmac_id = cn10k_portm_get_rpm_lmac_num(portm_idx);

	lmac_cfg = &(plat_octeontx_bcfg->rpm_cfg[eth_id].lmac_cfg[lmac_id]);
	cap_info = &sfp_cap_info[portm_idx];
	phy = lmac_cfg->phy_config;

	/* Obtain the module capabilities based on transceiver
	 * type retrieved from EEPROM
	 */
	sfp_get_an_capability(portm_idx);
	sfp_get_fec_capability(portm_idx);
	sfp_get_speed_capability(portm_idx);
	sfp_is_transceiver_active(portm_idx);
	sfp_is_transceiver_optical(portm_idx);

	debug_sfp_mgmt("%s: PORTM%d AN %d FEC %d speed %d active %d optical %d\n",
			__func__, portm_idx,
			cap_info->an_enable,
			cap_info->fec_type,
			cap_info->speed_limit,
			cap_info->active,
			cap_info->optical);

	/* FIXME: If transceiver detected is not SFF compliant
	 * or unknown type from the supported list, don't validate
	 * the user options against capabilities
	 */
	if ((cap_info->trans_type == SFP_TRANS_TYPE_UNKNOWN) ||
		(cap_info->trans_type == SFP_TRANS_TYPE_NON_COMP))
		return 1;

	/* FIXME - For now, use this API, but this API doesn't support lower speed modes
	 * like SGMII/QSGMII
	 */
	an_enabled = cn10k_portm_get_mode_desc_ap_sup(portm->portm_mode);
	if (!an_enabled) {
		fec_type = portm->fec;
		if ((portm->fec == PORTM_FEC_RS_528_ONLY) || (portm->fec == PORTM_FEC_RS_544_ONLY))
			fec_type = PORTM_FEC_RS;

		/* Validate user options against QSFP/SFP module capabilities
		 * in case of FIXED modes to check if it matches. If it doesn't
		 * match, throw error to the user
		 */
		if ((fec_type != -1) && (fec_type != 0)) {
			/* In this case, user has configured FEC and it needs
			 * to be validated against CAP. If user has not
			 * configured FEC or FEC is disabled, no need to
			 * validate it
			 */
			if ((cap_info->fec_type & fec_type) == 0) {
				ERROR("%s: PORTM%d User has configured\t"
				"FEC to be %s,\t"
				"but module's FEC cap is %s\n", __func__,
					portm_idx, fec_str[fec_type],
					fec_str[cap_info->fec_type]);
				return 0;
			}
		}

		speed_conf = cn10k_portm_get_mode_desc_speed_mhz(portm->portm_mode);
		debug_sfp_mgmt("%s: Speed configured %d\n", __func__,
							speed_conf);

		if (speed_conf > cap_info->speed_limit) {
			ERROR("%s: PORTM%d User has configured speed to be %d,\t"
					"but module's speed limit is %d\n",
					__func__, portm_idx, speed_conf,
					cap_info->speed_limit);
			return 0;
		}
	} else {
		if (cap_info->an_enable != an_enabled) {
			ERROR("%s: PORTM%d User has configured AN to be %d,\t"
					"but module's AN cap is %d\n",
					__func__, portm_idx,
					an_enabled,
					cap_info->an_enable);
			return 0;
		}
	}

	if (phy && lmac_cfg->phy_present && phy->init && phy->valid &&
	    phy->mod_type == PHY_MOD_TYPE_PAM4 &&
	    !(cap_info->fec_type & SFP_FEC_MODE_RS))
		WARN("%s: PORTM%d PAM4 requires RS-FEC, but transceiver is not RS-FEC capable.\n",
		     __func__, portm_idx);

	return 1;
}
