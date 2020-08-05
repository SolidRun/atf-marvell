/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __RPM_H__
#define __RPM_H__

#include <platform_dt.h>
#include "cavm-csrs-rpm.h"

#define clock_get_count(...)	read_cntpct_el0()
#define clock_get_rate(...)	100000000ull

/* ERROR MASK based on cgx_err_type */
#define RPM_ERR_MASK                    0x3FF           /* 10 bits */

/* Recommended back pressure buffer depth to be 1/4th of FIFO size */
#define RPM_BP_ON_MARK_SIZE_DIV		4

/* Packet data depth is 128-bit and mark to be configured in
 * multiple of 16 bytes
 */
#define RPM_BP_PACKET_DATA_DEPTH	16

#define MAX_MTI_PCS_REG	 50

typedef enum mti_pcsconfig_reg {
	MTI_PCS100_VL0_0 = 0x21200,
	MTI_PCS100_VL0_1 = 0x21208,
	MTI_PCS100_VL1_0 = 0x21210,
	MTI_PCS100_VL1_1 = 0x21218,
	MTI_PCS100_VL2_0 = 0x21220,
	MTI_PCS100_VL2_1 = 0x21228,
	MTI_PCS100_VL3_0 = 0x21230,
	MTI_PCS100_VL3_1 = 0x21238,
	MTI_PCS100_VL4_0 = 0x21240,
	MTI_PCS100_VL4_1 = 0x21248,
	MTI_PCS100_VL5_0 = 0x21250,
	MTI_PCS100_VL5_1 = 0x21258,
	MTI_PCS100_VL6_0 = 0x21260,
	MTI_PCS100_VL6_1 = 0x21268,
	MTI_PCS100_VL7_0 = 0x21270,
	MTI_PCS100_VL7_1 = 0x21278,
	MTI_PCS100_VL8_0 = 0x21280,
	MTI_PCS100_VL8_1 = 0x21288,
	MTI_PCS100_VL9_0 = 0x21290,
	MTI_PCS100_VL9_1 = 0x21298,
	MTI_PCS100_VL10_0 = 0x212A0,
	MTI_PCS100_VL10_1 = 0x212A8,
	MTI_PCS100_VL11_0 = 0x212B0,
	MTI_PCS100_VL11_1 = 0x212B8,
	MTI_PCS100_VL12_0 = 0x212C0,
	MTI_PCS100_VL12_1 = 0x212C8,
	MTI_PCS100_VL13_0 = 0x212D0,
	MTI_PCS100_VL13_1 = 0x212D8,
	MTI_PCS100_VL14_0 = 0x212E0,
	MTI_PCS100_VL14_1 = 0x212E8,
	MTI_PCS100_VL15_0 = 0x212F0,
	MTI_PCS100_VL15_1 = 0x212F8,
	MTI_PCS100_VL16_0 = 0x21300,
	MTI_PCS100_VL16_1 = 0x21308,
	MTI_PCS100_VL17_0 = 0x21310,
	MTI_PCS100_VL17_1 = 0x21318,
	MTI_PCS100_VL18_0 = 0x21320,
	MTI_PCS100_VL18_1 = 0x21328,
	MTI_PCS100_VL19_0 = 0x21328,
	MTI_PCS100_VL19_1 = 0x21338,

	MTI_PCS100_VENDOR_PCS_MODE = 0x21080,
	MTI_PCS100_VENDOR_VL_INTVL = 0x21010,

} mti_pcsconfig_reg_t;

typedef struct rpm_lmac_pcs_config {
	uint64_t offset;
	uint64_t val;
} rpm_lmac_pcs_config_t;

/* Read-Modify-Write APIs for RPM CSRs */
#define CAVM_MODIFY_RPM_CSR(type, csr, field, val)        \
	do {                                                    \
		type c;                                         \
		c.u = CSR_READ(csr);			\
		c.s.field = val;				\
		CSR_WRITE(csr, c.u);			\
	} while (0)

/* enum declaration for FEC */
typedef enum rpm_fec_type {
	RPM_FEC_NONE,
	RPM_FEC_BASE_R,
	RPM_FEC_RS
} fec_type_t;

/* structure declarations */
typedef union rpm_link_status {
	uint64_t u64;
	struct rpm_link_status_s {
		uint64_t link_up:1;
		uint64_t full_duplex:1;
		uint64_t speed:4;		/* rpm_link_speed enum */
		uint64_t reserved:58;
	} s;
} rpm_link_state_t;

/* This structure will be used to maintain the current
 * link status and also lock mechanism to prevent simultaneous
 * access of CSRs by timer #1 and timer #2 CBs. as, SCRATCHX CSRs
 * have been modified to be opaque, it is not reliable to save
 * the current link status
 */
typedef union rpm_lmac_context {
	uint64_t u64;
	struct rpm_lmac_context_s {
		/* Timer #1 and Timer #2 CB should set lock = 1 (if lock == 0)
		 * before writing to SCRATCHX CSRs and free it after writing
		 * In addition to this lock, ownership status of SCRATCHX(1)
		 * should be checked to make sure kernel is not writing to it
		 */
		uint64_t lock:1;
		/* this variable will be used by timer #2 to poll for the
		 * link periodically as long as this variable is set. updated
		 * by timer #1 callback when there is a LINK UP/DOWN request
		 */
		uint64_t link_enable:1;
		/* internal loopback enable/disable */
		uint64_t lbk1_enable:1;
		/* link status */
		uint64_t link_up:1;
		uint64_t full_duplex:1;
		/* rpm_link_speed */
		uint64_t speed:4;
		/* rpm_error_type */
		uint64_t error_type:10;
		/* init link state */
		uint64_t init_link:1;
		uint64_t reserved:44;
	} s;
} rpm_lmac_context_t;

/* RPM driver APIs */
void rpm_set_error_type(int rpm_id, int lmac_id, uint64_t type);

/* RPM FW interface APIs */
void rpm_fw_intf_init(void);
void rpm_fw_intf_shutdown(void);

/* plat APIs specific to Octeon TX2 family */
int plat_get_rpm_idx(int qlm);
void rpm_init(int rpm_id);
int rpm_lmac_port_get_status(int rpm_id, int lmac_id, rpm_link_state_t *link_sts);
void rpm_lmac_port_packet_config(int rpm_id, int lmac_id, int enable);
int rpm_lmac_port_enable(int rpm_id, int lmac_id);
int rpm_lmac_port_disable(int rpm_id, int lmac_id);

#endif
