/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains common utility functions use across the Marvell
X7121 PHYs API driver (MZD).
********************************************************************/
#ifndef MZD_UTILS_H
#define MZD_UTILS_H

#ifdef MZD_DEBUG
#include "stdio.h"
#include "stdarg.h"
#endif
                                   
#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

#ifdef MZD_DEBUG
typedef enum 
{
    MZD_DBG_OFF_LVL,
    MZD_DBG_ERR_LVL,
    MZD_DBG_INF_LVL,
    MZD_DBG_ALL_LVL
} MZD_DBG_LEVEL;

#ifdef MZD_DEBUG_FUNC
typedef void (*MZD_DBG_API)(MZD_U16 debugLevel, char *str);
extern MZD_DBG_API mzdDebugLogFunc;

/*******************************************************************************
void mzdSetDbgLogFunc
(
    MZD_DBG_API mzdDebugFuncPtr 
);

 Inputs:
       mzdDebugFuncPtr - pass-in user defined debug logging function

 Outputs:
       None

 Returns:
       None

 Description:
       This function assigns the debug logging function pointer to the global
       mzdDebugLogFunc function. The mzdDbgPrint will pass a formatted message 
       together with the debug level to this mzdDebugLogFunc.

       A sample of the customized logging function is something similar to below 
       where the function will have a pass-in debugLevel and a string pointer. 
       This user customized function can determine the debug level before 
       printing out the log message.

       MZD_STATUS customDebugLogger
       (
           IN MZD_U16 debugLevel, 
           IN MZD_VOID *pString
       );

       Call mzdSetDbgLogFunc by passing in the customized logging function:
       mzdSetDbgLogFunc(customDebugLogger);

 Side effects:
    None

 Notes/Warnings:
       MZD_DEBUG_FUNC must be defined in the mzdTypes.h to use this feature
*******************************************************************************/
void mzdSetDbgLogFunc
(
    MZD_DBG_API mzdDebugFuncPtr 
);
#endif

/*******************************************************************************
 void mzdDbgPrint
 (
     FILE *stream, 
     MZD_DBG_LEVEL debug_level, 
     char* format, 
     ...
 );

 Inputs:
       debug_level - allows control of how much is printed
               MZD_DBG_OFF_LVL  - prints nothing
               MZD_DBG_ERR_LVL - for error messages
               MZD_DBG_ALL_LVL - for informational messages

 Outputs:
       None

 Returns:
       None

 Description:
       This function tests for the debug message level and prints out the 
       string with the given arguments.  

 Side effects:
    None

 Notes/Warnings:
       Set global mzd_debug_level to MZD_DBG_OFF_LVL to turn off all printing, or
       MZD_DBG_ERR_LVL to print only errors, or MZD_DBG_ALL_LVL for both errors
       and informational messages. This can be done during run time or
       the global default can be changed at compile time to change the
       run-time behavior.

       Undefined MZD_DEBUG to remove all printing code (may need some modifications
       on some compilers).

*******************************************************************************/
void mzdDbgPrint
(
    FILE *stream, 
    MZD_DBG_LEVEL debug_level, 
    const char* format, 
    ...
);

#define MZD_DBG_ERROR(...)       mzdDbgPrint(stderr, MZD_DBG_ERR_LVL, __VA_ARGS__) /* macro for error messages */
#define MZD_DBG_INFO(...)        mzdDbgPrint(stdout, MZD_DBG_ALL_LVL, __VA_ARGS__) /* macro for informational messages */
#define MZD_DBG_CRITIC_INFO(...) mzdDbgPrint(stdout, MZD_DBG_INF_LVL, __VA_ARGS__) /* macro for informational messages */

extern MZD_DBG_LEVEL mzd_debug_level;

#else /* MZD_DEBUG not defined */

#define MZD_DBG_ERROR(...)
#define MZD_DBG_INFO(...)
#define MZD_DBG_CRITIC_INFO(...)

#endif



/*******************************************************************************
 MZD_PVOID mzdMemSet
 (
     IN MZD_PVOID start,
     IN MZD_16   symbol,
     IN MZD_U32 size
 );

 Inputs:
       start  - start address of memory block for setting
       symbol - character to store, converted to an unsigned char
       size   - size of block to be set

 Outputs:
       None

 Returns:
       Pointer to set memory block

 Description:
       Set a block of memory

 Side effects:
    None

 Notes/Warnings:
       None

*******************************************************************************/
MZD_PVOID mzdMemSet
(
    IN MZD_PVOID start,
    IN MZD_16   symbol,
    IN MZD_U32 size
);


/*******************************************************************************
 MZD_PVOID mzdMemCpy
 (
     IN MZD_PVOID pDestination,
     IN const MZD_PVOID pSource,
     IN MZD_U32 size
 );
 
 Inputs:
       pDestination - destination of copy
       pSource      - source of copy
       size        - size of memory to copy

 Outputs:
       None

 Returns:
       Pointer to destination

 Description:
       Copies 'size' characters from the object pointed to by 'source' into
       the object pointed to by 'destination'. If copying takes place between
       objects that overlap, the behavior is undefined.

 Side effects:
    None

 Notes/Warnings:
       None

*******************************************************************************/
MZD_PVOID mzdMemCpy
(
    IN MZD_PVOID pDestination,
    IN const MZD_PVOID pSource,
    IN MZD_U32 size
);

/*******************************************************************************
 mzdStrlen

 Description:
       Determine the length of a string
 Inputs:
       pSource  - string

 Outputs:
       None

 Returns:
       size    - number of characters in string, not including EOS.

 Side effects:
    None

 Notes/Warnings:
       None

*******************************************************************************/
MZD_U32 mzdStrlen
(
    IN const MZD_PVOID pSource
);

/*******************************************************************************
MZD_STATUS mzdSetFieldTo32BitsWord
(
    IN  MZD_U32      orgData,
    IN  MZD_U32      bitFieldData,
    IN  MZD_U8       fieldOffset,
    IN  MZD_U8       fieldLength,
    OUT MZD_U32      *data
);

 Inputs:
    orgData - original word to modify
    bitFieldData - The data to set the register field to
                 (must be <= largest value for that bit field,
                  no range checking is done by this function)
    fieldOffset - The field start bit index. (0 - 31)
    fieldLength - Number of bits to write to orgData

 Outputs:
    data - The new/modified data with the bit field changed

 Returns:
    MZD_OK always

 Description:
    This function writes a value to a bit field within a 32-bit data field.

 Side effects:
    None

 Notes/Warnings:
    The sum of fieldOffset & fieldLength parameters must be smaller-
    equal to 32

    This register acts on data passed in. It does no hardware access.

    This function is useful to reduce IO if several bit fields of a register
    that has been read is to be changed before writing it back.
*******************************************************************************/
MZD_STATUS mzdSetFieldTo32BitsWord
(
    IN  MZD_U32      orgData,
    IN  MZD_U32      bitFieldData,
    IN  MZD_U8       fieldOffset,
    IN  MZD_U8       fieldLength,
    OUT MZD_U32      *data
);

/*******************************************************************************
MZD_STATUS mzdGetFieldFrom32BitsWord
(
    IN  MZD_U32      orgData,
    IN  MZD_U8       fieldOffset,
    IN  MZD_U8       fieldLength,
    OUT MZD_U32      *data
);

 Inputs:
    orgData    - The original data for getting bit field
    fieldOffset - The field start bit index. (0 - 31)
    fieldLength - Number of bits to read

 Outputs:
    data - The data from the associated bit field

 Returns:
    MZD_OK always

 Description:
    This function grabs a value from a bit field within 32-bit orgData. It could
    be used to get the value of a bit field within a word which was previously
    read from the PHY.

 Side effects:
    None

 Notes/Warnings:
    The sum of fieldOffset & fieldLength parameters must be smaller-
    equal to 32

    This register acts on data passed in. It does no hardware access.

    This function is useful if you want to do 1 register access and then
    get different bit fields without doing another register access either
    because there are latched bits in the register to avoid another read,
    or to keep hardware IO down to improve performance/throughput.
*******************************************************************************/
MZD_STATUS mzdGetFieldFrom32BitsWord
(
    IN  MZD_U32      orgData,
    IN  MZD_U8       fieldOffset,
    IN  MZD_U8       fieldLength,
    OUT MZD_U32      *data
);

/*******************************************************************************
 MZD_VOID mzdGetU32fromBuf
 (
     OUT MZD_U32 *num,
     IN MZD_U8 *buf
 );

 Inputs:
    buf - buffer that contains 8-bit data

 Outputs:
    num - array for 32-bit data converted from the buffer read

 Returns:
    MZD_OK if successful, MZD_FAIL if an error was detected.

 Description:
    Gets little endian unsigned 32-bit data from an 8-bit buffer

 Side effects:
    None

 Notes/Warnings:
    None.
*******************************************************************************/
MZD_VOID mzdGetU32fromBuf
(
    OUT MZD_U32 *num,
    IN MZD_U8 *buf
);

/*******************************************************************************
 MZD_VOID mzdGetU16fromBuf
 (
     OUT MZD_U16 *num,
     IN MZD_U8 *buf
 );

 Inputs:
    buf - buffer that contains 8-bit data

 Outputs:
    num - array for 16-bit data converted from the buffer read

 Returns:
    MZD_OK if successful, MZD_FAIL if an error was detected.

 Description:
    Gets little endian unsigned 16-bit data from an 8-bit buffer

 Side effects:
    None

 Notes/Warnings:
    None.
*******************************************************************************/
MZD_VOID mzdGetU16fromBuf
(
    OUT MZD_U16 *num,
    IN MZD_U8 *buf
);

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZD_UTILS_H */

