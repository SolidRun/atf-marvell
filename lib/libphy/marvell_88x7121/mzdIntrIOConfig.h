/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains functions, data structures and definitions for All
levels, interrupt functions, Real-time Status and I/O pin mode
configurations for the Marvell X7121 PHY.
********************************************************************/
#ifndef MZD_INTR_IO_H
#define MZD_INTR_IO_H

#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

/******************************************************************************
 DO NOT modify enumerations - order and values are closely coupled to the code
 and register bit definitions.
******************************************************************************/
typedef enum _MZD_PIN_ID
{
    MZD_PIN_GPIO1 = 0,
    MZD_PIN_GPIO2,
    MZD_PIN_GPIO3,
    MZD_PIN_GPIO4,
    MZD_PIN_CLK_OUT_SE1,
    MZD_PIN_CLK_OUT_SE2,
    MZD_PIN_CLK_OUT_SE3,   /* CLK_OUT_DIFF_N */
    MZD_PIN_CLK_OUT_SE4,   /* CLK_OUT_DIFF_P */
    MZD_PIN_INTn,
    MZD_PIN_NUMS
} MZD_PIN_ID;

typedef enum _MZD_PIN_MODE
{
    MZD_PIN_MODE_GPIO = 0,
    MZD_PIN_MODE_LED,
    MZD_PIN_MODE_INTR,
    MZD_PIN_MODE_RCLK,
    MZD_PIN_MODE_NUMS
} MZD_PIN_MODE;

/******************************************************************************
    Interrupt overview
    ------------------

The MZD device has one interrupt pin INTn(Chip Level interrupts) per device. All interrupt sources
are connected and aggregated to the same interrupt PIN.

The MZD interrupt has two levels. Chip Level interrupts (Level 1, aggregates interrupts
from all sources) and Unit Level Interrupts (Level 2).
For example, PCS units have interrupt generated on each lane for Link Change,
Fault Signal, Remote/Local Fault, RM FIFO Interrupt, etc.

The polarity of INTn itself can be inverted when in the MZD_PIN_MODE_INTR or force
the pin active by calling the mzdSetGlobalInterruptCntl() function. This pin may also be set
to be OPEN DRAIN.

A structure passed-in by user instruct the API which interrupt source status is going to read in
the mzdGetIntrSrcStatus(). If user don't plan to use the INTn pin to implement an interrupt handler
and poll all interrupt sources, they may setting all fields in the passed-in masking structure
to implement a polled interrupt handler instead.

    - Chip Level Interrupt (INTn PIN, Level 1)
    ----- mzdGetIntrSrcStatus()
    |
    ----- mzdGetGlobalInterruptCntl()
    |
    ----- mzdGetGlobalInterruptEnable()
    |
    ----- mzdGetUnmaskedInterrupts()
        |
        - Unit Level Interrupts (Level 2)
        ---- mzdGetPCSInterruptEnable()
        |
        ---- mzdGetPCSInterruptStatus()
        |
        ---- mzdGetGPIOInterruptEnable()
        |
        ---- mzdGetGPIOInterruptStatus()
        |
        ---- mzdGetMacLaneInterruptStatus()
        |
        ---- mzdGetMacTodInterruptStatus()
        |
        ---- mzdGetMacGlobalInterruptStatus()

The upper level interrupt status will retain the lower level interrupt status until
the lower level interrupt is cleared by reading it. The Unit level interrupt
enable only controls if the interrupt will be sent to the Chip Level interrupt status
register. It will not affect the Unit level interrupt status.

******************************************************************************/
/* Please refers to the PCS interrupt bit definitions for Flag1 and Flag2 */
typedef struct _MZD_PCS_UNIT_INTR
{
    MZD_U16 srcFlag1;
    MZD_U16 srcFlag2; /* only valid for 40GBR to 400GBR modes */
    MZD_BOOL apAutoNeg;
    MZD_BOOL excessiveLinkErr;
} MZD_PCS_UNIT_INTR, *PMZD_PCS_UNIT_INTR;

typedef struct _MZD_SERDES_UNIT_INTR
{
    MZD_U32 powerCntl;
    MZD_U32 speedCntl;
    MZD_U32 rxLane;
    MZD_U32 autoNeg;
} MZD_SERDES_UNIT_INTR;

typedef struct _MZD_MAC_UNIT_INTR
{
    MZD_U32 todOverrun;
    MZD_U32 todUnderrun;
    MZD_U32 global;
    MZD_U32 lane[MZD_NUM_PORTS_PER_MAC][MZD_NUM_LANES];
} MZD_MAC_UNIT_INTR, *PMZD_MAC_UNIT_INTR;

typedef struct _MZD_PCS_CHIP_INTR
{
    MZD_PCS_UNIT_INTR line;
    MZD_PCS_UNIT_INTR host;
} MZD_PCS_CHIP_INTR;

typedef struct _MZD_MAC_CHIP_INTR
{
    MZD_MAC_UNIT_INTR lineMac;
    MZD_MAC_UNIT_INTR hostMac;
} MZD_MAC_CHIP_INTR;

typedef struct _MZD_SERDES_CHIP_INTR
{
    MZD_SERDES_UNIT_INTR line;
    MZD_SERDES_UNIT_INTR host;
} MZD_SERDES_CHIP_INTR;

typedef struct _MZD_GLOBAL_CHIP_INTR
{
    MZD_U16 globalAggregatedIntr1; /* Not applicable on chip revision MZD_REV_A0 to use this for masking interrupt */
    MZD_U16 globalAggregatedIntr2; /* Not applicable on chip revision MZD_REV_A0 to use this for masking interrupt */
    MZD_BOOL onChipProcIntr;
    MZD_BOOL gpioIntr[MZD_PIN_NUMS];
    MZD_MAC_CHIP_INTR macIntr[MZD_NUM_MAC];
    MZD_SERDES_CHIP_INTR serdesIntr[MZD_MAX_PORTS];
    MZD_PCS_CHIP_INTR pcsIntr[MZD_MAX_PORTS][MZD_NUM_LANES];
} MZD_GLOBAL_CHIP_INTR, *PMZD_GLOBAL_CHIP_INTR;

/* globalAggregatedIntr1 bit definitions */
#define MZD_GLOBAL_HOST_MAC1_INTR        (1<<15)
#define MZD_GLOBAL_HOST_MAC0_INTR        (1<<14)
#define MZD_GLOBAL_LINE_MAC1_INTR        (1<<13)
#define MZD_GLOBAL_LINE_MAC0_INTR        (1<<12)
#define MZD_GLOBAL_MAC_SEC1_INTR         (1<<11)
#define MZD_GLOBAL_MAC_SEC0_INTR         (1<<10)
#define MZD_GLOBAL_GPIO_INTR             (1<<9)
#define MZD_GLOBAL_ON_CHIP_PROC_INTR     (1<<8)   /* On-chip processor interrupt */
#define MZD_GLOBAL_HOST_P3_SERDES_INTR   (1<<7)
#define MZD_GLOBAL_HOST_P2_SERDES_INTR   (1<<6)
#define MZD_GLOBAL_HOST_P1_SERDES_INTR   (1<<5)
#define MZD_GLOBAL_HOST_P0_SERDES_INTR   (1<<4)
#define MZD_GLOBAL_LINE_P3_SERDES_INTR   (1<<3)
#define MZD_GLOBAL_LINE_P2_SERDES_INTR   (1<<2)
#define MZD_GLOBAL_LINE_P1_SERDES_INTR   (1<<1)
#define MZD_GLOBAL_LINE_P0_SERDES_INTR   (1<<0)

/* globalAggregatedIntr2 bit definitions */
#define MZD_GLOBAL_HOST_P3_PCS_INTR      (1<<7)
#define MZD_GLOBAL_HOST_P2_PCS_INTR      (1<<6)
#define MZD_GLOBAL_HOST_P1_PCS_INTR      (1<<5)
#define MZD_GLOBAL_HOST_P0_PCS_INTR      (1<<4)
#define MZD_GLOBAL_LINE_P3_PCS_INTR      (1<<3)
#define MZD_GLOBAL_LINE_P2_PCS_INTR      (1<<2)
#define MZD_GLOBAL_LINE_P1_PCS_INTR      (1<<1)
#define MZD_GLOBAL_LINE_P0_PCS_INTR      (1<<0)

/*******************************************************************************
MZD_STATUS mzdGetIntrSrcStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_GLOBAL_CHIP_INTR intrSelector,
    OUT MZD_BOOL *forceInterrupt,
    OUT PMZD_GLOBAL_CHIP_INTR intrSrc
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    intrSelector - select which interrupt sources should be checked.
             Set the field to non-zero and the API will check the related source.
             This DOES NOT mask/unmask any interrupt.
             Also see the description of mzdGetUnmaskedInterrupts().

 Outputs:
    forceInterrupt - returns MZD_TRUE if force interrupt is set, MZD_FALSE if not set
    intrSrc - returns a structure containing all interrupt source status that has non-zero
              field in the passed-in intrSelector structure. If a field is 0 in the intrSelector,
              the value of the related interrupt in this structure is invalid.

 Returns:
    MZD_OK   if there were no errors
    MZD_FAIL if there were errors

 Description:
    This function is provided to read interrupt status registers corresponding to any
    interrupt sources selected by a non-zero value in the "intrSelector" input. This could
    be according to interrupts enabled (not masked), but not necessarily.

    To read all interrupt status registers, set the "intrSelector" to all non-zero. When
    setting the intrSelector, user must set the global interrupt bit first when setting the
    unit level interrupt source. e.g. intrSelector.pcsIntr[1][0].host.srcFlag1 is set, then the bit 5
    of intrSelector.globalAggregatedIntr2 also need to be set to non-zero.

    The purpose of the "intrSelector" is to reduce MDIO traffic and increase execution
    speed of this function in the case only few interrupt status registers are desired
    to be read. Also, it can be used to check only those status registers
    which have interrupts enabled. Call mzdGetUnmaskedInterrupts() to set the intrSelector
    fields with all currently enabled interrupts automatically.

    forceInterrupt is OR with other interrupts source to force the INTn pin active.
    When forceInterrupt is set, other interrupt sources can still propagate their
    status to the chip level if the interrupt is unmasked.

    If (intrSrc.globalAggregatedIntr1 & MZD_GLOBAL_MAC_SEC0_INTR) != 0 or
       (intrSrc.globalAggregatedIntr1 & MZD_GLOBAL_MAC_SEC1_INTR) != 0,
       please refer to mzdMACsecSampleInterrupt() for the Unit Level(Level2) MACsec interrupt.

    Please check the interrupt definition of the corresponding unit to identify
    the Unit-level(Level 2) interrupt source(e.g. PCS).

    For PCS and MAC interrupts, the currently selected mode for those lane(s) is checked and
    the corresponding PCS interrupt status registers are read for that particular PCS.

 Side effects:
    None.

 Notes/Warnings:
    (work-in-progress)
    Currently Serdes Units interrupts and On-chip processor interrupt is not supported in the Level 2.

    Calling this API will clear all read-to-clear interrupt status registers read
    (i.e. register that interrupt sources are set to non-zero in the input "intrSelector").

    Save the returned status to process the corresponding interrupt request in order
    to clear the interrupt.

 Sample: Check PCS Host interrupt on 3rd mdioPort, using MZD_P100UP2 mode

    MZD_DEV_PTR pDev;
    MZD_U16 mdioPort = 2;
    MZD_GLOBAL_CHIP_INTR intrSelector;
    MZD_BOOL forceInterrupt;
    MZD_GLOBAL_CHIP_INTR intrSrc;
    MZD_U16 laneOffset;

    mzdMemSet(&intrSelector, 0, sizeof(MZD_GLOBAL_CHIP_INTR));

    if (pDev->chipRevision != MZD_REV_A0)
    {
        intrSelector.globalAggregatedIntr2 |= MZD_GLOBAL_HOST_P2_PCS_INTR;
    }

    for (laneOffset = 0; laneOffset < MZD_NUM_LANES; laneOffset+=2)
    {
        intrSelector.pcsIntr[mdioPort][laneOffset].host.srcFlag1 = 0xFFFF;
    }
    // Alternatively, user can call mzdGetUnmaskedInterrupts() to read unmasked interrupt
    // after using mzdSetPCSInterruptEnable() to enable PCS interrupt.
    // On B0 and after, user must call mzdSetGlobalInterruptEnable() also to enable the
    // global interrupt mask

    // the srcFlag1 will be cleared after reading this lane
    MZD_ATTEMPT(mzdGetIntrSrcStatus(pDev, intrSelector, &forceInterrupt, &intrSrc));

    for (laneOffset = 0; laneOffset < MZD_NUM_LANES; laneOffset+=2)
    {
        if (intrSrc.pcsIntr[mdioPort][laneOffset].host.srcFlag1 == 0)
        {
            // no srcFlag1 interrupt for host side port 2 on this lane
        }
        else
        {
            // using the 100GBASER PCS bit definitions for Flag1 to handle the interrupt here
        }
    }

    There are two flags for 100GBASER PCS interrupts. Please refer to the
    bit definitions above API mzdSetPCSInterruptEnable() for details.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetIntrSrcStatus   /* work-in-progress */
(
    IN MZD_DEV_PTR pDev,
    IN MZD_GLOBAL_CHIP_INTR intrSelector,
    OUT MZD_BOOL *forceInterrupt,
    OUT PMZD_GLOBAL_CHIP_INTR intrSrc
);

#define MZD_INTR_POLARITY_DEFAULT         0x0  /* Active - drive INTn low, Inactive - drive INTn high */
#define MZD_INTR_POLARITY_INVERT          0x1  /* Active - drive INTn high, Inactive - drive INTn low */
/*******************************************************************************
MZD_STATUS mzdSetGlobalInterruptCntl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_BOOL openDrain,
    IN MZD_U16 intrPolarity,
    IN MZD_BOOL forceInterrupt
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    openDrain - MZD_TRUE enable the open drain, MZD_FALSE disable the open drain
    intrPolarity - controls the INTn pin interrupt polarity
         MZD_INTR_POLARITY_DEFAULT
         MZD_INTR_POLARITY_INVERT
         See the definitions above.

    forceInterrupt - MZD_TRUE will force the interrupt on the INTn pin,
                     MZD_FALSE will set the interrupt back to normal mode
                     (depends on the interrupt inputs).

 Outputs:
    None

 Returns:
    MZD_OK   if there were no errors
    MZD_FAIL if there were errors

 Description:
    This function sets the global interrupt control bits for the INTn pin to control
    the interrupt polarity and open drain.

    User can either call this API or mzdSetPinMode() to control the open drain for INTn.

    Set forceInterrupt to MZD_TRUE to force the interrupt asserted, and MZD_FALSE to have it
    back in the default mode where it depends on the interrupts whether it is asserted or not.

    If INTn pin is in the MZD_PIN_MODE_RCLK, the settings in this API do not change RCLK
    behavior.

 Side effects:
    None.

 Notes/Warnings:
    None.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetGlobalInterruptCntl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_BOOL openDrain,
    IN MZD_U16 intrPolarity,
    IN MZD_BOOL forceInterrupt
);

/*******************************************************************************
MZD_STATUS mzdGetGlobalInterruptCntl
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_BOOL *openDrain,
    OUT MZD_U16 *intrPolarity,
    OUT MZD_BOOL *forceInterrupt
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call

 Outputs:
    openDrain - MZD_TRUE indicates the open drain is enabled,
                MZD_FALSE indicates the open drain is disabled

    intrPolarity - controls the INTn pin interrupt polarity.
         MZD_INTR_POLARITY_DEFAULT
         MZD_INTR_POLARITY_INVERT
         See the definitions above.

    forceInterrupt - MZD_TRUE indicates the interrupt is forced to be active,
                     MZD_FALSE indicates the interrupt depends on the interrupt inputs
                     from each unit.

 Returns:
    MZD_OK   if there were no errors
    MZD_FAIL if there were errors

 Description:
    This function reads the global interrupt control bits for the INTn interrupt polarity
    and open drain setting.

    User can either call this API or the mzdGetPinMode() to query open drain for the INTn.

    forceInterrupt indicates if the interrupt is forced to be active or it depends on the
    interrupts inputs from each units.

    If INTn pin is in the MZD_PIN_MODE_RCLK, the settings read from this API do not represent
    RCLK behavior.

 Side effects:
    None.

 Notes/Warnings:
    None.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetGlobalInterruptCntl
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_BOOL *openDrain,
    OUT MZD_U16 *intrPolarity,
    OUT MZD_BOOL *forceInterrupt
);

/*******************************************************************************
MZD_STATUS mzdSetGlobalInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 globalAggregatedIntrEnable1,
    IN MZD_U16 globalAggregatedIntrEnable2
);


 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    globalAggregatedIntrEnable1 - the Chip Level global aggregated interrupt Enable
    globalAggregatedIntrEnable2 - the Chip Level global aggregated interrupt Enable
                                  See the bit definitions below structure _MZD_GLOBAL_CHIP_INTR

 Outputs:
    None.

 Returns:
    MZD_OK   if there were no errors
    MZD_FAIL if there were errors

 Description:
    This function sets the interrupt enable for the Chip Level global aggregated interrupt.
    The Chip Level global interrupt status are aggregated from all enabled(unmasked)
    interrupt sources from each units. This function provide a mask for these global status
    that send to the INTn pin.

 Side effects:
    None.

 Notes/Warnings:
    Not applicable on chip revision MZD_REV_A0

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetGlobalInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 globalAggregatedIntrEnable1,
    IN MZD_U16 globalAggregatedIntrEnable2
);

/*******************************************************************************
MZD_STATUS mzdGetGlobalInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_U16 *globalAggregatedIntrEnable1,
    OUT MZD_U16 *globalAggregatedIntrEnable2
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call

 Outputs:
    globalAggregatedIntrEnable1 - the Chip Level global aggregated interrupt Enable
    globalAggregatedIntrEnable2 - the Chip Level global aggregated interrupt Enable
                                  See the bit definitions below structure _MZD_GLOBAL_CHIP_INTR

 Returns:
    MZD_OK   if there were no errors
    MZD_FAIL if there were errors

 Description:
    This function reads the interrupt enable for the Chip Level global aggregated interrupt.
    The Chip Level global interrupt status are aggregated from all enabled(unmasked)
    interrupt sources from each units. This function reading the mask for these global
    status that mask the signal to the INTn pin.

 Side effects:
    None.

 Notes/Warnings:
    Not applicable on chip revision MZD_REV_A0

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetGlobalInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_U16 *globalAggregatedIntrEnable1,
    OUT MZD_U16 *globalAggregatedIntrEnable2
);

/*******************************************************************************
MZD_STATUS mzdGetUnmaskedInterrupts
(
   IN MZD_DEV_PTR pDev,
   OUT PMZD_GLOBAL_CHIP_INTR intrSelector
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call

 Outputs:
    intrSelector - select which interrupt sources should be checked in the
             mzdGetIntrSrcStatus() API.
             Any non-zero field indicates mzdGetIntrSrcStatus() need to check that
             check the status of the interrupt source.
             MZD_BOOL field refers to only one interrupt source while the other filed
             refers to the interrupt bits on the same register.

 Returns:
    MZD_OK   if there were no errors
    MZD_FAIL if there were errors

 Description:
    This function automatically fill in the intrSelector with all currently unmasked(enabled)
    interrupts in the current chip. User can also fill in/modify the intrSelector manually.
    This API is separated from the mzdGetIntrSrcStatus() to reduce MDIO traffic for reading the
    interrupt masks when polling by the mzdGetIntrSrcStatus().

 Side effects:
    None.

 Notes/Warnings:
    (work-in-progress)
    Currently this API does not filled in unmasked Serdes interrupts and On-chip processor interrupt
    to the intrSelector.

    Chip Revision MZD_REV_A0:
    Bits in intrSelector.globalAggregatedIntr1 and intrSelector.globalAggregatedIntr2 are filled in by
    aggregating the unit level interrupt masks.
    MZD_GLOBAL_MAC_SEC0_INTR and MZD_GLOBAL_MAC_SEC1_INTR will not be filled in this chip revision.
    Please fill in this two bits manually and following mzdMACsecSampleInterrupt() for checking
    MACsec interrupts.

    Other Chip Revision:
    These two fields are filled in by with the hardware registers. If any of the global interrupt
    bit is not set, this API will not fill in the interrupt sources in the unit level.
    e.g. if bit 5 of intrSelector.globalAggregatedIntr2 is 0 in the register, this API will not
         fill in the array intrSelector.pcsIntr.host[1] for Host Side Port 1.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetUnmaskedInterrupts    /* work-in-progress */
(
   IN MZD_DEV_PTR pDev,
   OUT PMZD_GLOBAL_CHIP_INTR intrSelector
);

/*****************************************************************************
 Definitions for GPIO interrupts
*****************************************************************************/
/* Level 2 GPIO Interrupt Enable Control */
#define MZD_GPIO_INTR_DISABLE                   0x0
#define MZD_GPIO_INTR_ENABLE                    0x1

/* Level 2 GPIO Interrupt Types */
#define MZD_GPIO_INTR_NONE                      0x0    /* No Interrupt */
#define MZD_GPIO_INTR_LOW_LEVEL                 0x2
#define MZD_GPIO_INTR_HIGH_LEVEL                0x3
#define MZD_GPIO_INTR_FALLING_EDGE              0x4
#define MZD_GPIO_INTR_RISING_EDGE               0x5
#define MZD_GPIO_INTR_BOTH_EDGE                 0x7

/******************************************************************************
MZD_STATUS mzdSetGPIOInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    IN MZD_U16 gpioIntrEnable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    gpioPinId - The Pin to configure, the Pin MUST be set to MZD_PIN_MODE_GPIO mode
                See the bit definitions and header of mzdSetPinMode() for details.
        MZD_PIN_GPIO1
        MZD_PIN_GPIO2
        MZD_PIN_GPIO3
        MZD_PIN_GPIO4
        MZD_PIN_CLK_OUT_SE1
        MZD_PIN_CLK_OUT_SE2
        MZD_PIN_CLK_OUT_SE3
        MZD_PIN_CLK_OUT_SE4

    gpioIntrEnable - Enable or Disable the Level 2 GPIO Interrupt.
        MZD_GPIO_INTR_DISABLE
        MZD_GPIO_INTR_ENABLE

 Outputs:
    None.

 Returns:
    MZD_OK if configuration was successful, MZD_FAIL if not
    If the Pin has NOT been set to MZD_PIN_MODE_GPIO or its direction has been set
    to MZD_GPIO_OUTPUT_MODE, MZD_FAIL will be returned.

 Description:
    This function enables(unmasked) or disables(masked) the GPIO interrupt on the given GPIO Pin.
    Noticed that the Level 2 GPIO interrupt ONLY works as an input.

    Please refer to "Interrupt Overview" section for MZD interrupt levels.

 Side effects:
    None.

 Notes/Warnings:
    The given Pins MUST be configured to MZD_PIN_MODE_GPIO mode and its direction MUST be
    set to MZD_GPIO_INPUT_MODE before calling this API.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetGPIOInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    IN MZD_U16 gpioIntrEnable
);

/******************************************************************************
MZD_STATUS mzdGetGPIOInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    OUT MZD_U16 *gpioIntrEnable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    gpioPinId - The Pin to read, the Pin should be set to MZD_PIN_MODE_GPIO mode
                See the bit definitions and header of mzdSetPinMode() for details.
        MZD_PIN_GPIO1
        MZD_PIN_GPIO2
        MZD_PIN_GPIO3
        MZD_PIN_GPIO4
        MZD_PIN_CLK_OUT_SE1
        MZD_PIN_CLK_OUT_SE2
        MZD_PIN_CLK_OUT_SE3
        MZD_PIN_CLK_OUT_SE4

 Outputs:
    gpioIntrEnable - Read the Level 2 GPIO Interrupt enable setting.
        MZD_GPIO_INTR_DISABLE
        MZD_GPIO_INTR_ENABLE

 Returns:
    MZD_OK if query was successful, MZD_FAIL if not

 Description:
    This function reads back the GPIO interrupt enable(unmasked/masked) setting.
    Noticed that the Level 2 GPIO interrupt only works as an input.

    Please refer to "Interrupt Overview" section for MZD interrupt levels.

 Side effects:
    None.

 Notes/Warnings:
    None.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetGPIOInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    OUT MZD_U16 *gpioIntrEnable
);

/******************************************************************************
MZD_STATUS mzdSetGPIOInterruptType
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    IN MZD_U16 gpioIntrType
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    gpioPinId - The pin to configure, the pin MUST be set to MZD_PIN_MODE_GPIO mode
                See the bit definitions and header of mzdSetPinMode() for details.
        MZD_PIN_GPIO1
        MZD_PIN_GPIO2
        MZD_PIN_GPIO3
        MZD_PIN_GPIO4
        MZD_PIN_CLK_OUT_SE1
        MZD_PIN_CLK_OUT_SE2
        MZD_PIN_CLK_OUT_SE3
        MZD_PIN_CLK_OUT_SE4

    gpioIntrType - Select the GPIO interrupt type
        MZD_GPIO_INTR_NONE
        MZD_GPIO_INTR_LOW_LEVEL
        MZD_GPIO_INTR_HIGH_LEVEL
        MZD_GPIO_INTR_FALLING_EDGE
        MZD_GPIO_INTR_RISING_EDGE
        MZD_GPIO_INTR_BOTH_EDGE

 Outputs:
    None.

 Returns:
    MZD_OK if configuration was successful, MZD_FAIL if not
    If the pin has NOT been set to MZD_PIN_MODE_GPIO or its direction has been set
    to MZD_GPIO_OUTPUT_MODE, MZD_FAIL will be returned.

 Description:
    This function allows users to select GPIO interrupt pin type. The default value of
    gpioIntrType is MZD_GPIO_INTR_NONE, which means no interrupt will be detected.
    Noticed that the Level 2 GPIO interrupt only works as an input.

    Please refer to "Interrupt Overview" section for MZD interrupt levels.

 Side effects:
    None.

 Notes/Warnings:
    The given pin MUST be configured to MZD_PIN_MODE_GPIO mode and its direction MUST be
    set to MZD_GPIO_INPUT_MODE before calling this API.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetGPIOInterruptType
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    IN MZD_U16 gpioIntrType
);

/******************************************************************************
MZD_STATUS mzdGetGPIOInterruptType
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    OUT MZD_U16 *gpioIntrType
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    gpioPinId - The pin to read, the pin should be set to MZD_PIN_MODE_GPIO mode
                See the bit definitions and header of mzdSetPinMode() for details.
        MZD_PIN_GPIO1
        MZD_PIN_GPIO2
        MZD_PIN_GPIO3
        MZD_PIN_GPIO4
        MZD_PIN_CLK_OUT_SE1
        MZD_PIN_CLK_OUT_SE2
        MZD_PIN_CLK_OUT_SE3
        MZD_PIN_CLK_OUT_SE4

 Outputs:
    gpioIntrType - Read the GPIO interrupt type
        MZD_GPIO_INTR_NONE
        MZD_GPIO_INTR_LOW_LEVEL
        MZD_GPIO_INTR_HIGH_LEVEL
        MZD_GPIO_INTR_FALLING_EDGE
        MZD_GPIO_INTR_RISING_EDGE
        MZD_GPIO_INTR_BOTH_EDGE
        Other Reads: Reserved

 Returns:
    MZD_OK if query was successful, MZD_FAIL if not

 Description:
    This function reads back the GPIO interrupt type.
    Noticed that the Level 2 GPIO interrupt only works as an input.

    Please refer to "Interrupt Overview" section for MZD interrupt levels.

 Side effects:
    None.

 Notes/Warnings:
    None.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetGPIOInterruptType
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    OUT MZD_U16 *gpioIntrType
);

/******************************************************************************
MZD_STATUS mzdGetGPIOInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    OUT MZD_U16 *gpioIntrLatchedStatus,
    OUT MZD_U16 *gpioIntrCurrentStatus
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    gpioPinId - The pin to read status, the pin should be set to MZD_PIN_MODE_GPIO mode
                See the bit definitions and header of mzdSetPinMode() for details.
        MZD_PIN_GPIO1
        MZD_PIN_GPIO2
        MZD_PIN_GPIO3
        MZD_PIN_GPIO4
        MZD_PIN_CLK_OUT_SE1
        MZD_PIN_CLK_OUT_SE2
        MZD_PIN_CLK_OUT_SE3
        MZD_PIN_CLK_OUT_SE4

 Outputs:
    gpioIntrLatchedStatus - value of the first read of the interrupt status register.
    gpioIntrCurrentStatus - value of the second read of the interrupt status register.
        0 - No interrupt has occurred.
        1 - An interrupt has occurred.

    The output readings may be INVALID if the given pin is NOT in the MZD_PIN_MODE_GPIO or
    the GPIO direction of the pin is NOT set to MZD_GPIO_INPUT_MODE

 Returns:
    MZD_OK if query was successful, MZD_FAIL if not

 Description:
    This function reads back the GPIO interrupt status on given pin. The status is latched.
    Noticed that the Level 2 GPIO interrupt ONLY works as an input.

    Please refer to "Interrupt Overview" section for MZD interrupt levels.

 Side effects:
    None.

 Notes/Warnings:
    The given pin should be configured to MZD_PIN_MODE_GPIO mode and its direction should be
    set to MZD_GPIO_INPUT_MODE before calling this API, otherwise the reading may be INVALID.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetGPIOInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    OUT MZD_U16 *gpioIntrLatchedStatus,
    OUT MZD_U16 *gpioIntrCurrentStatus
);

/*****************************************************************************
Enabling and Checking Interrupts 1000BASE-X and 2.5GBASE-R Status Bit Definitions
*****************************************************************************/
/* Bit 15 NOT USED */                            /* Reserved */
#define MZD_1G_SPEED_CHD_BIT             (1<<14) /* Speed Changed Interrupt Enable/Status */
#define MZD_1G_DPX_CHD_BIT               (1<<13) /* Duplex Changed Interrupt Enable/Status */
#define MZD_1G_PAGE_RX_BIT               (1<<12) /* Page Received Interrupt Enable/Status */
#define MZD_1G_ANEG_COMP_BIT             (1<<11) /* Auto-Negotiation Completed Interrupt Enable/Status */
#define MZD_1G_LINK_UP_DN_BIT            (1<<10) /* Link Up to Link Down Interrupt Enable/Status */
#define MZD_1G_LINK_DN_UP_BIT            (1<<9)  /* Link Down to Link Up Interrupt Enable/Status */
#define MZD_1G_SYM_ERR_BIT               (1<<8)  /* Symbol Error Interrupt Enable/Status */
#define MZD_1G_FALSE_CAR_BIT             (1<<7)  /* False Carrier Interrupt Enable/Status */
/* Bit 6:0 NOT USED */                           /* Reserved */

/*****************************************************************************
Real-Time Status 1000BASE-X and 2.5GBASE-R Bit Definitions
*****************************************************************************/
#define MZD_1G_SPEED2_RT_BIT             (1<<15) /* Bits 15-14: 11=Reserved; 10=1000Mbps */
#define MZD_1G_SPEED1_RT_BIT             (1<<14) /* Bits 15-14: 01=100Mbps; 00=10Mbps */
#define MZD_1G_DPX_CHD_RT_BIT            (1<<13) /* Duplex mode (Full-duplex=1; Half-duplex=0) */
#define MZD_1G_PAGE_RX_RT_BIT            (1<<12) /* Page received=1; Page not received=0  */
#define MZD_1G_SPEED_DPX_RES_RT_BIT      (1<<11) /* When ANeg is not enabled this bit is always 1 */
                                                 /* Speed and Duplex (Resolved=1; Not Resolved=0) */
#define MZD_1G_RT_LINK_STATUS            (1<<10) /* Realtime Link (Up=1; Down=0) */
/* Bit 9:6 NOT USED */                           /* Reserved */
#define MZD_1G_SYNC_STATUS_BIT           (1<<5)  /* sync status */
#define MZD_1G_ENERGY_DETECT_BIT         (1<<4)  /* Energy Detect Status (0=Energy Detected)*/
/* These two status bit is valid only when Auto-Negotiation is completed or Auto-Negotiation is disabled. */
#define MZD_1G_TX_PAUSE_BIT              (1<<3)  /* Transmit Pause Enabled */
#define MZD_1G_RX_PAUSE_BIT              (1<<2)  /* Receive Pause Enabled */
/* Bit 1:0 NOT USED */                           /* Reserved */

/*****************************************************************************
Enabling and Checking Interrupts 5GBASE-R, 10GBASE-R and 25GBASE-R
Status Bit Definitions
*****************************************************************************/
/* Bit 15:14 NOT USED */                         /* Reserved */
#define MZD_25G_REMOTE_FLT_TX_BIT        (1<<13) /* Remote Fault Transmitted Interrupt Enable/Status */
#define MZD_25G_REMOTE_FLT_RX_BIT        (1<<12) /* Remote Fault Received Interrupt Enable/Status */
#define MZD_25G_LOCAL_FLT_TX_BIT         (1<<11) /* Local Fault Transmitted Interrupt Enable/Status */
#define MZD_25G_LOCAL_FLT_RX_BIT         (1<<10) /* Local Fault Received Interrupt Enable/Status */
/* Bit 9:7 NOT USED */                           /* Reserved */
#define MZD_25G_RX_FIFO_FULL_BIT         (1<<6)  /* Rxfifo Full Interrupt Enable/Status */
#define MZD_25G_RX_FIFO_EMPTY_BIT        (1<<5)  /* Rxfifo Empty Interrupt Enable/Status */
/* Bit 4:3 NOT USED */                           /* Reserved */
#define MZD_25G_LINK_CHANGE_BIT          (1<<2)  /* Link status change Interrupt Enable/Status */
#define MZD_25G_HI_BER_BIT               (1<<1)  /* High BER Change Interrupt Enable/Status */
#define MZD_25G_BLK_LOCK_BIT             (1<<0)  /* Block Lock Change Interrupt Enable/Status */

/*****************************************************************************
Real-Time Status 5GBASE-R, 10GBASE-R and 25GBASE-R Bit Definitions
*****************************************************************************/
/* Bit 15:14 NOT USED */                         /* Reserved */
#define MZD_25G_RF_TX_RT_STATUS_BIT      (1<<13) /* Remote Fault Transmitted Interrupt Real-time Status */
#define MZD_25G_RF_RX_RT_STATUS_BIT      (1<<12) /* Remote Fault Received Interrupt Real-time Status */
#define MZD_25G_LF_TX_RT_STATUS_BIT      (1<<11) /* Local Fault Transmitted Real-time Status */
#define MZD_25G_LF_RX_RT_STATUS_BIT      (1<<10) /* Local Fault Received Real-time Status */
/* Bit 9:7 NOT USED */                           /* Reserved */
#define MZD_25G_RX_FIFO_OVER_RT_BIT      (1<<6)  /* Rxfifo Full */
#define MZD_25G_RX_FIFO_UNDER_RT_BIT     (1<<5)  /* Rxfifo Empty */
#define MZD_25G_JIT_0_LOCK_BIT           (1<<4)  /* JIT 0 lock achieved if 1 */
#define MZD_25G_JIT_LF_LOCK_BIT          (1<<3)  /* JIT local fault lock achieved */
#define MZD_25G_RT_LINK_STATUS           (1<<2)  /* 5GBASE-R/10GBASE-R/25GBASE-R Real-time Link Status */
#define MZD_25G_HIGH_BER_BIT             (1<<1)  /* High BER Real-time Status */
#define MZD_25G_LN3_BLK_LK_BIT           (1<<0)  /* Lane 3 Block Lock Real-time Status (lock=1) */

/*****************************************************************************
Enabling and Checking Interrupts Status 40GBASER/50GBASER
Bit Definitions Flags 1 and Flags 2
*****************************************************************************/
/* Flag 1 */
#define MZD_40G_LN3_AM_LOCK_BIT          (1<<15) /* Lane 3 AM lock Interrupt Enable/Status */
#define MZD_40G_LN2_AM_LOCK_BIT          (1<<14) /* Lane 2 AM lock Interrupt Enable/Status */
#define MZD_40G_LN1_AM_LOCK_BIT          (1<<13) /* Lane 1 AM lock Interrupt Enable/Status */
#define MZD_40G_LN0_AM_LOCK_BIT          (1<<12) /* Lane 0 AM lock Interrupt Enable/Status */
#define MZD_40G_LOCAL_FLT_TX_BIT         (1<<11) /* Local Fault Transmitted Interrupt Enable/Status */
#define MZD_40G_LOCAL_FLT_RX_BIT         (1<<10) /* Local Fault Received Interrupt Enable/Status */
#define MZD_40G_LN_ALIGN_BIT             (1<<9)  /* Lane alignment Interrupt enable/Status */
#define MZD_40G_TX_LN_ERRCNT_BIT         (1<<8)  /* Tx lane count err Interrupt enable/Status */
#define MZD_40G_JIT0_LOCK_BIT            (1<<7)  /* JIT 0 Lock Change Interrupt Enable/Status */
#define MZD_40G_JIT_LF_BIT               (1<<6)  /* JIT Local-Fault Lock Change Interrupt Enable/Status */
#define MZD_40G_LINK_CHANGE_BIT          (1<<5)  /* Link Change Interrupt Enable/Status */
#define MZD_40G_HI_BER_BIT               (1<<4)  /* High BER Change Interrupt Enable/Status */
#define MZD_40G_LN3_BLK_LK_BIT           (1<<3)  /* Lane 3 Block Lock Change Interrupt Enable/Status */
#define MZD_40G_LN2_BLK_LK_BIT           (1<<2)  /* Lane 2 Block Lock Change Interrupt Enable/Status */
#define MZD_40G_LN1_BLK_LK_BIT           (1<<1)  /* Lane 1 Block Lock Change Interrupt Enable/Status */
#define MZD_40G_LN0_BLK_LK_BIT           (1<<0)  /* Lane 0 Block Lock Change Interrupt Enable/Status */

/* Flag 2 */
/* Bit 15:10 NOT USED */                         /* Reserved */
#define MZD_40G_REMOTE_FLT_TX_BIT        (1<<9)  /* Remote Fault Transmitted Interrupt Enable/Status */
#define MZD_40G_REMOTE_FLT_RX_BIT        (1<<8)  /* Remote Fault Received Interrupt Enable/Status */
/* DO NOT modify Bit 7 */                        /* Bits 7 has nothing to do with the interrupt status */
/* Bit 6 NOT USED */                             /* Reserved */
/* Bit 5:0 Reserved */                           /* Bits 5:0 are reserved for other purpose */

/* NOTE: Flag 2 Bits 5:0 have nothing to do with the interrupt enable or interrupt status */
/* WARNING: The interrupt handler will clear the following latched high status bits and/or any main thread */
/*          that reads register MZD_PCS_40G_INTR_STAT2_LANE may clear the interrupt status bits. */
/* Suggest not querying these status and using interrupt at the same time. */
#define MZD_40G_RXFIFO_OF                (1<<5)  /* RX-FIFO overflow */
#define MZD_40G_RXFIFO_UF                (1<<4)  /* RX-FIFO underflow */
#define MZD_40G_LN3_DESKEW_FIFO_ERR      (1<<3)  /* Lane 3 deskew FIFO pointer error */
#define MZD_40G_LN2_DESKEW_FIFO_ERR      (1<<2)  /* Lane 2 deskew FIFO pointer error */
#define MZD_40G_LN1_DESKEW_FIFO_ERR      (1<<1)  /* Lane 1 deskew FIFO pointer error */
#define MZD_40G_LN0_DESKEW_FIFO_ERR      (1<<0)  /* Lane 0 deskew FIFO pointer error */

/*****************************************************************************
Real-Time Status 40GBASER and 50GBASER Bit Definitions
Definitions Flags 1 and Flags 2
*****************************************************************************/
/* Flag 1 */
#define MZD_40G_LN3_AM_LOCK_RT_BIT       (1<<15) /* Lane 3 AM lock Interrupt Real-time Status */
#define MZD_40G_LN2_AM_LOCK_RT_BIT       (1<<14) /* Lane 2 AM lock Interrupt Real-time Status */
#define MZD_40G_LN1_AM_LOCK_RT_BIT       (1<<13) /* Lane 1 AM lock Interrupt Real-time Status */
#define MZD_40G_LN0_AM_LOCK_RT_BIT       (1<<12) /* Lane 0 AM lock Interrupt Real-time Status */
#define MZD_40G_LF_TX_RT_BIT             (1<<11) /* Local Fault Transmitted Interrupt Real-time Status */
#define MZD_40G_LF_RX_RT_BIT             (1<<10) /* Local Fault Received Interrupt Real-time Status */
#define MZD_40G_LN_ALIGN_RT_BIT          (1<<9)  /* Lane alignment interrupt Real-time Status */
#define MZD_40G_TX_LN_ERRCNT_RT_BIT      (1<<8)  /* Tx lane count err interrupt Real-time Status */
#define MZD_40G_JIT0_LOCK_RT_BIT         (1<<7)  /* JIT 0 Lock Change Interrupt Real-time Status */
#define MZD_40G_JIT_LF_RT_BIT            (1<<6)  /* JIT Local-Fault Lock Change Interrupt Real-time Status */
#define MZD_40G_RT_LINK_STATUS           (1<<5)  /* Real-time Link Status */
#define MZD_40G_HI_BER_RT_BIT            (1<<4)  /* High BER Change Interrupt Real-time Status */
#define MZD_40G_LN3_BLK_LK_RT_BIT        (1<<3)  /* Lane 3 Block Lock Change Interrupt Real-time Status */
#define MZD_40G_LN2_BLK_LK_RT_BIT        (1<<2)  /* Lane 2 Block Lock Change Interrupt Real-time Status */
#define MZD_40G_LN1_BLK_LK_RT_BIT        (1<<1)  /* Lane 1 Block Lock Change Interrupt Real-time Status */
#define MZD_40G_LN0_BLK_LK_RT_BIT        (1<<0)  /* Lane 0 Block Lock Change Interrupt Real-time Status */

/* Flag 2 */
/* Bit 15:7 NOT USED */                          /* Reserved */
#define MZD_40G_RF_TX_BIT                (1<<6)  /* Remote Fault Transmitted Interrupt Real-time Status */
#define MZD_40G_RF_RX_BIT                (1<<5)  /* Remote Fault Received Interrupt Real-time Status */
/* Bit 4:0 Reserved */                           /* Bits 4:0 are reserved for other purpose */

/* NOTE: Flag 2 Bits 4:0 have nothing to do with the real-time status */
/* WARNING: The interrupt handler will clear the following latched high status bits and/or any main thread */
/*          that reads register MZD_PCS_40G_RT_STAT2_LANE may clear the interrupt status bits. */
/* Suggest not querying these real-time status and using interrupt at the same time. */
#define MZD_40G_LANE_ID_ERR              (1<<4)  /* Lane ID error seen in the 40G PCS DSKALGN block */
#define MZD_40G_LN3_AM_MISMATCH_ERR      (1<<3)  /* Lane 3 Alignment marker mismatch at AMPERIOD interval */
#define MZD_40G_LN2_AM_MISMATCH_ERR      (1<<2)  /* Lane 2 Alignment marker mismatch at AMPERIOD interval */
#define MZD_40G_LN1_AM_MISMATCH_ERR      (1<<1)  /* Lane 1 Alignment marker mismatch at AMPERIOD interval */
#define MZD_40G_LN0_AM_MISMATCH_ERR      (1<<0)  /* Lane 0 Alignment marker mismatch at AMPERIOD interval */

/*****************************************************************************
Enabling, Checking Interrupts Status and Real-Time Status 100GBASER Bit
Definitions Flags 1 and Flags 2
*****************************************************************************/
/* Flags 1 */
#define MZD_100G_RXIFO_EMPTY_BIT         (1<<15) /* 100G PCS Rx FIFO Empty Interrupt Enable/Status/RT Status */
#define MZD_100G_RXFIFO_FULL_BIT         (1<<14) /* 100G PCS Rx FIFO Full Interrupt Enable/Status/RT Status */
#define MZD_100G_TXFIFO_OF_BIT           (1<<13) /* 100G PCS Tx PPM FIFO Overflow Interrupt Enable/Status/RT Status */
#define MZD_100G_TXFIFO_UF_BIT           (1<<12) /* 100G PCS Tx PPM FIFO Underflow Interrupt Enable/Status/RT Status */
#define MZD_100G_LOCAL_FLT_TX_BIT        (1<<11) /* Rising Edge of the Local Fault Condition on Tx Path Interrupt Enable/Status/RT Status */
#define MZD_100G_LOCAL_FLT_RX_BIT        (1<<10) /* Rising Edge of the Local Fault Condition on Rx Path Interrupt Enable/Status/RT Status */
#define MZD_100G_REMOTE_FLT_TX_BIT       (1<<9)  /* Rising Edge of the Remote Fault Condition on Tx Path Interrupt Enable/Status/RT Status */
#define MZD_100G_REMOTE_FLT_RX_BIT       (1<<8)  /* Rising Edge of the Remote Fault Condition on Rx Path Interrupt Enable/Status/RT Status */
#define MZD_100G_PKTCK_CRCERR_BIT        (1<<7)  /* 100G Packet Check CRC Error Interrupt Enable/Status/RT Status */
#define MZD_100G_TXFIFO_PUSHBACK_BIT     (1<<6)  /* 100G PCS Tx PPM FIFO Pushback Interrupt Enable/Status/RT Status */
#define MZD_100G_LINK_BIT                (1<<5)  /* Link Change Interrupt Enable/Status/RT Status */
#define MZD_100G_HI_BER_BIT              (1<<4)  /* High BER Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN3_BLK_LK_BIT          (1<<3)  /* Lane 3 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN2_BLK_LK_BIT          (1<<2)  /* Lane 2 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN1_BLK_LK_BIT          (1<<1)  /* Lane 1 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN0_BLK_LK_BIT          (1<<0)  /* Lane 0 Block Lock Change Interrupt Enable/Status/RT Status */

/* Flags 2 */
#define MZD_100G_LN19_BLK_LK_BIT         (1<<15) /* Lane 19 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN18_BLK_LK_BIT         (1<<14) /* Lane 18 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN17_BLK_LK_BIT         (1<<13) /* Lane 17 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN16_BLK_LK_BIT         (1<<12) /* Lane 16 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN15_BLK_LK_BIT         (1<<11) /* Lane 15 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN14_BLK_LK_BIT         (1<<10) /* Lane 14 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN13_BLK_LK_BIT         (1<<9)  /* Lane 13 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN12_BLK_LK_BIT         (1<<8)  /* Lane 12 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN11_BLK_LK_BIT         (1<<7)  /* Lane 11 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN10_BLK_LK_BIT         (1<<6)  /* Lane 10 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN9_BLK_LK_BIT          (1<<5)  /* Lane 9 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN8_BLK_LK_BIT          (1<<4)  /* Lane 8 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN7_BLK_LK_BIT          (1<<3)  /* Lane 7 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN6_BLK_LK_BIT          (1<<2)  /* Lane 6 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN5_BLK_LK_BIT          (1<<1)  /* Lane 5 Block Lock Change Interrupt Enable/Status/RT Status */
#define MZD_100G_LN4_BLK_LK_BIT          (1<<0)  /* Lane 4 Block Lock Change Interrupt Enable/Status/RT Status */

/*****************************************************************************
Enabling and Checking Interrupts Status and Real-Time Status 200/400GBASER bit
Definitions Flags 1 and Flags 2
*****************************************************************************/
/* Flags 1 */
#define MZD_200G_RXIFO_EMPTY_BIT         (1<<15) /* 200G/400G PCS Rx FIFO Empty Interrupt Enable/Status/RT Status */
#define MZD_200G_RXFIFO_FULL_BIT         (1<<14) /* 200G/400G PCS Rx FIFO Full Interrupt Enable/Status/RT Status */
#define MZD_200G_TXFIFO_OF_BIT           (1<<13) /* 200G/400G PCS Tx PPM FIFO Overflow Interrupt Enable/Status/RT Status */
#define MZD_200G_TXFIFO_UF_BIT           (1<<12) /* 200G/400G PCS Tx PPM FIFO Underflow Interrupt Enable/Status/RT Status */
#define MZD_200G_LOCAL_FLT_TX_BIT        (1<<11) /* Rising Edge of the Local Fault Condition on Tx Path Interrupt Enable/Status/RT Status */
#define MZD_200G_LOCAL_FLT_RX_BIT        (1<<10) /* Rising Edge of the Local Fault Condition on Rx Path Interrupt Enable/Status/RT Status */
#define MZD_200G_LPI_TX_BIT              (1<<9)  /* 200G/400G PCS Tx LPI Received Interrupt Enable/Status/RT Status */
#define MZD_200G_LPI_RX_BIT              (1<<8)  /* 200G/400G PCS Rx LPI Received Interrupt Enable/Status/RT Status */
#define MZD_200G_PKTCK_CRCERR_BIT        (1<<7)  /* 200G/400G Packet Check CRC Error interrupt Enable/Status/RT Status */
#define MZD_200G_VERY_HIGH_BIT           (1<<6)  /* 200G/400G PCS Tx PPM FIFO Very High Water Interrupt */
#define MZD_200G_LINK_CHANGE_BIT         (1<<5)  /* Link Status Change Interrupt Enable/Status/RT Status */
#define MZD_200G_REMOTE_FLT_TX_BIT       (1<<4)  /* Rising Edge of the Remote Fault Condition on Tx Path Interrupt Enable/Status/RT Status */
#define MZD_200G_REMOTE_FLT_RX_BIT       (1<<3)  /* Rising Edge of the Remote Fault Condition on Rx Path Interrupt Enable/Status/RT Status */
#define MZD_200G_4LOCAL_FLT_TX_BIT       (1<<2)  /* Rising Edge of 4 Local Fault Condition on Tx Path Interrupt Enable/Status/RT Status */
#define MZD_200G_4REMOTE_FLT_TX_BIT      (1<<1)  /* Rising Edge of 4 Remote Fault Condition on Tx Path Interrupt Enable/Status/RT Status */
#define MZD_200G_TXFIFO_OR_BIT           (1<<0)  /* Rising edge of 200G/400G PCS Tx PPM FIFO Overrun Interrupt Enable/Status/RT Status */

/* Flags 2 */
/* Bit 15:2 NOT USED */                          /* Reserved */
#define MZD_200G_TXFIFO_PUSHBACK_BIT     (1<<1)  /* 200G/400G PCS Tx PPM FIFO Pushback Interrupt */
#define MZD_200G_TXFIFO_STOPWRITE_BIT    (1<<0)  /* 200G/400G PCS Tx PPM FIFO Stop Write Interrupt */

/*****************************************************************************
Enabling and Checking Interrupts and Real-Time Status Combined Functions for
various speeds
*****************************************************************************/

/******************************************************************************
MZD_STATUS mzdSetPCSInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_PCS_UNIT_INTR intrEnable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being set:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
    laneOffset - 0-3; lane offset to be checked for link status;
                 For PCS mode that uses multiple lanes, i.e. R2 and R4, the
                 first lane offset should be provided.
    intrEnable - For srcFlag1 and srcFlag2, a 1 enables the interrupt and
                 a 0 disables the interrupt for each bit. Flags are defined above.
                 Flag values depend on operating mode.
                 srcFlag2 is only for 40GBR to 400GBR modes, ignored for other modes.
                 For apAutoNeg and excessiveLinkErr, MZD_TRUE enables the interrupt
                 and MZD_FALSE disables the interrupt.

 Outputs:
    None

 Returns:
    MZD_OK if change was successful, MZD_FAIL if not.
    MZD_FAIL if the operating mode is not set properly or
    the device is not initialized.

 Description:
    This function can be called after the port has been initialized for
    any of the 1000BASE-X to 400GBR modes of operation to enable interrupts.
    To enable certain interrupts, please read the interrupt enable setting back
    first by mzdGetPCSInterruptEnable(), then set corresponding bits and call
    this API to enable interrupts.

 Side effects:
    If INTn Pin mode is MZD_PIN_MODE_RCLK, the interrupt signal and Recovered Clock will
    interfere with each other if any of the interrupt is enabled, including interrupts
    that are not configured in this API.

 Notes/Warnings:
    Please set the INTn Pin to MZD_PIN_MODE_INTR before calling this function.
    The bit flags can be OR together to enable multiple interrupts.
    For example:
    intrEnable.srcFlag1 |= (MZD_100G_RXIFO_FULL_BIT | MZD_100G_RXFIFO_EMPTY_BIT)
    to enable these two interrupts on 100GBR modes.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetPCSInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    IN MZD_PCS_UNIT_INTR intrEnable
);

/******************************************************************************
MZD_STATUS mzdGetPCSInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT PMZD_PCS_UNIT_INTR intrEnable
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being read:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
    laneOffset - 0-3; lane offset to be checked for link status;
                 For PCS mode that uses multiple lanes, i.e. R2 and R4, the
                 first lane offset should be provided.

 Outputs:
    intrEnable - For srcFlag1 and srcFlag2, a 1 indicates the interrupt is
                 enabled and a 0 indicates the interrupt is disabled for
                 each bit. Flags are defined above. Flag values depend on operating mode
                 srcFlag2 is only for 40GBR to 400GBR modes, ignored for other modes.
                 For apAutoNeg and excessiveLinkErr, MZD_TRUE indicates the interrupt
                 is enabled and MZD_FALSE indicates the interrupt is disabled.

 Returns:
    MZD_OK if query was successful, MZD_FAIL if not.

 Description:
    This function can be called after the port has been initialized for
    any of the 1000BASE-X to 400GBR modes of operation to read what PCS
    interrupts are enabled.

 Side effects:
    None.

 Notes/Warnings:
    None.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetPCSInterruptEnable
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT PMZD_PCS_UNIT_INTR intrEnable
);

/******************************************************************************
MZD_STATUS mzdGetPCSInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT PMZD_PCS_UNIT_INTR latchedIntrStatus,
    OUT PMZD_PCS_UNIT_INTR currentIntrStatus
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being read:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
    laneOffset - 0-3; lane offset to be checked for link status;
                 For PCS mode that uses multiple lanes, i.e. R2 and R4, the
                 first lane offset should be provided.

 Outputs:
    latchedIntrStatus - value of the first read of all the PCS interrupt status
                        registers for the current mode. Bit values are defined above.
                        srcFlag2 is only for 40GBR to 400GBR modes, ignored for other modes.
    currentIntrStatus - value of the second read of all the PCS interrupt status
                        registers for the current mode. Bit values are defined above.
                        srcFlag2 is only for 40GBR to 400GBR modes, ignored for other modes.

                        Noticed that apAutoNeg is not latched, the register will only be read once
                        to update currentIntrStatus.apAutoNeg but not in latchedIntrStatus.

 Returns:
    MZD_OK if query was successful, MZD_FAIL if not.

 Description:
    This function can be called after the port has been initialized for
    any of the 1000BASE-X to 400GBR modes of operation to read what
    interrupts are asserted (being requested). The first read value is passed into the
    latchedIntrStatus, while the second read value is passed into the currentIntrStatus.

    To determine what interrupt actually aggregated to the upper level, the latched value must
    be AND with the interrupt enable flag from the function mzdGetPCSInterruptEnable().

    To determine if the interrupt is still asserted at the upper level, the
    current value can be AND with the interrupt enable flag from the function
    mzdGetPCSInterruptEnable().

 Side effects:
    None.

 Notes/Warnings:
    Calling this function will clear all the PCS interrupt status on the given port, lane.

    latchedIntrStatus.apAutoNeg is invalid.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetPCSInterruptStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT PMZD_PCS_UNIT_INTR latchedIntrStatus,
    OUT PMZD_PCS_UNIT_INTR currentIntrStatus
);

/******************************************************************************
MZD_STATUS mzdGetPCSRealtimeStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT PMZD_PCS_UNIT_INTR rtIntrStatus
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31
    host_or_line - which interface is being read:
       MZD_HOST_SIDE
       MZD_LINE_SIDE
    laneOffset - 0-3; lane offset to be checked for link status;
                 For PCS mode that uses multiple lanes, i.e. R2 and R4, the
                 first lane offset should be provided.

 Outputs:
    rtIntrStatus - value of reading the real-time status register.
                   Bit values are defined above.
                   srcFlag2 is only for 40GBR to 400GBR modes, ignored for other modes.

                   rtIntrStatus.apAutoNeg and rtIntrStatus.excessiveLinkErr is not applicable.

 Returns:
    MZD_OK if query was successful, MZD_FAIL if not.

 Description:
    This function can be called after the port has been initialized for
    any of the 1000BASE-X to 400GBR modes of operation to read what the
    current status is.

 Side effects:
    None.

 Notes/Warnings:
    None.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetPCSRealtimeStatus
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 host_or_line,
    IN MZD_U16 laneOffset,
    OUT PMZD_PCS_UNIT_INTR rtIntrStatus
);

/******************************************************************************
MZD_STATUS mzdSetPinMode
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID pinId,
    IN MZD_PIN_MODE pinMode,
    IN MZD_BOOL openDrain
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    pinId - the Pin to configure
        MZD_PIN_GPIO1
        MZD_PIN_GPIO2
        MZD_PIN_GPIO3
        MZD_PIN_GPIO4
        MZD_PIN_CLK_OUT_SE1
        MZD_PIN_CLK_OUT_SE2
        MZD_PIN_CLK_OUT_SE3
        MZD_PIN_CLK_OUT_SE4
        MZD_PIN_INTn

    pinMode - Set the pin to given mode, please see this API description for
              all available modes.
        MZD_PIN_MODE_GPIO
        MZD_PIN_MODE_LED
        MZD_PIN_MODE_INTR
        MZD_PIN_MODE_RCLK

    openDrain - MZD_TRUE enable the open drain, MZD_FALSE disable the open drain

 Outputs:
    None

 Returns:
    MZD_OK if configuration was successful, MZD_FAIL if not

 Description:
    This function configures the mode of the given multi-purpose pins. Here the Pins
    only refers to the one defined in the _MZD_PIN_ID struct

    MZD_PIN_MODE_GPIO and MZD_PIN_MODE_LED are available on all pins EXCEPT the MZD_PIN_INTn
    while MZD_PIN_MODE_RCLK is available on all pins.

    Only the MZD_PIN_INTn can be configured to MZD_PIN_MODE_INTR mode.

 Side effects:
    None.

 Notes/Warnings:
    User should not change the Pin Mode once it is configured, since each mode of
    the Pin MUST match the board schematic.

    DO NOT unmask/enable any interrupt if INTn pin is set to MZD_PIN_MODE_RCLK mode,
    otherwise the recovered clock will be interfered with. DO NOT configure INTn to RCLK mode
    if you are not sure whether there is any interrupt enabled or not.

    By default, the INTn pin is in the MZD_PIN_MODE_INTR mode.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetPinMode
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID pinId,
    IN MZD_PIN_MODE pinMode,
    IN MZD_BOOL openDrain
);

/******************************************************************************
MZD_STATUS mzdGetPinMode
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID pinId,
    OUT MZD_PIN_MODE *pinMode,
    OUT MZD_BOOL *openDrain
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    pinId - the Pin to configure
        MZD_PIN_GPIO1
        MZD_PIN_GPIO2
        MZD_PIN_GPIO3
        MZD_PIN_GPIO4
        MZD_PIN_CLK_OUT_SE1
        MZD_PIN_CLK_OUT_SE2
        MZD_PIN_CLK_OUT_SE3
        MZD_PIN_CLK_OUT_SE4
        MZD_PIN_INTn


 Outputs:
    pinMode - Read the mode of given pin.
              See mzdSetPinMode() description for details.
        MZD_PIN_MODE_GPIO
        MZD_PIN_MODE_LED
        MZD_PIN_MODE_INTR
        MZD_PIN_MODE_RCLK

   openDrain - MZD_TRUE indicates the open drain is enabled,
               MZD_FALSE indicates the open drain is disabled

 Returns:
    MZD_OK if read was successful, MZD_FAIL if not

 Description:
    This function read the mode of given multi-purpose pins. Here the Pins
    only refers to the one defined in the _MZD_PIN_ID struct.
    See mzdSetPinMode() for all available modes for different pins.

 Side effects:
    None.

 Notes/Warnings:
    None.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetPinMode
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID pinId,
    OUT MZD_PIN_MODE *pinMode,
    OUT MZD_BOOL *openDrain
);

/* GPIO Pin Directions */
#define MZD_GPIO_INPUT_MODE                     0x0
#define MZD_GPIO_OUTPUT_MODE                    0x1

/******************************************************************************
MZD_STATUS mzdSetGPIOPinDirection
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    IN MZD_U16 gpioPinDirection
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    gpioPinId - The Pin to configure, the Pin MUST be set to MZD_PIN_MODE_GPIO mode
                See the bit definitions and header of mzdSetPinMode() for details.
        MZD_PIN_GPIO1
        MZD_PIN_GPIO2
        MZD_PIN_GPIO3
        MZD_PIN_GPIO4
        MZD_PIN_CLK_OUT_SE1
        MZD_PIN_CLK_OUT_SE2
        MZD_PIN_CLK_OUT_SE3
        MZD_PIN_CLK_OUT_SE4

    gpioPinDirection - Configure the GPIO Pin to output or input mode
        MZD_GPIO_INPUT_MODE
        MZD_GPIO_OUTPUT_MODE

 Outputs:
    None.

 Returns:
    MZD_OK if configuration was successful, MZD_FAIL if not

 Description:
    This function configures the direction of the given GPIO Pin. The given Pin MUST
    be set to MZD_PIN_MODE_GPIO mode before calling this function to make changes
    take effect.

 Side effects:
    None.

 Notes/Warnings:
    gpioPinDirection settings are INVALID if the given Pin is NOT in
    MZD_PIN_MODE_GPIO mode.

    BE CAREFUL WHEN CALLING mzdSetGPIOPinDirection() TO SET THE DIRECTION
    OF THE PIN. IT MUST MATCH THE WIRING ON THE BOARD OTHERWISE YOU MAY DAMAGE
    A PIN BY OVERDRIVING IT.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetGPIOPinDirection
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    IN MZD_U16 gpioPinDirection
);

/******************************************************************************
MZD_STATUS mzdGetGPIOPinDirection
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    OUT MZD_U16 *gpioPinDirection
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    gpioPinId - The Pin to read, the Pin should be set to MZD_PIN_MODE_GPIO mode
                See the bit definitions and header of mzdSetPinMode() for details.
        MZD_PIN_GPIO1
        MZD_PIN_GPIO2
        MZD_PIN_GPIO3
        MZD_PIN_GPIO4
        MZD_PIN_CLK_OUT_SE1
        MZD_PIN_CLK_OUT_SE2
        MZD_PIN_CLK_OUT_SE3
        MZD_PIN_CLK_OUT_SE4

 Outputs:
    gpioPinDirection - returns the GPIO Pin direction
        MZD_GPIO_INPUT_MODE
        MZD_GPIO_OUTPUT_MODE

 Returns:
    MZD_OK if configuration was successful, MZD_FAIL if not

 Description:
    This function queries the direction of the given GPIO Pin.

 Side effects:
    None.

 Notes/Warnings:
    gpioPinDirection reading is INVALID if the given Pin is NOT in MZD_PIN_MODE_GPIO.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetGPIOPinDirection
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    OUT MZD_U16 *gpioPinDirection
);

/******************************************************************************
MZD_STATUS mzdSetGPIOPinData
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    IN MZD_U16 gpioData
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    gpioPinId - The Pin to write data, the Pin MUST be set to MZD_PIN_MODE_GPIO mode
                See the bit definitions and header of mzdSetPinMode() for details.
        MZD_PIN_GPIO1
        MZD_PIN_GPIO2
        MZD_PIN_GPIO3
        MZD_PIN_GPIO4
        MZD_PIN_CLK_OUT_SE1
        MZD_PIN_CLK_OUT_SE2
        MZD_PIN_CLK_OUT_SE3
        MZD_PIN_CLK_OUT_SE4

    gpioData - Data written to the output register, 0 or 1.
               If the GPIO Pin is in MZD_GPIO_OUTPUT_MODE, the GPIO Pin will also be
               driven by this value.

 Outputs:
    None.

 Returns:
    MZD_OK if write was successful, MZD_FAIL if not
    If the Pin has NOT been set to MZD_PIN_MODE_GPIO, MZD_FAIL will be returned.

 Description:
    This function writes data to the GPIO interrupt on the given GPIO Pin.
    When the GPIO Pin is in MZD_GPIO_INPUT_MODE, this function will write the data to
    the output register, but will have no effect on given GPIO Pin.

    When the GPIO Pin is in MZD_GPIO_OUTPUT_MODE, this function will write the data to
    the output register and drive the state of given GPIO Pin.

 Side effects:
    None.

 Notes/Warnings:
    The given Pins MUST be configured to MZD_PIN_MODE_GPIO mode before calling this API.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetGPIOPinData
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    IN MZD_U16 gpioData         /* 0 or 1 */
);

/******************************************************************************
MZD_STATUS mzdGetGPIOPinData
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    OUT MZD_U16 *gpioData
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    gpioPinId - The Pin to read data, the Pin MUST be set to MZD_PIN_MODE_GPIO mode
                See the bit definitions and header of mzdSetPinMode() for details.
        MZD_PIN_GPIO1
        MZD_PIN_GPIO2
        MZD_PIN_GPIO3
        MZD_PIN_GPIO4
        MZD_PIN_CLK_OUT_SE1
        MZD_PIN_CLK_OUT_SE2
        MZD_PIN_CLK_OUT_SE3
        MZD_PIN_CLK_OUT_SE4

 Output:
    gpioData - If the GPIO Pin is in MZD_GPIO_INPUT_MODE, this it the state of the GPIO Pin.
               If the GPIO Pin is in MZD_GPIO_OUTPUT_MODE, this it the state of the output
               register.

 Returns:
    MZD_OK if read was successful, MZD_FAIL if not
    If the Pin has NOT been set to MZD_PIN_MODE_GPIO, MZD_FAIL will be returned.

 Description:
    This function reads data from the given GPIO Pin or its output register.
    When the GPIO Pin is in MZD_GPIO_INPUT_MODE, this function reads the data from the GPIO Pin.
    When the GPIO Pin is in MZD_GPIO_OUTPUT_MODE, this function reads the data from the
    the output register.

 Side effects:
    None.

 Notes/Warnings:
    The given Pins MUST be configured to MZD_PIN_MODE_GPIO mode before calling this API.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdGetGPIOPinData
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID gpioPinId,
    OUT MZD_U16 *gpioData
);

/******************************************************************************
 Definitions for LED Configurations
******************************************************************************/
#define MZD_LED_CONFIG_UNCHANGED                0xFF     /* Keep the settings unchanged */

/* LED Activities Definitions */
#define MZD_LED_ACT_BLINK_OFF                   0x0     /* Disable Blink (for blink activity) */
#define MZD_LED_ACT_SOLID_OFF                   0x0     /* Solid OFF */
#define MZD_LED_ACT_LANE_TX_RX                  0x1     /* Lane transmit or receive activity */
#define MZD_LED_ACT_LANE_TX                     0x2     /* Lane transmit activity */
#define MZD_LED_ACT_LANE_RX                     0x3     /* Lane receive activity */
#define MZD_LED_ACT_LANE_LINK_UP                0x6     /* Lane receiver link up */
#define MZD_LED_ACT_FORCE_BLINK                 0x7     /* Force Blink (for blink activity) */
#define MZD_LED_ACT_SOLID_ON                    0x7     /* Solid ON */
#define MZD_LED_ACT_BLINK_MIX                   0xA     /* Blink Mix */
#define MZD_LED_ACT_SOLID_MIX                   0xB     /* Solid Mix */

/* LED Polarity Definitions */
#define MZD_LED_ACTIVE_LOW                      0x0     /* ON: drive LED Pin low, OFF: drive LED Pin high */
#define MZD_LED_ACTIVE_HIGH                     0x1     /* ON: drive LED Pin high, OFF: drive LED Pin low */
#define MZD_LED_ACTIVE_LOW_TRISTATE             0x2     /* ON: drive LED Pin low, OFF: tri-state */
#define MZD_LED_ACTIVE_HIGH_TRISTATE            0x3     /* ON: drive LED Pin high, OFF: tri-state */

/******************************************************************************
typedef struct _MZD_LED_CTRL MZD_LED_CTRL;
    interfaceSelect - select which interface's activity will be shown on the LED
        MZD_LINE_SIDE = PHY side (Line side)
        MZD_HOST_SIDE = System side (Host side)
        MZD_LED_CONFIG_UNCHANGED
    portSelect - select which port's activity will be shown on the LED
        MDIO port address, 0-31
    laneSelect - select which lane's activity will be shown on the LED
        lane number 0-3 or MZD_LED_CONFIG_UNCHANGED
    blinkActivity - The activity has higher priority than the solid activity
        MZD_LED_ACT_BLINK_OFF
        MZD_LED_ACT_LANE_TX_RX
        MZD_LED_ACT_LANE_TX
        MZD_LED_ACT_LANE_RX
        MZD_LED_ACT_LANE_LINK_UP
        MZD_LED_ACT_FORCE_BLINK
        MZD_LED_ACT_BLINK_MIX
        MZD_LED_ACT_SOLID_MIX
        MZD_LED_CONFIG_UNCHANGED
    solidActivity - Solid activity has lower priority than the blink activity
        MZD_LED_ACT_SOLID_OFF
        MZD_LED_ACT_LANE_TX_RX
        MZD_LED_ACT_LANE_TX
        MZD_LED_ACT_LANE_RX
        MZD_LED_ACT_LANE_LINK_UP
        MZD_LED_ACT_SOLID_ON
        MZD_LED_CONFIG_UNCHANGED
        e.g.
             1. If blinkActivity = MZD_LED_ACT_LANE_TX, solidActivity = MZD_LED_ACT_LANE_LINK_UP,
                LED will be solid on when the link is up and start blinking when a receive activity
                presents.
             2. If blinkActivity = solidActivity = MZD_LED_ACT_LANE_LINK_UP, LED will blink when link up.
             3. If blinkActivity = MZD_LED_ACT_BLINK_OFF, solidActivity = MZD_LED_ACT_SOLID_ON,
                LED will be solid on
             4. If blinkActivity = MZD_LED_ACT_FORCE_BLINK, solidActivity = MZD_LED_ACT_SOLID_OFF,
                LED will be blinking.

    polarity - Decide if LED pin will be driven high/low or in tri-state
        MZD_LED_ACTIVE_LOW
        MZD_LED_ACTIVE_HIGHa
        MZD_LED_ACTIVE_LOW_TRISTATE
        MZD_LED_ACTIVE_HIGH_TRISTATE
        MZD_LED_CONFIG_UNCHANGED
    mixRateLevel - LED mix percentage Level. Level0 to Level8 with a 12.5% step.
                   When using two terminal bi-color LEDs, the mixing percentage
                   should not be set to greater than Level4.
        0 = Level 0, 0%
        1 = Level 1, 12.5%
        2 = Level 2, 25%
        3 = Level 3, 37.5%g
        4 = Level 4, 50%
        5 = Level 5, 62.5%
        6 = Level 6, 75%
        7 = Level 7, 87.5%
        8 = Level 8, 100%
        MZD_LED_CONFIG_UNCHANGED
    blinkRateSelect - MUST be 1, 2 or MZD_LED_CONFIG_UNCHANGED.
                      Select the blink rate options for the LED.
                      The options must be provided to the mzdSetLEDTimer() API
                      in MZD_LED_TIMER_CONFIG structure.
******************************************************************************/
typedef struct _MZD_LED_CTRL
{
    MZD_U16 interfaceSelect;
    MZD_U16 portSelect;
    MZD_U16 laneSelect;
    MZD_U16 blinkActivity;
    MZD_U16 solidActivity;
    MZD_U16 polarity;
    MZD_U16 mixRateLevel;
    MZD_U16 blinkRateSelect;    /* MUST be 1, 2 or MZD_LED_CONFIG_UNCHANGED */
} MZD_LED_CTRL;

/******************************************************************************
typedef struct _MZD_LED_TIMER_CONFIG MZD_LED_TIMER_CONFIG;

    blinkRate1, blinkRate2 - Blink Rate Option 1 and 2. Also see mzdSetLEDControl().
        0 = 40 ms
        1 = 81 ms
        2 = 161 ms
        3 = 322 ms
        4 = 644 ms
        5 = 1.3s
        6 = 2.6 s
        7 = 5.2 s
        MZD_LED_CONFIG_UNCHANGED
    pulseStretchDuration - Only the transmit activity, receive activity, and
        transmit or receive activity are stretched. The pulse stretching is applied first
        and the blinking will reflect the duration of the stretched pulse.
        0 = No pulse stretching
        1 = 20 to 40 ms
        2 = 40 to 81 ms
        3 = 81 to 161 ms
        4 = 161 to 322 ms
        5 = 322 to 644 ms
        6 = 644 ms to 1.3s
        7 = 1.3 to 2.6s
        MZD_LED_CONFIG_UNCHANGED

    Note/Warning:
        All LEDs share the same LED timer config structure.
******************************************************************************/
typedef struct _MZD_LED_TIMER_CONFIG
{
    MZD_U16 blinkRate1;
    MZD_U16 blinkRate2;
    MZD_U16 pulseStretchDuration;
} MZD_LED_TIMER_CONFIG;
/******************************************************************************
MZD_FUNC MZD_STATUS mzdSetLEDControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID ledPinId,
    IN MZD_LED_CTRL ledCtrl
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    ledId - The Pin to configure, see the definition of MZD_LED_ID.
    ledCtrl - Configure LED behavior source(interface/port/lane), solid and blink activity,
              LED polarity and mix rate level 
              Users can set two blink rate options to be selected in ledCtrl.
 Outputs:
    None

 Returns:
    MZD_OK if configuration was successful, MZD_FAIL if not

 Description:
    This function configures the activities of the given LED pin. User can select the
    interface/port/lane source for the LED pin.

    The API provides several activity choices to be selected when LED is blinking or in solid status.
    Also, users can change the LED mix rate level, LED polarity and blink rate option.
    Please call mzdSetLEDTimer() to configure blink rate.

 Notes/Warnings:
    The given Pins MUST be configured to MZD_PIN_MODE_LED mode before calling this API.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetLEDControl
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID ledPinId,
    IN MZD_LED_CTRL ledCtrl
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdSetLEDTimer
(
    IN MZD_DEV_PTR pDev,
    IN MZD_LED_TIMER_CONFIG ledTimerConfig
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    ledTimerConfig - Configure two LED blink rate options and pulse stretch duration
                     All LED share the same ledTimerConfig.
 Outputs:
    None

 Returns:
    MZD_OK if configuration was successful, MZD_FAIL if not

 Description:
    This function configures the LED timer for all LED pins. Users can configure two blink rate
    options and the pulse stretch duration.

    Only following three status pulse are stretched.
        MZD_LED_ACT_LANE_TX_RX
        MZD_LED_ACT_LANE_TX
        MZD_LED_ACT_LANE_RX
    All other statuses are not stretched since they are static in nature and no stretching
    is required.

    The pulse stretching is applied first and the blinking will reflect the duration of the
    stretched pulse.

 Notes/Warnings:
    The given Pins MUST be configured to MZD_PIN_MODE_LED mode before calling this API.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdSetLEDTimer
(
    IN MZD_DEV_PTR pDev,
    IN MZD_LED_TIMER_CONFIG ledTimerConfig
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdConfigRClkPin
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID rClkPinId,
    IN MZD_U16 portSelect,
    IN MZD_U16 interfaceSelect,
    IN MZD_U16 laneSelect
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    rClkPinId - the RCLK Pin to configure, the Pin MUST be set to MZD_PIN_MODE_RCLK mode
    portSelect - 0-31, select the port of the clock source for the given RCLK Pin
    interfaceSelect - select the interface of the clock source for the given RCLK Pin
        MZD_LINE_SIDE
        MZD_HOST_SIDE
    laneSelect - 0-3; select the lane offset of the clock source for the given RCLK Pin

 Outputs:
    None.

 Returns:
    MZD_OK if the configuration was successful, MZD_FAIL if not
    If the given Pin is not in MZD_PIN_MODE_RCLK, MZD_FAIL will be returned


 Description:
    When the Pin is configured to the MZD_PIN_MODE_RCLK, this API select the port,
    interface and lane where the Recovered Clock signal generated for the given Pin.
    All of the lanes on all interfaces and ports can be used to generate Recovered Clock.

    User can call mzdConfigRClkSource() first to configure the RCLK on the lane using
    in this API, which including the source Recovered Clock and the divider.
    User should refer to the datasheet to decide what source clock rate and divider
    combination to use for each of the speed mode.

 Side effects:
    None.

 Note/Warning:
    User MUST call mzdSetPinMode() first to select MZD_PIN_MODE_RCLK for the Pin.
******************************************************************************/
MZD_FUNC MZD_STATUS mzdConfigRClkPin
(
    IN MZD_DEV_PTR pDev,
    IN MZD_PIN_ID rClkPinId,
    IN MZD_U16 portSelect,
    IN MZD_U16 interfaceSelect,
    IN MZD_U16 laneSelect
);

/******************************************************************************
typedef struct _MZD_RCLK_SRC_OPTION MZD_RCLK_SRC_OPTION;
    Structure for RCLK option on each lane.
    overWriteSrcClock - whether overwrite the srcClockSelect,
                              recommended to keep default as MZD_FALSE
    srcClockSelect - Select the clock source for this MUX, only used when
                     the overWriteSrcClock is MZD_TRUE
        0 = Select 40T/80T/160T recovered clock
        1 = Select 8T/16T/33T/34T/68T/136T recovered clocks  (PCS mode only)

                      X7121 A0 and B0   |     X7121 C0
      SerDes Speed    Clock 0  Clock1   |  Clock 0  Clock1
        1.25            40T      8T     |    40T      8T
        3.125           40T      8T     |    40T      8T
        5.15625         40T      16T    |    40T      33T
        10.3125         40T      16T    |    40T      33T
        12.890625       40T      33T    |    40T      33T
        25.78125        40T      33T    |    40T      33T
        26.5625         40T      34T    |    40T      34T
        53.125          80T      68T    |    80T      68T
        106.25          160T     136T   |    160T     136T
        40GR4           40T      16T    |    40T      16T
        50GR4           40T      16T    |    40T      16T
        
        Please refer to the document to decide what source clock rate and divider
    combination to use for each of the speed mode.

    dividerConfig - whether the clock output divider should be enabled or not
        0 = Disable
        1 = RCLK output squelched if there is no link
        2 = RCLK output is always active regardless of link status. Chip 
            reference clock will be used to generate RCLK if there is no link

    divideRatio - Divide ratio for the recovered clock, 8 bits value
        Divide ratio = 2 * (divideRatio[7:0] + 1)

      Mode         B0 Source Clock  C0 Source Clock
                   Rate (MHz)       Rate (MHz)
    1000BASE-X       156.25           156.25
    2.5GBASE-X       390.625          390.625
    5GBASE-R         322.265625*      156.25
    10GBASE-R        644.53125*       312.5
    25GBASE-R2       390.625          390.625
    25GBASE-R        781.25           781.25
    40GBASE-R4       644.53125        644.53125
    40GBASE-R2       625              625
    50GBASE-R4       322.265625       322.265625
    50GBASE-R1/2     781.25           781.25
    100GBASE-R1/2/4  781.25           781.25
    200GBASE-R2/4/8  781.25           781.25
    400GBASE-R4/8    781.25           781.25

    Examples to set output 4.8828125 MHz Recovered Clock on B0:
      Mode        Source            Source      Divide         Divide Ratio     Recovered clock
                  Clock Select      Clock Rate  Ratio Select                    output rate (MHz)
                  "srcClockSelect"     (MHz)    "divideRatio"
    10GBASE-R         1             644.53125       65         2x(65+1)=132     644.53125/132 = 4.8828125

    Examples to set output 4.8828125 MHz Recovered Clock on C0:
      Mode        Source            Source      Divide         Divide Ratio     Recovered clock
                  Clock Select      Clock Rate  Ratio Select                    output rate (MHz)
                  "srcClockSelect"     (MHz)    "divideRatio"
    10GBASE-R         1             312.5           31         2x(31+1)=64      312.5/64 = 4.8828125

    Examples to set register C0 to output 4.8828125 MHz Recovered Clock:
      Mode        Source            Source      Divide         Divide Ratio     Recovered clock
                  Clock Select      Clock Rate  Ratio Select                    output rate (MHz)
                  "srcClockSelect"     (MHz)    "divideRatio"
    1000BASE-X        1             156.25          15         2x(15+1) = 32     4.8828125
    2.5GBASE-X        1             390.625         39         2x(39+1) = 80     4.8828125
    5GBASE-R          1             156.25          15         2x(15+1) = 32     4.8828125
    *10GBASE-R        1             312.5           31         2x(31+1) = 64     4.8828125
    25GBASE-R2        1             390.625         39         2x(39+1) = 80     4.8828125
    25GBASE-R         1             781.25          79         2x(79+1) = 160    4.8828125
    40GBASE-R4        1             644.53125       65         2x(65+1) = 132    4.8828125
    40GBASE-R2        1             625             63         2x(63+1) = 128    4.8828125
    50GBASE-R4        0             322.265625      32         2x(32+1) = 66     4.8828125
    50GBASE-R2        1             781.25          79         2x(79+1) = 160    4.8828125
    100GBASE-R4       1             781.25          79         2x(79+1) = 160    4.8828125

******************************************************************************/
typedef struct _MZD_RCLK_SRC_OPTION
{
    MZD_BOOL overWriteSrcClock;
    MZD_U16 srcClockSelect;
    MZD_U16 dividerConfig;
    MZD_U16 divideRatio;
} MZD_RCLK_SRC_OPTION;

/******************************************************************************
MZD_FUNC MZD_STATUS mzdConfigRClkSource
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 portSelect,
    IN MZD_U16 interfaceSelect,
    IN MZD_U16 laneSelect,
    IN MZD_RCLK_SRC_OPTION clockOption
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    portSelect - 0-31, select the port of the clock source to configure
    interfaceSelect - select the interface of the clock source to configure
        MZD_LINE_SIDE
        MZD_HOST_SIDE
    laneSelect - 0-3; select the lane offset of the clock source to configure
    clockOption - refers to the definitions of MZD_RCLK_SRC_OPTION

 Outputs:
    None.

 Returns:
    MZD_OK if the configuration was successful, MZD_FAIL if not

 Description:

    User can set following configurations for each of the lane to generate RCLK.
    1. Source Clock
    2. Enable/Disable the clock divider
    3. Whether divider should be enabled after clock is ready or before
    4. Divider Ratio

    clockOption.overWriteSrcClock is recommended to keep default as MZD_FALSE.
    Please refer to the document if user intends to overwrite the clockOption.srcClockSelect
    to the other value.

    The given lane RCLK should be configured before calling mzdConfigRClkPin() to connect
    it to an output MZD_PIN_MODE_RCLK Pin.

 Side effects:
    None.

 Note/Warning:
    User MUST set the speed mode on the laneSelect before calling this API.
    Also, user MUST call this API again after the speed mode is changing during
    using Recovered Clock
******************************************************************************/
MZD_FUNC MZD_STATUS mzdConfigRClkSource
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 portSelect,
    IN MZD_U16 interfaceSelect,
    IN MZD_U16 laneSelect,
    IN MZD_RCLK_SRC_OPTION clockOption
);


#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZD_INTR_IO_H */
