#ifndef __CAVM_SW_CSRS_H__
#define __CAVM_SW_CSRS_H__

/***********************license start***********************************
* Copyright (c) 2022 Marvell.
* SPDX-License-Identifier: BSD-3-Clause
* https://spdx.org/licenses
***********************license end**************************************/

/* ATF Boot status */
#define BOOT_SUCCESS   1
enum boot_error
{
	BOOT_NEXT_STAGE_SUCCESS = 0x0,
	BOOT_NEXT_STAGE_ERROR,
};

/**
 * Structure rst_cold_data2_sw
 *
 * Software specific RST Cold Data 2 Field Structure
 * This structure specifies the bit flags used for communication between SCP BL1 and BDK software.
 * This structure also specifies boot stage info
 *      Every boot stage has 3 bits to report boot stage info,
 *      Bit 0 - Boot Status
 *              0 = not to this stage yet
 *              1 = successfully boot to the stage
 *      Bit [1: 2] - Boot Error
 *              enum boot_error
 *              {
 *                  BOOT_NEXT_STAGE_SUCCESS = 0x0,
 *                  BOOT_NEXT_STAGE_ERROR,
 *              };
 */
union cavm_rst_cold_data2_sw
{
	uint64_t u;
	struct cavm_rst_cold_data2_sw_s
	{
#if __BYTE_ORDER == __BIG_ENDIAN /* Word 0 - Big Endian */
		uint64_t linux_boot_error : 2;  /**< [  63:  62] Linux boot stage error */
		uint64_t linux_boot_status : 1;  /**< [  61:  61] Linux boot status */
		uint64_t uboot_boot_error : 2;  /**< [  60:  59] U-boot boot stage error */
		uint64_t uboot_boot_status : 1;  /**< [  58:  58] U-boot boot status */
		uint64_t atf_bl32_boot_error : 2;  /**< [  57:  56] ATF bl32 boot stage error */
		uint64_t atf_bl32_boot_status : 1;  /**< [  55:  55] ATF bl32 boot status */
		uint64_t atf_bl31_boot_error : 2;  /**< [  54:  53] ATF bl31 boot stage error */
		uint64_t atf_bl31_boot_status : 1;  /**< [  52:  52] ATF bl31 boot status */
		uint64_t atf_bl2_boot_error : 2;  /**< [  51:  50] ATF bl2 boot stage error */
		uint64_t atf_bl2_boot_status : 1;  /**< [  49:  49] ATF bl2 boot status */
		uint64_t atf_bl1_boot_error : 2;  /**< [  48:  47] ATF bl1 boot stage error */
		uint64_t atf_bl1_boot_status : 1;  /**< [  46:  46] ATF bl1 boot status */
		uint64_t ebf_boot_error : 2;  /**< [  45:  44] EBF boot stage error */
		uint64_t ebf_boot_status : 1;  /**< [  43:  43] EBF boot status */
		uint64_t reserved_12_42        : 31;
		uint64_t cust                  : 8;  /**< [ 11:  4] For customer use. */
		uint64_t bdk_to_scp_vrm_problem : 1; /**< [  3:  3] BDK sets to tell SCP to not proceed if the PMBus configuration failed. */
		uint64_t scp_to_bdk_vrm_problem : 1; /**< [  2:  2] SCP sets to tell BDK to not proceed if the AVS bus is not working. */
		uint64_t reserved_1            : 1;
		uint64_t fail_safe_boot_delaying : 1;/**< [  0:  0] Check if firmware has a delay for interaction with user or other valid reasons. */
#else /* Word 0 - Little Endian */
		uint64_t fail_safe_boot_delaying : 1;/**< [  0:  0] Check if firmware has a delay for interaction with user or other valid reasons. */
		uint64_t reserved_1            : 1;
		uint64_t scp_to_bdk_vrm_problem : 1; /**< [  2:  2] SCP sets to tell BDK to not proceed if the AVS bus is not working. */
		uint64_t bdk_to_scp_vrm_problem : 1; /**< [  3:  3] BDK sets to tell SCP to not proceed if the PMBus configuration failed. */
		uint64_t cust                  : 8;  /**< [ 11:  4] For customer use. */
		uint64_t reserved_12_42        : 31;
		uint64_t ebf_boot_status : 1;  /**< [  43:  43] EBF boot status */
		uint64_t ebf_boot_error : 2;  /**< [  45:  44] EBF boot stage error */
		uint64_t atf_bl1_boot_status : 1;  /**< [  46:  46] ATF bl1 boot status */
		uint64_t atf_bl1_boot_error : 2;  /**< [  48:  47] ATF bl1 boot stage error */
		uint64_t atf_bl2_boot_status : 1;  /**< [  49:  49] ATF bl2 boot status */
		uint64_t atf_bl2_boot_error : 2;  /**< [  51:  50] ATF bl2 boot stage error */
		uint64_t atf_bl31_boot_status : 1;  /**< [  52:  52] ATF bl31 boot status */
		uint64_t atf_bl31_boot_error : 2;  /**< [  54:  53] ATF bl31 boot stage error */
		uint64_t atf_bl32_boot_status : 1;  /**< [  55:  55] ATF bl32 boot status */
		uint64_t atf_bl32_boot_error : 2;  /**< [  57:  56] ATF bl32 boot stage error */
		uint64_t uboot_boot_status : 1;  /**< [  58:  58] U-boot boot status */
		uint64_t uboot_boot_error : 2;  /**< [  60:  59] U-boot boot stage error */
		uint64_t linux_boot_status : 1;  /**< [  61:  61] Linux boot status */
		uint64_t linux_boot_error : 2;  /**< [  63:  62] Linux boot stage error */
#endif /* Word 0 - End */
	} s;
	/* struct cavm_rst_cold_data2_sw_s cn; */
};

#endif /* __CAVM_SW_CSRS_H__ */
