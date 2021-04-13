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
#include "mcesdN5C56GP5X4_Defs.h"
#include "mcesdN5C56GP5X4_API.h"
#include "mcesdN5C56GP5X4_RegRW.h"
#include "mcesdN5C56GP5X4_FwDownload.h"
#include "mcesdN5C56GP5X4_HwCntl.h"
#include "mcesdN5C56GP5X4_DeviceInit.h"

#ifdef N5C56GP5X4

/* Forward internal function prototypes used only in this module */
static MCESD_STATUS INT_N5C56GP5X4_SetAvddSel(IN MCESD_DEV_PTR devPtr, IN E_N5C56GP5X4_AVDD avdd);
static MCESD_STATUS INT_N5C56GP5X4_SetPipeSel(IN MCESD_DEV_PTR devPtr, IN MCESD_BOOL state);

MCESD_STATUS API_N5C56GP5X4_PowerOnSeq
(
    IN MCESD_DEV_PTR devPtr,
    IN S_N5C56GP5X4_PowerOn powerOn
)
{
    MCESD_U8 lane;

    /* Download MCU Firmware */
    if (powerOn.downloadFw)
    {
        MCESD_ATTEMPT(powerOn.fwDownload(devPtr));
        MCESD_ATTEMPT(API_N5C56GP5X4_Wait(devPtr, 1));
    }

    /* Make sure PHY PLLs, Transmitter and Receiver powered is off for all lanes */
    for (lane = 0; lane < N5C56GP5X4_TOTAL_LANES; lane++)
    {
        if (powerOn.powerLaneMask & (1 << lane))
            MCESD_ATTEMPT(API_N5C56GP5X4_PowerOffLane(devPtr, lane));
    }

    /* Set PIN_AVDD_SEL */
    MCESD_ATTEMPT(INT_N5C56GP5X4_SetAvddSel(devPtr, powerOn.avdd));

    /* Set PIN_PIPE_SEL */
    MCESD_ATTEMPT(INT_N5C56GP5X4_SetPipeSel(devPtr, MCESD_FALSE));

    /* Configure Reference Frequency and reference clock source group */
    for (lane = 0; lane < N5C56GP5X4_TOTAL_LANES; lane++)
    {
        if (powerOn.powerLaneMask & (1 << lane))
            MCESD_ATTEMPT(API_N5C56GP5X4_SetRefFreq(devPtr, lane, powerOn.refFreq, powerOn.refClkSel));
    }

    /* Set SERDES Mode */
    MCESD_ATTEMPT(API_N5C56GP5X4_SetPhyMode(devPtr, N5C56GP5X4_PHYMODE_SERDES));

    /* Set PIN_SPD_CFG */
    MCESD_ATTEMPT(INT_N5C56GP5X4_SetSpdCfg(devPtr, powerOn.spdCfg));

    /* Configure TX and RX bitrates for all lanes */
    for (lane = 0; lane < N5C56GP5X4_TOTAL_LANES; lane++)
    {
        if (powerOn.powerLaneMask & (1 << lane))
            MCESD_ATTEMPT(API_N5C56GP5X4_SetTxRxBitRate(devPtr, lane, powerOn.speed));
    }

    /* Disable TX Output for all lanes */
    for (lane = 0; lane < N5C56GP5X4_TOTAL_LANES; lane++)
    {
        if (powerOn.powerLaneMask & (1 << lane))
            MCESD_ATTEMPT(API_N5C56GP5X4_SetTxOutputEnable(devPtr, lane, MCESD_FALSE));
    }

    /* Power up current and voltage reference */
    MCESD_ATTEMPT(API_N5C56GP5X4_SetPowerIvRef(devPtr, MCESD_TRUE));

    /* Set Data Bus Width for all lanes */
    for (lane = 0; lane < N5C56GP5X4_TOTAL_LANES; lane++)
    {
        if (powerOn.powerLaneMask & (1 << lane))
            MCESD_ATTEMPT(API_N5C56GP5X4_SetDataBusWidth(devPtr, lane, powerOn.dataBusWidth, powerOn.dataBusWidth));
    }

    /* Power on PHY PLLs, Transmitter and Receiver for all lanes*/
    for (lane = 0; lane < N5C56GP5X4_TOTAL_LANES; lane++)
    {
        if (powerOn.powerLaneMask & (1 << lane))
        {
            MCESD_ATTEMPT(API_N5C56GP5X4_SetPowerPLL(devPtr, lane, MCESD_TRUE));
            if (powerOn.initTx)
                MCESD_ATTEMPT(API_N5C56GP5X4_SetPowerTx(devPtr, lane, MCESD_TRUE));
            if (powerOn.initRx)
                MCESD_ATTEMPT(API_N5C56GP5X4_SetPowerRx(devPtr, lane, MCESD_TRUE));
        }
    }

    /* Enable TX Output for all lanes */
    if (powerOn.txOutputEn)
    {
        for (lane = 0; lane < N5C56GP5X4_TOTAL_LANES; lane++)
        {
            if (powerOn.powerLaneMask & (1 << lane))
                MCESD_ATTEMPT(API_N5C56GP5X4_SetTxOutputEnable(devPtr, lane, MCESD_TRUE));
        }
    }

    /* Toggle RX_INIT */
    if (powerOn.initRx)
    {
        for (lane = 0; lane < N5C56GP5X4_TOTAL_LANES; lane++)
        {
            if (powerOn.powerLaneMask & (1 << lane))
                MCESD_ATTEMPT(API_N5C56GP5X4_RxInit(devPtr, lane));
        }
    }

    printf("power on done!\n");

    return MCESD_OK;
}

MCESD_STATUS API_N5C56GP5X4_PowerOffLane
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U8 lane
)
{
    MCESD_ATTEMPT(API_N5C56GP5X4_SetPowerPLL(devPtr, lane, MCESD_FALSE));
    MCESD_ATTEMPT(API_N5C56GP5X4_SetPowerTx(devPtr, lane, MCESD_FALSE));
    MCESD_ATTEMPT(API_N5C56GP5X4_SetPowerRx(devPtr, lane, MCESD_FALSE));

    return MCESD_OK;
}

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS INT_N5C56GP5X4_SetAvddSel
(
    IN MCESD_DEV_PTR devPtr,
    IN E_N5C56GP5X4_AVDD avdd
)
{
    MCESD_FIELD avddSel = F_N5C56GP5X4R1P1_AVDD_SEL;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, 255 /* ignored */, &avddSel, avdd));

    return MCESD_OK;
}
#else
MCESD_STATUS INT_N5C56GP5X4_SetAvddSel
(
    IN MCESD_DEV_PTR devPtr,
    IN E_N5C56GP5X4_AVDD avdd
)
{
    MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_AVDD_SEL, avdd));

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS INT_N5C56GP5X4_SetPipeSel
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_BOOL state
)
{
    /* PHY ISOLATION must already be in SERDES Interface */
    (void)devPtr;
    (void)state;

    return MCESD_OK;
}
#else
MCESD_STATUS INT_N5C56GP5X4_SetPipeSel
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_BOOL state
)
{
    MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_PIPE_SEL, state));

    return MCESD_OK;
}
#endif

#ifdef N5C56GP5X4_ISOLATION
MCESD_STATUS INT_N5C56GP5X4_SetSpdCfg
(
    IN MCESD_DEV_PTR devPtr,
    IN E_N5C56GP5X4_SPD_CFG cfg
)
{
    MCESD_FIELD spdCfg = F_N5C56GP5X4R1P1_SPD_CFG;

    MCESD_ATTEMPT(API_N5C56GP5X4_WriteField(devPtr, 255 /* ignored */, &spdCfg, cfg));

    return MCESD_OK;
}
#else
MCESD_STATUS INT_N5C56GP5X4_SetSpdCfg
(
    IN MCESD_DEV_PTR devPtr,
    IN E_N5C56GP5X4_SPD_CFG cfg
)
{
    MCESD_ATTEMPT(API_N5C56GP5X4_HwSetPinCfg(devPtr, N5C56GP5X4_PIN_SPD_CFG, cfg));

    return MCESD_OK;
}
#endif

#endif /* N5C56GP5X4 */
