/*
 * Copyright (c) 2020 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 * https://spdx.org/licenses
 */

#ifndef __EHSM_DRV_H__
#define __EHSM_DRV_H__

#include <libtim.h>
#include <ehsm.h>
#include <ehsm-oaep.h>

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

enum auth_cmd_id {
	AUTH_CMD_ID_LOAD_UDS			= 0x1,
	AUTH_CMD_ID_ADV_FA_LCS			= 0x2,
	AUTH_CMD_ID_ADV_KAK_REVOCATION		= 0x3,
	AUTH_CMD_ID_ADV_KM_VERSION		= 0x4,
	AUTH_CMD_ID_ADV_LOADER_FW_VERSION	= 0x5,
	AUTH_CMD_ID_ADV_MAIN_FW_VERSION		= 0x6,
};

struct ehsm_handle;

#define PIE_MAX_SESSION_KEY_LEN32	128	/* 128*32=4096 bit */
#define LABEL_MAX_LEN32			8	/* 8*4 = 32 byte */

/* max(IV) is 16 bytes, max(AAD) is 32 bytes,
 * max(CIPHERTEXT) is 32 bytes, max(TAG) is 16 bytes
 * 16 + 32 + 32 + 16 = 96 bytes
 * */
#define IV_MAX_LEN32		8	/* 8*4 = 32 bytes */
#define RKEK_MAX_LEN32		28	/* 28*4 = 112 bytes */

struct pie_session_key
{
	enum ehsm_oaep_pkcs_alg pkcs_alg;
	uint32_t session_key_len_bit;
	/** RSA max 4k = mod 512 byte + exp 512 byte */
	/* MOD and EXP length determinied by key_len_bit */
	uint32_t pubkey[EHSM_MAX_ZMODP_BIG_NUM_LEN32 + EHSM_MAX_FIELD_NUM_COEF];
	uint32_t label[LABEL_MAX_LEN32];
	uint32_t label_len_byte;
	/** RSA max 4k = 512 byte */
	uint32_t encrypt_session_key[PIE_MAX_SESSION_KEY_LEN32];
	/** Tokem Max size = 256 bits */
	uint32_t token[TIM_MAX_TOKEN_SIZE_WORDS];
	uint32_t token_len_byte;
};

struct pie_rkek
{
	uint32_t session_key_len_bit;
	enum ehsm_oaep_aes_mode aes_mode;
	uint32_t rkek_key_len_bit;
	uint32_t iv[IV_MAX_LEN32];
	uint32_t iv_len_byte;
	uint32_t aad_len_byte;
	uint32_t tag_len_byte;
	uint32_t token[TIM_MAX_TOKEN_SIZE_WORDS];
	uint32_t token_len_byte;
	uint32_t rkek_enc[RKEK_MAX_LEN32];
	enum ehsm_rkek_key_provision_option provision_opt;
};

struct ehsm_auth_cmd {
	uint32_t dsa_scheme;
	struct ehsm_dsa_key_token_pair key;
	struct ehsm_authenticated_cmd_with_header acmd;
	uint8_t signature[TIM_MAX_RSA_DS_SIZE];
};

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
 * @param[in]	verbose	flag to print debug info
 * @param[out] digest	Calculated hash value.  Must be able to hold 512 bits.
 *			This may be NULL.
 * @param[out] hash_size	Size of hash in bytes, may be NULL
 *
 * @return	0 for success, -EIO for eHSM error, -EAUTH for mismatch hash
 */
int ehsm_verify_final(struct ehsm_handle *ehandle,
		      const void *ptr, size_t size,
		      const struct tim_load_info *li,
		      bool verbose,
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
int ehsm_verify_tim_digital_signature(const struct tim_handle *th,
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

/**
 * eHSM PIE get encrypted session key
 *
 * @param[in]	user_buf DRAM address of structure (struct pie_session_key)
 * @param[in]	nsec	 boolean Non-secure or Secure
 * @param[in]	size	 size of structure (struct pie_session_key)
 *
 * @return  0 for success, -EIO for eHSM errors
 */
int ehsm_pie_get_session_key(uintptr_t user_buf, bool nsec, uintptr_t size);

/**
 * eHSM PIE Root-Key-Encryption-Key (RKEK) protected provision
 *
 * @param[in]  user_buf DRAM address of structure (struct pie_rkek)
 * @param[in]  nsec     boolean Non-secure or Secure
 * @param[in]  size     size of structure (struct pie_rkek)
 *
 * @return  0 for success, -EIO for eHSM errors
 */
int ehsm_pie_rkek_protected_provision(uintptr_t user_buf, bool nsec, uintptr_t size);

/**
 * Generate a 256-bit AUTH_CMD_PACKAGE that captures the 96-bit challenge
 * value
 *
 * @param[in]	auth_cmd_id	Auth command ID
 * @param[in]	user_buf	DRAM address of structure
 *				(struct ehsm_authenticated_cmd_package)
 * @param[in]	nsec		boolean Non-secure or Secure
 * @param[in]	size		size of structure
 *				(struct ehsm_authenticated_cmd_package)
 *
 * @return  0 for success, -EIO for eHSM errors
 */
int ehsm_smc_get_challenge(uint32_t auth_cmd_id,
			   uintptr_t user_buf, bool nsec, uintptr_t size);

/**
 * eHSM Authentication command
 *
 * @param[in]	user_buf DRAM address of structure (struct ehsm_auth_cmd)
 * @param[in]	nsec	 boolean Non-secure or Secure
 * @param[in]	size	 size of structure (struct ehsm_auth_cmd)
 *
 * @return  0 for success, -EIO for eHSM errors
 */
int ehsm_smc_auth_cmd(uintptr_t user_buf, bool nsec, uintptr_t size);

#endif /* __EHSM_H__ */
