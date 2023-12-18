/*
 * Copyright (c) 2021 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * https://spdx.org/licenses
 *
 */

#ifndef __MARVELL_GSERM_INTERNAL_H__
#define __MARVELL_GSERM_INTERNAL_H__

#include <stdint.h>
#include <mcesd/mcesdApiTypes.h>

typedef struct {
	uint32_t reg_addr;
	uint8_t reg_bytes;
	int8_t field_bits;
	uint8_t field_offset;
} pin_map_t;

struct gserm_config {
	MCESD_DEV mcesd_handle;
	uint8_t	gserm_idx;
	/* Parts used by MCESD library */
	const pin_map_t *pin_map_ptr;
	size_t pin_map_size;
};

/* Read-Modify-Write APIs for RPM CSRs */
#define CAVM_MODIFY_GSERM_CSR(type, csr, field, val)        \
	do {                                                    \
		type c;                                         \
		c.u = CSR_READ(csr);                    \
		c.s.field = val;                                \
		CSR_WRITE(csr, c.u);                    \
	} while (0)


#define GET_DEV_INFO_PTR(dev) ((struct gserm_config *)((dev)->appData))

/**
 * initialize a pin with a standard enum name
 */
#define MCESD_PIN_AUTO(design, pin)					\
	[ENUM_##design##_##pin] =					\
		{REG_ADDR_##design##_##pin,				\
		 REG_BYTES_##design##_##pin,				\
		 FIELD_BITS_##design##_##pin,				\
		 FIELD_OFFSET_##design##_##pin}

/**
 * initalizes a pin at a manually given index/enum
 * some pin names are too long and get truncated
 */
#define MCESD_PIN_MANUAL(design, pin, index)				\
	[design##_##index] =						\
		{REG_ADDR_##design##_##pin,				\
		 REG_BYTES_##design##_##pin,				\
		 FIELD_BITS_##design##_##pin,				\
		 FIELD_OFFSET_##design##_##pin}

/**
 * max register size is 64 bits, use extra field_bits for special cases
 * -1 == a pin is a constant. Constant stored in address to save space.
 */
#define MCESD_PIN_TIED(design, index, value)	\
	[design##_##index] = {(value), 0, -1, 0}

/**
 * defines for kinda ugly translation between MCESD and cavm_csr
 * also helps keep line lengths in check
 */
#define READ_PIN(_info, _pin_info, out) {				\
		uint64_t mask = (1ULL << (_pin_info)->field_bits)-1;	\
		uint64_t soc_addr = (GSERM_PIN_BAR +			\
				     (uint64_t)((_info)->gserm_idx *	\
				      GSERM_PIN_OFFSET) +		\
				     (_pin_info)->reg_addr);		\
		uint64_t data =						\
			cavm_csr_read(0, CSR_TYPE_RSL,			\
				      0, (_pin_info)->reg_bytes,	\
				      soc_addr);			\
									\
		(out) = data >> ((_pin_info)->field_offset) & mask;	\
	}

#define WRITE_PIN(_info, _pin_info, value) {				\
		uint64_t fmask = (1ULL << (_pin_info)->field_bits)-1;	\
		uint64_t wmask;						\
		uint64_t soc_addr = (GSERM_PIN_BAR +			\
				     (uint64_t)((_info)->gserm_idx *	\
				      GSERM_PIN_OFFSET) +		\
				     (_pin_info)->reg_addr);		\
		uint64_t data =						\
			cavm_csr_read(0, CSR_TYPE_RSL,			\
				      0, (_pin_info)->reg_bytes,	\
				      soc_addr);			\
									\
		wmask = ~(fmask << (_pin_info)->field_offset);		\
		data &= wmask;						\
		data |= (((value) & fmask) << (_pin_info)->field_offset); \
		cavm_csr_write(0, CSR_TYPE_RSL,				\
			       0, _pin_info->reg_bytes,			\
			       soc_addr, data);				\
	}

#define READ_REG(_info, reg, out) {					\
		uint64_t soc_addr = (GSERM_REG_BAR +			\
				     (uint64_t)((_info)->gserm_idx *	\
				      GSERM_REG_OFFSET) +		\
				     ((reg)*2));			\
									\
			(out) = cavm_csr_read(0, CSR_TYPE_RSL,		\
					      0, 4, soc_addr);		\
	}

#define WRITE_REG(_info, reg, value) {					\
		uint64_t soc_addr = (GSERM_REG_BAR +			\
				     (uint64_t)((_info)->gserm_idx *	\
				      GSERM_REG_OFFSET) +		\
				     ((reg)*2));			\
									\
			cavm_csr_write(0, CSR_TYPE_RSL,			\
				       0, 4, soc_addr, (value));	\
	}

#endif /* __MARVELL_GSERM_INTERNAL_H__ */

