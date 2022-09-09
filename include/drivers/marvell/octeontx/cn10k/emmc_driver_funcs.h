/***********************license start***********************************
 * Copyright (c) 2020 Marvell.
 * SPDX-License-Identifier: BSD-3-Clause
 * https://spdx.org/licenses
 **********************license end**************************************/
#ifndef _EMMC_DRIVER_H
#define _EMMC_DRIVER_H

#include <octeontx_common.h>
#include <drivers/delay_timer.h>
#include "emmc_standard.h"
#include "cavm-csrs-emmc.h"

#undef  DEBUG_ATF_EMMC
//#define  DEBUG_ATF_EMMC


#ifdef DEBUG_ATF_EMMC
	#define debug_emmc printf
#else
	#define debug_emmc(...) ((void) (0))
#endif

#define EMMC_CSR_WAIT_FOR_FIELD(csr, field, op, value, timeout_usec)\
	({int result;                                                   \
	do {                                                            \
		int64_t done = timeout_usec;                                \
		typedef_##csr c;                                            \
		uint64_t _tmp_address = csr;                                \
		while (1) {                                                 \
			c.u = cavm_csr_read(0, bustype_##csr, busnum_##csr,     \
				sizeof(typedef_##csr), _tmp_address);               \
			if ((c.s.field) op (value)) {                           \
				result = 0;                                         \
				break;                                              \
			} else if (done-- <= 0) {                                \
				result = -1;                                        \
				break;                                              \
			} else                                                  \
			udelay(1);                                              \
		}                                                           \
	} while (0);                                                    \
	result; })

#define SETBIT(X)                     ((uint32_t)1 << X)
#define RSHIFTBITS(pattern, pos)      (pattern << pos)

/* card type mode */
#define SD_DS           0
#define MMC_SDR         1

typedef enum {
	UNINITIALIZED, /* Controller and Card are uninitialized */
	INITIALIZE,    /* Controller and Card are being initialized */
	READ,          /* Multiple Block Read State */
	ERASE,         /* Erase State */
	WRITE,         /* Multiple Block Write State */
	READY,         /* The Card is ready for Data Transfer  */
	DATATRAN,      /* The controller has finished data transfer but card may be busy */
	FAULT          /* Fault */
} EMMC_TXFER_STATE;

/* specific to EMMC PHY IP configs*/
/*Pre-Initialization Sequence specific to this particular SD/eMMC Host Controller IP*/

// TODO: Update DLL PHY Base address
#define EMMC_DLL_PHY_BASE                   0
#define EMMC_PHY_DQ_TIMING_ADDR             (EMMC_DLL_PHY_BASE + 0x2000)
#define EMMC_PHY_DQS_TIMING_ADDR            (EMMC_DLL_PHY_BASE + 0x2004)
#define EMMC_PHY_GATE_LPBK_CTRL_ADDR        (EMMC_DLL_PHY_BASE + 0x2008)
#define EMMC_PHY_MASTER_CTRL_ADDR           (EMMC_DLL_PHY_BASE + 0x200C)
#define EMMC_PHY_SLAVE_CTRL_ADDR            (EMMC_DLL_PHY_BASE + 0x2010)
#define EMMC_PHY_CTRL_ADDR                  (EMMC_DLL_PHY_BASE + 0x2080)

#define EMMC_SET_DATA_SELECT_OE_END_    0
#define EMMC_SET_IO_MASK_END_          27
#define EMMC_SET_IO_MASK_ALWAYS_ON_    31
#define EMMC_SET_PHONY_DQS_CMD_        19
#define EMMC_SET_PHONY_DQS_            20
#define EMMC_SET_LPBK_DQS_             21
#define EMMC_SET_EXT_LPBK_DQS_         22
#define EMMC_SET_GATE_ALWAYS_ON         6
#define EMMC_SET_RD_DEL_SEL_           19
#define EMMC_SET_SW_HALF_CYCLE_SHIFT_  28
#define EMMC_SET_SYNC_METHOD_          31
#define EMMC_SET_DLL_BYPASS_MODE_      23
#define EMMC_SET_DLL_START_POINT_       0
#define EMMC_SET_READ_DQS_CMD_DELAY_   24
#define EMMC_SET_CLK_WRDQS_DELAY_      16
#define EMMC_SET_CLK_WR_DELAY_          8
#define EMMC_SET_READ_DQS_DELAY_        0
#define EMMC_SET_DLL_LOCKED_MODE_       1
#define EMMC_SET_UNDERRUN_SUPPRESS_    18

/*MMC-SDR*/
#define EMMC_MMC_SDR_DLL_PHY_DQS            0x780000
#define EMMC_MMC_SDR_DLL_PHY_GATE_LPBK_CTRL 0x81a00040
#define EMMC_MMC_SDR_DLL_PHY_MASTER_CTRL    0
#define EMMC_MMC_SDR_DLL_PHY_SLAVE_CTRL     0
#define EMMC_MMC_SDR_PHY_CTRL               0
#define EMMC_MMC_SDR_DLL_PHY_DQ_TIMING      0x28000000
#define EMMC_MMC_SDR_CNTL_STAT              0x1800c
#define EMMC_MMC_SDR_SDCLK_ADJ              0x60000
#define EMMC_MMC_SDR_CDMDAT_DELAY           0
#define EMMC_MMC_SDR_IO_DELAY               0xa0000

/*SD_DS*/
#define EMMC_SD_DS_DLL_PHY_DQS            0x780001
#define EMMC_SD_DS_DLL_PHY_GATE_LPBK_CTRL 0x40
#define EMMC_SD_DS_DLL_PHY_MASTER_CTRL    0
#define EMMC_SD_DS_DLL_PHY_SLAVE_CTRL     0
#define EMMC_SD_DS_PHY_CTRL               0
#define EMMC_SD_DS_DLL_PHY_DQ_TIMING      0x28000000
#define EMMC_SD_DS_CNTL_STAT              0x1800c
#define EMMC_SD_DS_SDCLK_ADJ              0x60000
#define EMMC_SD_DS_CDMDAT_DELAY           0
#define EMMC_SD_DS_IO_DELAY               0xa0000

/*EMMC PHY MASK*/
#define EMMC_PHY_DQS_TIMING_INIT_MASK     0xFF87FFFF
#define EMMC_PHY_GATE_LPBK_CTRL_INIT_MASK 0x6E07FFBF
#define EMMC_PHY_CTRL_INIT_MASK           0xFFFFFC0F
#define EMMC_PHY_MASTER_CTRL_INIT_MASK    0xFF0FFF00
#define EMMC_DLL_PHY_DQ_TIMING_INIT_MASK  0x40FFFFF8
#define EMMC_HRS_CNTL_STAT_INIT_MASK      0xFFFE7FF3
#define EMMC_HRS_SDCLK_ADJ_INIT_MASK      0xFFF0FFFF

#define EMMC_CLEAR_PHY_SW_RESET           0xFFFFFFFE
#define EMMC_SET_PHY_SW_RESET             0x1
#define EMMC_PHY_INIT_COMPLETE_BIT        0x2

/*clock related*/
#define EMMC_SRS11_SD_CLK_EN                  (SETBIT(2))
#define EMMC_SRS11_CLOCK_CTRL_INT_CLK_EN      (SETBIT(0))
#define EMMC_SRS11_CLOCK_CTRL_INT_CLK_STABLE  (SETBIT(1))

/* SDCLK Frequency Select */
#define EMMC_CLOCK_CTRL_SD_FREQ_SEL_LO_MSK    (RSHIFTBITS(0XFF, 8))
#define EMMC_CLOCK_CTRL_SD_FREQ_SEL_HI_MSK    (RSHIFTBITS(0x03, 3))
#define EMMC_CLOCK_CTRL_SD_FREQ_SEL_LO_BASE   (8)
#define EMMC_CLOCK_CTRL_SD_FREQ_SEL_HI_BASE   (6)

#define EMMC_CLOCK_27_MULT     0xE
#define EMMC_CLKEN_EN_CLOCK    1
#define EMMC_CLOCK200KHZRATE   (200 * 1000)
#define EMMC_CLOCK50MHZRATE    (50 * 1000000)
#define EMMC_CLOCK25MHZRATE    (25 * 1000000)
#define EMMC_CLOCK12_5MHZRATE  (125 * 100000)
#define EMMC_CLOCK6MHZRATE     (6 * 1000000)
#define EMMC_CLOCK200MHZRATE   (200 * 1000000)
#define EMMC_CLOCK20KHZRATE    (20 * 1000)
#define MAXCLOCKDIVIDER       0x3FF

/*power related*/
#define EMMC_VOLTAGE_1_8        0x5
#define EMMC_VOLTAGE_3_0        0x6
#define EMMC_VOLTAGE_3_3        0x7

#define EMMC_SRS10_SD_BUS_VOLT_BASE (9)
#define EMMC_SRS10_SD_BUS_VOLT_SIZE (7)

#define EMMC_SD_BUS_POWER (SETBIT(8))

/*Reset related*/
#define EMMC_SRS11_SW_RESET_ALL (SETBIT(24))
#define EMMC_SRS11_SW_RESET_CMD (SETBIT(25))
#define EMMC_SRS11_SW_RESET_DAT (SETBIT(26))

/* SRS DATA Timeout Value */
#define EMMC_SRS11_DTCO_MSK  (RSHIFTBITS(0xF, 16))
#define EMMC_SRS11_DTCO_BASE (16)

/*SRS03 emmc command*/
#define EMMC_CMD_TYPE_NORMAL  0
#define EMMC_CMD_TYPE_SUSPEND 1
#define EMMC_CMD_TYPE_RESUME  2
#define EMMC_CMD_TYPE_ABORT   3
#define EMMC_NO_RES           0
#define EMMC_CMD_DATA         1
#define EMMC_CMD_NODATA       0
#define EMMC_136_RES          1
#define EMMC_48_RES           2
#define EMMC_48_RES_WITH_BUSY 3
#define EMMC_RT_BUSYMASK      0x8000
#define EMMC_RT_BUSY          0x8000


#define EMMC_TRANSFER_MODE_DMA_EN             (SETBIT(0))
#define EMMC_TRANSFER_MODE_BLK_CNT_EN         (SETBIT(1))
#define EMMC_TRANSFER_MODE_AUTO_CMD12_EN      (SETBIT(2))
#define EMMC_TRANSFER_MODE_AUTO_CMD23_EN      (SETBIT(3))
#define EMMC_TRANSFER_MODE_TO_HOST_DIR        (SETBIT(4))
#define EMMC_TRANSFER_MODE_MULTI_BLK_SEL      (SETBIT(5))
#define EMMC_CMD_CMD_CRC_CHK_EN               (SETBIT(19))
#define EMMC_CMD_CMD_INDEX_CHK_EN             (SETBIT(20))
#define EMMC_CMD_DATA_PRESENT                 (SETBIT(21))

#define EMMC_CMD_CMD_INDEX_MSK    (RSHIFTBITS(0x3f, 24))
#define EMMC_CMD_CMD_TYPE_MSK     (RSHIFTBITS(0x3, 22))
#define EMMC_CMD_RESP_TYPE_MSK    (RSHIFTBITS(0x3, 16))

#define EMMC_TRANSFER_MODE_TO_HOST_DIR_BASE    4
#define EMMC_TRANSFER_MODE_MULTI_BLK_SEL_BASE  5
#define EMMC_CMD_RESP_TYPE_BASE                16
#define EMMC_CMD_CMD_TYPE_BASE                 22
#define EMMC_CMD_CMD_INDEX_BASE                24

/* this information will be included in the response type argument of
 * relevant apis. it will occupy bits 15:8 of the RespType parameter.
 */
#define EMMC_RESTYPE_MASK                0x7f00
#define EMMC_RESTYPE_NONE                0x0000
#define EMMC_RESTYPE_R1                  0x0100
#define EMMC_RESTYPE_R2                  0x0200
#define EMMC_RESTYPE_R3                  0x0300
#define EMMC_RESTYPE_R4                  0x0400
#define EMMC_RESTYPE_R5                  0x0500
#define EMMC_RESTYPE_R6                  0x0600
#define EMMC_RESTYPE_R7                  0x0700

/*interrupt related*/
#define EMMC_ERROR_INT_STATUS_CRC_STATUS_ERR      (SETBIT(31))
#define EMMC_ERROR_INT_STATUS_CPL_TIMEOUT_ERR     (SETBIT(30))
#define EMMC_ERROR_INT_STATUS_AXI_RESP_ERR        (SETBIT(29))
#define EMMC_ERROR_INT_STATUS_SPI_ERR             (SETBIT(28))
#define EMMC_ERROR_INT_STATUS_ADMA_ERR            (SETBIT(25))
#define EMMC_ERROR_INT_STATUS_AUTO_CMD12_ERR      (SETBIT(24))
#define EMMC_ERROR_INT_STATUS_CUR_LIMIT_ERR       (SETBIT(23))
#define EMMC_ERROR_INT_STATUS_RD_DATA_END_BIT_ERR (SETBIT(22))
#define EMMC_ERROR_INT_STATUS_RD_DATA_CRC_ERR     (SETBIT(21))
#define EMMC_ERROR_INT_STATUS_DATA_TIMEOUT_ERR    (SETBIT(20))
#define EMMC_ERROR_INT_STATUS_CMD_INDEX_ERR       (SETBIT(19))
#define EMMC_ERROR_INT_STATUS_CMD_END_BIT_ERR     (SETBIT(18))
#define EMMC_ERROR_INT_STATUS_CMD_CRC_ERR         (SETBIT(17))
#define EMMC_ERROR_INT_STATUS_CMD_TIMEOUT_ERR     (SETBIT(16))
#define EMMC_NORMAL_INT_STATUS_ERR_INT            (SETBIT(15))
#define EMMC_NORMAL_INT_STATUS_CARD_INT           (SETBIT(8))
#define EMMC_NORMAL_INT_STATUS_CARD_REM_INT       (SETBIT(7))
#define EMMC_NORMAL_INT_STATUS_CARD_INS_INT       (SETBIT(6))
#define EMMC_NORMAL_INT_STATUS_RX_RDY             (SETBIT(5))
#define EMMC_NORMAL_INT_STATUS_TX_RDY             (SETBIT(4))
#define EMMC_NORMAL_INT_STATUS_DMA_INT            (SETBIT(3))
#define EMMC_NORMAL_INT_STATUS_BLOCK_GAP_EVT      (SETBIT(2))
#define EMMC_NORMAL_INT_STATUS_XFER_COMPLETE      (SETBIT(1))
#define EMMC_NORMAL_INT_STATUS_CMD_COMPLETE       (SETBIT(0))

/*EMMC Host Error/Normal Interrupt Statu Register*/
typedef union {
	uint32_t all;
	struct {
	uint32_t cmd_complete       : 1;   /*0 */
	uint32_t txfr_complete      : 1;   /*1 */
	uint32_t blk_gap_evt        : 1;   /*2 */
	uint32_t dma_intr           : 1;   /*3 */
	uint32_t buf_wr_rdy         : 1;   /*4 */
	uint32_t buf_rd_rdy         : 1;   /*5 */
	uint32_t crd_ins_evt        : 1;   /*6 */
	uint32_t crd_rem_evt        : 1;   /*7 */
	uint32_t crd_intr           : 1;   /*8 */
	uint32_t reserved0          : 4;   /*9-12 */
	uint32_t fx_evt             : 1;   /*13 FXE - FX Event */
	uint32_t q_cmd_int          : 1;   /*14 CQINT - Command Queuing Interrupt*/
	uint32_t err_intr           : 1;   /*15 */
	uint32_t cmd_tout_err       : 1;   /*16 */
	uint32_t cmd_crc_err        : 1;   /*17 */
	uint32_t cmd_end_err        : 1;   /*18 */
	uint32_t cmd_idx_err        : 1;   /*19 */
	uint32_t data_tout_err      : 1;   /*20 */
	uint32_t data_crc_err       : 1;   /*21 */
	uint32_t data_end_err       : 1;   /*22 */
	uint32_t curr_lmt_err       : 1;   /*23 */
	uint32_t auto_cmd12_err     : 1;   /*24 */
	uint32_t adma_err           : 1;   /*25 */
	uint32_t reserved1          : 1;   /*26 */
	uint32_t resp_err           : 1;   /*27  ERSP - Response Error*/
	uint32_t reserved2          : 4;   /*28 -31 */
	} s;
} srs12_intr_res_t;

/*image read/write struct*/
typedef struct {
	uint32_t img_start_addr;
	uint32_t img_size;
	uint32_t img_cur_sz_txfer;
	uint32_t img_txfer_status;
} img_txfer_t;


/* ********************* cmd framed ******************************** */
typedef union {
	uint32_t all;
	struct {
	uint32_t dma_en          : 1; /* DMA enable                         0 */
	uint32_t blkcnten        : 1; /* Block Count Enable                 1 */
	uint32_t autocmden       : 2; /* ACE - Auto CMD Enable              2 */
	uint32_t dxfrdir         : 1; /* Data Transfer Direction Select     4 */
	uint32_t ms_blksel       : 1; /* Multi Block Select                 5 */
	uint32_t rect            : 1; /* RECT - Response Type R1/R5         6 */
	uint32_t rece            : 1; /* RECE - Response Error Check Enable 7 */
	uint32_t rid             : 1; /* RID - Response Interrupt Disable   8 */
	uint32_t reserved2       : 7; /*                                    18 */
	uint32_t res_type        : 2; /* Response Type                      16 */
	uint32_t scf             : 1; /* SCF - Sub Command Flag             18 */
	uint32_t crcchken        : 1; /* CRC check enable                   19 */
	uint32_t idxchken        : 1; /* Command Index Check Enable         20 */
	uint32_t dpsel           : 1; /* Data present   select              21 */
	uint32_t cmd_type        : 2; /* Cmd Type                           22 */
	uint32_t cmd_idx         : 6; /* Cmd Index                          24 */
	uint32_t reserved4       : 2; /*                                    30 */
	} s;
} cmd_framed_t;

/* Vital information used in Data Transfers by the ISR and driver routines. */
typedef struct {
	uint32_t card_addr;       /* Starting Card Address */
	uint32_t TransWordSize;     /* Total Number of Bytes involved in this transaction */
	uint32_t NumBlocks;         /* Total Number of Blocks involved in this transaction */
	uint64_t LocalAddr;         /* Destination Address Pointer for reads, and source addr for writes */
	uint32_t StartDiscardWords; /* Words - from the first block that caller doesn't want */
	uint32_t EndDiscardWords;   /* Words - from the last block that caller doesn't want */
	uint32_t WordIndex;         /* Words - Word index to the progress in this transfer request */
	uint8_t cmd;              /* The command that started the transaction */
	uint8_t ACmdFlag;         /* Indicates if the executing command is standard vs. application specific (ACMD) */
	uint8_t AutoCMD12Mode;    /* When "true", the controller is operating in auto command 12 mode. */
	uint8_t RespType;         /* Info about the response type and potential for busy state. */
} card_transfer_t;

/*last command response*/
typedef struct {
	uint32_t pBuffer[4];
	uint32_t CommandComplete;
	uint32_t TransferComplete;
	/* TBD  uint32_t CommandError;     */
	uint32_t SendStopCommand;
	uint32_t R1_RESP;
} emmc_response_t;

typedef struct {
	uint32_t csd_value[4];
} csd_layout_t;

typedef struct {
	uint32_t scr_value[2];
} scr_layout_t;
typedef struct {
	uint32_t cid_value[4];
	uint32_t serialnum;
} cid_layout_t;

typedef struct {
	uint32_t rca;   /* RCA of the card   */
	uint32_t ocr;   /* OCR Register Contents */
	cid_layout_t cid; /* CID Register */
	csd_layout_t csd; /* CSD Register Contents */
	scr_layout_t scr; /* SCR Register Contents     */
} card_registers_t;

typedef struct {
	uint8_t SD;
	uint8_t Slot;
	uint32_t SD_VHS;
	uint32_t ReadBlockSize;
	uint32_t WriteBlockSize;
	uint32_t EraseSize;
	uint32_t CardCapacity;
	uint32_t StrictErrorCheck;
	uint32_t ACmd12ForceEnable;
	uint32_t RPMB_Enable;
	uint32_t SdhClock;
	uint32_t strictErrChk;
	uint32_t last_send_cmd_resptype;
	uint32_t card_state;
	uint32_t emmc_dma_type;
	uint32_t AccessMode;
} card_properties_t;


#define NODMA 0
#define SDMA  1
/*Will not be supported, stripped from the driver*/
#define ADMA2 2

#define BYTE_ACCESS   0
#define SECTOR_ACCESS 1

#define HOST_CAPACITY_SUPPORTED     0x40000000
#define VDD_WINDOW                  0x00ff8000
#define OCR_ACCESS_MODE_MASK        0x60000000
#define SDHC_BLOCK_LEN              512
#define HARD512BLOCKLENGTH          SDHC_BLOCK_LEN
#define EMMC_FIFOWORDSIZE           0x80
#define SCRSD1BITMODE               0x1
#define SCRSD4BITMODE               0x5
#define SD_CMD6_4BITMODE            2

#define SDVHS_2_7_TO_3_6            0x1
#define SDVHS_LOW_VOLT              0x2
#define SDVHSARGSHIFT               8
#define SDVHSCHECKPATTERN           0x33
#define VDD_WINDOW_V33              0x00100000

#define EMMC_VLTGSEL_1_8        0x5
#define EMMC_VLTGSEL_3_0        0x6
#define EMMC_VLTGSEL_3_3        0x7

#define R1_LOCKEDCARDMASK       0xFDFFFFBF

#define MM4_512_HOST_DMA_BDRY  0x7

#define IMAGE_XFR_NOTDONE 0
#define IMAGE_XFR_DONE    1
#define NO_ERROR 0

/* ******************** EMMC_BLK_CNTL ********************************** */
typedef union {
	uint32_t all;
	struct {
		uint32_t xfr_blksz       : 12;
		uint32_t dma_bufsz       : 3;
		uint32_t reserved        : 1;
		uint32_t blk_cnt         : 16;
	} s;
} emmc_blk_cntl;


/* ********************* EMMC_CNTL1 ******************************** */
typedef union {
	uint32_t all;
	struct {
		uint32_t ledcntl       : 1;  /* 0 */
		uint32_t datawidth     : 1;  /* 1 */
		uint32_t hispeed       : 1;  /* 2 */
		uint32_t dma_sel       : 2;  /* 3 */
		uint32_t ex_data_width : 1;  /* 5 */
		uint32_t card_det_l    : 1;  /* 6 */
		uint32_t card_det_s    : 1;  /* 7 */
		uint32_t buspwr        : 1;  /* 8 */
		uint32_t vltgsel       : 3;  /* 9 */
		uint32_t reserved2     : 4;  /* 12 */
		uint32_t bgreqstp      : 1;  /* 16 */
		uint32_t contreq       : 1;	 /* 17 Continue Request */
		uint32_t rdwcntl       : 1;	 /* 18 Read-Wait Control */
		uint32_t bgirqen       : 1;	 /* 19 Interrupt At Block Gap */
		uint32_t reserved3     : 4;
		uint32_t woiq          : 1;	 /* 24  Wakeup Event Enable On Card Interrupt */
		uint32_t wois          : 1;	 /* 25  Wake-Up Event Enable On Card Inserted */
		uint32_t worm          : 1;	 /* 26  Wakeup Event Enable On SD Card Removal */
		uint32_t reserved4     : 5;
	} s;
} emmc_cntl1;

/*fucntion declarations*/
uint32_t emmc_FullSWReset(void);
void emmc_SetControllerVoltage(void);
void emmc_PreInitSequence(uint32_t sdclk);
void emmc_StopBusClock(void);
void emmc_StartBusClock(void);
void emmc_StopInternalBusClock(void);
void emmc_StartInternalBusClock(void);
void emmc_SetBusRate(uint32_t sdhClock, uint32_t sdclk);
void emmc_SetDataTimeout(uint8_t timeout);
void emmc_CMDSWReset(void);
void emmc_DataSWReset(void);
uint32_t emmc_SendDataCommand(uint32_t cmd, uint32_t argument,
								uint32_t blockType, uint32_t dataDir,
								uint32_t resType, uint32_t dmaMode,
								uint32_t AutoCmd23En, uint32_t rbmp_enable);
uint32_t emmc_SendDataCommandNoAuto12(uint32_t cmd, uint32_t argument,
								uint32_t blockType, uint32_t dataDir,
								uint32_t resType, uint32_t dmaMode,
								uint32_t blkcnt_enable);
uint32_t emmc_SendSetupCommand(uint32_t cmd, uint32_t argument, uint32_t resType);
void emmc_EnableDisableIntSources(uint8_t int_cfg);
uint32_t emmc_IsCardInserted(void);
uint32_t emmc_IPSpecificInit(void);

#endif /*_EMMC_DRIVER_H*/
