/*******************************************************************************
Copyright (C) 2019, Marvell International Ltd. and its affiliates
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains functions prototypes and global defines/data for
higher-level functions to configure Marvell CE SERDES IP:
5FFP_COMPHY_56G_PIPE5_X4_4PLL
********************************************************************/
#include "mcesdTop.h"
#include "mcesdApiTypes.h"
#include "mcesdUtils.h"
#include "mcesdN5C56GP5X4_Defs.h"
#include "mcesdN5C56GP5X4_API.h"
#include "mcesdN5C56GP5X4_RegRW.h"
#include "mcesdN5C56GP5X4_HwCntl.h"
#include <string.h>

#ifdef N5C56GP5X4

/* Forward internal function prototypes used only in this module */
static MCESD_U32 INT_N5C56GP5X4_ComputeTxEqEmMain(IN MCESD_U32 pre3Cursor, IN MCESD_U32 pre2Cursor, IN MCESD_U32 preCursor, IN MCESD_U32 postCursor, IN MCESD_U32 naCursor);
static MCESD_U32 INT_N5C56GP5X4_Computef0(IN MCESD_DEV_PTR devPtr, IN MCESD_U8 lane);
static MCESD_STATUS INT_N5C56GP5X4_Computef0d(IN MCESD_DEV_PTR devPtr, IN MCESD_U8 lane, OUT MCESD_U32 *top, OUT MCESD_U32 *mid, OUT MCESD_U32 *bot);
static MCESD_STATUS INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(IN MCESD_DEV_PTR devPtr, IN MCESD_U8 lane, IN MCESD_FIELD_PTR fieldPtr, OUT MCESD_32 *tapValue);
static MCESD_STATUS INT_N5C56GP5X4_GetDfeTap_ConvertToAverageMilliCodes(IN MCESD_DEV_PTR devPtr, IN MCESD_U8 lane, IN MCESD_FIELD_PTR fieldTopPtr, IN MCESD_FIELD_PTR fieldMidPtr, IN MCESD_FIELD_PTR fieldBotPtr, OUT MCESD_32 *tapValue);
static MCESD_STATUS INT_N5C56GP5X4_GetDfeTap_ConvertMsbLsbToMilliCodes(IN MCESD_DEV_PTR devPtr, IN MCESD_U8 lane, IN MCESD_FIELD_PTR fieldMSBPtr, IN MCESD_FIELD_PTR fieldLSBPtr, OUT MCESD_32 *tapValue);

MCESD_STATUS API_N5C56GP5X4_GetFirmwareRev
(
    IN MCESD_DEV_PTR devPtr,
    OUT MCESD_U8 *major,
    OUT MCESD_U8 *minor,
    OUT MCESD_U8 *patch,
    OUT MCESD_U8 *build
)
{
    MCESD_FIELD fwMajorVer = F_N5C56GP5X4R1P1_FW_MAJOR_VER;
    MCESD_FIELD fwMinorVer = F_N5C56GP5X4R1P1_FW_MINOR_VER;
    MCESD_FIELD fwPatchVer = F_N5C56GP5X4R1P1_FW_PATCH_VER;
    MCESD_FIELD fwBuildVer = F_N5C56GP5X4R1P1_FW_BUILD_VER;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, 255 /* ignored */, &fwMajorVer, &data));
    *major = (MCESD_U8)data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, 255 /* ignored */, &fwMinorVer, &data));
    *minor = (MCESD_U8)data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, 255 /* ignored */, &fwPatchVer, &data));
    *patch = (MCESD_U8)data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, 255 /* ignored */, &fwBuildVer, &data));
    *build = (MCESD_U8)data;

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetPLLLock
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *tsLocked,
    OUT MCESD_BOOL *rsLocked
)
{
    MCESD_FIELD pllTsLock = F_N5C56GP5X4R1P1_PLL_TS_LOCK;
    MCESD_FIELD pllRsLock = F_N5C56GP5X4R1P1_PLL_RS_LOCK;
    MCESD_U32 pllTsLockData, pllRsLockData;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &pllTsLock, &pllTsLockData));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &pllRsLock, &pllRsLockData));
    *tsLocked = (MCESD_BOOL)pllTsLockData;
    *rsLocked = (MCESD_BOOL)pllRsLockData;

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetTxRxReady
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *txReady,
    OUT MCESD_BOOL *rxReady
)
{
    MCESD_FIELD pllReadyTx = F_N5C56GP5X4R1P1_PLL_READY_TX;
    MCESD_FIELD pllReadyRx = F_N5C56GP5X4R1P1_PLL_READY_RX;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &pllReadyTx, &data));
    *txReady = (MCESD_BOOL)data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &pllReadyRx, &data));
    *rxReady = (MCESD_BOOL)data;

    return MCESD_OK;
}

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_RxInit
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane
)
{
    MCESD_FIELD rxInit      = F_N5C56GP5X4R1P1_RX_INIT;
    MCESD_FIELD rxInitDone  = F_N5C56GP5X4R1P1_RX_INIT_DONE;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxInitDone, 0));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxInit, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_PollField(devPtr, lane, &rxInitDone, 1, 5000));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxInit, 0));

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_RxInit
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane
)
{
    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_INIT0, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_PollPin(devPtr, N5C56GP5X4_PIN_RX_INIT_DONE0, 1, 5000));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_INIT0, 0));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_INIT1, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_PollPin(devPtr, N5C56GP5X4_PIN_RX_INIT_DONE1, 1, 5000));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_INIT1, 0));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_INIT2, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_PollPin(devPtr, N5C56GP5X4_PIN_RX_INIT_DONE2, 1, 5000));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_INIT2, 0));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_INIT3, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_PollPin(devPtr, N5C56GP5X4_PIN_RX_INIT_DONE3, 1, 5000));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_INIT3, 0));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    return MCESD_OK;
}
#endif

MCESD_STATUS API_N5C56GP5X4_SetTxEqParam
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_TXEQ_PARAM param,
    IN MCESD_U32 paramValue
)
{
    MCESD_FIELD txFirC0         = F_N5C56GP5X4R1P1_TX_C0;
    MCESD_FIELD txFirC1         = F_N5C56GP5X4R1P1_TX_C1;
    MCESD_FIELD txFirC2         = F_N5C56GP5X4R1P1_TX_C2;
    MCESD_FIELD txFirC3         = F_N5C56GP5X4R1P1_TX_C3;
    MCESD_FIELD txFirC4         = F_N5C56GP5X4R1P1_TX_C4;
    MCESD_FIELD txFirC5         = F_N5C56GP5X4R1P1_TX_C5;
    MCESD_FIELD txFirC0Force    = F_N5C56GP5X4R1P1_TX_C0_FORCE;
    MCESD_FIELD txFirC1Force    = F_N5C56GP5X4R1P1_TX_C1_FORCE;
    MCESD_FIELD txFirC2Force    = F_N5C56GP5X4R1P1_TX_C2_FORCE;
    MCESD_FIELD txFirC3Force    = F_N5C56GP5X4R1P1_TX_C3_FORCE;
    MCESD_FIELD txFirC4Force    = F_N5C56GP5X4R1P1_TX_C4_FORCE;
    MCESD_FIELD txFirC5Force    = F_N5C56GP5X4R1P1_TX_C5_FORCE;
    MCESD_FIELD txUpdate        = F_N5C56GP5X4R1P1_TX_UP;
    MCESD_FIELD txUpdateForce   = F_N5C56GP5X4R1P1_TX_UP_FORCE;
    MCESD_FIELD txAnaC0         = F_N5C56GP5X4R1P1_ANA_TX_C0;
    MCESD_FIELD txAnaC1         = F_N5C56GP5X4R1P1_ANA_TX_C1;
    MCESD_FIELD txAnaC2         = F_N5C56GP5X4R1P1_ANA_TX_C2;
    MCESD_FIELD txAnaC4         = F_N5C56GP5X4R1P1_ANA_TX_C4;
    MCESD_FIELD txAnaC5         = F_N5C56GP5X4R1P1_ANA_TX_C5;

    switch (param)
    {
    case N5C56GP5X4_TXEQ_EM_PRE3_CTRL:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC0Force, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC0, paramValue));
        break;
    case N5C56GP5X4_TXEQ_EM_PRE2_CTRL:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC1Force, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC1, paramValue));
        break;
    case N5C56GP5X4_TXEQ_EM_PRE_CTRL:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC2Force, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC2, paramValue));
        break;
    case N5C56GP5X4_TXEQ_EM_MAIN_CTRL:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC3Force, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC3, paramValue));
        break;
    case N5C56GP5X4_TXEQ_EM_POST_CTRL:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC4Force, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC4, paramValue));
        break;
    case N5C56GP5X4_TXEQ_EM_NA:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC5Force, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC5, paramValue));
        break;
    default:
        return MCESD_FAIL; /* Unsupported parameter */
    }

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txUpdateForce, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txUpdate, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txUpdate, 0));

    /* The TX emphasis main is automatically calculated and updated unless user explicitly wants to manually set it */
    if (param != N5C56GP5X4_TXEQ_EM_MAIN_CTRL)
    {
        MCESD_U32 txEmPre3Data, txEmPre2Data, txEmPreData, txEmMainData, txEmPostData, txEmNAData;

        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txAnaC0, &txEmPre3Data));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txAnaC1, &txEmPre2Data));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txAnaC2, &txEmPreData));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txAnaC4, &txEmPostData));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txAnaC5, &txEmNAData));

        /* Calculate Tx emphasis Main based on full_swing setting */
        txEmMainData = INT_N5C56GP5X4_ComputeTxEqEmMain(txEmPre3Data, txEmPre2Data, txEmPreData, txEmPostData, txEmNAData);

        /* Update Tx emphasis Main */
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC3Force, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txFirC3, txEmMainData));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txUpdate, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txUpdate, 0));
    }

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetTxEqParam
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_TXEQ_PARAM param,
    OUT MCESD_U32 *paramValue
)
{
    MCESD_FIELD txAnaC0 = F_N5C56GP5X4R1P1_ANA_TX_C0;
    MCESD_FIELD txAnaC1 = F_N5C56GP5X4R1P1_ANA_TX_C1;
    MCESD_FIELD txAnaC2 = F_N5C56GP5X4R1P1_ANA_TX_C2;
    MCESD_FIELD txAnaC3 = F_N5C56GP5X4R1P1_ANA_TX_C3;
    MCESD_FIELD txAnaC4 = F_N5C56GP5X4R1P1_ANA_TX_C4;
    MCESD_FIELD txAnaC5 = F_N5C56GP5X4R1P1_ANA_TX_C5;

    switch (param)
    {
    case N5C56GP5X4_TXEQ_EM_PRE3_CTRL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txAnaC0, paramValue));
        break;
    case N5C56GP5X4_TXEQ_EM_PRE2_CTRL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txAnaC1, paramValue));
        break;
    case N5C56GP5X4_TXEQ_EM_PRE_CTRL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txAnaC2, paramValue));
        break;
    case N5C56GP5X4_TXEQ_EM_MAIN_CTRL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txAnaC3, paramValue));
        break;
    case N5C56GP5X4_TXEQ_EM_POST_CTRL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txAnaC4, paramValue));
        break;
    case N5C56GP5X4_TXEQ_EM_NA:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txAnaC5, paramValue));
        break;
    default:
        return MCESD_FAIL; /* Unsupported parameter */
    }

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_SetCTLEParam
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_CTLE_PARAM param,
    IN MCESD_U32 paramValue
)
{
    MCESD_FIELD current1Sel = F_N5C56GP5X4R1P1_CURRENT1_SEL;
    MCESD_FIELD rl1Sel      = F_N5C56GP5X4R1P1_RL1_SEL;
    MCESD_FIELD rl1Extra    = F_N5C56GP5X4R1P1_RL1_EXTRA;
    MCESD_FIELD res1Sel     = F_N5C56GP5X4R1P1_RES1_SEL;
    MCESD_FIELD cap1Sel     = F_N5C56GP5X4R1P1_CAP1_SEL_G;
    MCESD_FIELD enMidFreq   = F_N5C56GP5X4R1P1_EN_MID_FREQ;
    MCESD_FIELD cs1Mid      = F_N5C56GP5X4R1P1_CS1_MID;
    MCESD_FIELD rs1Mid      = F_N5C56GP5X4R1P1_RS1_MID;
    MCESD_FIELD current2Sel = F_N5C56GP5X4R1P1_CURRENT2_SEL; 
    MCESD_FIELD rl2Sel      = F_N5C56GP5X4R1P1_RL2_SEL;
    MCESD_FIELD rl2TuneG    = F_N5C56GP5X4R1P1_RL2_TUNE_G;
    MCESD_FIELD res2Sel     = F_N5C56GP5X4R1P1_RES2_SEL;
    MCESD_FIELD cap2Sel     = F_N5C56GP5X4R1P1_CAP2_SEL;
    MCESD_U32 grayCode;

    switch (param)
    {
    case N5C56GP5X4_CTLE_CURRENT1_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &current1Sel, paramValue));
        break;
    case N5C56GP5X4_CTLE_RL1_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rl1Sel, paramValue));
        break;
    case N5C56GP5X4_CTLE_RL1_EXTRA:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rl1Extra, paramValue));
        break;
    case N5C56GP5X4_CTLE_RES1_SEL: 
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &res1Sel, paramValue));
        break;
    case N5C56GP5X4_CTLE_CAP1_SEL:
        grayCode = ConvertU32ToGrayCode(paramValue);
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cap1Sel, grayCode));
        break;
    case N5C56GP5X4_CTLE_EN_MID_FREQ:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &enMidFreq, paramValue));
        break;
    case N5C56GP5X4_CTLE_CS1_MID:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cs1Mid, paramValue));
        break;
    case N5C56GP5X4_CTLE_RS1_MID:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rs1Mid, paramValue));
        break;
    case N5C56GP5X4_CTLE_CURRENT2_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &current2Sel, paramValue));
        break;
    case N5C56GP5X4_CTLE_RL2_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rl2Sel, paramValue));
        break;
    case N5C56GP5X4_CTLE_RL2_TUNE_G:
        grayCode = ConvertU32ToGrayCode(paramValue);
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rl2TuneG, grayCode));
        break;
    case N5C56GP5X4_CTLE_RES2_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &res2Sel, paramValue));
        break;
    case N5C56GP5X4_CTLE_CAP2_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cap2Sel, paramValue));
        break;
    default:
        return MCESD_FAIL; /* Unsupported parameter */
    }

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetCTLEParam
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_CTLE_PARAM param,
    OUT MCESD_U32 *paramValue
)
{
    MCESD_FIELD current1Sel = F_N5C56GP5X4R1P1_CURRENT1_SEL;
    MCESD_FIELD rl1Sel      = F_N5C56GP5X4R1P1_RL1_SEL;
    MCESD_FIELD rl1Extra    = F_N5C56GP5X4R1P1_RL1_EXTRA;
    MCESD_FIELD res1Sel     = F_N5C56GP5X4R1P1_RES1_SEL;
    MCESD_FIELD cap1Sel     = F_N5C56GP5X4R1P1_CAP1_SEL_G;
    MCESD_FIELD enMidFreq   = F_N5C56GP5X4R1P1_EN_MID_FREQ;
    MCESD_FIELD cs1Mid      = F_N5C56GP5X4R1P1_CS1_MID;
    MCESD_FIELD rs1Mid      = F_N5C56GP5X4R1P1_RS1_MID;
    MCESD_FIELD current2Sel = F_N5C56GP5X4R1P1_CURRENT2_SEL;
    MCESD_FIELD rl2Sel      = F_N5C56GP5X4R1P1_RL2_SEL;
    MCESD_FIELD rl2TuneG    = F_N5C56GP5X4R1P1_RL2_TUNE_G;
    MCESD_FIELD res2Sel     = F_N5C56GP5X4R1P1_RES2_SEL;
    MCESD_FIELD cap2Sel     = F_N5C56GP5X4R1P1_CAP2_SEL;
    MCESD_U32 grayCode;

    switch (param)
    {
    case N5C56GP5X4_CTLE_CURRENT1_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &current1Sel, paramValue));
        break;
    case N5C56GP5X4_CTLE_RL1_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rl1Sel, paramValue));
        break;
    case N5C56GP5X4_CTLE_RL1_EXTRA:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rl1Extra, paramValue));
        break;
    case N5C56GP5X4_CTLE_RES1_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &res1Sel, paramValue));
        break;
    case N5C56GP5X4_CTLE_CAP1_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &cap1Sel, &grayCode));
        *paramValue = ConvertGrayCodeToU32(grayCode);
        break;
    case N5C56GP5X4_CTLE_EN_MID_FREQ:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &enMidFreq, paramValue));
        break;
    case N5C56GP5X4_CTLE_CS1_MID:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &cs1Mid, paramValue));
        break;
    case N5C56GP5X4_CTLE_RS1_MID:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rs1Mid, paramValue));
        break;
    case N5C56GP5X4_CTLE_CURRENT2_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &current2Sel, paramValue));
        break;
    case N5C56GP5X4_CTLE_RL2_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rl2Sel, paramValue));
        break;
    case N5C56GP5X4_CTLE_RL2_TUNE_G:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rl2TuneG, &grayCode));
        *paramValue = ConvertGrayCodeToU32(grayCode);
        break;
    case N5C56GP5X4_CTLE_RES2_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &res2Sel, paramValue));
        break;
    case N5C56GP5X4_CTLE_CAP2_SEL:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &cap2Sel, paramValue));
        break;
    default:
        return MCESD_FAIL; /* Unsupported parameter */
    }

    return MCESD_OK;
}

MCESD_U32 INT_N5C56GP5X4_ComputeTxEqEmMain
(
    IN MCESD_U32 pre3Cursor,
    IN MCESD_U32 pre2Cursor,
    IN MCESD_U32 preCursor,
    IN MCESD_U32 postCursor,
    IN MCESD_U32 naCursor
)
{
    const MCESD_U32 fullSwing = 63;
    MCESD_U32 sum = pre3Cursor + pre2Cursor + preCursor + postCursor + naCursor;

    if (fullSwing >= sum)
        return fullSwing - sum;
    else
        return 0;
}

MCESD_STATUS API_N5C56GP5X4_SetDfeEnable
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_BOOL state
)
{
    MCESD_FIELD dfeEn = F_N5C56GP5X4R1P1_DFE_EN;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &dfeEn, state));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetDfeEnable
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *state
)
{
    MCESD_FIELD dfeEn = F_N5C56GP5X4R1P1_DFE_EN;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &dfeEn, &data));
    *state = (MCESD_BOOL)data;

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_SetFreezeDfeUpdates
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_BOOL state
)
{
    MCESD_FIELD dfeDis = F_N5C56GP5X4R1P1_DFE_DIS;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &dfeDis, state));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetFreezeDfeUpdates
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *state
)
{
    MCESD_FIELD dfeDis = F_N5C56GP5X4R1P1_DFE_DIS;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &dfeDis, &data));
    *state = (MCESD_BOOL)data;

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetDfeTap
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_EYE_TMB eyeTmb,
    IN E_N5C56GP5X4_DFE_TAP tap,
    OUT MCESD_32 *tapValue
)
{
    /* Validate eye parameter */
    if ((eyeTmb != N5C56GP5X4_EYE_TOP) && (eyeTmb != N5C56GP5X4_EYE_MID) && (eyeTmb != N5C56GP5X4_EYE_BOT))
        return MCESD_FAIL;

    switch (tap)
    {
    case N5C56GP5X4_DFE_DC:
    {
        MCESD_FIELD fieldList[3] = { F_N5C56GP5X4R1P1_DC_D_T_E_SM, F_N5C56GP5X4R1P1_DC_D_M_E_SM, F_N5C56GP5X4R1P1_DC_D_B_E_SM };

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &(fieldList[eyeTmb]), tapValue));
    }
    break;
    case N5C56GP5X4_DFE_VREF:
    {
        MCESD_FIELD fieldList[3] = { F_N5C56GP5X4R1P1_VREF_T_E_SM, F_N5C56GP5X4R1P1_VREF_M_E_SM, F_N5C56GP5X4R1P1_VREF_B_E_SM };

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &(fieldList[eyeTmb]), tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F0:
    {
        MCESD_FIELD fieldList[3] = { F_N5C56GP5X4R1P1_F0_D_T_E_SM, F_N5C56GP5X4R1P1_F0_D_M_E_SM, F_N5C56GP5X4R1P1_F0_D_B_E_SM };

        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &(fieldList[eyeTmb]), (MCESD_U32*) tapValue));
        *tapValue = *tapValue * 1000; /* F0 tap is not signed. Unlike other DFE taps, we do not treat it like signed magnitude */
    }
    break;
    case N5C56GP5X4_DFE_F1:
    {
        MCESD_FIELD fieldList[3] = { F_N5C56GP5X4R1P1_F1_D_T_E_SM, F_N5C56GP5X4R1P1_F1_D_M_E_SM, F_N5C56GP5X4R1P1_F1_D_B_E_SM };

        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &(fieldList[eyeTmb]), (MCESD_U32*) tapValue));
        *tapValue = *tapValue * 1000; /* F1 tap is not signed. */
    }
    break;
    case N5C56GP5X4_DFE_F2:
    {
        MCESD_FIELD fieldList[3] = { F_N5C56GP5X4R1P1_F2_D_T_E_SM, F_N5C56GP5X4R1P1_F2_D_M_E_SM, F_N5C56GP5X4R1P1_F2_D_B_E_SM };

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &(fieldList[eyeTmb]), tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F3:
    {
        MCESD_FIELD fieldList[3] = { F_N5C56GP5X4R1P1_F3_T_E_SM, F_N5C56GP5X4R1P1_F3_M_E_SM, F_N5C56GP5X4R1P1_F3_B_E_SM };

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToAverageMilliCodes(devPtr, lane, &fieldList[0], &fieldList[1], &fieldList[2], tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F4:
    {
        MCESD_FIELD fieldList[3] = { F_N5C56GP5X4R1P1_F4_T_E_SM, F_N5C56GP5X4R1P1_F4_M_E_SM, F_N5C56GP5X4R1P1_F4_B_E_SM };

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToAverageMilliCodes(devPtr, lane, &fieldList[0], &fieldList[1], &fieldList[2], tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F5:
    {
        MCESD_FIELD msbField = F_N5C56GP5X4R1P1_F5_MSB_E_SM;
        MCESD_FIELD lsbField = F_N5C56GP5X4R1P1_F5_LSB_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertMsbLsbToMilliCodes(devPtr, lane, &msbField, &lsbField, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F6:
    {
        MCESD_FIELD msbField = F_N5C56GP5X4R1P1_F6_MSB_E_SM;
        MCESD_FIELD lsbField = F_N5C56GP5X4R1P1_F6_LSB_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertMsbLsbToMilliCodes(devPtr, lane, &msbField, &lsbField, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F7:
    {
        MCESD_FIELD msbField = F_N5C56GP5X4R1P1_F7_MSB_E_SM;
        MCESD_FIELD lsbField = F_N5C56GP5X4R1P1_F7_LSB_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertMsbLsbToMilliCodes(devPtr, lane, &msbField, &lsbField, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F8:
    {
        MCESD_FIELD msbField = F_N5C56GP5X4R1P1_F8_MSB_E_SM;
        MCESD_FIELD lsbField = F_N5C56GP5X4R1P1_F8_LSB_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertMsbLsbToMilliCodes(devPtr, lane, &msbField, &lsbField, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F9:
    {
        MCESD_FIELD msbField = F_N5C56GP5X4R1P1_F9_MSB_E_SM;
        MCESD_FIELD lsbField = F_N5C56GP5X4R1P1_F9_LSB_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertMsbLsbToMilliCodes(devPtr, lane, &msbField, &lsbField, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F10:
    {
        MCESD_FIELD msbField = F_N5C56GP5X4R1P1_F10_MSB_E_SM;
        MCESD_FIELD lsbField = F_N5C56GP5X4R1P1_F10_LSB_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertMsbLsbToMilliCodes(devPtr, lane, &msbField, &lsbField, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F11:
    {
        MCESD_FIELD field = F_N5C56GP5X4R1P1_F11_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &field, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F12:
    {
        MCESD_FIELD field = F_N5C56GP5X4R1P1_F12_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &field, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F13:
    {
        MCESD_FIELD field = F_N5C56GP5X4R1P1_F13_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &field, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F14:
    {
        MCESD_FIELD field = F_N5C56GP5X4R1P1_F14_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &field, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_F15:
    {
        MCESD_FIELD field = F_N5C56GP5X4R1P1_F15_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &field, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_FF0:
    {
        MCESD_FIELD field = F_N5C56GP5X4R1P1_FF0_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &field, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_FF1:
    {
        MCESD_FIELD field = F_N5C56GP5X4R1P1_FF1_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &field, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_FF2:
    {
        MCESD_FIELD field = F_N5C56GP5X4R1P1_FF2_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &field, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_FF3:
    {
        MCESD_FIELD field = F_N5C56GP5X4R1P1_FF3_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &field, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_FF4:
    {
        MCESD_FIELD field = F_N5C56GP5X4R1P1_FF4_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &field, tapValue));
    }
    break;
    case N5C56GP5X4_DFE_FF5:
    {
        MCESD_FIELD field = F_N5C56GP5X4R1P1_FF5_E_SM;

        MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, &field, tapValue));
    }
    break;
    default:
        return MCESD_FAIL; /* Invalid tap */
    }

    return MCESD_OK;
}

MCESD_STATUS INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(IN MCESD_DEV_PTR devPtr, IN MCESD_U8 lane, IN MCESD_FIELD_PTR fieldPtr, OUT MCESD_32 *tapValue)
{
    MCESD_U32 code;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, fieldPtr, &code));
    *tapValue = ConvertSignedMagnitudeToI32(code, fieldPtr->totalBits) * 1000; /* milli-Codes */
    return MCESD_OK;
}

MCESD_STATUS INT_N5C56GP5X4_GetDfeTap_ConvertToAverageMilliCodes(IN MCESD_DEV_PTR devPtr, IN MCESD_U8 lane, IN MCESD_FIELD_PTR fieldTopPtr, IN MCESD_FIELD_PTR fieldMidPtr, IN MCESD_FIELD_PTR fieldBotPtr, OUT MCESD_32 *tapValue)
{
    MCESD_32 top, mid, bot;

    MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, fieldTopPtr, &top));
    MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, fieldMidPtr, &mid));
    MCESD_ATTEMPT(INT_N5C56GP5X4_GetDfeTap_ConvertToMilliCodes(devPtr, lane, fieldBotPtr, &bot));

    *tapValue = (top + mid + bot) / 3;
    return MCESD_OK;
}


MCESD_STATUS INT_N5C56GP5X4_GetDfeTap_ConvertMsbLsbToMilliCodes(IN MCESD_DEV_PTR devPtr, IN MCESD_U8 lane, IN MCESD_FIELD_PTR fieldMSBPtr, IN MCESD_FIELD_PTR fieldLSBPtr, OUT MCESD_32 *tapValue)
{
    MCESD_U32 msbData, lsbData;
    MCESD_32 msb, lsb;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, fieldMSBPtr, &msbData));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, fieldLSBPtr, &lsbData));
    msb = ConvertSignedMagnitudeToI32(msbData, fieldMSBPtr->totalBits);
    lsb = ConvertSignedMagnitudeToI32(lsbData, fieldLSBPtr->totalBits);
    *tapValue = (((msb * 2) + lsb) * 1000) / 3; /* milli-Codes */
    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_SetMcuBroadcast
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_BOOL state
)
{
    MCESD_FIELD broadcast = F_N5C56GP5X4R1P1_BROADCAST;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, 255 /* ignored*/, &broadcast, state));
    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetMcuBroadcast
(
    IN MCESD_DEV_PTR devPtr,
    OUT MCESD_BOOL *state
)
{
    MCESD_FIELD broadcast = F_N5C56GP5X4R1P1_BROADCAST;
    MCESD_U32 broadcastData;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, 255 /* ignored*/, &broadcast, &broadcastData));
    *state = (MCESD_BOOL)broadcastData;

    return MCESD_OK;
}

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_SetPowerIvRef
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_BOOL state
)
{
    MCESD_FIELD puIvref = F_N5C56GP5X4R1P1_PU_IVREF;
    MCESD_FIELD puIvrefFmReg = F_N5C56GP5X4R1P1_PUIVREFFMREG;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, 255 /* ignored */, &puIvref, state));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, 255 /* ignored */, &puIvrefFmReg, 1));

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_SetPowerIvRef
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_BOOL state
)
{
    MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_IVREF, state));

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_GetPowerIvRef
(
    IN MCESD_DEV_PTR devPtr,
    OUT MCESD_BOOL *state
)
{
    MCESD_FIELD puIvref = F_N5C56GP5X4R1P1_PU_IVREF;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, 255 /* ignored */, &puIvref, &data));
    *state = (MCESD_BOOL)data;

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_GetPowerIvRef
(
    IN MCESD_DEV_PTR devPtr,
    OUT MCESD_BOOL *state
)
{
    MCESD_U16 pinValue;

    MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_IVREF, &pinValue));
    *state = (MCESD_BOOL)pinValue;

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_SetPowerTx
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_BOOL state
)
{
    MCESD_FIELD puTx            = F_N5C56GP5X4R1P1_PU_TX;
    MCESD_FIELD anaPuTxForce    = F_N5C56GP5X4R1P1_PU_TX_FORCE;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &anaPuTxForce, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &puTx, state));

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_SetPowerTx
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_BOOL state
)
{
    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_TX0, state));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_TX1, state));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_TX2, state));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_TX3, state));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_GetPowerTx
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *state
)
{
    MCESD_FIELD puTx = F_N5C56GP5X4R1P1_PU_TX;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &puTx, &data));
    *state = (MCESD_BOOL)data;

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_GetPowerTx
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *state
)
{
    MCESD_U16 data;

    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_TX0, &data));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_TX1, &data));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_TX2, &data));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_TX3, &data));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    *state = (MCESD_BOOL)data;

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_SetPowerRx
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_BOOL state
)
{
    MCESD_FIELD puRx            = F_N5C56GP5X4R1P1_PU_RX;
    MCESD_FIELD anaPuRxForce    = F_N5C56GP5X4R1P1_PU_RX_FORCE;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &anaPuRxForce, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &puRx, state));

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_SetPowerRx
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_BOOL state
)
{
    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_RX0, state));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_RX1, state));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_RX2, state));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_RX3, state));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_GetPowerRx
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *state
)
{
    MCESD_FIELD puRx = F_N5C56GP5X4R1P1_PU_RX;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &puRx, &data));
    *state = (MCESD_BOOL)data;

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_GetPowerRx
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *state
)
{
    MCESD_U16 data;

    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_RX0, &data));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_RX1, &data));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_RX2, &data));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_RX3, &data));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    *state = (MCESD_BOOL)data;

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_SetTxOutputEnable
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_BOOL state
)
{
    MCESD_FIELD txIdle = F_N5C56GP5X4R1P1_TX_IDLE;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txIdle, state ? 0 : 1));

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_SetTxOutputEnable
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_BOOL state
)
{
    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_IDLE0, state ? 0 : 1));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_IDLE1, state ? 0 : 1));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_IDLE2, state ? 0 : 1));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_IDLE3, state ? 0 : 1));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_GetTxOutputEnable
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *state
)
{
    MCESD_FIELD txIdle = F_N5C56GP5X4R1P1_TX_IDLE;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txIdle, &data));
    *state = (0 == data) ? MCESD_TRUE : MCESD_FALSE;    /* inverted */

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_GetTxOutputEnable
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *state
)
{
    MCESD_U16 pinValue;

    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_IDLE0, &pinValue));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_IDLE1, &pinValue));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_IDLE2, &pinValue));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_IDLE3, &pinValue));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    *state = (0 == pinValue) ? MCESD_TRUE : MCESD_FALSE;    /* inverted */

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_SetPowerPLL
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_BOOL state
)
{
    MCESD_FIELD puPll = F_N5C56GP5X4R1P1_PU_PLL;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &puPll, state));

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_SetPowerPLL
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_BOOL state
)
{
    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_PLL0, state));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_PLL1, state));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_PLL2, state));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PU_PLL3, state));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_GetPowerPLL
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *state
)
{
    MCESD_FIELD puPll = F_N5C56GP5X4R1P1_PU_PLL;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &puPll, &data));
    *state = (MCESD_BOOL)data;

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_GetPowerPLL
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *state
)
{
    MCESD_U16 pinValue;

    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_PLL0, &pinValue));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_PLL1, &pinValue));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_PLL2, &pinValue));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PU_PLL3, &pinValue));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    *state = (MCESD_BOOL)pinValue;

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_SetPhyMode
(
    IN MCESD_DEV_PTR devPtr,
    IN E_N5C56GP5X4_PHYMODE mode
)
{
    MCESD_FIELD phyMode = F_N5C56GP5X4R1P1_PHY_MODE;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, 255 /* Ignored */, &phyMode, mode));

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_SetPhyMode
(
    IN MCESD_DEV_PTR devPtr,
    IN E_N5C56GP5X4_PHYMODE mode
)
{
    MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_MODE, mode));

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_GetPhyMode
(
    IN MCESD_DEV_PTR devPtr,
    OUT E_N5C56GP5X4_PHYMODE *mode
)
{
    MCESD_FIELD phyMode = F_N5C56GP5X4R1P1_PHY_MODE;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, 255 /* Ignored */, &phyMode, &data));
    *mode = (E_N5C56GP5X4_PHYMODE)data;

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_GetPhyMode
(
    IN MCESD_DEV_PTR devPtr,
    OUT E_N5C56GP5X4_PHYMODE *mode
)
{
    MCESD_U16 pinValue;

    MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_MODE, &pinValue));
    *mode = (E_N5C56GP5X4_PHYMODE)pinValue;

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_SetRefFreq
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_REFFREQ freq,
    IN E_N5C56GP5X4_REFCLK_SEL clkSel
)
{
    MCESD_FIELD refFrefSel  = F_N5C56GP5X4R1P1_REF_FREF_SEL;
    MCESD_FIELD refClkSel   = F_N5C56GP5X4R1P1_REFCLK_SEL;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &refFrefSel, freq));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &refClkSel, clkSel));

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_SetRefFreq
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_REFFREQ freq,
    IN E_N5C56GP5X4_REFCLK_SEL clkSel
)
{
    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_REF_FREF_SEL0, freq));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_REFCLK_SEL0, clkSel));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_REF_FREF_SEL1, freq));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_REFCLK_SEL1, clkSel));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_REF_FREF_SEL2, freq));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_REFCLK_SEL2, clkSel));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_REF_FREF_SEL3, freq));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_REFCLK_SEL3, clkSel));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_GetRefFreq
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT E_N5C56GP5X4_REFFREQ *freq,
    OUT E_N5C56GP5X4_REFCLK_SEL *clkSel
)
{
    MCESD_FIELD refFrefSel  = F_N5C56GP5X4R1P1_REF_FREF_SEL;
    MCESD_FIELD refClkSel   = F_N5C56GP5X4R1P1_REFCLK_SEL;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &refFrefSel, &data));
    *freq = (E_N5C56GP5X4_REFFREQ)data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &refClkSel, &data));
    *clkSel = (E_N5C56GP5X4_REFCLK_SEL)data;

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_GetRefFreq
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT E_N5C56GP5X4_REFFREQ *freq,
    OUT E_N5C56GP5X4_REFCLK_SEL *clkSel
)
{
    MCESD_U16 freqPinValue;
    MCESD_U16 clkSelPinValue;

    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_REF_FREF_SEL0, &freqPinValue));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_REFCLK_SEL0, &clkSelPinValue));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_REF_FREF_SEL1, &freqPinValue));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_REFCLK_SEL1, &clkSelPinValue));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_REF_FREF_SEL2, &freqPinValue));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_REFCLK_SEL2, &clkSelPinValue));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_REF_FREF_SEL3, &freqPinValue));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_REFCLK_SEL3, &clkSelPinValue));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    *freq = (E_N5C56GP5X4_REFFREQ)freqPinValue;
    *clkSel = (E_N5C56GP5X4_REFCLK_SEL)clkSelPinValue;

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_SetTxRxBitRate
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_SERDES_SPEED speed
)
{
    MCESD_FIELD phyGenTx = F_N5C56GP5X4R1P1_PHY_GEN_TX;
    MCESD_FIELD phyGenRx = F_N5C56GP5X4R1P1_PHY_GEN_RX;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &phyGenTx, speed));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &phyGenRx, speed));

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_SetTxRxBitRate
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_SERDES_SPEED speed
)
{
    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_GEN_TX0, speed));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_GEN_RX0, speed));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_GEN_TX1, speed));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_GEN_RX1, speed));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_GEN_TX2, speed));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_GEN_RX2, speed));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_GEN_TX3, speed));
        MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_GEN_RX3, speed));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_GetTxRxBitRate
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT E_N5C56GP5X4_SERDES_SPEED *speed
)
{
    MCESD_FIELD phyGenRx = F_N5C56GP5X4R1P1_PHY_GEN_RX;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &phyGenRx, &data));
    *speed = (E_N5C56GP5X4_SERDES_SPEED)data;

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_GetTxRxBitRate
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT E_N5C56GP5X4_SERDES_SPEED *speed
)
{
    MCESD_U16 pinValue;

    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_GEN_RX0, &pinValue));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_GEN_RX1, &pinValue));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_GEN_RX2, &pinValue));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_PHY_GEN_RX3, &pinValue));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    *speed = (E_N5C56GP5X4_SERDES_SPEED)pinValue;

    return MCESD_OK;
}
#endif

MCESD_STATUS API_N5C56GP5X4_SetDataBusWidth
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_DATABUS_WIDTH txWidth,
    IN E_N5C56GP5X4_DATABUS_WIDTH rxWidth
)
{
    MCESD_FIELD txSelBits   = F_N5C56GP5X4R1P1_TX_SEL_BITS;
    MCESD_FIELD txPAM2En    = F_N5C56GP5X4R1P1_TX_PAM2_EN; 
    MCESD_FIELD rxSelBits   = F_N5C56GP5X4R1P1_RX_SEL_BITS;
    MCESD_FIELD rxPAM2En    = F_N5C56GP5X4R1P1_RX_PAM2_EN;
    MCESD_U32 txDataSelBits = 0, txDataPAM2En = 0;
    MCESD_U32 rxDataSelBits = 0, rxDataPAM2En = 0;

    switch (txWidth)
    {
    case N5C56GP5X4_DATABUS_80BIT:
    {
        txDataSelBits = 0;
        txDataPAM2En = 0;
    }
    break;
    case N5C56GP5X4_DATABUS_40BIT:
    {
        txDataSelBits = 0;
        txDataPAM2En = 1;
    }
    break;
    case N5C56GP5X4_DATABUS_64BIT:
    {
        txDataSelBits = 1;
        txDataPAM2En = 0;
    }
    break;
    case N5C56GP5X4_DATABUS_32BIT:
    {
        txDataSelBits = 1;
        txDataPAM2En = 1;
    }
    break;
    default:
        break;
    }

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txSelBits, txDataSelBits));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txPAM2En, txDataPAM2En));

    switch (rxWidth)
    {
    case N5C56GP5X4_DATABUS_80BIT:
        {
            rxDataSelBits = 0;
            rxDataPAM2En = 0;
        }
        break;
    case N5C56GP5X4_DATABUS_40BIT:
        {
            rxDataSelBits = 0;
            rxDataPAM2En = 1;
        }
        break;
    case N5C56GP5X4_DATABUS_64BIT:
        {
            rxDataSelBits = 1;
            rxDataPAM2En = 0;
        }
        break;
    case N5C56GP5X4_DATABUS_32BIT:
        {
            rxDataSelBits = 1;
            rxDataPAM2En = 1;
        }
        break;
    default:
        break;
    }

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxSelBits, rxDataSelBits));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxPAM2En, rxDataPAM2En));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetDataBusWidth
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT E_N5C56GP5X4_DATABUS_WIDTH *txWidth,
    OUT E_N5C56GP5X4_DATABUS_WIDTH *rxWidth
)
{
    MCESD_FIELD txSelBits   = F_N5C56GP5X4R1P1_TX_SEL_BITS;
    MCESD_FIELD txPAM2En    = F_N5C56GP5X4R1P1_TX_PAM2_EN;
    MCESD_FIELD rxSelBits   = F_N5C56GP5X4R1P1_RX_SEL_BITS;
    MCESD_FIELD rxPAM2En    = F_N5C56GP5X4R1P1_RX_PAM2_EN;
    MCESD_U32 txDataSelBits, txDataPAM2En, rxDataSelBits, rxDataPAM2En;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txSelBits, &txDataSelBits));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txPAM2En, &txDataPAM2En));

    if (0 == txDataPAM2En)
    {
        if (0 == txDataSelBits)
            *txWidth = N5C56GP5X4_DATABUS_80BIT;
        else
            *txWidth = N5C56GP5X4_DATABUS_64BIT;
    }
    else
    {
        if (0 == txDataSelBits)
            *txWidth = N5C56GP5X4_DATABUS_40BIT;
        else
            *txWidth = N5C56GP5X4_DATABUS_32BIT;
    }

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxSelBits, &rxDataSelBits));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxPAM2En, &rxDataPAM2En));

    if (0 == rxDataPAM2En)
    {
        if (0 == rxDataSelBits)
            *rxWidth = N5C56GP5X4_DATABUS_80BIT;
        else
            *rxWidth = N5C56GP5X4_DATABUS_64BIT;
    }
    else
    {
        if (0 == rxDataSelBits)
            *rxWidth = N5C56GP5X4_DATABUS_40BIT;
        else
            *rxWidth = N5C56GP5X4_DATABUS_32BIT;
    }

    return MCESD_OK;
}

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_SetMcuClockFreq(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U16 clockMHz
)
{
    MCESD_FIELD mcuClkSel = F_N5C56GP5X4R1P1_MCU_FREQ;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, 255 /* ignored */, &mcuClkSel, clockMHz));

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_SetMcuClockFreq(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U16 clockMHz
)
{
    MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_MCU_CLK, clockMHz));

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_GetMcuClockFreq(
    IN MCESD_DEV_PTR devPtr,
    OUT MCESD_U16 *clockMHz
)
{
    MCESD_FIELD mcuClkSel = F_N5C56GP5X4R1P1_MCU_FREQ;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, 255 /* ignored */, &mcuClkSel, &data));
    *clockMHz = (MCESD_U16)data;

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_GetMcuClockFreq(
    IN MCESD_DEV_PTR devPtr,
    OUT MCESD_U16 *clockMHz
)
{
    MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_MCU_CLK, clockMHz));

    return MCESD_OK;
}
#endif

MCESD_STATUS API_N5C56GP5X4_SetAlign90(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_U16 align90
)
{
    MCESD_FIELD phOsDat = F_N5C56GP5X4R1P1_PH_OS_DAT;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &phOsDat, align90));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetAlign90(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_U16 *align90
)
{
    MCESD_FIELD phOsDat = F_N5C56GP5X4R1P1_PH_OS_DAT;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &phOsDat, &data));
    *align90 = (MCESD_U16)data;

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_SetTrainingTimeout(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_TRAINING type,
    IN S_N5C56GP5X4_TRAINING_TIMEOUT *training
)
{
    MCESD_FIELD trxTrainTimer      = F_N5C56GP5X4R1P1_TRX_TIMER;
    MCESD_FIELD rxTrainTimer       = F_N5C56GP5X4R1P1_RX_TIMER;
    MCESD_FIELD txTrainTimerEnable = F_N5C56GP5X4R1P1_TX_TIMER_EN;
    MCESD_FIELD rxTrainTimerEnable = F_N5C56GP5X4R1P1_RX_TIMER_EN;

    if (training == NULL)
        return MCESD_FAIL;

    if (type == N5C56GP5X4_TRAINING_TRX)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txTrainTimerEnable, training->enable));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &trxTrainTimer, training->timeout));
    }
    else
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxTrainTimerEnable, training->enable));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxTrainTimer, training->timeout));
    }

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetTrainingTimeout(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_TRAINING type,
    OUT S_N5C56GP5X4_TRAINING_TIMEOUT *training
)
{
    MCESD_FIELD trxTrainTimer      = F_N5C56GP5X4R1P1_TRX_TIMER;
    MCESD_FIELD rxTrainTimer       = F_N5C56GP5X4R1P1_RX_TIMER;
    MCESD_FIELD txTrainTimerEnable = F_N5C56GP5X4R1P1_TX_TIMER_EN;
    MCESD_FIELD rxTrainTimerEnable = F_N5C56GP5X4R1P1_RX_TIMER_EN;
    MCESD_U32 enableData, timeoutData;

    if (training == NULL)
        return MCESD_FAIL;

    if (type == N5C56GP5X4_TRAINING_TRX)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txTrainTimerEnable, &enableData));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &trxTrainTimer, &timeoutData));
    }
    else
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxTrainTimerEnable, &enableData));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxTrainTimer, &timeoutData));
    }

    training->enable = (MCESD_BOOL)enableData;
    training->timeout = (MCESD_U16)timeoutData;

    return MCESD_OK;
}

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_ExecuteTraining(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_TRAINING type
)
{
    MCESD_FIELD txTrainEnable   = F_N5C56GP5X4R1P1_TX_TRAIN_ENA;
    MCESD_FIELD txTrainFailed   = F_N5C56GP5X4R1P1_TX_TRAIN_FAI;
    MCESD_FIELD txTrainComplete = F_N5C56GP5X4R1P1_TX_TRAIN_COM;
    MCESD_FIELD rxTrainEnable   = F_N5C56GP5X4R1P1_RX_TRAIN_ENA;
    MCESD_FIELD rxTrainFailed   = F_N5C56GP5X4R1P1_RX_TRAIN_FAI;
    MCESD_FIELD rxTrainComplete = F_N5C56GP5X4R1P1_RX_TRAIN_COM;
    MCESD_FIELD dfeSatEn        = F_N5C56GP5X4R1P1_DFE_SAT_EN;
    MCESD_U32 failed;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &dfeSatEn, 0));

    if (type == N5C56GP5X4_TRAINING_TRX)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txTrainEnable, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txTrainEnable, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_PollField(devPtr, lane, &txTrainComplete, 1, 90000));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txTrainFailed, &failed));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txTrainEnable, 0));
    }
    else
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxTrainEnable, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxTrainEnable, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_PollField(devPtr, lane, &rxTrainComplete, 1, 90000));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxTrainFailed, &failed));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxTrainEnable, 0));
    }

    return (0 == failed) ? MCESD_OK : MCESD_FAIL;
}
#else
MCESD_STATUS API_N5C56GP5X4_ExecuteTraining(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_TRAINING type
)
{
    MCESD_U16 failed;
    MCESD_FIELD dfeSatEn = F_N5C56GP5X4R1P1_DFE_SAT_EN;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &dfeSatEn, 0));

    if (type == N5C56GP5X4_TRAINING_TRX)
    {
        switch (lane)
        {
        case 0:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE0, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE0, 1));
            MCESD_ATTEMPT(API_N5C56GP5X4_PollPin(devPtr, N5C56GP5X4_PIN_TX_TRAIN_COMP0, 1, 90000));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_FAILED0, &failed));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE0, 0));
            break;
        case 1:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE1, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE1, 1));
            MCESD_ATTEMPT(API_N5C56GP5X4_PollPin(devPtr, N5C56GP5X4_PIN_TX_TRAIN_COMP1, 1, 90000));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_FAILED1, &failed));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE1, 0));
            break;
        case 2:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE2, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE2, 1));
            MCESD_ATTEMPT(API_N5C56GP5X4_PollPin(devPtr, N5C56GP5X4_PIN_TX_TRAIN_COMP2, 1, 90000));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_FAILED2, &failed));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE2, 0));
            break;
        case 3:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE3, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE3, 1));
            MCESD_ATTEMPT(API_N5C56GP5X4_PollPin(devPtr, N5C56GP5X4_PIN_TX_TRAIN_COMP3, 1, 90000));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_FAILED3, &failed));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE3, 0));
            break;
        default:
            return MCESD_FAIL; /* Invalid lane */
        }
    }
    else
    {
        switch (lane)
        {
        case 0:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE0, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE0, 1));
            MCESD_ATTEMPT(API_N5C56GP5X4_PollPin(devPtr, N5C56GP5X4_PIN_RX_TRAIN_COMP0, 1, 90000));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_FAILED0, &failed));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE0, 0));
            break;
        case 1:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE1, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE1, 1));
            MCESD_ATTEMPT(API_N5C56GP5X4_PollPin(devPtr, N5C56GP5X4_PIN_RX_TRAIN_COMP1, 1, 90000));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_FAILED1, &failed));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE1, 0));
            break;
        case 2:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE2, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE2, 1));
            MCESD_ATTEMPT(API_N5C56GP5X4_PollPin(devPtr, N5C56GP5X4_PIN_RX_TRAIN_COMP2, 1, 90000));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_FAILED2, &failed));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE2, 0));
            break;
        case 3:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE3, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE3, 1));
            MCESD_ATTEMPT(API_N5C56GP5X4_PollPin(devPtr, N5C56GP5X4_PIN_RX_TRAIN_COMP3, 1, 90000));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_FAILED3, &failed));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE3, 0));
            break;
        default:
            return MCESD_FAIL; /* Invalid lane */
        }
    }

    return (0 == failed) ? MCESD_OK : MCESD_FAIL;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_StartTraining
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_TRAINING type
)
{
    MCESD_FIELD dfeSatEn        = F_N5C56GP5X4R1P1_DFE_SAT_EN;
    MCESD_FIELD txTrainEnable   = F_N5C56GP5X4R1P1_TX_TRAIN_ENA;
    MCESD_FIELD rxTrainEnable   = F_N5C56GP5X4R1P1_RX_TRAIN_ENA;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &dfeSatEn, 0));

    if (type == N5C56GP5X4_TRAINING_TRX)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txTrainEnable, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txTrainEnable, 1));
    }
    else
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxTrainEnable, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxTrainEnable, 1));
    }

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_StartTraining
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_TRAINING type
)
{
    MCESD_FIELD dfeSatEn = F_N5C56GP5X4R1P1_DFE_SAT_EN;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &dfeSatEn, 0));
    if (type == N5C56GP5X4_TRAINING_TRX)
    {
        switch (lane)
        {
        case 0:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE0, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE0, 1));
            break;
        case 1:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE1, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE1, 1));
            break;
        case 2:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE2, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE2, 1));
            break;
        case 3:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE3, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE3, 1));
            break;
        default:
            return MCESD_FAIL; /* Invalid lane */
        }
    }
    else
    {
        switch (lane)
        {
        case 0:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE0, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE0, 1));
            break;
        case 1:

            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE1, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE1, 1));
            break;
        case 2:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE2, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE2, 1));
            break;
        case 3:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE3, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE3, 1));
            break;
        default:
            return MCESD_FAIL; /* Invalid lane */
        }
    }

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_CheckTraining
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_TRAINING type,
    OUT MCESD_BOOL *completed,
    OUT MCESD_BOOL *failed
)
{
    MCESD_FIELD txTrainEnable   = F_N5C56GP5X4R1P1_TX_TRAIN_ENA;
    MCESD_FIELD txTrainFailed   = F_N5C56GP5X4R1P1_TX_TRAIN_FAI;
    MCESD_FIELD txTrainComplete = F_N5C56GP5X4R1P1_TX_TRAIN_COM;
    MCESD_FIELD rxTrainEnable   = F_N5C56GP5X4R1P1_RX_TRAIN_ENA;
    MCESD_FIELD rxTrainFailed   = F_N5C56GP5X4R1P1_RX_TRAIN_FAI;
    MCESD_FIELD rxTrainComplete = F_N5C56GP5X4R1P1_RX_TRAIN_COM;
    MCESD_U32 completeData, failedData = 0;

    if (type == N5C56GP5X4_TRAINING_TRX)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txTrainComplete, &completeData));
        if (1 == completeData)
        {
            MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txTrainFailed, &failedData));
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txTrainEnable, 0));
        }
    }
    else
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxTrainComplete, &completeData));
        if (1 == completeData)
        {
            MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxTrainFailed, &failedData));
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxTrainEnable, 0));
        }
    }

    *completed = (MCESD_BOOL)completeData;
    *failed = (MCESD_BOOL)failedData;

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_CheckTraining
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_TRAINING type,
    OUT MCESD_BOOL *completed,
    OUT MCESD_BOOL *failed
)
{
    MCESD_U16 completeData, failedData = 0;
    if (type == N5C56GP5X4_TRAINING_TRX)
    {
        switch (lane)
        {
        case 0:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_COMP0, &completeData));
            if (1 == completeData)
            {
                MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_FAILED0, &failedData));
                MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE0, 0));
            }
            break;
        case 1:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_COMP1, &completeData));
            if (1 == completeData)
            {
                MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_FAILED1, &failedData));
                MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE1, 0));
            }
            break;
        case 2:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_COMP2, &completeData));
            if (1 == completeData)
            {
                MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_FAILED2, &failedData));
                MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE2, 0));
            }
            break;
        case 3:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_COMP3, &completeData));
            if (1 == completeData)
            {
                MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_FAILED3, &failedData));
                MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE3, 0));
            }
            break;
        default:
            return MCESD_FAIL; /* Invalid lane */
        }
    }
    else
    {
        switch (lane)
        {
        case 0:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_COMP0, &completeData));
            if (1 == completeData)
            {
                MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_FAILED0, &failedData));
                MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE0, 0));
            }
            break;
        case 1:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_COMP1, &completeData));
            if (1 == completeData)
            {
                MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_FAILED1, &failedData));
                MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE1, 0));
            }
            break;
        case 2:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_COMP2, &completeData));
            if (1 == completeData)
            {
                MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_FAILED2, &failedData));
                MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE2, 0));
            }
            break;
        case 3:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_COMP3, &completeData));
            if (1 == completeData)
            {
                MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_FAILED3, &failedData));
                MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE3, 0));
            }
            break;
        default:
            return MCESD_FAIL; /* Invalid lane */
        }
    }

    *completed = (MCESD_BOOL)completeData;
    *failed = (MCESD_BOOL)failedData;

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_StopTraining
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_TRAINING type
)
{
    MCESD_FIELD txTrainEnable   = F_N5C56GP5X4R1P1_TX_TRAIN_ENA;
    MCESD_FIELD rxTrainEnable   = F_N5C56GP5X4R1P1_RX_TRAIN_ENA;

    if (type == N5C56GP5X4_TRAINING_TRX)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txTrainEnable, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
    }
    else
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxTrainEnable, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
    }

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_StopTraining
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_TRAINING type
)
{
    if (type == N5C56GP5X4_TRAINING_TRX)
    {
        switch (lane)
        {
        case 0:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE0, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
            break;
        case 1:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE1, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
            break;
        case 2:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE2, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
            break;
        case 3:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_TX_TRAIN_ENABLE3, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
            break;
        default:
            return MCESD_FAIL; /* Invalid lane */
        }
    }
    else
    {
        switch (lane)
        {
        case 0:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE0, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
            break;
        case 1:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE1, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
            break;
        case 2:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE2, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
            break;
        case 3:
            MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_RX_TRAIN_ENABLE3, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
            break;
        default:
            return MCESD_FAIL; /* Invalid lane */
        }
    }

    return MCESD_OK;
}
#endif

MCESD_STATUS API_N5C56GP5X4_GetTrainedEyeHeight
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT S_N5C56GP5X4_TRAINED_EYE_HEIGHT *trainedEyeHeight
)
{
    MCESD_FIELD dfeAdaptCont    = F_N5C56GP5X4R1P1_DFE_ADAPT;
    MCESD_FIELD cliCmd          = F_N5C56GP5X4R1P1_CLI_CMD;
    MCESD_FIELD cliArgs         = F_N5C56GP5X4R1P1_CLI_ARGS;
    MCESD_FIELD cliStart        = F_N5C56GP5X4R1P1_CLI_START;
    MCESD_FIELD dfef0xSel       = F_N5C56GP5X4R1P1_DFE_F0X_SEL;
    MCESD_FIELD dfeLoadEn       = F_N5C56GP5X4R1P1_DFE_LOAD_EN;
    MCESD_U32 prevState, f0xData, f0bData, f0n1Data, f0n2Data, f0dData, f0d_tData, f0d_mData, f0d_bData;

    f0d_tData = 0;
    f0d_mData = 0;
    f0d_bData = 0;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &dfeAdaptCont, &prevState));

    /* turn off DFE continuous */
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliCmd, 0x18));    
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliArgs, 0x0));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliStart, 1));
    
    /* f0b */
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliCmd, 0x19));    
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliArgs, 0x4000));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliStart, 1));
    f0bData = INT_N5C56GP5X4_Computef0(devPtr, lane);

    /* fn1 */
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliArgs, 0x8000));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &dfef0xSel, 0x11));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliStart, 1));
    f0xData = INT_N5C56GP5X4_Computef0(devPtr, lane);
    f0n1Data = f0bData - f0xData;

    /* fn2 */
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &dfef0xSel, 0x12)); 
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliStart, 1));
    f0xData = INT_N5C56GP5X4_Computef0(devPtr, lane);
    f0n2Data = f0bData - f0xData;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &dfeLoadEn, 0));
    
    /* f0d */
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliArgs, 0x20000));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliStart, 1));
    f0dData = INT_N5C56GP5X4_Computef0(devPtr, lane);
    MCESD_ATTEMPT(INT_N5C56GP5X4_Computef0d(devPtr, lane, &f0d_tData, &f0d_mData, &f0d_bData));

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &dfeLoadEn, 1));

    if (prevState)
    {
        /* turn on DFE continuous */
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliCmd, 0x18));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliArgs, 0x1));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &cliStart, 1));
    }

    trainedEyeHeight->f0b = f0bData;
    trainedEyeHeight->f0n1 = f0n1Data;
    trainedEyeHeight->f0n2 = f0n2Data;
    trainedEyeHeight->f0d = f0dData;
    trainedEyeHeight->f0d_t = f0d_tData;
    trainedEyeHeight->f0d_m = f0d_mData;
    trainedEyeHeight->f0d_b = f0d_bData;

    return MCESD_OK;
}

MCESD_U32 INT_N5C56GP5X4_Computef0
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane
)
{
#if 0 // ATF dosn't support floats or doubles
    MCESD_FIELD f0DTO2C = F_N5C56GP5X4R1P1_F0_D_T_O_2C;
    MCESD_FIELD f0STO2C = F_N5C56GP5X4R1P1_F0_S_T_O_2C;
    MCESD_FIELD f0DTE2C = F_N5C56GP5X4R1P1_F0_D_T_E_2C;
    MCESD_FIELD f0STE2C = F_N5C56GP5X4R1P1_F0_S_T_E_2C;
    MCESD_FIELD f0DMO2C = F_N5C56GP5X4R1P1_F0_D_M_O_2C;
    MCESD_FIELD f0SMO2C = F_N5C56GP5X4R1P1_F0_S_M_O_2C;
    MCESD_FIELD f0DME2C = F_N5C56GP5X4R1P1_F0_D_M_E_2C;
    MCESD_FIELD f0SME2C = F_N5C56GP5X4R1P1_F0_S_M_E_2C;
    MCESD_FIELD f0DBO2C = F_N5C56GP5X4R1P1_F0_D_B_O_2C;
    MCESD_FIELD f0SBO2C = F_N5C56GP5X4R1P1_F0_S_B_O_2C;
    MCESD_FIELD f0DBE2C = F_N5C56GP5X4R1P1_F0_D_B_E_2C;
    MCESD_FIELD f0SBE2C = F_N5C56GP5X4R1P1_F0_S_B_E_2C;
    MCESD_U32 data;
    double sum;

    sum = 0;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0DTO2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0STO2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0DTE2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0STE2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0DMO2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0SMO2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0DME2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0SME2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0DBO2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0SBO2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0DBE2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0SBE2C, &data));
    sum += data;

    /* value is returned in milli-units */
    return (MCESD_U32) (sum * 1000 / 12.0);
#endif
    return 1;   
}

MCESD_STATUS INT_N5C56GP5X4_Computef0d
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane, 
    OUT MCESD_U32 *top, 
    OUT MCESD_U32 *mid, 
    OUT MCESD_U32 *bot
)
{
#if 0 // ATF dosn't support floats or doubles
    MCESD_FIELD f0DTO2C = F_N5C56GP5X4R1P1_F0_D_T_O_2C;
    MCESD_FIELD f0STO2C = F_N5C56GP5X4R1P1_F0_S_T_O_2C;
    MCESD_FIELD f0DTE2C = F_N5C56GP5X4R1P1_F0_D_T_E_2C;
    MCESD_FIELD f0STE2C = F_N5C56GP5X4R1P1_F0_S_T_E_2C;
    MCESD_FIELD f0DMO2C = F_N5C56GP5X4R1P1_F0_D_M_O_2C;
    MCESD_FIELD f0SMO2C = F_N5C56GP5X4R1P1_F0_S_M_O_2C;
    MCESD_FIELD f0DME2C = F_N5C56GP5X4R1P1_F0_D_M_E_2C;
    MCESD_FIELD f0SME2C = F_N5C56GP5X4R1P1_F0_S_M_E_2C;
    MCESD_FIELD f0DBO2C = F_N5C56GP5X4R1P1_F0_D_B_O_2C;
    MCESD_FIELD f0SBO2C = F_N5C56GP5X4R1P1_F0_S_B_O_2C;
    MCESD_FIELD f0DBE2C = F_N5C56GP5X4R1P1_F0_D_B_E_2C;
    MCESD_FIELD f0SBE2C = F_N5C56GP5X4R1P1_F0_S_B_E_2C;
    MCESD_U32 data;
    double sum;
    
    sum = 0;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0DTO2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0STO2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0DTE2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0STE2C, &data));
    sum += data;

    /* value is returned in milli-units */
    *top = (MCESD_U32) (sum * 1000 / 4.0);

    sum = 0;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0DMO2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0SMO2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0DME2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0SME2C, &data));
    sum += data;

    /* value is returned in milli-units */
    *mid = (MCESD_U32) (sum * 1000 / 4.0);

    sum = 0;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0DBO2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0SBO2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0DBE2C, &data));
    sum += data;
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &f0SBE2C, &data));
    sum += data;

    /* value is returned in milli-units */
    *bot = (MCESD_U32) (sum * 1000 / 4.0);
#endif
    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetCDRParam
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_CDR_PARAM param,
    OUT MCESD_U32 *paramValue
)
{
    MCESD_FIELD selMufi = F_N5C56GP5X4R1P1_RX_SELMUFI;
    MCESD_FIELD selMuff = F_N5C56GP5X4R1P1_RX_SELMUFF;
    MCESD_FIELD selMupi = F_N5C56GP5X4R1P1_REG_SELMUPI;
    MCESD_FIELD selMupf = F_N5C56GP5X4R1P1_REG_SELMUPF;

    switch (param)
    {
    case N5C56GP5X4_CDR_SELMUFI:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &selMufi, paramValue));
        break;
    case N5C56GP5X4_CDR_SELMUFF:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &selMuff, paramValue));
        break;
    case N5C56GP5X4_CDR_SELMUPI:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &selMupi, paramValue));
        break;
    case N5C56GP5X4_CDR_SELMUPF:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &selMupf, paramValue));
        break;
    default:
        return MCESD_FAIL; /* Unsupported parameter */
    }

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_SetCDRParam
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_CDR_PARAM param,
    IN MCESD_U32 paramValue
)
{
    MCESD_FIELD selMufi = F_N5C56GP5X4R1P1_RX_SELMUFI;
    MCESD_FIELD selMuff = F_N5C56GP5X4R1P1_RX_SELMUFF;
    MCESD_FIELD selMupi = F_N5C56GP5X4R1P1_REG_SELMUPI;
    MCESD_FIELD selMupf = F_N5C56GP5X4R1P1_REG_SELMUPF;

    switch (param)
    {
    case N5C56GP5X4_CDR_SELMUFI:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &selMufi, paramValue));
        break;
    case N5C56GP5X4_CDR_SELMUFF:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &selMuff, paramValue));
        break;
    case N5C56GP5X4_CDR_SELMUPI:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &selMupi, paramValue));
        break;
    case N5C56GP5X4_CDR_SELMUPF:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &selMupf, paramValue));
        break;
    default:
        return MCESD_FAIL; /* Unsupported parameter */
    }

    return MCESD_OK;
}

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS API_N5C56GP5X4_GetSquelchDetect
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *squelched
)
{
    MCESD_FIELD sqDetected = F_N5C56GP5X4R1P1_RX_SQ_OUT;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &sqDetected, &data));
    *squelched = (MCESD_BOOL)data;

    return MCESD_OK;
}
#else
MCESD_STATUS API_N5C56GP5X4_GetSquelchDetect
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_BOOL *squelched
)
{
    MCESD_U16 pinValue;

    switch (lane)
    {
    case 0:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_SQ_DETECTED_LPF0, &pinValue));
        break;
    case 1:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_SQ_DETECTED_LPF1, &pinValue));
        break;
    case 2:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_SQ_DETECTED_LPF2, &pinValue));
        break;
    case 3:
        MCESD_ATTEMPT(API_N5C56GP5X4_HwGetPinCfg(devPtr, N5C56GP5X4_PIN_SQ_DETECTED_LPF3, &pinValue));
        break;
    default:
        return MCESD_FAIL; /* Invalid lane */
    }

    *squelched = (MCESD_BOOL)pinValue;

    return MCESD_OK;
}
#endif

MCESD_STATUS API_N5C56GP5X4_SetSquelchThreshold
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_16 threshold
)
{
    MCESD_FIELD sqExt   = F_N5C56GP5X4R1P1_SQ_RES_EXT;
    MCESD_FIELD sqExtEn = F_N5C56GP5X4R1P1_SQ_INDV;
    MCESD_U32 data = threshold;

    if (threshold > N5C56GP5X4_SQ_THRESH_MAX)
        return MCESD_FAIL;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &sqExtEn, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &sqExt, data));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetSquelchThreshold
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_16 *threshold
)
{
    MCESD_FIELD sqRd = F_N5C56GP5X4R1P1_SQ_RES_RD;
    MCESD_U32 data;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &sqRd, &data));

    *threshold = (MCESD_16)data;

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_SetDataPath
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_DATAPATH path
)
{
    MCESD_FIELD dtlClampingSel = F_N5C56GP5X4R1P1_DTL_CLAMPING;
    MCESD_FIELD rx2txNoStop    = F_N5C56GP5X4R1P1_R2T_NO_STOP;
    MCESD_FIELD rx2txRdStart   = F_N5C56GP5X4R1P1_R2T_RD_START;
    MCESD_FIELD rxFoffsetDis   = F_N5C56GP5X4R1P1_FOFFSET_DIS;
    MCESD_FIELD digRxToTx      = F_N5C56GP5X4R1P1_D_RX2TX_LPBK;
    MCESD_FIELD anaTxToRx      = F_N5C56GP5X4R1P1_A_TX2RX_LPBK;
    MCESD_FIELD digTxToRx      = F_N5C56GP5X4R1P1_D_TX2RX_LPBK;
    MCESD_FIELD puLb           = F_N5C56GP5X4R1P1_PU_LB;

    switch (path)
    {
    case N5C56GP5X4_PATH_EXTERNAL:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &digRxToTx, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &anaTxToRx, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &digTxToRx, 0));
        break;
    case N5C56GP5X4_PATH_FAR_END_LB:
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &dtlClampingSel, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rx2txNoStop, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rx2txRdStart, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxFoffsetDis, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &digRxToTx, 1));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &anaTxToRx, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &digTxToRx, 0));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &puLb, 0));
        break;
    default:
        return MCESD_FAIL; /* Unsupported parameter */
    }

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetDataPath
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT E_N5C56GP5X4_DATAPATH *path
)
{
    MCESD_FIELD digRxToTx = F_N5C56GP5X4R1P1_D_RX2TX_LPBK;
    MCESD_FIELD anaTxToRx = F_N5C56GP5X4R1P1_A_TX2RX_LPBK;
    MCESD_FIELD digTxToRx = F_N5C56GP5X4R1P1_D_TX2RX_LPBK;
    MCESD_U32 digRxToTxData, anaTxToRxData, digTxToRxData;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &digRxToTx, &digRxToTxData));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &anaTxToRx, &anaTxToRxData));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &digTxToRx, &digTxToRxData));

    if ((0 == digRxToTxData) && (0 == anaTxToRxData) && (0 == digTxToRxData))
        *path = N5C56GP5X4_PATH_EXTERNAL;
    else if ((1 == digRxToTxData) && (0 == anaTxToRxData) && (0 == digTxToRxData))
        *path = N5C56GP5X4_PATH_FAR_END_LB;
    else
        *path = N5C56GP5X4_PATH_UNKNOWN;

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetTemperature
(
    IN MCESD_DEV_PTR devPtr,
    OUT MCESD_32 *temperature
)
{
    MCESD_FIELD tsenData = F_N5C56GP5X4R1P1_TSEN_DATA;
    MCESD_U32 tsenDataData;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, 255 /* Unused */, &tsenData, &tsenDataData ));
    MCESD_32 codeValue = ConvertTwosComplementToI32(tsenDataData, 12);
    *temperature = (MCESD_32)((codeValue * N5C56GP5X4_TSENE_GAIN) + N5C56GP5X4_TSENE_OFFSET);

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_SetTxRxPolarity
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_POLARITY txPolarity,
    IN E_N5C56GP5X4_POLARITY rxPolarity
)
{
    MCESD_FIELD txdInv = F_N5C56GP5X4R1P1_TXD_INV;
    MCESD_FIELD rxdInv = F_N5C56GP5X4R1P1_RXD_INV;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txdInv, txPolarity));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxdInv, rxPolarity));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetTxRxPolarity
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT E_N5C56GP5X4_POLARITY *txPolarity,
    OUT E_N5C56GP5X4_POLARITY *rxPolarity
)
{
    MCESD_FIELD txdInv = F_N5C56GP5X4R1P1_TXD_INV;
    MCESD_FIELD rxdInv = F_N5C56GP5X4R1P1_RXD_INV;
    MCESD_U32 txdInvData, rxdInvData;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txdInv, &txdInvData));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxdInv, &rxdInvData));

    *txPolarity = (0 == txdInvData) ? N5C56GP5X4_POLARITY_NORMAL : N5C56GP5X4_POLARITY_INVERTED;
    *rxPolarity = (0 == rxdInvData) ? N5C56GP5X4_POLARITY_NORMAL : N5C56GP5X4_POLARITY_INVERTED;
    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_TxInjectError
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN MCESD_U8 errors
)
{
    MCESD_FIELD addErrEn  = F_N5C56GP5X4R1P1_ADD_ERR_EN;
    MCESD_FIELD addErrNum = F_N5C56GP5X4R1P1_ADD_ERR_NUM;

    if ((errors < 1) || (errors > 8))
        return MCESD_FAIL;

    /* 0 = 1 error, 1 = 2 errors, ... 7 = 8 errors */
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &addErrNum, errors - 1));

    /* Toggle F_N5C56GP5X4R1P1_ADD_ERR_EN 0 -> 1 to trigger error injection */
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &addErrEn, 0));
    MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 5));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &addErrEn, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 5));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &addErrEn, 0));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_SetTxRxPattern
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_PATTERN txPattern,
    IN E_N5C56GP5X4_PATTERN rxPattern,
    IN const char *txUserPattern,
    IN const char *rxUserPattern
)
{
    MCESD_FIELD txPatternSel        = F_N5C56GP5X4R1P1_TX_PAT_SEL;
    MCESD_FIELD rxPatternSel        = F_N5C56GP5X4R1P1_RX_PAT_SEL;
    MCESD_FIELD txUserPattern_79_48 = F_N5C56GP5X4R1P1_TX_UP_7948;
    MCESD_FIELD txUserPattern_47_16 = F_N5C56GP5X4R1P1_TX_UP_4716;
    MCESD_FIELD txUserPattern_15_0  = F_N5C56GP5X4R1P1_TX_UP_1500;
    MCESD_FIELD rxUserPattern_79_48 = F_N5C56GP5X4R1P1_RX_UP_7948;
    MCESD_FIELD rxUserPattern_47_16 = F_N5C56GP5X4R1P1_RX_UP_4716;
    MCESD_FIELD rxUserPattern_15_0  = F_N5C56GP5X4R1P1_RX_UP_1500;
    MCESD_FIELD txPAM2En            = F_N5C56GP5X4R1P1_TX_PAM2_EN;
    MCESD_FIELD rxPAM2En            = F_N5C56GP5X4R1P1_RX_PAM2_EN;
    MCESD_U32 txDataPAM2En, rxDataPAM2En;
    E_N5C56GP5X4_DATABUS_WIDTH txWidth, rxWidth;

    if (N5C56GP5X4_PAT_USER == txPattern)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txPatternSel, 1));
    }
    else
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txPatternSel, txPattern));
    }

    if (strlen(txUserPattern) > 0)
    {
        MCESD_U8 u8Pattern[10];

        MCESD_ATTEMPT(PatternStringToU8Array(txUserPattern, u8Pattern));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txUserPattern_79_48, MAKEU32FROMU8(u8Pattern[0], u8Pattern[1], u8Pattern[2], u8Pattern[3])));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txUserPattern_47_16, MAKEU32FROMU8(u8Pattern[4], u8Pattern[5], u8Pattern[6], u8Pattern[7])));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txUserPattern_15_0, MAKEU16FROMU8(u8Pattern[8], u8Pattern[9])));
    }

    if (N5C56GP5X4_PAT_USER == rxPattern)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxPatternSel, 1));
    }
    else
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxPatternSel, rxPattern));
    }

    if (strlen(rxUserPattern) > 0)
    {
        MCESD_U8 u8Pattern[10];

        MCESD_ATTEMPT(PatternStringToU8Array(rxUserPattern, u8Pattern));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxUserPattern_79_48, MAKEU32FROMU8(u8Pattern[0], u8Pattern[1], u8Pattern[2], u8Pattern[3])));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxUserPattern_47_16, MAKEU32FROMU8(u8Pattern[4], u8Pattern[5], u8Pattern[6], u8Pattern[7])));
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxUserPattern_15_0, MAKEU16FROMU8(u8Pattern[8], u8Pattern[9])));
    }

    MCESD_ATTEMPT(API_N5C56GP5X4_GetDataBusWidth(devPtr, lane, &txWidth, &rxWidth));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txPAM2En, &txDataPAM2En));
    if (0 == txDataPAM2En)
    {
        if ((N5C56GP5X4_PAT_JITTER_8T == txPattern) || (N5C56GP5X4_PAT_JITTER_4T == txPattern))
            txWidth = N5C56GP5X4_DATABUS_64BIT;
        else if ((N5C56GP5X4_PAT_JITTER_10T == txPattern) || (N5C56GP5X4_PAT_JITTER_5T == txPattern))
            txWidth = N5C56GP5X4_DATABUS_80BIT;
    }
    else
    {
        if ((N5C56GP5X4_PAT_JITTER_8T == txPattern) || (N5C56GP5X4_PAT_JITTER_4T == txPattern))
            txWidth = N5C56GP5X4_DATABUS_32BIT;
        else if ((N5C56GP5X4_PAT_JITTER_10T == txPattern) || (N5C56GP5X4_PAT_JITTER_5T == txPattern))
            txWidth = N5C56GP5X4_DATABUS_40BIT;
    }

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxPAM2En, &rxDataPAM2En));
    if (0 == rxDataPAM2En)
    {
        if ((N5C56GP5X4_PAT_JITTER_8T == rxPattern) || (N5C56GP5X4_PAT_JITTER_4T == rxPattern))
            rxWidth = N5C56GP5X4_DATABUS_64BIT;
        else if ((N5C56GP5X4_PAT_JITTER_10T == rxPattern) || (N5C56GP5X4_PAT_JITTER_5T == rxPattern))
            rxWidth = N5C56GP5X4_DATABUS_80BIT;
    }
    else
    {
        if ((N5C56GP5X4_PAT_JITTER_8T == rxPattern) || (N5C56GP5X4_PAT_JITTER_4T == rxPattern))
            rxWidth = N5C56GP5X4_DATABUS_32BIT;
        else if ((N5C56GP5X4_PAT_JITTER_10T == rxPattern) || (N5C56GP5X4_PAT_JITTER_5T == rxPattern))
            rxWidth = N5C56GP5X4_DATABUS_40BIT;
    }
    MCESD_ATTEMPT(API_N5C56GP5X4_SetDataBusWidth(devPtr, lane, txWidth, rxWidth));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetTxRxPattern
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT E_N5C56GP5X4_PATTERN *txPattern,
    OUT E_N5C56GP5X4_PATTERN *rxPattern,
    OUT char *txUserPattern,
    OUT char *rxUserPattern
)
{
    MCESD_FIELD txPatternSel = F_N5C56GP5X4R1P1_TX_PAT_SEL;
    MCESD_FIELD rxPatternSel = F_N5C56GP5X4R1P1_RX_PAT_SEL;
    MCESD_FIELD txUserPatternFieldArray[] = { F_N5C56GP5X4R1P1_TX_UP_7948 , F_N5C56GP5X4R1P1_TX_UP_4716 , F_N5C56GP5X4R1P1_TX_UP_1500 };
    MCESD_FIELD rxUserPatternFieldArray[] = { F_N5C56GP5X4R1P1_RX_UP_7948 , F_N5C56GP5X4R1P1_RX_UP_4716 , F_N5C56GP5X4R1P1_RX_UP_1500 };
    MCESD_32 txUserPatternFieldArrayCount = sizeof(txUserPatternFieldArray) / sizeof(MCESD_FIELD);
    MCESD_32 rxUserPatternFieldArrayCount = sizeof(rxUserPatternFieldArray) / sizeof(MCESD_FIELD);
    MCESD_32 i;
    MCESD_U32 txPatternSelData, rxPatternSelData, txUserPatternData, rxUserPatternData;
    MCESD_U8 u8Pattern[10];

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txPatternSel, &txPatternSelData));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxPatternSel, &rxPatternSelData));

    *txPattern = (1 == txPatternSelData) ? N5C56GP5X4_PAT_USER : txPatternSelData;
    *rxPattern = (1 == rxPatternSelData) ? N5C56GP5X4_PAT_USER : rxPatternSelData;

    for (i = 0; i < txUserPatternFieldArrayCount; i++)
    {
        MCESD_FIELD userPatternField = txUserPatternFieldArray[i];
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &userPatternField, &txUserPatternData));
        if (i != txUserPatternFieldArrayCount - 1)
        {
            u8Pattern[i * 4 + 0] = (MCESD_U8)(txUserPatternData >> 24);
            u8Pattern[i * 4 + 1] = (MCESD_U8)((txUserPatternData >> 16) & 0xFF);
            u8Pattern[i * 4 + 2] = (MCESD_U8)((txUserPatternData >> 8) & 0xFF);
            u8Pattern[i * 4 + 3] = (MCESD_U8)(txUserPatternData & 0xFF);
        }
        else
        {
            u8Pattern[i * 4 + 0] = (MCESD_8)(txUserPatternData >> 8);
            u8Pattern[i * 4 + 1] = (MCESD_8)(txUserPatternData & 0xFF);
        }
    }
    MCESD_ATTEMPT(GenerateStringFromU8Array(u8Pattern, txUserPattern));

    for (i = 0; i < rxUserPatternFieldArrayCount; i++)
    {
        MCESD_FIELD userPatternField = rxUserPatternFieldArray[i];
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &userPatternField, &rxUserPatternData));
        if (i != rxUserPatternFieldArrayCount - 1)
        {
            u8Pattern[i * 4 + 0] = (MCESD_U8)(rxUserPatternData >> 24);
            u8Pattern[i * 4 + 1] = (MCESD_U8)((rxUserPatternData >> 16) & 0xFF);
            u8Pattern[i * 4 + 2] = (MCESD_U8)((rxUserPatternData >> 8) & 0xFF);
            u8Pattern[i * 4 + 3] = (MCESD_U8)(rxUserPatternData & 0xFF);
        }
        else
        {
            u8Pattern[i * 4 + 0] = (MCESD_8)(rxUserPatternData >> 8);
            u8Pattern[i * 4 + 1] = (MCESD_8)(rxUserPatternData & 0xFF);
        }
    }
    MCESD_ATTEMPT(GenerateStringFromU8Array(u8Pattern, rxUserPattern));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_SetMSBLSBSwap
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_SWAP_MSB_LSB txSwapMsbLsb,
    IN E_N5C56GP5X4_SWAP_MSB_LSB rxSwapMsbLsb
)
{
    MCESD_FIELD txDSwap     = F_N5C56GP5X4R1P1_TXD_SWAP;
    MCESD_FIELD txDataSwap  = F_N5C56GP5X4R1P1_TXDATA_SWAP;
    MCESD_FIELD rxDSwap     = F_N5C56GP5X4R1P1_RXD_SWAP;
    MCESD_FIELD rxDataSwap  = F_N5C56GP5X4R1P1_RXDATA_SWAP;

    /* TX Swap MSB LSB */
    if (N5C56GP5X4_SWAP_NOT_USED != txSwapMsbLsb)
    {
        if (N5C56GP5X4_SWAP_DISABLE == txSwapMsbLsb)
        {
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txDataSwap, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txDSwap, 0));
        }
        else if (N5C56GP5X4_SWAP_PRECODER == txSwapMsbLsb)
        {
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txDataSwap, 1));
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txDSwap, 0));
        }
        else if (N5C56GP5X4_SWAP_POSTCODER == txSwapMsbLsb)
        {
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txDataSwap, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txDSwap, 1));
        }
    }

    /* RX Swap MSB LSB */
    if (N5C56GP5X4_SWAP_NOT_USED != rxSwapMsbLsb)
    {
        if (N5C56GP5X4_SWAP_DISABLE == rxSwapMsbLsb)
        {
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxDataSwap, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxDSwap, 0));
        }
        else if (N5C56GP5X4_SWAP_PRECODER == rxSwapMsbLsb)
        {
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxDataSwap, 1));
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxDSwap, 0));
        }
        else if (N5C56GP5X4_SWAP_POSTCODER == rxSwapMsbLsb)
        {
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxDataSwap, 0));
            MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxDSwap, 1));
        }
    }

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetMSBLSBSwap
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT E_N5C56GP5X4_SWAP_MSB_LSB *txSwapMsbLsb,
    OUT E_N5C56GP5X4_SWAP_MSB_LSB *rxSwapMsbLsb
)
{
    MCESD_FIELD txDSwap         = F_N5C56GP5X4R1P1_TXD_SWAP;
    MCESD_FIELD txDataSwap      = F_N5C56GP5X4R1P1_TXDATA_SWAP;
    MCESD_FIELD rxDSwap         = F_N5C56GP5X4R1P1_RXD_SWAP;
    MCESD_FIELD rxDataSwap      = F_N5C56GP5X4R1P1_RXDATA_SWAP;
    MCESD_U32 txDSwapData, txDataSwapData, rxDSwapData, rxDataSwapData;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txDSwap, &txDSwapData));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txDataSwap, &txDataSwapData));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxDSwap, &rxDSwapData));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxDataSwap, &rxDataSwapData));

    /* TX Swap MSB LSB */
    if ((0 == txDataSwapData) && (0 == txDSwapData))
    {
        *txSwapMsbLsb = N5C56GP5X4_SWAP_DISABLE;
    }
    else if ((1 == txDataSwapData) && (0 == txDSwapData))
    {
        *txSwapMsbLsb = N5C56GP5X4_SWAP_PRECODER;
    }
    else if ((0 == txDataSwapData) && (1 == txDSwapData))
    {
        *txSwapMsbLsb = N5C56GP5X4_SWAP_POSTCODER;
    }
    else
    {
        *txSwapMsbLsb = N5C56GP5X4_SWAP_NOT_USED;
    }

    /* RX Swap MSB LSB */
    if ((0 == rxDataSwapData) && (0 == rxDSwapData))
    {
        *rxSwapMsbLsb = N5C56GP5X4_SWAP_DISABLE;
    }
    else if ((1 == rxDataSwapData) && (0 == rxDSwapData))
    {
        *rxSwapMsbLsb = N5C56GP5X4_SWAP_PRECODER;
    }
    else if ((0 == rxDataSwapData) && (1 == rxDSwapData))
    {
        *rxSwapMsbLsb = N5C56GP5X4_SWAP_POSTCODER;
    }
    else
    {
        *rxSwapMsbLsb = N5C56GP5X4_SWAP_NOT_USED;
    }

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_SetGrayCode
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_GRAY_CODE txGrayCode,
    IN E_N5C56GP5X4_GRAY_CODE rxGrayCode
)
{
    MCESD_FIELD txGrayCodeEn    = F_N5C56GP5X4R1P1_TX_GRAY_EN;
    MCESD_FIELD	rxGrayCodeEn    = F_N5C56GP5X4R1P1_RX_GRAY_EN;

    /* TX Gray Code */
    if (N5C56GP5X4_GRAY_CODE_NOT_USED != txGrayCode)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &txGrayCodeEn, txGrayCode));
    }

    /* RX Gray Code */
    if (N5C56GP5X4_GRAY_CODE_NOT_USED != rxGrayCode)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &rxGrayCodeEn, rxGrayCode));
    }

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetGrayCode
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT E_N5C56GP5X4_GRAY_CODE *txGrayCode,
    OUT E_N5C56GP5X4_GRAY_CODE *rxGrayCode
)
{
    MCESD_FIELD txGrayCodeEn    = F_N5C56GP5X4R1P1_TX_GRAY_EN;
    MCESD_FIELD	rxGrayCodeEn    = F_N5C56GP5X4R1P1_RX_GRAY_EN;
    MCESD_U32 txGrayCodeData, rxGrayCodeData;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &txGrayCodeEn, &txGrayCodeData));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &rxGrayCodeEn, &rxGrayCodeData));

    /* TX Gray Code */
    *txGrayCode = 1 == txGrayCodeData ? N5C56GP5X4_GRAY_CODE_ENABLE : N5C56GP5X4_GRAY_CODE_DISABLE;

    /* RX Gray Code */
    *rxGrayCode = 1 == rxGrayCodeData ? N5C56GP5X4_GRAY_CODE_ENABLE : N5C56GP5X4_GRAY_CODE_DISABLE;

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_GetComparatorStats
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT S_N5C56GP5X4_PATTERN_STATISTICS *statistics
)
{
    MCESD_FIELD ptPass          = F_N5C56GP5X4R1P1_RX_PASS;
    MCESD_FIELD ptLock          = F_N5C56GP5X4R1P1_RX_LOCK;
    MCESD_FIELD ptCnt_47_32     = F_N5C56GP5X4R1P1_RX_CNT_4732;
    MCESD_FIELD ptCnt_31_0      = F_N5C56GP5X4R1P1_RX_CNT_3100;
    MCESD_FIELD errCnt_47_32    = F_N5C56GP5X4R1P1_RX_ERR_4732;
    MCESD_FIELD errCnt_31_0     = F_N5C56GP5X4R1P1_RX_ERR_3100;
    MCESD_U32 passData, lockData, errData_47_32, errData_31_0, data_47_32, data_31_0;
    E_N5C56GP5X4_DATABUS_WIDTH txWidth;
    E_N5C56GP5X4_DATABUS_WIDTH rxWidth;
    MCESD_U64 frames;
    MCESD_32 dataBus;

    if (statistics == NULL)
        return MCESD_FAIL;

    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &ptPass, &passData));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &ptLock, &lockData));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &ptCnt_47_32, &data_47_32));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &ptCnt_31_0, &data_31_0));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &errCnt_47_32, &errData_47_32));
    MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &errCnt_31_0, &errData_31_0));
    MCESD_ATTEMPT(API_N5C56GP5X4_GetDataBusWidth(devPtr, lane, &txWidth, &rxWidth));

    frames = ((MCESD_U64)data_47_32 << 32) + data_31_0;

    if (N5C56GP5X4_DATABUS_32BIT == rxWidth)
        dataBus = 32;
    else if (N5C56GP5X4_DATABUS_40BIT == rxWidth)
        dataBus = 40;
    else if (N5C56GP5X4_DATABUS_64BIT == rxWidth)
        dataBus = 64;
    else
        dataBus = 80;

    statistics->totalBits = frames * dataBus;
    statistics->totalErrorBits = ((MCESD_U64)errData_47_32 << 32) + errData_31_0;
    statistics->pass = (MCESD_BOOL)passData;
    statistics->lock = (MCESD_BOOL)lockData;

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_ResetComparatorStats
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane
)
{
    MCESD_FIELD ptCntRst = F_N5C56GP5X4R1P1_RX_CNT_RST;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptCntRst, 0));
    MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptCntRst, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptCntRst, 0));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_StartPhyTest
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane
)
{
    MCESD_FIELD ptTxPhyReadyForce   = F_N5C56GP5X4R1P1_TX_PHYREADY;
    MCESD_FIELD ptTxEnMode          = F_N5C56GP5X4R1P1_TX_EN_MODE;
    MCESD_FIELD ptTxEn              = F_N5C56GP5X4R1P1_TX_EN;
    MCESD_FIELD ptTxRst             = F_N5C56GP5X4R1P1_TX_RST;
    MCESD_FIELD ptRxPhyReadyForce   = F_N5C56GP5X4R1P1_RX_PHYREADY;
    MCESD_FIELD ptRxEnMode          = F_N5C56GP5X4R1P1_RX_EN_MODE;
    MCESD_FIELD ptRxEn              = F_N5C56GP5X4R1P1_RX_EN;
    MCESD_FIELD ptRxRst             = F_N5C56GP5X4R1P1_RX_RST;

    /* Tx */
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptTxPhyReadyForce, 0));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptTxEnMode, 2));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptTxEn, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptTxRst, 0));
    MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 5));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptTxRst, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 5));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptTxRst, 0));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptTxPhyReadyForce, 1));

    /* Rx */
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptRxPhyReadyForce, 0));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptRxEnMode, 2));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptRxEn, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptRxRst, 0));
    MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 5));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptRxRst, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 5));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptRxRst, 0));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptRxPhyReadyForce, 1));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_StopPhyTest
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane
)
{
    MCESD_FIELD ptTxPhyReadyForce   = F_N5C56GP5X4R1P1_TX_PHYREADY;
    MCESD_FIELD ptTxEn              = F_N5C56GP5X4R1P1_TX_EN;
    MCESD_FIELD ptRxPhyReadyForce   = F_N5C56GP5X4R1P1_RX_PHYREADY;
    MCESD_FIELD ptRxEn              = F_N5C56GP5X4R1P1_RX_EN;

    /* Rx */
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptRxEn, 0));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptRxPhyReadyForce, 0));

    /* Tx */
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptTxEn, 0));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &ptTxPhyReadyForce, 0));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_EOMInit
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane
)
{
    MCESD_FIELD esmPathSel      = F_N5C56GP5X4R1P1_ESM_PATH_SEL;
    MCESD_FIELD dfeAdaptSplrEn  = F_N5C56GP5X4R1P1_ESM_DFEADAPT;
    MCESD_FIELD adaptEven       = F_N5C56GP5X4R1P1_ADAPT_EVEN;
    MCESD_FIELD adaptOdd        = F_N5C56GP5X4R1P1_ADAPT_ODD;
    MCESD_FIELD esmEn           = F_N5C56GP5X4R1P1_ESM_EN;
    MCESD_FIELD eomReady        = F_N5C56GP5X4R1P1_EOM_READY;
    MCESD_FIELD esmLpnum        = F_N5C56GP5X4R1P1_ESM_LPNUM;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &esmPathSel, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &dfeAdaptSplrEn, 0xF));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &adaptEven, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &adaptOdd, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &esmEn, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_PollField(devPtr, lane, &eomReady, 1, 5000));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &esmLpnum, 0xFF));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_EOMFinalize
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane
)
{
    MCESD_FIELD esmEn = F_N5C56GP5X4R1P1_ESM_EN;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &esmEn, 0));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_EOMMeasPoint
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_EYE_TMB eyeTMB,
    IN MCESD_32 phase,
    IN MCESD_U8 voltage,
    OUT S_N5C56GP5X4_EOM_DATA *measurement
)
{
    MCESD_FIELD esmPhase            = F_N5C56GP5X4R1P1_ESM_PHASE;
    MCESD_FIELD esmVoltage          = F_N5C56GP5X4R1P1_ESM_VOLTAGE;
    MCESD_FIELD eomDfeCall          = F_N5C56GP5X4R1P1_EOM_DFE_CALL;
    MCESD_FIELD eomVldCntTP_39_32   = F_N5C56GP5X4R1P1_VC_T_P_3932;
    MCESD_FIELD eomVldCntTP_31_00   = F_N5C56GP5X4R1P1_VC_T_P_3100;
    MCESD_FIELD eomVldCntTN_39_32   = F_N5C56GP5X4R1P1_VC_T_N_3932;
    MCESD_FIELD eomVldCntTN_31_00   = F_N5C56GP5X4R1P1_VC_T_N_3100;
    MCESD_FIELD eomVldCntMP_39_32   = F_N5C56GP5X4R1P1_VC_M_P_3932;
    MCESD_FIELD eomVldCntMP_31_00   = F_N5C56GP5X4R1P1_VC_M_P_3100;
    MCESD_FIELD eomVldCntMN_39_32   = F_N5C56GP5X4R1P1_VC_M_N_3932;
    MCESD_FIELD eomVldCntMN_31_00   = F_N5C56GP5X4R1P1_VC_M_N_3100;
    MCESD_FIELD eomVldCntBP_39_32   = F_N5C56GP5X4R1P1_VC_B_P_3932;
    MCESD_FIELD eomVldCntBP_31_00   = F_N5C56GP5X4R1P1_VC_B_P_3100;
    MCESD_FIELD eomVldCntBN_39_32   = F_N5C56GP5X4R1P1_VC_B_N_3932;
    MCESD_FIELD eomVldCntBN_31_00   = F_N5C56GP5X4R1P1_VC_B_N_3100;
    MCESD_FIELD eomErrCntTP         = F_N5C56GP5X4R1P1_EOM_EC_T_P;
    MCESD_FIELD eomErrCntTN         = F_N5C56GP5X4R1P1_EOM_EC_T_N;
    MCESD_FIELD eomErrCntMP         = F_N5C56GP5X4R1P1_EOM_EC_M_P;
    MCESD_FIELD eomErrCntMN         = F_N5C56GP5X4R1P1_EOM_EC_M_N;
    MCESD_FIELD eomErrCntBP         = F_N5C56GP5X4R1P1_EOM_EC_B_P;
    MCESD_FIELD eomErrCntBN         = F_N5C56GP5X4R1P1_EOM_EC_B_N;
    MCESD_U32 vldCntPData_39_32, vldCntPData_31_00, vldCntNData_39_32, vldCntNData_31_00, errCntPData, errCntNData;

    if (NULL == measurement)
        return MCESD_FAIL;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &esmPhase, phase));
    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &esmVoltage, voltage));

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, lane, &eomDfeCall, 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_PollField(devPtr, lane, &eomDfeCall, 0, 1000));

    switch (eyeTMB)
    {
    case N5C56GP5X4_EYE_TOP:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomVldCntTP_39_32, &vldCntPData_39_32));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomVldCntTP_31_00, &vldCntPData_31_00));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomVldCntTN_39_32, &vldCntNData_39_32));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomVldCntTN_31_00, &vldCntNData_31_00));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomErrCntTP, &errCntPData));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomErrCntTN, &errCntNData));
        break;
    case N5C56GP5X4_EYE_MID:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomVldCntMP_39_32, &vldCntPData_39_32));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomVldCntMP_31_00, &vldCntPData_31_00));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomVldCntMN_39_32, &vldCntNData_39_32));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomVldCntMN_31_00, &vldCntNData_31_00));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomErrCntMP, &errCntPData));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomErrCntMN, &errCntNData));
        break;
    case N5C56GP5X4_EYE_BOT:
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomVldCntBP_39_32, &vldCntPData_39_32));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomVldCntBP_31_00, &vldCntPData_31_00));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomVldCntBN_39_32, &vldCntNData_39_32));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomVldCntBN_31_00, &vldCntNData_31_00));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomErrCntBP, &errCntPData));
        MCESD_ATTEMPT(API_N5C56GP5X4_ReadField(devPtr, lane, &eomErrCntBN, &errCntNData));
        break;
    default:
        return MCESD_FAIL;  /* Invalid eye */
    }

    measurement->phase = phase;
    measurement->voltage = voltage;
    measurement->upperBitCount = MAKEU64FROMU32((MCESD_U64)vldCntPData_39_32, vldCntPData_31_00);
    measurement->upperBitErrorCount = errCntPData;
    measurement->lowerBitCount = MAKEU64FROMU32((MCESD_U64)vldCntNData_39_32, vldCntNData_31_00);
    measurement->lowerBitErrorCount = errCntNData;

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_EOM1UIStepCount
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    OUT MCESD_U16 *phaseStepCount,
    OUT MCESD_U16 *voltageStepCount
)
{
    E_N5C56GP5X4_SERDES_SPEED speed;

    MCESD_ATTEMPT(API_N5C56GP5X4_GetTxRxBitRate(devPtr, lane, &speed));
    if ((N5C56GP5X4_SERDES_20P625G == speed) || (N5C56GP5X4_SERDES_25P78125G == speed) || (N5C56GP5X4_SERDES_28P125G == speed) || (N5C56GP5X4_SERDES_53P125G == speed) || (N5C56GP5X4_SERDES_56P25G == speed))
    {
        *phaseStepCount = 128;
    }
    else if (N5C56GP5X4_SERDES_10P3125G == speed)
    {
        *phaseStepCount = 256;
    }
    else if ((N5C56GP5X4_SERDES_5P15625G == speed) || (N5C56GP5X4_SERDES_6P25G == speed))
    {
        *phaseStepCount = 512;
    }
    else if ((N5C56GP5X4_SERDES_2P5G == speed) || (N5C56GP5X4_SERDES_3P125G == speed))
    {
        *phaseStepCount = 1024;
    }
    else
    {
        *phaseStepCount = 2048;
    }

    *voltageStepCount = 64;

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_EOMGetWidthHeight
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane,
    IN E_N5C56GP5X4_EYE_TMB eyeTMB,
    OUT MCESD_U16 *width,
    OUT MCESD_U16 *height
)
{
    MCESD_32 leftEdge, rightEdge, upperEdge, lowerEdge, maxPhase, minPhase, maxVoltage, phase, voltage;
    MCESD_U16 phaseStepCount, voltageStepCount;
    S_N5C56GP5X4_EOM_DATA measurement;

    MCESD_ATTEMPT(API_N5C56GP5X4_EOM1UIStepCount(devPtr, lane, &phaseStepCount, &voltageStepCount));

    maxPhase = phaseStepCount / 2;
    minPhase = -phaseStepCount / 2;
    maxVoltage = voltageStepCount;

    /* Set default edge values */
    leftEdge = minPhase;
    rightEdge = maxPhase;
    upperEdge = -maxVoltage;
    lowerEdge = maxVoltage - 1;

    MCESD_ATTEMPT(API_N5C56GP5X4_EOMInit(devPtr, lane));

    /* Scan Left */
    for (phase = 0; phase < maxPhase; phase++)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_EOMMeasPoint(devPtr, lane, eyeTMB, phase, 0, &measurement));

        /* Stop when no bits read or error */
        if ((0 == measurement.upperBitCount) || (measurement.upperBitErrorCount > 0) || (0 == measurement.lowerBitCount) || (measurement.lowerBitErrorCount > 0))
        {
            leftEdge = phase;
            break;
        }
    }

    /* Scan Right */
    for (phase = -1; phase > minPhase; phase--)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_EOMMeasPoint(devPtr, lane, eyeTMB, phase, 0, &measurement));

        /* Stop when no bits read or error */
        if ((0 == measurement.upperBitCount) || (measurement.upperBitErrorCount > 0) || (0 == measurement.lowerBitCount) || (measurement.lowerBitErrorCount > 0))
        {
            rightEdge = phase;
            break;
        }
    }

    /* Default if either edge did not update */
    if ((leftEdge == minPhase) || (rightEdge == maxPhase))
    {
        leftEdge = 0;
        rightEdge = 0;
    }

    /* Scan up and down */
    for (voltage = 0; voltage < maxVoltage; voltage++)
    {
        MCESD_ATTEMPT(API_N5C56GP5X4_EOMMeasPoint(devPtr, lane, eyeTMB, 0, (MCESD_U8)voltage, &measurement));

        /* Update once when no bits read or error */
        if ((upperEdge == -maxVoltage) && ((0 == measurement.upperBitCount) || (measurement.upperBitErrorCount > 0)))
        {
            upperEdge = voltage;
        }

        /* Update once when no bits read or error */
        if ((lowerEdge == (maxVoltage - 1)) && ((0 == measurement.lowerBitCount) || (measurement.lowerBitErrorCount > 0)))
        {
            lowerEdge = -voltage;
        }

        /* Stop when both edges are found */
        if ((upperEdge != -maxVoltage) && (lowerEdge != (maxVoltage - 1)))
        {
            break;
        }
    }

    /* Default if either edge did not update */
    if ((upperEdge == -maxVoltage) || (lowerEdge == (maxVoltage - 1)))
    {
        upperEdge = maxVoltage / 2;
        lowerEdge = -maxVoltage / 2;
    }

    *width = (MCESD_16)((leftEdge == rightEdge) ? 0 : (leftEdge - rightEdge - 1));
    *height = (MCESD_16)((upperEdge == lowerEdge) ? 0 : (upperEdge - lowerEdge - 1));
    MCESD_ATTEMPT(API_N5C56GP5X4_EOMFinalize(devPtr, lane));

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_ExecuteCDS
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane
)
{
    /* TODO */
    (void)devPtr;
    (void)lane;
    return MCESD_OK;
}

#endif /* N5C56GP5X4 */
