/*******************************************************************************
Copyright (C) 2014 - 2020, Marvell International Ltd. and its affiliates
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************************
This is the header file for X7121 TAI feature API declarations           
********************************************************************************/
#ifndef MZD_TAI_API_H
#define MZD_TAI_API_H
#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

typedef struct _MZD_TAI_TIME_ARRAY
{
    MZD_U16    todSecondsHigh;      /* TOD Value sec bits 47-32 */
    MZD_U32    todSecondsLow;       /* TOD Value sec bits 31-0 */
    MZD_U32    todNanoseconds;      /* TOD Value nano bits 31-0 */
    MZD_32     todFracNano;         /* TOD Value fractional nano bits 31-0, This is a signed 32-bit integer, in the range -0.5ns to 0.5ns. Thus, the units of this integer are 2^(-32) nanosecond fractions. */
} MZD_TAI_TIME_ARRAY;

typedef struct _MZD_TAI_PPS_PULSE
{
    MZD_U8     ppsPulseCycSec;       /* the second part of clock cycle */
    MZD_U32    ppsPulseCycNanoSec;   /* the nanosecond part of clock cycle */
    MZD_U32    ppsPulseHiLvLen;      /* the high level time period length of the generation and reception clocks (in nanoseconds). When this value is 0, PPS duty cycle is 50%. When this value is not 0, PPS high level length is determined by this value */
} MZD_TAI_PPS_PULSE;

typedef enum
{
    MZD_TAI0 = 0,
    MZD_TAI1 = 1
} MZD_TAI_SELECT;

typedef enum
{
    TOD_UPDATE        = 0,
    TOD_FREQ_UPDATE   = 1,
    TOD_INCREMENT     = 2,
    TOD_DECREMENT     = 3,
    TOD_CAPTURE       = 4,
    TOD_GRACEFUL_INC  = 5,
    TOD_GRACEFUL_DEC  = 6,
    TOD_NOP           = 7
} MZD_TOD_OP;

typedef enum
{
    MZD_TAI_REF_CLK_0 = 0,         /* reference clock 156.25MHz */
    MZD_TAI_REF_CLK_1 = 1,         /* reference clock 125MHz */
    MZD_TAI_REF_CLK_2 = 2          /* reference clock 25MHz */
} MZD_TAI_REF_CLK;

typedef enum
{
    MZD_TAI_CLK_0 = 0,            /* TAI 800MHz */
    MZD_TAI_CLK_1 = 1             /* TAI 833.3MHz */
} MZD_TAI_CLK;


/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to enable macsec 0 clock, TAI_clk_enable_s, 
    enable TAI 0 and TAI 1, set TAI clock to 800MHz with reference clock = 156.25MHz, and set TOD step to 1.25ns(800MHz).
    After this init, TOD counter shall count normally.

Side effects:
    None

Notes/Warnings:
    This function should be called before using TAI module

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiInit
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiReadRegister
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum, 
    IN MZD_U32 regAddr, 
    OUT MZD_U32 *data
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    regAddr - register address

Outputs:
    data - a 32-bit data

Returns:
    MZD_STATUS

Description:
    This function read a 32-bit data from a TAI register

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiReadRegister
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_U32 regAddr,
    OUT MZD_U32 *data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiWriteRegister
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum, 
    IN MZD_U32 regAddr, 
    IN MZD_U32 data
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    regAddr - register address
    data - a 32-bit data

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function write a 32-bit data to a TAI register

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiWriteRegister
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_U32 regAddr,
    IN MZD_U32 data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiReadRegisterField
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum, 
    IN MZD_U32 regAddr, 
    IN MZD_U16 fieldOffset, 
    IN MZD_U16 fieldLength, 
    OUT MZD_U32 *data
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    regAddr - register address
    fieldOffset - offset
    fieldLength - length of data

Outputs:
    data - data with designated length

Returns:
    MZD_STATUS

Description:
    This function is used to read data from a TAI register with requested fieldOffset and fieldLength

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiReadRegisterField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_U32 regAddr,
    IN MZD_U16 fieldOffset,
    IN MZD_U16 fieldLength,
    OUT MZD_U32 *data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiWriteRegisterField
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum, 
    IN MZD_U32 regAddr, 
    IN MZD_U16 fieldOffset, 
    IN MZD_U16 fieldLength, 
    IN MZD_U32 data
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    regAddr - register address
    fieldOffset - offset
    fieldLength - length of data
    data - data with designated length

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to write data to a TAI register with requested fieldOffset and fieldLength

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiWriteRegisterField
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_U32 regAddr,
    IN MZD_U16 fieldOffset,
    IN MZD_U16 fieldLength,
    IN MZD_U32 data
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodUpdate
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum, 
    IN MZD_TAI_TIME_ARRAY *timeArray
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    timeArray - TOD value to be loaded

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to update TOD time counter to timeArray

Side effects:
    None

Notes/Warnings:
    From TAI spec, all time-setting operations, including the Update, Increment, GracefulInc, and GracefulDec must be
    performed with an integer nanosecond value. The fractional nanosecond configuration of the <Time Load> register 
    in these cases must be zero. 
    Therefore, todFracNano member of timeArray must be zero. And we set the member to 0 in the function definition.
    This operation is triggered by <Time Counter Function Trigger>

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodUpdate
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_TIME_ARRAY *timeArray
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodFreqUpdate
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_32 fracNano
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    fracNano - fractional nanoseconds. This is a signed 32-bit integer, in the range -0.5ns to 0.5ns. Thus, the units of this integer are 2^(-32) nanosecond fractions.

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to do a frequency update operation

Side effects:
    None

Notes/Warnings:
    fracNano is a signed 32-bit integer
    This operation is triggered by <Time Counter Function Trigger>

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodFreqUpdate
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_32 fracNano
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodCapture
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to do a TOD Capture operation, record the TOD and store it in a time capture register 

Side effects:
    None

Notes/Warnings:
    This operation is triggered by <Time Counter Function Trigger>

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodCapture
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodIncrement
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_TIME_ARRAY *todOffset
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    todOffset - TOD offset to be added

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to update the value of the TOD Counter by adding todOffset

Side effects:
    None

Notes/Warnings:
    From TAI spec, all time-setting operations, including the Update, Increment, GracefulInc, and GracefulDec must be
    performed with an integer nanosecond value. The fractional nanosecond configuration of the <Time Load> register 
    in these cases must be zero. 
    Therefore, todFracNano member of todOffset must be zero. And we set the member to 0 in the function definition.
    This operation is triggered by <Time Counter Function Trigger>

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodIncrement
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_TIME_ARRAY *todOffset
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodDecrement
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum, 
    IN MZD_TAI_TIME_ARRAY *todOffset
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    todOffset - TOD offset to be subtracted

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to update the value of the TOD Counter by subtracting todOffset

Side effects:
    None

Notes/Warnings:
    This operation is triggered by <Time Counter Function Trigger>

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodDecrement
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_TIME_ARRAY *todOffset
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodGracefulInc
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum, 
    IN MZD_U8 graceStep, 
    IN MZD_TAI_TIME_ARRAY *todOffset
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    graceStep -  graceful step, recommended value is 1 nanosecond
    todOffset - TOD offset to be smoothly increased

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to smoothly increase the TOD by a pre-configured offset over a long period 

Side effects:
    None

Notes/Warnings:
    From TAI spec, all time-setting operations, including the Update, Increment, GracefulInc, and GracefulDec must be
    performed with an integer nanosecond value. The fractional nanosecond configuration of the <Time Load> register 
    in these cases must be zero. 
    Therefore, todFracNano member of todOffset must be zero. And we set the member to 0 in the function definition.
    This operation is triggered by <Time Counter Function Trigger>

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodGracefulInc
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_U8 graceStep,
    IN MZD_TAI_TIME_ARRAY *todOffset
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodGracefulDec
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_U8 graceStep,
    IN MZD_TAI_TIME_ARRAY *todOffset
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    graceStep -  graceful step, recommended value is 1 nanosecond
    todOffset - TOD offset to be smoothly decreased

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to smoothly decrease the TOD by a pre-configured offset over a long period

Side effects:
    None

Notes/Warnings:
    From TAI spec, all time-setting operations, including the Update, Increment, GracefulInc, and GracefulDec must be
    performed with an integer nanosecond value. The fractional nanosecond configuration of the <Time Load> register 
    in these cases must be zero. 
    Therefore, todFracNano member of todOffset must be zero. And we set the member to 0 in the function definition.
    This operation is triggered by <Time Counter Function Trigger>

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodGracefulDec
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_U8 graceStep,
    IN MZD_TAI_TIME_ARRAY *todOffset
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodTimeCounterFunctionSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TOD_OP todOp
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    todOp:
        TOD_UPDATE
        TOD_FREQ_UPDATE
        TOD_INCREMENT
        TOD_DECREMENT
        TOD_CAPTURE
        TOD_GRACEFUL_INC
        TOD_GRACEFUL_DEC
        TOD_NOP

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to set <Time Counter Function>

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodTimeCounterFunctionSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TOD_OP todOp
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodTimeLoadValueSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_TIME_ARRAY *todValue
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    todValue - TOD value

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to set <Time Load Value> registers

Side effects:
    None

Notes/Warnings:
    From TAI spec, all time-setting operations, including the Update, Increment, GracefulInc, and GracefulDec must be
    performed with an integer nanosecond value. The fractional nanosecond configuration of the <Time Load Value> register 
    in these cases must be zero. 
    Therefore, todFracNano member of todValue must be zero when do operations mentioned above.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodTimeLoadValueSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_TIME_ARRAY *todValue
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodTimeCaptureValue0Get
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    OUT MZD_TAI_TIME_ARRAY *todValue
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1

Outputs:
    todValue - TOD value

Returns:
    MZD_STATUS

Description:
    This function is used to read value in Time Capture Value 0 registers

Side effects:
    None

Notes/Warnings:
    To read an valid TOD, this function should be called after a Capture operation is performed

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodTimeCaptureValue0Get
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    OUT MZD_TAI_TIME_ARRAY *todValue
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodTimeCaptureValue1Get
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    OUT MZD_TAI_TIME_ARRAY *todValue
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1

Outputs:
    todValue - TOD value

Returns:
    MZD_STATUS

Description:
    This function is used to read value in Time Capture Value 1 registers

Side effects:
    None

Notes/Warnings:
    To read an valid TOD, this function should be called after a Capture operation is performed

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodTimeCaptureValue1Get
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    OUT MZD_TAI_TIME_ARRAY *todValue
);


/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodTimeCaptureStatusGet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    OUT MZD_U32 *valid
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1

Outputs:
    valid - Time Capture Status, should be 0 or 1 or 2 or 3

Returns:
    MZD_STATUS

Description:
    This function is used to read back Time Capture Status to check if capture successfully

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodTimeCaptureStatusGet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    OUT MZD_U32 *valid
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodStepSet
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum, 
    IN MZD_U16 stepNano, 
    IN MZD_32 stepFracNano
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    stepNano - TOD step nanosecond
    stepFracNano - TOD step fractional nanosecond. Represents the sub-nanosecond portion of the TOD Step. This is a signed 32-bit integer, in the range -0.5ns to 0.5ns. Thus, the units of this integer are 2^(-32) nanosecond fractions.

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to set TOD step

Side effects:
    None

Notes/Warnings:
    stepFracNano is a signed 32-bit integer.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodStepSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_U16 stepNano,
    IN MZD_32 stepFracNano
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodStepGet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    OUT MZD_U16 *stepNano,
    OUT MZD_32 *stepFracNano
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1

Outputs:
    stepNano - TOD step nanosecond
    stepFracNano - TOD step fractional nanosecond. Represents the sub-nanosecond portion of the TOD Step. This is a signed 32-bit integer, in the range -0.5ns to 0.5ns. Thus, the units of this integer are 2^(-32) nanosecond fractions.

Returns:
    MZD_STATUS

Description:
    This function is used to read back TOD step

Side effects:
    None

Notes/Warnings:
    stepFracNano is a signed 32-bit integer.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodStepGet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    OUT MZD_U16 *stepNano,
    OUT MZD_32 *stepFracNano
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiPpsGenerationSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_PPS_PULSE *pulseData
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    pulseData - PPS pulse configuration

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to generate PPS pulse

Side effects:
    None

Notes/Warnings:
    1. When ppsPulseHiLvLen member(in nanoseconds) of pulseData is 0, PPS duty cycle is 50%,
       when ppsPulseHiLvLen is not 0, PPS high level length is determined by this value.
    2. This API only control TAI module to generate PPS, you need to configure top level register <Clock_out_sel> to
       select TAI0/TAI1 clock_out to ONE_PPS_O pin

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiPpsGenerationSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_PPS_PULSE *pulseData
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiPpsReceptionSet
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum, 
    IN MZD_TAI_PPS_PULSE *pulseData
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    pulseData - PPS pulse configuration

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to configure device to receive PPS pulse with <Clock Mode> = 1

Side effects:
    None

Notes/Warnings:
    If only do phase adjustment(no frequency adjustment) through PPS, this function should be called

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiPpsReceptionSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_PPS_PULSE *pulseData
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiPpsAdvReceptionSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_PPS_PULSE *pulseData
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    pulseData - PPS pulse configuration

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to configure device to receive PPS pulse with <Clock Mode> = 2(Reception Advanced)

Side effects:
    None

Notes/Warnings:
    If do both phase and frequency adjustment through PPS, this function should be called

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiPpsAdvReceptionSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_PPS_PULSE *pulseData
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTriggerGenerationPulseSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_TIME_ARRAY *triggerTod,
    IN MZD_TAI_TIME_ARRAY *triggerTodMask,
    IN MZD_U32 pulseWidth
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    triggerTod - Trigger Generation TOD
    triggerTodMask - Generate Function Mask
    pulseWidth - the width of the pulse in TAI clock cycles resolution

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to generate discrete pulse

Side effects:
    None

Notes/Warnings:
    1. As for pulseWidth, the width of the pulse is in TAI clock cycles resolution,
       for example, if you want generate a pulse which pulse width is N * clockCycle, you just set pulseWidth to N,
       N shall be greater than zero.
    2. From spec, if generate only one discrete pulse, after the outgoing trigger is generated, the application must disable the <Trigger Generate Enable>.
       And it is recommended to wait for the <Generation int>, and then disable the <Trigger Generate Enable>
    3. This API only control TAI module to generate pulse, you need to configure top level register <Dato_sel> to
       select tai0_pulse_out/tai1_pulse_out to TOD_DATO pin.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTriggerGenerationPulseSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_TAI_TIME_ARRAY *triggerTod,
    IN MZD_TAI_TIME_ARRAY *triggerTodMask,
    IN MZD_U32 pulseWidth
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiPulseInMuxingEnableSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_BOOL en
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    en:
        0 - clock_not_on_pulse, clock isn't driven on pulse in
        1 - clock_on_pulse, clock is driven on pulse in

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to set <Pulse In Muxing Enable>

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiPulseInMuxingEnableSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_BOOL en
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiInterruptCauseGet
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum, 
    OUT MZD_U32 *intCause
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1

Outputs:
    intCause - TAI Interrupt Cause

Returns:
    MZD_STATUS

Description:
    This function is used to read value from <TAI Interrupt Cause> register

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiInterruptCauseGet
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum, 
    OUT MZD_U32 *intCause
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiInterruptMaskSet
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum, 
    IN MZD_U32 intMask
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    intMask - TAI Interrupt Mask

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to set TAI Interrupt Mask

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiInterruptMaskSet
(
    IN MZD_DEV_PTR pDev, 
    IN MZD_U16 mdioPort, 
    IN MZD_TAI_SELECT taiNum, 
    IN MZD_U32 intMask
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodFractionalNanosecondDriftGet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    OUT MZD_U32* driftValue
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1

Outputs:
    driftValue - Fractional Nanosecond Drift Adjustment

Returns:
    MZD_STATUS

Description:
    This function is used to read value from <Fractional Nanosecond Drift Adjustment> register

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodFractionalNanosecondDriftGet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    OUT MZD_U32* driftValue
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiClockGenClockRatioSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_U16 ratio
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    ratio - Clock Gen TAI Clock Ratio

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to set <Clock Gen TAI Clock Ratio>

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiClockGenClockRatioSet
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_U16 ratio
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiTodUpdateEnableFirmware
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_BOOL enableTodUpdate
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    taiNum - TAI number, 0 or 1
    enableTodUpdate - enable or disable TOD update

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This is a customized feature that requires the supported firmware to enable
    the ToD Update at a specific interval. Please contact Marvell Application
    Engineer for more details on this customized feature.

Side effects:
    None

Notes/Warnings:
     This is a customized function in some specific scenarios.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodUpdateEnableFirmware
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_SELECT taiNum,
    IN MZD_BOOL enableTodUpdate
);

/******************************************************************************
MZD_STATUS mzdTaiTodUpdateEnableFirmwareGet
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_BOOL *enableTodUpdate
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call

Outputs:
    enableTodUpdate - enable or disable ToD update

Returns:
    MZD_STATUS

Description:
    This is a customized feature that requires the supported firmware to enable
    the ToD Update at a specific interval. This call will check if the ToD Update
    feature is enabled or disabled.  Please contact Marvell Application
    Engineer for more details on this feature.

Side effects:
    None

Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiTodUpdateEnableFirmwareGet
(
    IN MZD_DEV_PTR pDev,
    OUT MZD_BOOL *enableTodUpdate
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiClockConfig
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_REF_CLK refClock,
    IN MZD_TAI_CLK taiClock
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    refClock -
             0 : reference clock 156.25MHz
             1 : reference clock 125MHz
             2 : reference clock 25MHz
    taiClock - 
             0 :  TAI clock 800MHz
             1 :  TAI clock 833.3MHz

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to set TAI clock and TOD step.

Side effects:
    None

Notes/Warnings:
     None.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiClockConfig
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_TAI_REF_CLK refClock,
    IN MZD_TAI_CLK taiClock
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdTaiRefclkSel
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL selCoreCrystal
);

Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address
    selCoreCrystal - 
             0 :  select refclk from ptp crystal
             1 :  select refclk from core crystal

Outputs:
    None

Returns:
    MZD_STATUS

Description:
    This function is used to set TAI control bit config to choose Core vs PTP PLL.

Side effects:
    None

Notes/Warnings:
     None.

******************************************************************************/
MZD_FUNC MZD_STATUS mzdTaiRefclkSel
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_BOOL selCoreCrystal
);

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif


#endif  /* defined MZD_TAI_API_H */