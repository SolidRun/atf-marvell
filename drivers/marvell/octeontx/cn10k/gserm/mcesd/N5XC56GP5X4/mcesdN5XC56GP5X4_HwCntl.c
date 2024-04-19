/*******************************************************************************
Copyright (C) 2019, Marvell International Ltd. and its affiliates
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains functions and global data for interfacing with the
host's hardware-specific IO in order to control and query the Marvell
5FFP_COMPHY_56G_PIPE5_X4_4PLL

These functions as written were tested with a USB-interface to
access Marvell's EVB. These functions must be ported to
the host's specific platform.
********************************************************************/
#include "mcesdTop.h"
#include "mcesdApiTypes.h"
#include "mcesdN5XC56GP5X4_Defs.h"
#include "mcesdN5XC56GP5X4_HwCntl.h"
#include "mcesdN5XC56GP5X4_RegRW.h"

#ifdef N5XC56GP5X4

MCESD_STATUS API_N5XC56GP5X4_HwWriteReg
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U32 reg,
    IN MCESD_U32 value
)
{
    if (devPtr->fmcesdWriteReg == NULL)
    {
        MCESD_DBG_ERROR("fmcesdWriteReg function pointer is NULL\n");
        return MCESD_FAIL;
    }

    if (devPtr->fmcesdWriteReg(devPtr, reg, value) == MCESD_FAIL)
    {
        MCESD_DBG_ERROR("fmcesdWriteReg 0x%X failed to write to dev=N5XC56GP5X4, reg=0x%X\n", value, reg);
        return MCESD_FAIL;
    }

    return MCESD_OK;
}

MCESD_STATUS API_N5XC56GP5X4_HwReadReg
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U32 reg,
    OUT MCESD_U32 *data
)
{
    if (devPtr->fmcesdReadReg == NULL)
    {
        MCESD_DBG_ERROR("fmcesdReadReg function pointer is NULL\n");
        return MCESD_FAIL;
    }

    if (devPtr->fmcesdReadReg(devPtr, reg, data) == MCESD_FAIL)
    {
        MCESD_DBG_ERROR("fmcesdReadReg failed from dev=N5XC56GP5X4, reg=0x%X\n", reg);
        return MCESD_FAIL;
    }

    return MCESD_OK;
}

MCESD_STATUS API_N5XC56GP5X4_HwSetPinCfg
(
    IN MCESD_DEV_PTR devPtr,
    IN E_N5XC56GP5X4_PIN pin,
    IN MCESD_U32 pinValue
)
{
    MCESD_U32 isolation = 0;

    if (devPtr->fmcesdSetPinCfg == NULL)
    {
        MCESD_DBG_ERROR("fmcesdSetPinCfg function pointer is NULL\n");
        return MCESD_FAIL;
    }

#ifdef N5XC56GP5X4_ISOLATION
    N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PHY_ISOLATE, 255 /* ignored */, isolation);
#endif

    if (!isolation)
    {
        if (devPtr->fmcesdSetPinCfg(devPtr, pin, pinValue) == MCESD_FAIL)
        {
            MCESD_DBG_ERROR("fmcesdSetPinCfg 0x%X failed to configure dev=N5XC56GP5X4, pin=0x%X\n", pinValue, pin);
            return MCESD_FAIL;
        }
    }
#ifdef N5XC56GP5X4_ISOLATION
    else
    {
        switch (pin)
        {
        case N5XC56GP5X4_PIN_RX_INIT0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RX_INIT, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RX_INIT, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RX_INIT1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RX_INIT, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RX_INIT, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RX_INIT2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RX_INIT, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RX_INIT, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RX_INIT3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RX_INIT, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RX_INIT, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PU_IVREF:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_IVREF, 255 /* ignored */, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_IVREF_FM_R, 255 /* ignored*/, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_IVREF, 255 /* ignored */, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_IVREF_FM_REG, 255 /* ignored*/, 1);
            }
            break;
        case N5XC56GP5X4_PIN_PU_TX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_TX, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_TX, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PU_TX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_TX, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_TX, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PU_TX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_TX, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_TX, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PU_TX3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_TX, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_TX, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PU_RX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_RX, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_RX, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PU_RX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_RX, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_RX, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PU_RX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_RX, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_RX, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PU_RX3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_RX, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_RX, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_TX_IDLE0:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TX_IDLE, 0, pinValue);
            break;
        case N5XC56GP5X4_PIN_TX_IDLE1:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TX_IDLE, 1, pinValue);
            break;
        case N5XC56GP5X4_PIN_TX_IDLE2:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TX_IDLE, 2, pinValue);
            break;
        case N5XC56GP5X4_PIN_TX_IDLE3:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TX_IDLE, 3, pinValue);
            break;
        case N5XC56GP5X4_PIN_PU_PLL0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_PLL, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_PLL, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PU_PLL1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_PLL, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_PLL, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PU_PLL2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_PLL, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_PLL, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PU_PLL3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_PLL, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PU_PLL, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PHY_MODE:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_MODE, 255 /* ignored */, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PHY_MODE, 255 /* ignored */, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_REFFREF_TX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_TX, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_TX, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_REFFREF_TX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_TX, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_TX, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_REFFREF_TX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_TX, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_TX, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_REFFREF_TX3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_TX, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_TX, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_REFFREF_RX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_RX, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_RX, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_REFFREF_RX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_RX, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_RX, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_REFFREF_RX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_RX, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_RX, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_REFFREF_RX3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_RX, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_RX, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_REFCLK_TX0:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_TX, 0, pinValue);
            break;
        case N5XC56GP5X4_PIN_REFCLK_TX1:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_TX, 1, pinValue);
            break;
        case N5XC56GP5X4_PIN_REFCLK_TX2:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_TX, 2, pinValue);
            break;
        case N5XC56GP5X4_PIN_REFCLK_TX3:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_TX, 3, pinValue);
            break;
        case N5XC56GP5X4_PIN_REFCLK_RX0:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_RX, 0, pinValue);
            break;
        case N5XC56GP5X4_PIN_REFCLK_RX1:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_RX, 1, pinValue);
            break;
        case N5XC56GP5X4_PIN_REFCLK_RX2:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_RX, 2, pinValue);
            break;
        case N5XC56GP5X4_PIN_REFCLK_RX3:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_RX, 3, pinValue);
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_TX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_GEN_TX, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PHY_GEN_TX, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_TX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_GEN_TX, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PHY_GEN_TX, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_TX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_GEN_TX, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PHY_GEN_TX, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_TX3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_GEN_TX, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PHY_GEN_TX, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_RX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_GEN_RX, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PHY_GEN_RX, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_RX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_GEN_RX, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PHY_GEN_RX, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_RX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_GEN_RX, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PHY_GEN_RX, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_RX3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_GEN_RX, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_PHY_GEN_RX, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_MCU_CLK:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_FREQ, 255 /* ignored */, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_FREQ, 255 /* ignored */, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_TX_TRAINEN0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_TX_TRAIN_EN, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_ENA, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_TX_TRAINEN1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_TX_TRAIN_EN, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_ENA, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_TX_TRAINEN2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_TX_TRAIN_EN, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_ENA, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_TX_TRAINEN3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_TX_TRAIN_EN, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_ENA, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RX_TRAINEN0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RX_TRAIN_EN, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RX_TRAIN_ENA, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RX_TRAINEN1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RX_TRAIN_EN, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RX_TRAIN_ENA, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RX_TRAINEN2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RX_TRAIN_EN, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RX_TRAIN_ENA, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RX_TRAINEN3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RX_TRAIN_EN, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RX_TRAIN_ENA, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_AVDD_SEL:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_AVDD_SEL, 255 /* ignored */, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_AVDD_SEL, 255 /* ignored */, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_PIPE_SEL:
            /* PHY ISOLATION must already be in SERDES Interface */
            break;
        case N5XC56GP5X4_PIN_SPD_CFG:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_SPD_CFG, 255 /* ignored */, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_SPD_CFG, 255 /* ignored */, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_TX_GRAY_CODE0:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TX_GRAY_EN, 0, pinValue);
            break;
        case N5XC56GP5X4_PIN_TX_GRAY_CODE1:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TX_GRAY_EN, 1, pinValue);
            break;
        case N5XC56GP5X4_PIN_TX_GRAY_CODE2:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TX_GRAY_EN, 2, pinValue);
            break;
        case N5XC56GP5X4_PIN_TX_GRAY_CODE3:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TX_GRAY_EN, 3, pinValue);
            break;
        case N5XC56GP5X4_PIN_RX_GRAY_CODE0:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RX_GRAY_EN, 0, pinValue);
            break;
        case N5XC56GP5X4_PIN_RX_GRAY_CODE1:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RX_GRAY_EN, 1, pinValue);
            break;
        case N5XC56GP5X4_PIN_RX_GRAY_CODE2:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RX_GRAY_EN, 2, pinValue);
            break;
        case N5XC56GP5X4_PIN_RX_GRAY_CODE3:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RX_GRAY_EN, 3, pinValue);
            break;
        case N5XC56GP5X4_PIN_TX_PRE_CODE0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_TXDATA_PRE_EN, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TXDATA_PRECODE_EN, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_TX_PRE_CODE1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_TXDATA_PRE_EN, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TXDATA_PRECODE_EN, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_TX_PRE_CODE2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_TXDATA_PRE_EN, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TXDATA_PRECODE_EN, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_TX_PRE_CODE3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_TXDATA_PRE_EN, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_TXDATA_PRECODE_EN, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RX_PRE_CODE0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RXDATA_PRE_EN, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RXDATA_PRECODE_EN, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RX_PRE_CODE1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RXDATA_PRE_EN, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RXDATA_PRECODE_EN, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RX_PRE_CODE2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RXDATA_PRE_EN, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RXDATA_PRECODE_EN, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RX_PRE_CODE3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RXDATA_PRE_EN, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RXDATA_PRECODE_EN, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RESET_TX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RESET_CORE_TX, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_TX, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RESET_TX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RESET_CORE_TX, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_TX, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RESET_TX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RESET_CORE_TX, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_TX, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RESET_TX3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RESET_CORE_TX, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_TX, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RESET_RX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RESET_CORE_RX, 0, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_RX, 0, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RESET_RX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RESET_CORE_RX, 1, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_RX, 1, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RESET_RX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RESET_CORE_RX, 2, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_RX, 2, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RESET_RX3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_RESET_CORE_RX, 3, pinValue);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_RX, 3, pinValue);
            }
            break;
        case N5XC56GP5X4_PIN_RSRVD_INPUT_RX0:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RSRVD_INPUT_RX, 0, pinValue);
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RSRVD_INPUT_RX_FM, 0, 1);
            break;
        case N5XC56GP5X4_PIN_RSRVD_INPUT_RX1:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RSRVD_INPUT_RX, 1, pinValue);
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RSRVD_INPUT_RX_FM, 1, 1);
            break;
        case N5XC56GP5X4_PIN_RSRVD_INPUT_RX2:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RSRVD_INPUT_RX, 2, pinValue);
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RSRVD_INPUT_RX_FM, 2, 1);
            break;
        case N5XC56GP5X4_PIN_RSRVD_INPUT_RX3:
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RSRVD_INPUT_RX, 3, pinValue);
            N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_RSRVD_INPUT_RX_FM, 3, 1);
            break;
        case N5XC56GP5X4_PIN_MCU_REMOTE_REQ0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTREQ, 0, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTREQ_FM, 0, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_REQ, 0, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_REQ_FM, 0, 1);
            }
            break;
        case N5XC56GP5X4_PIN_MCU_REMOTE_REQ1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTREQ, 1, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTREQ_FM, 1, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_REQ, 1, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_REQ_FM, 1, 1);
            }
            break;
        case N5XC56GP5X4_PIN_MCU_REMOTE_REQ2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTREQ, 2, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTREQ_FM, 2, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_REQ, 2, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_REQ_FM, 2, 1);
            }
            break;
        case N5XC56GP5X4_PIN_MCU_REMOTE_REQ3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTREQ, 3, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTREQ_FM, 3, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_REQ, 3, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_REQ_FM, 3, 1);
            }
            break;
        case N5XC56GP5X4_PIN_MCU_REMOTE_CMD0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTCMD, 0, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTCMD_FM, 0, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_CMD, 0, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_CMD_FM, 0, 1);
            }
            break;
        case N5XC56GP5X4_PIN_MCU_REMOTE_CMD1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTCMD, 1, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTCMD_FM, 1, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_CMD, 1, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_CMD_FM, 1, 1);
            }
            break;
        case N5XC56GP5X4_PIN_MCU_REMOTE_CMD2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTCMD, 2, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTCMD_FM, 2, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_CMD, 2, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_CMD_FM, 2, 1);
            }
            break;
        case N5XC56GP5X4_PIN_MCU_REMOTE_CMD3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTCMD, 3, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTCMD_FM, 3, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_CMD, 3, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_CMD_FM, 3, 1);
            }
            break;
        case N5XC56GP5X4_PIN_MCU_REMOTE_STA0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTSTA, 0, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTSTA_FM, 0, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_STA, 0, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_STA_FM, 0, 1);
            }
            break;
        case N5XC56GP5X4_PIN_MCU_REMOTE_STA1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTSTA, 1, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTSTA_FM, 1, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_STA, 1, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_STA_FM, 1, 1);
            }
            break;
        case N5XC56GP5X4_PIN_MCU_REMOTE_STA2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTSTA, 2, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTSTA_FM, 2, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_STA, 2, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_STA_FM, 2, 1);
            }
            break;
        case N5XC56GP5X4_PIN_MCU_REMOTE_STA3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTSTA, 3, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_RMTSTA_FM, 3, 1);
            }
            else
            {
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_STA, 3, pinValue);
                N5XC56GP5X4_WRITE_FIELD(devPtr, F_N5XC56GP5X4_MCU_REMOTE_STA_FM, 3, 1);
            }
            break;
        default:
            /* Pins with no isolation field mapping */
            if (devPtr->fmcesdSetPinCfg(devPtr, pin, pinValue) == MCESD_FAIL)
            {
                MCESD_DBG_ERROR("fmcesdSetPinCfg 0x%X failed to configure dev=N5XC56GP5X4, pin=0x%X\n", pinValue, pin);
                return MCESD_FAIL;
            }
        }
    }
#endif

    return MCESD_OK;
}

MCESD_STATUS API_N5XC56GP5X4_HwGetPinCfg
(
    IN MCESD_DEV_PTR devPtr,
    IN E_N5XC56GP5X4_PIN pin,
    OUT MCESD_U32 *pinValue
)
{
    MCESD_U32 isolation = 0;
    MCESD_U32 data;

    if (devPtr->fmcesdGetPinCfg == NULL)
    {
        MCESD_DBG_ERROR("fmcesdGetPinCfg function pointer is NULL\n");
        return MCESD_FAIL;
    }

#ifdef N5XC56GP5X4_ISOLATION
    N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PHY_ISOLATE, 255 /* ignored */, isolation);
#endif

    if (!isolation)
    {
        if (devPtr->fmcesdGetPinCfg(devPtr, pin, pinValue) == MCESD_FAIL)
        {
            MCESD_DBG_ERROR("fmcesdGetPinCfg failed from dev=N5XC56GP5X4, pin=0x%X\n", pin);
            return MCESD_FAIL;
        }
        (void)data; /* Data is unused in non-isolation mode */
    }
#ifdef N5XC56GP5X4_ISOLATION
    else
    {
        switch (pin)
        {
        case N5XC56GP5X4_PIN_RX_INITDON0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_INIT_DONE, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_INITDON1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_INIT_DONE, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_INITDON2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_INIT_DONE, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_INITDON3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_INIT_DONE, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_IVREF:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_IVREF, 255 /* ignored */, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_IVREF, 255 /* ignored */, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_TX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_TX, 0, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_TX, 0, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_TX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_TX, 1, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_TX, 1, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_TX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_TX, 2, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_TX, 2, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_TX3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_TX, 3, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_TX, 3, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_RX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_RX, 0, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_RX, 0, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_RX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_RX, 1, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_RX, 1, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_RX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_RX, 2, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_RX, 2, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_RX3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_RX, 3, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_RX, 3, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_IDLE0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_IDLE, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_IDLE1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_IDLE, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_IDLE2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_IDLE, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_IDLE3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_IDLE, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_PLL0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_PLL, 0, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_PLL, 0, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_PLL1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_PLL, 1, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_PLL, 1, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_PLL2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_PLL, 2, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_PLL, 2, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PU_PLL3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PU_PLL, 3, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PU_PLL, 3, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PHY_MODE:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_MODE_RD, 255 /* ignored */, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PHY_MODE_RD, 255 /* ignored */, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFFREF_TX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_TX, 0, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_TX, 0, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFFREF_TX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_TX, 1, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_TX, 1, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFFREF_TX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_TX, 2, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_TX, 2, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFFREF_TX3:

            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_TX, 3, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_TX, 3, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFFREF_RX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_RX, 0, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_RX, 0, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFFREF_RX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_RX, 1, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_RX, 1, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFFREF_RX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_RX, 2, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_RX, 2, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFFREF_RX3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_REF_FREF_RX, 3, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REF_FREF_RX, 3, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFCLK_TX0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_TX, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFCLK_TX1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_TX, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFCLK_TX2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_TX, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFCLK_TX3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_TX, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFCLK_RX0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_RX, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFCLK_RX1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_RX, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFCLK_RX2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_RX, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_REFCLK_RX3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_REFCLK_SEL_RX, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_TX0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_GEN_TX_RD, 0, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PIN_PHY_GEN_TX_RD, 0, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_TX1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_GEN_TX_RD, 1, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PIN_PHY_GEN_TX_RD, 1, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_TX2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_GEN_TX_RD, 2, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PIN_PHY_GEN_TX_RD, 2, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_TX3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_PHY_GEN_TX_RD, 3, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PIN_PHY_GEN_TX_RD, 3, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_RX0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PIN_PHY_GEN_RX_RD, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_RX1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PIN_PHY_GEN_RX_RD, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_RX2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PIN_PHY_GEN_RX_RD, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PHY_GEN_RX3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PIN_PHY_GEN_RX_RD, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_MCU_CLK:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_MCU_FREQ, 255 /* ignored */, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_MCU_FREQ, 255 /* ignored */, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_TRAINCO0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_COM, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_TRAINCO1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_COM, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_TRAINCO2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_COM, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_TRAINCO3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_COM, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_TRAINCO0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_TRAIN_COM, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_TRAINCO1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_TRAIN_COM, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_TRAINCO2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_TRAIN_COM, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_TRAINCO3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_TRAIN_COM, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_TRAINFA0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_FAI, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_TRAINFA1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_FAI, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_TRAINFA2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_FAI, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_TRAINFA3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_FAI, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_TRAINFA0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_TRAIN_FAI, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_TRAINFA1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_TRAIN_FAI, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_TRAINFA2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_TRAIN_FAI, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_TRAINFA3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_TRAIN_FAI, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_SQ_DET_LPF0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_SQ_OUT, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_SQ_DET_LPF1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_SQ_OUT, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_SQ_DET_LPF2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_SQ_OUT, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_SQ_DET_LPF3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_SQ_OUT, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_GRAY_CODE0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_GRAY_EN, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_GRAY_CODE1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_GRAY_EN, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_GRAY_CODE2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_GRAY_EN, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_GRAY_CODE3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_GRAY_EN, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_GRAY_CODE0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_GRAY_EN, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_GRAY_CODE1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_GRAY_EN, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_GRAY_CODE2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_GRAY_EN, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_GRAY_CODE3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RX_GRAY_EN, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_PRE_CODE0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_TXDATA_PRE_EN, 0, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TXDATA_PRECODE_EN, 0, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_PRE_CODE1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_TXDATA_PRE_EN, 1, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TXDATA_PRECODE_EN, 1, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_PRE_CODE2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_TXDATA_PRE_EN, 2, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TXDATA_PRECODE_EN, 2, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_PRE_CODE3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_TXDATA_PRE_EN, 3, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TXDATA_PRECODE_EN, 3, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_PRE_CODE0:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_RXDATA_PRE_EN, 0, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RXDATA_PRECODE_EN, 0, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_PRE_CODE1:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_RXDATA_PRE_EN, 1, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RXDATA_PRECODE_EN, 1, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_PRE_CODE2:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_RXDATA_PRE_EN, 2, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RXDATA_PRECODE_EN, 2, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RX_PRE_CODE3:
            if (devPtr->ipMajorRev >= 2)
            {
                /* RX.X >= R2.0 */
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4R2P0_RXDATA_PRE_EN, 3, data);
            }
            else
            {
                N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RXDATA_PRECODE_EN, 3, data);
            }
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PLL_READY_TX0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PLL_READY_TX, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PLL_READY_TX1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PLL_READY_TX, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PLL_READY_TX2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PLL_READY_TX, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PLL_READY_TX3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PLL_READY_TX, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PLL_READY_RX0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PLL_READY_RX, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PLL_READY_RX1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PLL_READY_RX, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PLL_READY_RX2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PLL_READY_RX, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_PLL_READY_RX3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_PLL_READY_RX, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RESET_ACK_TX0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_ACK_TX, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RESET_ACK_TX1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_ACK_TX, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RESET_ACK_TX2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_ACK_TX, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RESET_ACK_TX3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_ACK_TX, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RESET_ACK_RX0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_ACK_RX, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RESET_ACK_RX1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_ACK_RX, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RESET_ACK_RX2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_ACK_RX, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_RESET_ACK_RX3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_RESET_CORE_ACK_RX, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_MCU_LOCAL_ACK0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_MCU_LOCAL_ACK, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_MCU_LOCAL_ACK1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_MCU_LOCAL_ACK, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_MCU_LOCAL_ACK2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_MCU_LOCAL_ACK, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_MCU_LOCAL_ACK3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_MCU_LOCAL_ACK, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_MCU_LOCAL_STA0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_MCU_LOCAL_STATUS, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_MCU_LOCAL_STA1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_MCU_LOCAL_STATUS, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_MCU_LOCAL_STA2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_MCU_LOCAL_STATUS, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_MCU_LOCAL_STA3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_MCU_LOCAL_STATUS, 3, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_TRAIN_ERROR0:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_ERROR, 0, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_TRAIN_ERROR1:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_ERROR, 1, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_TRAIN_ERROR2:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_ERROR, 2, data);
            *pinValue = data;
            break;
        case N5XC56GP5X4_PIN_TX_TRAIN_ERROR3:
            N5XC56GP5X4_READ_FIELD(devPtr, F_N5XC56GP5X4_TX_TRAIN_ERROR, 3, data);
            *pinValue = data;
            break;
        default:
            /* Pins with no isolation field mapping */
            if (devPtr->fmcesdGetPinCfg(devPtr, pin, pinValue) == MCESD_FAIL)
            {
                MCESD_DBG_ERROR("fmcesdGetPinCfg failed from dev=N5XC56GP5X4, pin=0x%X\n", pin);
                return MCESD_FAIL;
            }
        }
    }
#endif

    return MCESD_OK;
}

MCESD_STATUS API_N5XC56GP5X4_Wait
(
    IN MCESD_DEV_PTR devPtr,
    IN MCESD_U32 ms
)
{
    if (devPtr->fmcesdWaitFunc == NULL)
    {
        MCESD_DBG_ERROR("fmcesdWaitFunc function pointer is NULL\n");
        return MCESD_FAIL;
    }

    if (devPtr->fmcesdWaitFunc(devPtr, ms) == MCESD_FAIL)
    {
        MCESD_DBG_ERROR("fmcesdWaitFunc failed from dev=N5XC56GP5X4\n");
        return MCESD_FAIL;
    }

    return MCESD_OK;
}

#endif /* N5XC56GP5X4 */