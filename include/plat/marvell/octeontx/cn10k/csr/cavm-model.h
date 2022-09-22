/***********************license start***********************************
* Copyright (c) 2021 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/
#ifndef __CAVM_MODEL_H__
#define __CAVM_MODEL_H__

/**
 * @file
 *
 * Functions for determining which chip you are running on.
 *
 * <hr>$Revision: 49448 $<hr>
 * @addtogroup chips
 * @{
 */


/* Flags for model checks */
#define __OM_IGNORE_REVISION        0x80000000
#define __OM_IGNORE_MINOR_REVISION  0x20000000
#define __OM_IGNORE_MODEL           0x10000000

/* Variant, or major pass numbers are stored in bits [13:11 */
#define __OM_MAJOR_SHIFT	11
#define __OM_MAJOR_MASK		(0x7 << __OM_MAJOR_SHIFT)

/*
 * Partnum is divied into two fields for our chips. Bits [7:4] are the
 * processor family. Bits [3:0] are the processor ID
 */
#define __OM_PARTNUM_MASK	0xff
#define __OM_FAMILY_MASK	0xf0

/* Minor pass numbers are stored in bits [10:8] */
#define __OM_MINOR_SHIFT	8
#define __OM_MINOR_MASK		(0x7 << __OM_MINOR_SHIFT)

#define __OM_BUILD(partnum, major, minor)	\
	((partnum) |				\
	(((major) - 1) << __OM_MAJOR_SHIFT) |	\
	((minor) << __OM_MINOR_SHIFT))

/* Per chip definitions */
#define CPU_PERSEUS_PASS1_0	__OM_BUILD(0xd49, 1, 0) /* Called A0 */
#define CPU_CN106XX             (CPU_PERSEUS_PASS1_0 | __OM_IGNORE_REVISION)
#define CPU_CN106XX_PASS1_X     (CPU_PERSEUS_PASS1_0 | __OM_IGNORE_MINOR_REVISION)

/* These match entire families of chips */
#define OCTEONTX_CN10KA_PASS1_0		__OM_BUILD(0xB9, 1, 0)
#define OCTEONTX_CN10KA_PASS1_1		__OM_BUILD(0xB9, 1, 1)
#define OCTEONTX_CN10KA_PASS2_0		__OM_BUILD(0xB9, 2, 0)
#define OCTEONTX_CN10KA			(OCTEONTX_CN10KA_PASS1_0 | __OM_IGNORE_REVISION)
#define OCTEONTX_CN10KA_PASS1_X		(OCTEONTX_CN10KA_PASS1_0 | __OM_IGNORE_MINOR_REVISION)
#define OCTEONTX_CN10KA_PASS2_X		(OCTEONTX_CN10KA_PASS2_0 | __OM_IGNORE_MINOR_REVISION)
#define OCTEONTX_CN10KA_AX		OCTEONTX_CN10KA_PASS1_X
#define OCTEONTX_CN10KA_BX		OCTEONTX_CN10KA_PASS2_X
#define OCTEONTX_CN10KA_A1		OCTEONTX_CN10KA_PASS1_1

#define OCTEONTX_CNF10KA_PASS1_0	__OM_BUILD(0xBA, 1, 0)
#define OCTEONTX_CNF10KA_PASS1_1	__OM_BUILD(0xBA, 1, 1)
#define OCTEONTX_CNF10KA		(OCTEONTX_CNF10KA_PASS1_0 | __OM_IGNORE_REVISION)
#define OCTEONTX_CNF10KA_PASS1_X	(OCTEONTX_CNF10KA_PASS1_0 | __OM_IGNORE_MINOR_REVISION)

#define OCTEONTX_CNF10KB_PASS1_0	__OM_BUILD(0xBC, 1, 0)
#define OCTEONTX_CNF10KB_PASS2_0	__OM_BUILD(0xBC, 2, 0)
#define OCTEONTX_CNF10KB		(OCTEONTX_CNF10KB_PASS1_0 | __OM_IGNORE_REVISION)
#define OCTEONTX_CNF10KB_PASS1_X	(OCTEONTX_CNF10KB_PASS1_0 | __OM_IGNORE_MINOR_REVISION)
#define OCTEONTX_CNF10KB_PASS2_X	(OCTEONTX_CNF10KB_PASS2_0 | __OM_IGNORE_MINOR_REVISION)
#define OCTEONTX_CNF10KB_AX		OCTEONTX_CNF10KB_PASS1_X
#define OCTEONTX_CNF10KB_BX		OCTEONTX_CNF10KB_PASS2_X

#define OCTEONTX_CN10KB_PASS1_0		__OM_BUILD(0xBD, 1, 0)
#define OCTEONTX_CN10KB			(OCTEONTX_CN10KB_PASS1_0 | __OM_IGNORE_REVISION)
#define OCTEONTX_CN10KB_PASS1_X		(OCTEONTX_CN10KB_PASS1_0 | __OM_IGNORE_MINOR_REVISION)

/** FUSE 0 contains the part model and revision values */
#define FUS_CACHE0_ADDRESS 	0x87e003001000ll

/**
 * Return non-zero if the chip matech the passed model.
 *
 * @param arg_model One of the OCTEONTX_* constants for chip models and
 *                  passes
 *
 * @return Non-zero if match
 */
static inline int cavm_is_model(uint32_t arg_model) __attribute__ ((pure, always_inline));
static inline int cavm_is_model(uint32_t arg_model)
{
#ifdef CAVM_BUILD_HOST
	uint64_t mask;
	extern uint32_t cavm_remote_get_model(void) __attribute__ ((pure));
	uint32_t my_model = cavm_remote_get_model();
	my_model = (my_model >> 4) & 0xff;
#else
	uint64_t fuse_val = *(volatile uint64_t *)FUS_CACHE0_ADDRESS;
	uint32_t my_model = fuse_val & 0xffffffff;
	uint64_t mask;
#endif

	if (arg_model & __OM_IGNORE_REVISION)
		mask = __OM_PARTNUM_MASK;
	else if (arg_model & __OM_IGNORE_MINOR_REVISION)
		mask = __OM_PARTNUM_MASK | __OM_MAJOR_MASK;
	else
		mask = __OM_PARTNUM_MASK | __OM_MAJOR_MASK | __OM_MINOR_MASK;

	return ((arg_model) & mask) == (my_model & mask);
}

/**
 * Return non-zero if the die is in an alternate package. The
 * normal is_model() checks will treat alternate package parts
 * as all the same, where this function can be used to detect
 * them. The return value is the upper two bits of
 * MIO_FUS_DAT2[chip_id]. Most alternate packages use bit 6,
 * which will return 1 here. Parts with a second alternative
 * will use bit 7, which will return 2.
 *
 * @param arg_model One of the OCTEONTX_* constants for chip models and
 *                  passes
 *
 * @return Non-zero if an alternate package
 *         0 = Normal package
 *         1 = Alternate package 1 (CN86XX, CN80XX with 555 balls)
 *         2 = Alternate package 2 (CN80XX with 676 balls)
 *         3 = Alternate package 3 (Currently unused)
 */
extern int cavm_is_altpkg(uint32_t arg_model);

#define CAVM_MODEL_MAX_SKU 32 /* Maximum length of SKU is 31 plus zero terminator */

/**
 * Return the SKU string for a chip
 *
 * @param node   Node to get SKU for
 *
 * @return Chip's SKU
 */
extern const char* cavm_model_get_sku(int node);

/** @} */
#endif /* __CAVM_MODEL_H__ */
