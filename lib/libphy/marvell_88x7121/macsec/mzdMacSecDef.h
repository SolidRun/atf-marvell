/*******************************************************************************
Copyright (c) 2014 Marvell.
If you received this File from Marvell and you have entered into a commercial
license agreement (a "Commercial License") with Marvell, the File is licensed
to you under the terms of the applicable Commercial License.
*******************************************************************************/

/********************************************************************
This file contains function prototypes for controlling MACSec register
and MACSec DDK APIs on the Marvell X7121 PHY.
********************************************************************/
#ifndef MZD_MACSEC_DEF_H
#define MZD_MACSEC_DEF_H
#if C_LINKAGE
#if defined __cplusplus
    extern "C" {
#endif
#endif

/* MAC/MACSec blocks mdioPort mapping */
/* Host - P0 --- P1 ----- P2 --- P3 ----
**      | Host MAC0 | - | Host MAC1 |
**       | MACSec0 | --- | MACSec1 |
**      | Line MAC0 | - | Line MAC1 |
** Line - P0 --- P1 ----- P2 --- P3 ---- */

/* The pre-compiled MZD_MACSEC_MAX_DEVICE defined the maximum X7121 device supported for 
   MACSec operations.

   The pre-defined maximum MACSec device supported are 4, 8 and 24 X7121
   devices. Update the MZD_MACSEC_MAX_DEVICE as needed to reduce the memory usage. 
*/
#if 0
#define MZD_MACSEC_DEVICE_COUNT_4  4 
#define MZD_MACSEC_MAX_DEVICE  MZD_MACSEC_DEVICE_COUNT_4  /* max of 4 X7121 chips supported for MACSec */

#define MZD_MACSEC_DEVICE_COUNT_8  8
#define MZD_MACSEC_MAX_DEVICE  MZD_MACSEC_DEVICE_COUNT_8 /* max of 8 X7121 chips supported for MACSec */
#endif

#define MZD_MACSEC_DEVICE_COUNT_24  24
#define MZD_MACSEC_MAX_DEVICE  MZD_MACSEC_DEVICE_COUNT_24 /* max of 24 X7121 chips supported for MACSec */

#if C_LINKAGE
#if defined __cplusplus
}
#endif
#endif

#endif /* defined MZD_MACSEC_DEF_H */
