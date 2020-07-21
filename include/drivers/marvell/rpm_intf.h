/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __RPM_INTF_H__
#define __RPM_INTF_H__

#include <rpm.h>

#define RPM_FIRMWARE_MAJOR_VER		1
#define RPM_FIRMWARE_MINOR_VER		0

/* RPM error types. set for cmd response status as RPM_STAT_FAIL */
enum rpm_error_type {
	RPM_ERR_NONE = 0,
	RPM_ERR_LMAC_NOT_ENABLED,
	RPM_ERR_LMAC_MODE_INVALID,
	RPM_ERR_REQUEST_ID_INVALID,
	RPM_ERR_PREV_ACK_NOT_CLEAR,
	/* FIXME : add more error types */
};

/* LINK speed types */
enum rpm_link_speed {
	RPM_LINK_NONE = 0,
	RPM_LINK_10G,
	RPM_LINK_25G,
	RPM_LINK_MAX,
};

/* REQUEST ID types. Input to firmware */
enum rpm_cmd_id {
	RPM_CMD_NONE = 0,
	RPM_CMD_GET_FW_VER,
	RPM_CMD_GET_MAC_ADDR,
	RPM_CMD_GET_LINK_STS,		/* optional to user */
	RPM_CMD_LINK_BRING_UP,
	RPM_CMD_LINK_BRING_DOWN,	/* = 5 */
	RPM_CMD_INTF_SHUTDOWN,
	RPM_CMD_GET_FWD_BASE,		/* get base address of shared FW data */
	RPM_CMD_GET_LINK_MODES,		/* Supported Link Modes */
	RPM_CMD_SET_LINK_MODE,
	RPM_CMD_SET_MAC_ADDR,		/* = 10 */
};

/* async event ids */
enum rpm_evt_id {
	RPM_EVT_NONE,
	RPM_EVT_LINK_CHANGE,
};

/* event types - cause of interrupt */
enum rpm_evt_type {
	RPM_EVT_ASYNC,
	RPM_EVT_CMD_RESP
};

enum rpm_stat {
	RPM_STAT_SUCCESS,
	RPM_STAT_FAIL
};

enum rpm_cmd_own {
	/* default ownership with kernel/uefi/u-boot */
	RPM_OWN_NON_SECURE_SW,
	/* set by kernel/uefi/u-boot after posting a new request to ATF */
	RPM_OWN_FIRMWARE,
};

#define RPM_ALL_SUPPORTED_MODES 0xFFFFFFFF

/* scratchx(0) CSR used for ATF->non-secure SW communication.
 * This acts as the status register
 * Provides details on command ack/status, link status, error details
 */

/* CAUTION : below structures are placed in order based on the bit positions
 * For any updates/new bitfields, corresponding structures needs to be updated
 */
struct rpm_evt_sts_s {			/* start from bit 0 */
	uint64_t ack:1;
	uint64_t evt_type:1;		/* rpm_evt_type */
	uint64_t stat:1;		/* rpm_stat */
	uint64_t id:6;			/* rpm_evt_id/rpm_cmd_id */
	uint64_t reserved:55;
};

/* all the below structures are in the same memory location of SCRATCHX(0)
 * value can be read/written based on command ID
 */

/* Resp to command IDs with command status as RPM_STAT_FAIL
 * Not applicable for commands :
 *	RPM_CMD_LINK_BRING_UP/DOWN/RPM_EVT_LINK_CHANGE
 *	check struct rpm_lnk_sts_s comments
 */
struct rpm_err_sts_s {			/* start from bit 9 */
	uint64_t reserved1:9;
	uint64_t type:10;		/* rpm_error_type */
	uint64_t reserved2:35;
};

/* Resp to cmd ID as RPM_CMD_GET_FW_VER with cmd status as RPM_STAT_SUCCESS */
struct rpm_ver_s {			/* start from bit 9 */
	uint64_t reserved1:9;
	uint64_t major_ver:4;
	uint64_t minor_ver:4;
	uint64_t reserved2:47;
};

/* Resp to cmd ID as RPM_CMD_GET_MAC_ADDR with cmd status as RPM_STAT_SUCCESS
 * Returns each byte of MAC address in a separate bit field
 */
struct rpm_mac_addr_s {			/* start from bit 9 */
	uint64_t reserved1:9;
	uint64_t addr_0:8;
	uint64_t addr_1:8;
	uint64_t addr_2:8;
	uint64_t addr_3:8;
	uint64_t addr_4:8;
	uint64_t addr_5:8;
	uint64_t reserved2:7;
};

/* Resp to cmd ID - RPM_CMD_LINK_BRING_UP/DOWN
 * status can be either RPM_STAT_FAIL or RPM_STAT_SUCCESS
 * In case of RPM_STAT_FAIL, it indicates RPM configuration failed when
 * processing link up/down/change command. Both err_type and current link status
 * will be updated
 * In case of RPM_STAT_SUCCESS, err_type will be RPM_ERR_NONE and current
 * link status will be updated
 */
struct rpm_lnk_sts_s {
	uint64_t reserved1:9;
	uint64_t link_up:1;
	uint64_t full_duplex:1;
	uint64_t speed:4;	/* rpm_link_speed */
	uint64_t err_type:10;
	uint64_t reserved2:39;
};

struct sh_fwd_base_s {
	uint64_t reserved1:9;
	uint64_t addr:55;
};

union rpm_rsp_sts {
	/* Fixed, applicable for all commands/events */
	struct rpm_evt_sts_s evt_sts;
	/* response to RPM_CMD_LINK_BRINGUP/DOWN/LINK_CHANGE */
	struct rpm_lnk_sts_s link_sts;
	/* response to RPM_CMD_GET_FW_VER */
	struct rpm_ver_s ver;
	/* response to RPM_CMD_GET_MAC_ADDR */
	struct rpm_mac_addr_s mac_s;
	/* response to RPM_CMD_GET_FWD_BASE */
	struct sh_fwd_base_s fwd_base_s;
	/* response if evt_status = CMD_FAIL */
	struct rpm_err_sts_s err;
};

union rpm_scratchx0 {
	uint64_t u;
	union rpm_rsp_sts s;
};

/* scratchx(1) CSR used for non-secure SW->ATF communication
 * This CSR acts as a command register
 */
struct rpm_cmd {			/* start from bit 2 */
	uint64_t reserved1:2;
	uint64_t id:6;			/* rpm_request_id */
	uint64_t reserved2:56;
};

/* all the below structures are in the same memory location of SCRATCHX(1)
 * corresponding arguments for command Id needs to be updated
 */

/* Any command using enable/disable as an argument need
 * to pass the option via this structure.
 * Ex: Loopback, HiGig...
 */
struct rpm_ctl_args {			/* start from bit 8 */
	uint64_t reserved1:8;
	uint64_t enable:1;
	uint64_t reserved2:55;
};

/* command argument to be passed for cmd ID - RPM_CMD_SET_MAC_ADDR */
struct rpm_mac_addr_args {
	uint64_t reserved1:8;
	uint64_t addr:48;
	uint64_t pf_id:8;
};

union rpm_cmd_s {
	uint64_t own_status:2;			/* rpm_cmd_own */
	struct rpm_cmd cmd;
	struct rpm_ctl_args cmd_args;
	struct rpm_mac_addr_args mac_args;
};

union rpm_scratchx1 {
	uint64_t u;
	union rpm_cmd_s s;
};

#endif
