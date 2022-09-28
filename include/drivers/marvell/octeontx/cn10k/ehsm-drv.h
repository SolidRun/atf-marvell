/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __EHSM_DRV_H__
#define __EHSM_DRV_H__

#include <libtim.h>

enum smc_reg
{
	/* Request input registers */
	BOOTROM_STATUS			= 0x1,
	ROOT_TRUST_STATUS		= 0x2,
	CHAIN_OF_TRUST_STATUS	= 0x3,
	UUID0					= 0x4,
	UUID1					= 0x5,
	UUID2					= 0x6,
	KEY_REVOC_STATUS		= 0x7,
	FW_SEC_VER				= 0x8,
};

struct ehsm_handle;

/**
 * Verifies an image against the hash stored in the TIM
 *
 * @param[in]	image	Pointer to image to hash
 * @param[in]	li	Load information from parsing TIM
 * @param[out]	digest	calculated digest if non-NULL
 * @param[out]	hash_size	hash size in bytes if non-NULL
 *
 * @return	0 on success, -EIO on eHSM errors, -ENEEDAUTH if
 *		no hash available, and -EAUTH if hash does not match
 */
int ehsm_verify_image(const void *image, const struct tim_load_info *li,
		      uint8_t *digest, int *hash_size);

/**
 * Initialize verification hash
 *
 * @param[in]	li	Information from the TIM about the object
 * @param[out]	ehandle	eHSM handle
 *
 * @return	0 for success, -ENEEDAUTH if no hash available and -EIO
 *		for eHSM errors.
 */
int ehsm_verify_init(const struct tim_load_info *li,
		     struct ehsm_handle *ehandle);

/**
 * Update hash with block
 *
 * @param	ehandle	eHSM handle
 * @param[in]	ptr	Pointer to block to hash
 * @param	size	block size, must be multiple of 64 bytes
 *
 * @return	0 for success, -EINVAL with bad block size, -EIO for eHSM errors
 */
int ehsm_verify_update(struct ehsm_handle *ehandle, const void *ptr,
		       size_t size);

/**
 * Finish verifying hash
 *
 * @param	ehandle	eHSM handle
 * @param[in]	ptr	Last block of data to verify
 * @param	size	size of last block
 * @param[in]	li	TIM load info
 * @param[out] digest	Calculated hash value.  Must be able to hold 512 bits.
 *			This may be NULL.
 * @param[out] hash_size	Size of hash in bytes, may be NULL
 *
 * @return	0 for success, -EIO for eHSM error, -EAUTH for mismatch hash
 */
int ehsm_verify_final(struct ehsm_handle *ehandle,
		      const void *ptr, size_t size,
		      const struct tim_load_info *li,
		      uint8_t *digest, int *hash_size);

/**
 * Verify the digital signature stored in a TIM
 *
 * @param	th		Pointer to TIM handle
 * @param[in]	hinfo		TIM header info pointer
 * @param[in]	tim_buffer	Pointer to TIM, must be 32-byte aligned
 *
 * @return	0 for success, -EAUTH or -EIO if failed
 */
int ehsm_verify_tim_digital_signature(struct tim_handle *th,
				      const struct tim_header_info *hinfo,
				      const uint8_t *tim_buffer);

/**
 * eHSM Read CSR
 *
 * @param[in]	reg_off Read register offset
 * @param[out]	reg_val	Register value
 *
 * @return  0 for success, -EIO for eHSM errors and -EINVAL
 *		for invalid register offset
 */
int ehsm_csr_read(int reg_off, uint32_t *reg_val);

#endif /* __EHSM_H__ */
