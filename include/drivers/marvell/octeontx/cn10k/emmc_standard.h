/***********************license start***********************************
 * Copyright (c) 2020 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/
#ifndef _EMMC_STANDARD_H
#define _EMMC_STANDARD_H

enum {
	TYPE_MMC = 0,
	TYPE_SD = 1,
	TYPE_eSD = 2,
	TYPE_SDIO = 3,
};

/*  Standard errors */
#define STD_NotFoundError               0x1
#define STD_SDMMCNotFound               0x2B
#define STD_SDMMCReadError              0x2D
#define STD_SDMMCBusWidthDetectionError 0x3A
#define STD_EraseError                  0x20
#define STD_InvalidBootTypeError        0x2d
#define STD_TimeOutError                0x32
#define STD_WriteError                  0x3
#define STD_ReadError                   0x4

enum {
	STD_MMC_CMD0 = 0x0,   /* go idle state */
	STD_MMC_CMD1 = 0x1,   /* send op command */
	STD_MMC_CMD2 = 0x2,   /* all send cid */
	STD_MMC_CMD3 = 0x3,   /* set relative addr */
	STD_SD_CMD3 = 0x3,   /* set relative addr */
	STD_SDIO_CMD3 = 0x3,  /* set relative addr */
	STD_MMC_CMD4 = 0x4,   /* set dsr */
	STD_SDIO_CMD5 = 0x5,  /* SDIO  */
	STD_SDIO_CMD7 = 0x7,  /* select/deselect card for SDIO */
	STD_MMC_CMD7 = 0x7,   /* select/deselect card */
	STD_SD_CMD6 = 0x6,   /* SD Switch Function Command */
	STD_MMC_CMD6 = 0x6,   /* MMC Switch Function Command */
	STD_SD_ACMD6 = 0x6,   /* SD ACMD Command for SET_BUS_WIDTH */
	STD_SD_CMD8 = 0x8,   /* SD Card Interface Condition */
	STD_MMC_CMD8 = 0x8,   /* MMC request to read EXT CSD */
	STD_MMC_CMD9 = 0x9,   /* send csd */
	STD_MMC_CMD10 = 0xa,  /* send cid */
	STD_MMC_CMD11 = 0xb,  /*  read data until stop */
	STD_MMC_CMD12 = 0xc,  /* stop transmission */
	STD_MMC_CMD13 = 0xd,  /* send status */
	STD_MMC_CMD14 = 0xe,  /* receive bus width test pattern */
	STD_MMC_CMD15 = 0xf,  /* go inactive state */
	STD_MMC_CMD16 = 0x10, /*  set block length */
	STD_MMC_CMD17 = 0x11, /* read single block */
	STD_MMC_CMD18 = 0x12, /*  read multiple block */
	STD_MMC_CMD19 = 0x13, /* Send Buswidth test pattern */
	STD_MMC_CMD20 = 0x14, /* write data until stop */
	STD_MMC_CMD23 = 0x17, /* Set Block Count */
	STD_MMC_CMD24 = 0x18, /* write block */
	STD_MMC_CMD25 = 0x19, /* write multiple block */
	STD_MMC_CMD26 = 0x1a, /* program CID */
	STD_MMC_CMD27 = 0x1b, /* program CSD */
	STD_MMC_CMD28 = 0x1c, /* set write prot */
	STD_MMC_CMD29 = 0x1d, /* clr write prot */
	STD_MMC_CMD30 = 0x1e, /* send write prot */
	STD_SD_CMD32 = 0x20,  /* tag sector start */
	STD_SD_CMD33 = 0x21,  /* tag sector end */
	STD_MMC_CMD34 = 0x22, /* untag sector */
	STD_MMC_CMD35 = 0x23, /* tag erase group start */
	STD_MMC_CMD36 = 0x24, /*  tag erase group end */
	STD_MMC_CMD37 = 0x25, /* untag erase group */
	STD_eSD_CMD37 = 0x25, /* SD PartitionManagement group Command  */
	STD_eSD_CMD57 = 0x39,
	STD_MMC_CMD38 = 0x26,	/* erase */
	STD_MMC_CMD39 = 0x27,	/*fast IO */
	STD_MMC_CMD40 = 0x28,	/* go irq state */
	STD_MMC_CMD42 = 0x2a,	/* lock-unlock */
	STD_eSD_CMD43 = 0x2b,	/* Select Partition */
	STD_SDIO_CMD52 = 0x34, /* SDIO read/write single register */
	STD_SDIO_CMD53 = 0x35, /* SDIO read/write blocks */
	STD_SD_CMD55 = 0x37,	/* app cmd */
	STD_MMC_CMD56 = 0x38,	/*  gen cmd */
	STD_SPI_CMD58 = 0x3a,	/* read ocr */
	STD_SPI_CMD59 = 0x3b,	/* crc on-off */
	STD_SD_ACMD41 = 0x29,
	STD_SD_ACMD51 = 0x33 /* Read SD Configuration Register (SCR) */
};

/*  SDMMC Errors                            0xD0-0xED */
#define SDMMC_SWITCH_ERROR                  0xD0
#define SDMMC_ERASE_RESET_ERROR             0xD1
#define SDMMC_CIDCSD_OVERWRITE_ERROR        0xD2
#define SDMMC_OVERRUN_ERROR                 0xD3
#define SDMMC_UNDERRUN_ERROR                0xD4
#define SDMMC_GENERAL_ERROR                 0xD5
#define SDMMC_CC_ERROR                      0xD6
#define SDMMC_ECC_ERROR                     0xD7
#define SDMMC_ILL_CMD_ERROR                 0xD8
#define SDMMC_COM_CRC_ERROR                 0xD9
#define SDMMC_LOCK_ULOCK_ERRROR             0xDA
#define SDMMC_LOCK_ERROR                    0xDB
#define SDMMC_WP_ERROR                      0xDC
#define SDMMC_ERASE_PARAM_ERROR             0xDD
#define SDMMC_ERASE_SEQ_ERROR               0xDE
#define SDMMC_BLK_LEN_ERROR                 0xDF
#define SDMMC_ADDR_MISALIGN_ERROR           0xE0
#define SDMMC_ADDR_RANGE_ERROR              0xE1
#define SDMMCDeviceNotReadyError            0xE2
#define SDMMCInitializationError            0xE3
#define SDMMCDeviceVoltageNotSupported      0xE4
#define SDMMCWriteError                     0xE5
#define SDMMCAltBootDataAlignmentError      0xE6
#define SDMMC_SET_BLOCK_COUNT_ERROR         0xE8
#define SDMMC_InternalClockError            0xED
#define SDMMC_CMD_TIMEOUT                   0xEF
#define SDMMC_INIT_TIMEOUT_ERROR            0xF0

/* response types */
enum {
	MMC_RESPONSE_NONE = (1 << 8),
	MMC_RESPONSE_R1 = (2 << 8),
	MMC_RESPONSE_R1B = (3 << 8),
	MMC_RESPONSE_R2 = (4 << 8),
	MMC_RESPONSE_R3 = (5 << 8),
	MMC_RESPONSE_R4 = (6 << 8),
	MMC_RESPONSE_R5 = (7 << 8),
	MMC_RESPONSE_R5B = (8 << 8),
	MMC_RESPONSE_R6 = (9 << 8),
	MMC_RESPONSE_R7 = (0xAL << 8),
	MMC_RESPONSE_MASK = (0x0000FF00)
};

#define MMC_OCR_VOLTAGE_3_3_TO_3_6   0xE00000
#define MMC_OCR_VOLTAGE_1_8_TO_3_3   0x1F8000
#define MMC_OCR_VOLTAGE_1_8          0x80
#define MMC_OCR_VOLTAGE_ALL          0xFF8000

/* this information will be included in the response type arg of relevant apis*/
/* it will occupy bits 15:8 of the RespType parameter. */
#define MM4_RT_MASK                 0x7f00
#define MM4_RT_NONE                 0x0000
#define MM4_RT_R1                   0x0100
#define MM4_RT_R2                   0x0200
#define MM4_RT_R3                   0x0300
#define MM4_RT_R4                   0x0400
#define MM4_RT_R5                   0x0500
#define MM4_RT_R6                   0x0600
#define MM4_RT_R7                   0x0700

#define MM4_MULTI_BLOCK_TRAN        1
#define MM4_SINGLE_BLOCK_TRAN       0
#define MM4_HOST_TO_CARD_DATA       0
#define MM4_CARD_TO_HOST_DATA       1

#define PARTITION_CONFIG_MMC_EXT_CSD_OFFSET 179
#define BUS_WIDTH_MMC_EXT_CSD_OFFSET        183
#define HS_TIMING_MMC_EXT_CSD_OFFSET        185
#define EXT_CSD_ACCESS_CMD_SET              0
#define EXT_CSD_ACCESS_SET_BITS             1
#define EXT_CSD_ACCESS_CLEAR_BITS           2
#define EXT_CSD_ACCESS_WRITE_BYTE           3
#define PARTITION_ACCESS_BITS               0x7

#define R1_NOMASK 0xFFFFFFFF

/* MMC CMD 6 Related */
typedef union {
	uint32_t all;
	struct {
		uint32_t    CmdSet    :3;
		uint32_t    Reserved0 :5;
		uint32_t    Value     :8;
		uint32_t    Index     :8;
		uint32_t    Access    :2;
		uint32_t    Reserved1 :6;
	} s;
} mmc_cmd6_struct;

/*          SDMMC R1 Response Bits            */
#define     R1_SWITCH_ERROR             (SETBIT(0))
#define     R1_ERASE_RESET_ERROR        (SETBIT(13))
#define     R1_CIDCSD_OVERWRITE_ERROR   (SETBIT(16))
#define     R1_OVERRUN_ERROR            (SETBIT(17))
#define     R1_UNDERRUN_ERROR           (SETBIT(18))
#define     R1_GENERAL_ERROR            (SETBIT(19))
#define     R1_CC_ERROR                 (SETBIT(20))
#define     R1_ECC_ERROR                (SETBIT(21))
#define     R1_ILL_CMD_ERROR            (SETBIT(22))
#define     R1_COM_CRC_ERROR            (SETBIT(23))
#define     R1_LOCK_ULOCK_ERRROR        (SETBIT(24))
#define     R1_LOCK_ERROR               (SETBIT(25))
#define     R1_WP_ERROR                 (SETBIT(26))
#define     R1_ERASE_PARAM_ERROR        (SETBIT(27))
#define     R1_ERASE_SEQ_ERROR          (SETBIT(28))
#define     R1_BLK_LEN_ERROR            (SETBIT(29))
#define     R1_ADDR_MISALIGN_ERROR      (SETBIT(30))
#define     R1_ADDR_RANGE_ERROR         (SETBIT(31))

#endif
