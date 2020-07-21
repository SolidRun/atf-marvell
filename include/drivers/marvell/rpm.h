/*
 * Copyright (C) 2020 Marvell International Ltd.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __RPM_H__
#define __RPM_H__

#include <platform_dt.h>

/* ERROR MASK based on cgx_err_type */
#define RPM_ERR_MASK                    0x3FF           /* 10 bits */

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

#endif
