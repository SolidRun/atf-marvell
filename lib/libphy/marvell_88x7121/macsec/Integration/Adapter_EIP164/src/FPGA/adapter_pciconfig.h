/* adapter_pciconfig.h
 *
 * This header file describes the PCI Configuration registers.
 */

/*****************************************************************************
* Copyright (c) 2008-2021 by Rambus, Inc. and/or its subsidiaries.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are
* met:
*
* 1. Redistributions of source code must retain the above copyright
* notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
* notice, this list of conditions and the following disclaimer in the
* documentation and/or other materials provided with the distribution.
*
* 3. Neither the name of the copyright holder nor the names of its
* contributors may be used to endorse or promote products derived from
* this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
* HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*****************************************************************************/

#ifndef INCLUDE_GUARD_ADAPTER_PCICONFIG_H
#define INCLUDE_GUARD_ADAPTER_PCICONFIG_H

/* offset definitions for the interesting registers */
#define PCICONFIG_REG_ID          0x00
#define PCICONFIG_REG_STATCMD     0x04
/*#define PCICONFIG_REG_CLASSREV    0x08 */
#define PCICONFIG_REG_CONFIG      0x0C
/*#define PCICONFIG_REG_BASEADDR_LO 0x10 */
/*#define PCICONFIG_REG_BASEADDR_HI 0x14 */
/*#define PCICONFIG_REG_SUBSYSTEM   0x2C */
/*#define PCICONFIG_REG_INTCFG      0x3C */


/*----------------------------------------------------------------------------
 * PCICONFIG_REG_ID helper macros
 */
#define PCICONFIG_ID_EXTRACT_DEVICE(_regvalue) \
        (_regvalue >> 16) & 0xFFFF

#define PCICONFIG_ID_EXTRACT_VENDOR(_regvalue) \
        (_regvalue & 0xFFFF)


/*----------------------------------------------------------------------------
 * PCICONFIG_REG_STATCMD helper macros
 */
#define PCICONFIG_STATCMD_MEMORYACCESS_ENABLE  BIT_1
#define PCICONFIG_STATCMD_BUSMASTER_ENABLE     BIT_2
#define PCICONFIG_STATCMD_PARITYERR_ENABLE     BIT_6
#define PCICONFIG_STATCMD_SYSTEMERR_ENABLE     BIT_8


/*----------------------------------------------------------------------------
 * PCICONFIG_REG_CONFIG helper macros
 */
#define PCICONFIG_CONFIG_UPDATE_CACHELINESIZE(_Value, _CacheLineSize) \
        (_Value & ~0xFF) | (0xFF & (_CacheLineSize))

#define PCICONFIG_CONFIG_UPDATE_MASTERLATENCYTIMER(_Value,_MasterLatencyTimer)\
        (_Value & ~0xFF00) | (0xFF00 & ((_MasterLatencyTimer) << 8))

#endif /* Include Guard */

/* end of file adapter_pciconfig.h */
