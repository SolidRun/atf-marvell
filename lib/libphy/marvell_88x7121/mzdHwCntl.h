/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains functions and global data for interfacing with 
the host's hardware-specific MDIO and general-purpose
IO in order to control and query the Marvell X7121 PHY.

These functions as written were tested with a USB-interface to
access Marvell's EVK. If the user passes a NULL pointer into mzdInitDriver 
for MDIO read and write functions then these functions must be ported to 
the host's specific platform.
********************************************************************/
#ifndef MZD_HWCNTL_H
#define MZD_HWCNTL_H

#if C_LINKAGE
#if defined __cplusplus 
    extern "C" { 
#endif 
#endif  

/*******************************************************************
   PORT THESE FUNCTIONS
 *******************************************************************/

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwXmdioWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort, 
    IN MZD_U16 dev, 
    IN MZD_U16 reg, 
    IN MZD_U16 value
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31 
    dev - MMD device address, 0-31
    reg - MMD register address
    value - data to write

 Outputs:
    None

 Returns:
    MZD_OK - wrote successfully
    MZD_FAIL - an error occurred

 Description:
    Writes a 16-bit word to the MDIO
    Address is in format X.Y.Z, where X selects the MDIO port (0-31), Y selects
    the MMD/Device (0-31), and Z selects the register.

 Side effects:
    None

 Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwXmdioWrite
( 
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort, 
    IN MZD_U16 dev, 
    IN MZD_U16 reg, 
    IN MZD_U16 value
);


/******************************************************************************
 MZD_FUNC MZD_STATUS mzdHwXmdioRead
 (
     IN MZD_DEV_PTR pDev,
     IN MZD_U16 mdioPort, 
     IN MZD_U16 dev, 
     IN MZD_U16 reg,
     OUT MZD_U16 *data
 );

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - MDIO port address, 0-31 
    dev - MMD device address, 0-31
    reg - MMD register address

 Outputs:
    data - Returns 16 bit word from the MDIO

 Returns:
    MZD_OK - read successful
    MZD_FAIL - read was unsuccessful
    
 Description:
    Reads a 16-bit word from the MDIO
    Address is in format X.Y.Z, where X selects the MDIO port (0-31), Y selects the 
    MMD/Device (0-31), and Z selects the register.

 Side effects:
    None

 Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwXmdioRead
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort, 
    IN MZD_U16 dev, 
    IN MZD_U16 reg,
    OUT MZD_U16 *data
);


/*******************************************************************************
  MZD_FUNC MZD_STATUS mzdHwGetPhyRegField
  (
      IN  MZD_DEV_PTR  pDev,
      IN  MZD_U16      mdioPort, 
      IN  MZD_U16      dev, 
      IN  MZD_U16      regAddr,
      IN  MZD_U8       fieldOffset,
      IN  MZD_U8       fieldLength,
      OUT MZD_U16      *data
  );

  Inputs:  
        pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
        mdioPort       - The MDIO port address, 0-31
        dev        - The MMD device, 0-31 
        regAddr    - The register's address
        fieldOffset - The field start bit index. (0 - 15)
        fieldLength - Number of bits to read

  Outputs:
        data        - The read register field

  Returns:
        MZD_OK on success, or
        MZD_FAIL  - on error

  Description:
        This function reads a specified field from a mdioPort's phy register.
        It first reads the register, then returns the specified bit
        field from what was read.

  Side effects:
     None

  Notes/Warnings:
        The sum of fieldOffset & fieldLength parameters must be smaller-
        equal to 16

        Reading a register with latched bits may clear the latched bits.
        Use with caution for registers with latched bits.

        To operate on several bits within a register which has latched bits
        before reading the register again, first read the register with
        mzdHwXmdioRead() to get the register value, then operate on the
        register data repeatedly using mzdHwGetRegFieldFromWord() to
        take apart the bit fields without re-reading the register again.

        This approach should also be used to reduce IO to the PHY when reading
        multiple bit fields (do a single read, then grab different fields 
        from the register by using mzdHwGetRegFieldFromWord() repeatedly).

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwGetPhyRegField
(
    IN  MZD_DEV_PTR  pDev,
    IN  MZD_U16      mdioPort, 
    IN  MZD_U16      dev, 
    IN  MZD_U16      regAddr,
    IN  MZD_U8       fieldOffset,
    IN  MZD_U8       fieldLength,
    OUT MZD_U16      *data
);


/*******************************************************************************
  MZD_FUNC MZD_STATUS mzdHwSetPhyRegField
  (
      IN MZD_DEV_PTR  pDev,
      IN MZD_U16      mdioPort, 
      IN MZD_U16      dev, 
      IN MZD_U16      regAddr,
      IN MZD_U8       fieldOffset,
      IN MZD_U8       fieldLength,
      IN MZD_U16      data
  );
  
  Inputs:
        pDev       - pointer to MZD_DEV initialized by mzdInitDriver() call  
        mdioPort       - The MDIO port address, 0-31
        dev        - The MMD device, 0-31
        regAddr    -  The register's address
        fieldOffset - The field start bit index. (0 - 15)
        fieldLength - Number of bits to write
        data        - Data to be written.
  
  Outputs:
        None.
  
  Returns:
        MZD_OK on success, or
        MZD_FAIL  - on error

  Description:
        This function writes to specified field in a mdioPort's phy register.
  
  Side effects:
     None
  
  Notes/Warnings:
        The sum of fieldOffset & fieldLength parameters must be smaller-
        equal to 16.
  
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwSetPhyRegField
(
    IN MZD_DEV_PTR  pDev,
    IN MZD_U16      mdioPort, 
    IN MZD_U16      dev, 
    IN MZD_U16      regAddr,
    IN MZD_U8       fieldOffset,
    IN MZD_U8       fieldLength,
    IN MZD_U16      data
);


/*******************************************************************************
  MZD_FUNC MZD_STATUS mzdHwGetRegFieldFromWord
  (
      IN  MZD_U16      regData,
      IN  MZD_U8       fieldOffset,
      IN  MZD_U8       fieldLength,
      OUT MZD_U16      *data
  );

  Inputs:  
        regData    - The data previously read from the register
        fieldOffset - The field start bit index. (0 - 15)
        fieldLength - Number of bits to read

  Outputs:
        data        - The data from the associated bit field

  Returns:
        MZD_OK always

  Description:
        This function grabs a value from a bitfield within a word. It could
        be used to get the value of a bitfield within a word which was previously
        read from the PHY.

  Side effects:
     None

  Notes/Warnings:
        The sum of fieldOffset & fieldLength parameters must be smaller-
        equal to 16

        This register acts on data passed in. It does no hardware access.

        This function is useful if you want to do 1 register access and then
        get different bit fields without doing another register access either
        because there are latched bits in the register to avoid another read,
        or to keep hardware IO down to improve performance/throughput.

        Example:

        MZD_U16 aword, nibble1, nibble2;

        mzdHwGetRegFieldFromWord(aword,0,4,&nibble1); - grab first nibble
        mzdHwGetRegFieldFromWord(aword,4,4,&nibble2); - grab second nibble
                
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwGetRegFieldFromWord
(
    IN  MZD_U16 regData,
    IN  MZD_U8  fieldOffset,
    IN  MZD_U8  fieldLength,
    OUT MZD_U16 *data
);


/*******************************************************************************
  MZD_FUNC MZD_STATUS mzdHwSetRegFieldToWord
  (
      IN  MZD_U16 regData,
      IN  MZD_U16 bitFieldData,
      IN  MZD_U8  fieldOffset,
      IN  MZD_U8  fieldLength,
      OUT MZD_U16 *data
  );

  Inputs:  
        regData - original word to modify
        bitFieldData   - The data to set the register field to 
                     (must be <= largest value for that bit field,
                      no range checking is done by this function)
        fieldOffset - The field start bit index. (0 - 15)
        fieldLength - Number of bits to write to regData

  Outputs:
        data        - The new/modified regData with the bitfield changed

  Returns:
        MZD_OK always

  Description:
        This function write a value to a bitfield within a word. 

  Side effects:
     None

  Notes/Warnings:
        The sum of fieldOffset & fieldLength parameters must be smaller-
        equal to 16

        This register acts on data passed in. It does no hardware access.

        This function is useful to reduce IO if several bit fields of a register
        that has been read is to be changed before writing it back.

        MZD_U16 aword;

        mzdHwSetRegFieldToWord(aword,2,0,4,&aword); - Change first nibble to 2
        mzdHwSetRegFieldToWord(aword,3,4,4,&aword); - Change second nibble to 3
        
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwSetRegFieldToWord
(
    IN  MZD_U16 regData,
    IN  MZD_U16 bitFieldData,
    IN  MZD_U8  fieldOffset,
    IN  MZD_U8  fieldLength,
    OUT MZD_U16 *data
);


/*******************************************************************************
  MZD_FUNC MZD_STATUS mzdHwWaitForRegFieldValue
  (
      IN MZD_DEV_PTR  pDev,
      IN MZD_U16      mdioPort,
      IN MZD_U16      dev,
      IN MZD_U16      regAddr,
      IN MZD_U8       fieldOffset,
      IN MZD_U8       fieldLength,
      IN MZD_U16      expectedValue,
      IN MZD_U16      timeoutMs
  );

  Inputs:
        pDev        - pointer to MZD_DEV initialized by mzdInitDriver() call
        mdioPort    - The MDIO port address, 0-31
        dev         - The MMD device, 0-31
        regAddr     -  The register's address
        fieldOffset - The field start bit index. (0 - 15)
        fieldLength - Number of bits to poll
        expectedValue - Data to be compared against
        timeoutMs   - number of milliseconds to keep checking

  Outputs:
        None.

  Returns:
        MZD_OK on success, or
        MZD_FAIL  - on error

  Description:
        This function keeps reading the register bit field and comparing
        it against the expected value for a maximum of timeoutMs.

        As soon as it matches, it returns MZD_OK. If it reaches
        the timeout without matching, it return MZD_FAIL.

  Side effects:
     None

  Notes/Warnings:
        The sum of fieldOffset & fieldLength parameters must be smaller-
        equal to 16.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwWaitForRegFieldValue
(
    IN MZD_DEV_PTR  pDev,
    IN MZD_U16      mdioPort,
    IN MZD_U16      dev,
    IN MZD_U16      regAddr,
    IN MZD_U8       fieldOffset,
    IN MZD_U8       fieldLength,
    IN MZD_U16      expectedValue,
    IN MZD_U16      timeoutMs
);


/*******************************************************************************
  MZD_STATUS mzdHwWaitForRegFieldValueList
  (
      IN MZD_DEV_PTR  pDev,
      IN MZD_U16      mdioPort,
      IN MZD_U16      dev,
      IN MZD_U16      regAddr,
      IN MZD_U8       fieldOffset,
      IN MZD_U8       fieldLength,
      IN MZD_U16      *expectedValueList,
      IN MZD_U16      numOfExpValue,
      IN MZD_U16      timeoutMs,
      OUT MZD_U16     *fieldValue
  );

  Inputs:
        pDev        - pointer to MZD_DEV initialized by mzdInitDriver() call
        mdioPort    - The MDIO port address, 0-31
        dev         - The MMD device, 0-31
        regAddr     -  The register's address
        fieldOffset - The field start bit index. (0 - 15)
        fieldLength - Number of bits to poll
        expectedValueList - Expected values array to be compared against
        numOfExpValue     - Number of expected values to be compared against
        timeoutMs         - Number of milliseconds to keep checking
        fieldValue        - return the matched value read in the register

  Outputs:
        None.

  Returns:
        MZD_OK on success, or
        MZD_FAIL  - on error

  Description:
        This function keeps reading the register bit field and comparing
        it against each of the expected value in the input array for a maximum of timeoutMs.

        As soon as it matches, it returns MZD_OK and return the matched value. If it reaches
        the timeout without matching, it return MZD_FAIL.

  Side effects:
     None

  Notes/Warnings:
        The sum of fieldOffset & fieldLength parameters must be smaller-
        equal to 16.
*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwWaitForRegFieldValueList
(
    IN MZD_DEV_PTR  pDev,
    IN MZD_U16      mdioPort,
    IN MZD_U16      dev,
    IN MZD_U16      regAddr,
    IN MZD_U8       fieldOffset,
    IN MZD_U8       fieldLength,
    IN MZD_U16      *expectedValueList,
    IN MZD_U16      numOfExpValue,
    IN MZD_U16      timeoutMs,
    OUT MZD_U16     *fieldValue
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdHwXmdioBlockWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 dev,
    IN MZD_U16 reg,
    IN MZD_U8  data[],
    IN MZD_U32 dataSize
);

 Inputs:
    pDev     - pointer to MZD_DEV initialized by mzdInitDriver() call
    mdioPort - The MDIO port address, 0-31
    dev      - The MMD device, 0-31
    reg      - The register's address
    data[]   - data array to be written
    dataSize - data array size to be written

 Outputs:
    None

 Returns:
    MZD_OK if wait was successful, MZD_FAIL otherwise

 Description:
    The MDIO block write function is platform dependent. It passed an array
    of data to be written to the selected MDIO device.

    If pDev->mzdFuncWriteBlockMdio function is not passed-in, then this 
    mzdHwXmdioBlockWrite need to be implemented if using firmware block MDIO write.

 Side effects:
    None

 Notes/Warnings:
    If MZD_MDIO_BLOCK_WRITE compiler option is set at compiled time, the
    firmware will download firmware in MDIO block write. 

    If MZD_MDIO_BLOCK_WRITE compiler option is not set, caller can use 
    the pDev->initOptionMask |= MZD_INIT_API_BLOCK_WRITE option to download 
    firmware in MDIO block write.  The default without MZD_MDIO_BLOCK_WRITE
    compiler option will download firmware with MDIO single write.

*******************************************************************************/
MZD_FUNC MZD_STATUS mzdHwXmdioBlockWrite
(
    IN MZD_DEV_PTR pDev,
    IN MZD_U16 mdioPort,
    IN MZD_U16 dev,
    IN MZD_U16 reg,
    IN MZD_U8  data[],
    IN MZD_U32 dataSize
);

/******************************************************************************
MZD_FUNC MZD_STATUS mzdWait
(
    IN MZD_DEV_PTR pDev,
    IN MZD_UINT waitTime
);

 Inputs:
    pDev - pointer to MZD_DEV initialized by mzdInitDriver() call
    waitTime - number of milliseconds to wait

 Outputs:
    None

 Returns:
    MZD_OK if wait was successful, MZD_FAIL otherwise

 Description:
    The function is platform dependent. It requires to be ported to support platform.
    Waits waitTime milliseconds

 Side effects:
    None

 Notes/Warnings:
    None

******************************************************************************/
MZD_FUNC MZD_STATUS mzdWait
(
    IN MZD_DEV_PTR pDev,
    IN MZD_UINT waitTime
);


#if C_LINKAGE
#if defined __cplusplus 
}
#endif 
#endif

#endif /* defined MZD_HWCNTL_H */



