/*
 * Copyright (c) 2023 Marvell.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 *
 * https://spdx.org/licenses
 *
 */

#ifndef __PLAT_SVC_H__
#define __PLAT_SVC_H__

/*
 * x1 - image ID
 * x2 - efi_image_buffer_pointer
 *
 * Return:
 *	x0:
 *		0 -- Success
 *		-1 -- Invalid Arguments
 *		-2 -- SPI_CONFIG_ERR
 *		-3 -- SPI_MMAP_ERR
 *		-5 -- EIO
 *	x1: efi Image size
 */
#define PLAT_OCTEONTX_LOAD_EFI_APP		0xc2000b08

/*
 *
 * Return:
 *	x0:
 *		0 -- Success
 *		-1 -- Invalid Arguments
 *		-5 -- EIO
 *	x1: efi shared memory physical address
 *	x2: efi shared memory size
 */
#define PLAT_OCTEONTX_GET_EFI_SHARED_MEM	0xc2000b09

/*
 * x1 - user_buffer
 * x2 - size
 * x3 - bus
 * x4 - chip select
 *
 * Return:
 *	x0:
 *		0 -- Success
 *		-1 -- Invalid Arguments
 *	x1: efi Image size
 */
#define PLAT_OCTEONTX_WRITE_EFI_VAR		0xc2000b0a

/*
 * x1 - Offset in flash
 * x2 - Buffer
 * x3 - Operation size in bytes
 * x4 - x3[3:0] - Bus, x3[7:4] - Chipselect, x3[8-15] - operation
 *	Read - 1, Info - 4
 *
 * Return:
 *	x0:
 *		0 -- Success
 *		-1 -- Invalid Arguments
 */
#define PLAT_OCTEONTX_SEC_SPI_OP		0xc2000b0b

/*
 * x1 - descriptor address
 * x2 - descriptor size
 *
 * return:
 *	x0:
 *		0 -- success
 *		-1 -- error, check descriptor return codes
 *	x1:
 *		verify return code
 */
#define PLAT_OCTEONTX_VERIFY_FIRMWARE		0xc2000b0c

/*
 * x1 - user_buffer
 * x2 - buffer size
 *
 * Return:
 *	x0:
 *		0 -- Success
 *		-1 -- Invalid Arguments
 *	x1: variable container size
 */
#define PLAT_OCTEONTX_READ_EFI_VAR		0xc2000b1d

/*
 * Reserving 16 SiP IDs for future use by customer
 */

#define PLAT_OCTEONTX_RESERVE_1			0xc2000b1e
#define PLAT_OCTEONTX_RESERVE_2			0xc2000b1f
#define PLAT_OCTEONTX_RESERVE_3			0xc2000b20
#define PLAT_OCTEONTX_RESERVE_4			0xc2000b21
#define PLAT_OCTEONTX_RESERVE_5			0xc2000b22
#define PLAT_OCTEONTX_RESERVE_6			0xc2000b23
#define PLAT_OCTEONTX_RESERVE_7			0xc2000b24
#define PLAT_OCTEONTX_RESERVE_8			0xc2000b25
#define PLAT_OCTEONTX_RESERVE_9			0xc2000b26
#define PLAT_OCTEONTX_RESERVE_10		0xc2000b27
#define PLAT_OCTEONTX_RESERVE_11		0xc2000b28
#define PLAT_OCTEONTX_RESERVE_12		0xc2000b29
#define PLAT_OCTEONTX_RESERVE_13		0xc2000b2a
#define PLAT_OCTEONTX_RESERVE_14		0xc2000b2b
#define PLAT_OCTEONTX_RESERVE_15		0xc2000b2c
#define PLAT_OCTEONTX_RESERVE_16		0xc2000b2d

/* Number of family specific SMCs */
#define CN20K_NUM_SMC_CALLS			22


#if 0
/* API that allows to define platform specific SMC CALLS */
uintptr_t cn20k_svc_smc_handler(uint32_t smc_fid,
			       u_register_t x1,
			       u_register_t x2,
			       u_register_t x3,
			       u_register_t x4,
			       void *cookie,
			       void *handle,
			       u_register_t flags);
#endif

#endif /* __PLAT_SVC_H__ */

