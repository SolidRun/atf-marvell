/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __PLAT_RAS_H__
#define __PLAT_RAS_H__

#include <lib/extensions/ras.h>
#include <plat_board_cfg.h>
#include <octeontx_ras.h>

/*
 * It is number of all RAS interrupts.
 */
#define NUMBER_OF_RAS_INTERRUPTS	(RAS_CORE_SPI_IRQS+ \
					MDC_SPI_IRQS + \
					TAD_SPI_IRQS + \
					DSS_SPI_IRQS)

/*
 * CN10K core RAS:
 * maximum core error records: 2
 * Starting error record num: 0
 */
#define ERR_RECORD_START_IDX		0
#define ERR_RECORD_NUM_IDX		2

#define ID_AA64PFR0_EL1_RAS_SHIFT	28
#define ID_AA64PFR0_EL1_RAS_MASK	0xF

/* ERX control register field description */

#define ERX_CTRL_CFI_SHIFT		8
#define ERX_CTRL_CFI_MASK		0x1

#define ERX_CTRL_FI_SHIFT		3
#define ERX_CTRL_FI_MASK		0x1

#define ERX_CTRL_UI_SHIFT		2
#define ERX_CTRL_UI_MASK		0x1

#define ERX_CTRL_ED_SHIFT		0
#define ERX_CTRL_ED_MASK		0x1

/* ERX Feature register field description */

#define ERX_FR_INJ_SHIFT		20
#define ERX_FR_INJ_MASK			0x3

#define ERX_FR_RP_SHIFT			15
#define ERX_FR_RP_MASK			0x1

#define ERX_FR_CEC_SHIFT		12
#define ERX_FR_CEC_MASK			0x7

#define ERX_FR_CFI_SHIFT		10
#define ERX_FR_CFI_MASK			0x3

#define ERX_FR_UE_SHIFT			8
#define ERX_FR_UE_MASK			0x3

#define ERX_FR_FI_SHIFT			6
#define ERX_FR_FI_MASK			0x3

#define ERX_FR_UI_SHIFT			4
#define ERX_FR_UI_MASK			0x3

#define ERX_FR_ED_SHIFT			0
#define ERX_FR_ED_MASK			0x3

/*
 * Index to each error source. Only core RAS supported
 * currently. So, RAS_HANDLERS is 1. Should be incremented
 * when a new error source is added.
 */
enum {
	RAS_CORE_HANDLER = 0,
	RAS_MDC_HANDLER = 1,
	RAS_TAD_HANDLER = 2,
	RAS_DSS_HANDLER = 3,
	RAS_HANDLERS,
};

#define NOT_SUPPORTED		0x0
#define ALWAYS_ON		0x1
#define CONTROLLABLE		0x2
#define RD_WR_CONTROLLABLE	0x3

#define ERX_FR_GET_FIELD(_cap, _field) \
	(((_cap) >> ERX_FR_##_field##_SHIFT) & ERX_FR_##_field##_MASK)

#define IS_ERXFR_CONTROLLABLE(_cap, _field) \
	(((ERX_FR_GET_FIELD(_cap, _field)) == CONTROLLABLE))

#define ERX_CTLR_CLR_FIELD(_ctlr, _field) \
	(_ctlr) &= ~(ERR_CTLR_ ##_field ##_MASK << ERR_CTLR_ ##_field ##_SHIFT)

#define ERX_CTLR_SET_FIELD(_ctlr, _field, _value) \
	(_ctlr) |= (((_value) & ERR_CTLR_ ##_field ##_MASK) << ERR_CTLR_ ##_field ##_SHIFT)

#define ERX_CTLR_ENABLE_FIELD(_ctlr, _field) \
	ERX_CTLR_SET_FIELD(_ctlr, _field, ERR_CTLR_ ##_field ##_MASK)

#define ERX_CTLR_DISABLE_FIELD(_ctlr, _field) \
	ERX_CTLR_CLR_FIELD(_ctlr, _field)

#define ERX_MISC0_CECO_MASK		0x7F
#define ERX_MISC0_CECO_SHIFT		40
#define ERX_MISC0_CECR_MASK		0x7F
#define ERX_MISC0_CECR_SHIFT		32
#define ERX_MISC0_WAY_MASK		0xF
#define ERX_MISC0_WAY_SHIFT		28
#define ERX_MISC0_SUBBANK_MASK		0x1
#define ERX_MISC0_SUBBANK_SHIFT		25
#define ERX_MISC0_BANK_MASK		0x3
#define ERX_MISC0_BANK_SHIFT		23
#define ERX_MISC0_SUBARRAY_MASK		0xF
#define ERX_MISC0_SUBARRAY_SHIFT	19
#define ERX_MISC0_INDEX_MASK		0X1FFF
#define ERX_MISC0_INDEX_SHIFT		6
#define ERX_MISC0_ARRAY_MASK		0x3
#define ERX_MISC0_ARRAY_SHIFT		4
#define ERX_MISC0_UNIT_MASK		0xF
#define ERX_MISC0_UNIT_SHIFT		0
/*
 * CN10K RAS commands using SMC calls
 * x0 SMC function id
 * x1(RAS command)
 */

#define CN10K_EDAC_VERSION		1	/* report version */

#ifndef noprintf
/* tell GCC to check code sanity, even when emitting no debug code */
__attribute__ ((format (printf, 1, 2)))
static inline int noprintf(const char *fmt, ...)
{
	return 0;
}
#define noprintf noprintf
#endif

#undef debug_ras

#if DEBUG_RAS >= 2
# define debug2ras(...) printf(__VA_ARGS__)
#else
# define debug2ras(...) noprintf(__VA_ARGS__)
#endif

#if DEBUG_RAS >= 3
# define debug3ras(...) printf(__VA_ARGS__)
#else
# define debug3ras(...) noprintf(__VA_ARGS__)
#endif

#if defined(MRVL_TF_LOG_MODULE)
#  undef MRVL_TF_LOG_MODULE
#  define MRVL_TF_LOG_MODULE  MRVL_TF_LOG_MODULE_RAS
#  define debug_ras(...) (mrvl_tf_log_modules & MRVL_TF_LOG_MODULE) ? \
			  tf_log(LOG_MARKER_VERBOSE __VA_ARGS__) : (void)0
#elif DEBUG_RAS
#define debug_ras printf
#else
#define debug_ras(...) ((void) (0))
#endif

/* Core Error Records */
enum ras_core_src {
	DSU_RAM = 0,
	CORE_RAM = 1,
};

/* RAS error types */
enum ras_err_type {
	RAS_ERR_CE = 1,
	RAS_ERR_DE = 2,
	RAS_ERR_UE = 3,
};

/* RAS units with in a core */
enum ras_core_unit {
	UNIT_L1_ICACHE = 1,
	UNIT_L2_TLB = 2,
	UNIT_L1_DCACHE = 4,
	UNIT_L2_CACHE = 8,
};

/* L2 cache RAM types */
enum l2_array_type {
	ARRAY_L2_TAG_RAM = 0,
	ARRAY_L2_DATA_RAM = 1,
	ARRAY_L2_CHI = 3,
};

/* L1 DCache RAM types */
enum l1_dcache_array {
	ARRAY_L1_DC_TAG_RAM0 = 0,
	ARRAY_L1_DC_TAG_RAM1 = 1,
	ARRAY_L1_DC_DATA_RAM = 2,
	ARRAY_L1_DC_TAG_RAM2 = 3,
};

/* L1 ICache RAM types */
enum l1_icache_array {
	ARRAY_L1_IC_TAG_RAM = 0,
	ARRAY_L1_IC_DATA_RAM = 1,
	ARRAY_L1_IC_MACRO_OP_CACHE = 2,
};

/* Core Error codes */
enum ras_core_serr_code {
	SERR_NONE = 0,
	SERR_INTERNAL_BUFFER_ECC_ERR = 2,
	SERR_CACHE_DATA_RAM_ECC_ERR = 6,
	SERR_CACHE_TAG_RAM_ECC_ERR = 7,
	SERR_TLB_DATA_RAM_PARITY_ERR = 8,
	SERR_CACHE_COPYBACK_RESP_ERR = 18,
	SERR_UNSUPP_SLAVE_DEFRD_ERR = 21,
};

enum cn10k_core_err_flags {
	CN10K_CORE_ERRFLG_REC_VALID = 0x1,
	CN10K_CORE_ERRFLG_ADDR_VALID = 0x2,
	CN10K_CORE_ERRFLG_MPIDR_VALID = 0x4,
	CN10K_CORE_ERRFLG_POISON = 0x8,
	CN10K_CORE_ERRFLG_EA_REPORTED = 0x10,
	CN10K_CORE_ERRFLG_UEUC = 0x20,
};

/* Core error record */
typedef struct {
	uint64_t mpidr;
	uint64_t midr;
	uint16_t rsvd0;
	uint16_t flags;
	uint8_t unit;
	uint8_t src;
	uint8_t err_type;
	uint8_t rsvd1;
	uint64_t err_addr;
	union {
		struct l1i_err {
			uint64_t array : 8;
			uint64_t index : 16;
			uint64_t bank : 4;
			uint64_t subbank: 4;
			uint64_t way : 8;
			uint64_t reserved : 24;
		} l1i;

		struct l2tlb_err {
			uint64_t index : 16;
			uint64_t way : 8;
			uint64_t reserved : 40;
		} l2tlb;

		struct l1d_err {
			uint64_t array : 8;
			uint64_t index : 16;
			uint64_t subarray: 8;
			uint64_t way : 8;
			uint64_t reserved : 24;
		} l1d;

		struct l2_err {
			uint64_t array : 8;
			uint64_t index : 16;
			uint64_t subarray: 8;
			uint64_t bank : 4;
			uint64_t way : 8;
			uint64_t reserved : 20;
		} l2;
	};

} cn10k_core_err_info_t;

/* Table N-18 ARM Cache Error Structure */
typedef struct {
	union {
		uint64_t validation_bit : 16;
		uint64_t transaction_type : 2;
		uint64_t operation : 4;
		uint64_t level : 3;
		uint64_t processor_context_corrupt : 1;
		uint64_t corrected : 1;
		uint64_t precise_pc : 1;
		uint64_t restartable_pc : 1;
		uint64_t reserved : 35;
		uint64_t u;
	};
} arm_cache_error_structure;

/* Table N-19 ARM TLB Error Structure */
typedef arm_cache_error_structure arm_tlb_error_structure;

/*
 * Atomically adds a signed value to a 64 bit (aligned) memory location.
 *
 * This version does not perform 'sync' operations to enforce memory
 * operations.  This should only be used when there are no memory operation
 * ordering constraints.  (This should NOT be used for reference counting -
 * use the standard version instead.)
 *
 * @param ptr    address in memory to add incr to
 * @param incr   amount to increment memory location by (signed)
 */
static inline void ras_atomic_add64_nosync(int64_t *ptr, int64_t incr)
{
	__asm__ volatile ("ldadd %x[i], xzr, [%[b]]"
		      : [r] "+m" (*ptr)
		      : [i] "r" (incr), [b]"r" (ptr)
		      : "memory");
}

extern int64_t plat_ras_smc_op(u_register_t x1, u_register_t x2,
				u_register_t x3, u_register_t x4);
extern int cn10k_ras_mdc_probe(const struct err_record_info *info, int *probe_data);
extern int cn10k_ras_mdc_isr(uint32_t id, uint32_t flags, void *cookie);
extern int cn10k_ras_enable_mdc(void);
extern int cn10k_ras_tad_probe(const struct err_record_info *info, int *probe_data);
extern int cn10k_ras_tad_isr(uint32_t id, uint32_t flags, void *cookie);
extern int cn10k_ras_enable_tad(void);
extern int cn10k_ras_dss_probe(const struct err_record_info *info, int *probe_data);
extern int cn10k_ras_dss_isr(uint32_t id, uint32_t flags, void *cookie);
extern int cn10k_ras_enable_dss(void);
void cn10k_fatal_error_handler(void);
void cn10k_fatal_reboot(void);
#endif /* __PLAT_RAS_H__ */
