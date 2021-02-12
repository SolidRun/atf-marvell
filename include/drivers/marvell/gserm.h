/***********************license start***********************************
 * Copyright (C) 2021 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 ***********************license end**************************************/

typedef struct {
	uint32_t reg_addr;
	uint8_t reg_bytes;
	int8_t field_bits;
	uint8_t field_offset;
} pin_map_t;

typedef struct {
	int instance;
	const pin_map_t *pin_map_ptr;
	size_t pin_map_size;
} gserm_info;

#define GET_DEV_INFO_PTR(dev) ((gserm_info *)((dev)->appData))

/**
 * initalize a pin with a standard enum name
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
				     ((_info)->instance *		\
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
		uint64_t mask = (1ULL << (_pin_info)->field_bits)-1;	\
		uint64_t soc_addr = (GSERM_PIN_BAR +			\
				     ((_info)->instance *		\
				      GSERM_PIN_OFFSET) +		\
				     (_pin_info)->reg_addr);		\
		uint64_t data =						\
			cavm_csr_read(0, CSR_TYPE_RSL,			\
				      0, (_pin_info)->reg_bytes,	\
				      soc_addr);			\
									\
		data &= ((~mask) << (_pin_info)->field_offset);		\
		data |= (((value) & mask) << (_pin_info)->field_offset); \
		cavm_csr_write(0, CSR_TYPE_RSL,				\
			       0, _pin_info->reg_bytes,			\
			       soc_addr, data);				\
	}

#define READ_REG(_info, reg, out) {					\
		uint64_t soc_addr = (GSERM_REG_BAR +			\
				     ((_info)->instance *		\
				      GSERM_REG_OFFSET) +		\
				     ((reg)*2));			\
									\
			(out) = cavm_csr_read(0, CSR_TYPE_RSL,		\
					      0, 4, soc_addr);		\
	}

#define WRITE_REG(_info, reg, value) {					\
		uint64_t soc_addr = (GSERM_REG_BAR +			\
				     ((_info)->instance *		\
				      GSERM_REG_OFFSET) +		\
				     ((reg)*2));			\
									\
			cavm_csr_write(0, CSR_TYPE_RSL,			\
				       0, 4, soc_addr, (value));	\
	}

