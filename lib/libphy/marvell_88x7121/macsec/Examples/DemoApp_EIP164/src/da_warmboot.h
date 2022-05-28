/* da_warmboot.h
 *
 * Demo App for CfyE and SecY API's
 * WarmBoot module interface.
 *
 */

/* -------------------------------------------------------------------------- */
/*                                                                            */
/*   Module        : ddk164                                                   */
/*   Version       : 3.1.1                                                    */
/*   Configuration : DDK-164-BSD                                              */
/*                                                                            */
/*   Date          : 2021-Aug-12                                              */
/*                                                                            */
/* Copyright (c) 2008-2021 by Rambus, Inc. and/or its subsidiaries.           */
/*                                                                            */
/* Redistribution and use in source and binary forms, with or without         */
/* modification, are permitted provided that the following conditions are     */
/* met:                                                                       */
/*                                                                            */
/* 1. Redistributions of source code must retain the above copyright          */
/* notice, this list of conditions and the following disclaimer.              */
/*                                                                            */
/* 2. Redistributions in binary form must reproduce the above copyright       */
/* notice, this list of conditions and the following disclaimer in the        */
/* documentation and/or other materials provided with the distribution.       */
/*                                                                            */
/* 3. Neither the name of the copyright holder nor the names of its           */
/* contributors may be used to endorse or promote products derived from       */
/* this software without specific prior written permission.                   */
/*                                                                            */
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS        */
/* "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT          */
/* LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR      */
/* A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT       */
/* HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,     */
/* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT           */
/* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,      */
/* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY      */
/* THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT        */
/* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE      */
/* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.       */
/* -------------------------------------------------------------------------- */

#ifndef DA_MACSEC_WARMBOOT_H
#define DA_MACSEC_WARMBOOT_H

/*----------------------------------------------------------------------------
 * This module uses (requires) the following interface(s):
 */

/* Driver Framework Basic Defs API */
#include "basic_defs.h"

/*----------------------------------------------------------------------------
 * da_macsec_warmboot_init
 *
 * Initialize the WarmBoot subsystem.
 *
 * Return: true for success, false for failure.
 */
bool
da_macsec_warmboot_init(void);

/*----------------------------------------------------------------------------
 * da_macsec_warmboot_shutdown
 *
 * Simulate a driver shutdown...
 *
 * Return: true for success, false for failure.
 */
bool
da_macsec_warmboot_shutdown(void);


/*----------------------------------------------------------------------------
 * da_macsec_warmboot_restore
 *
 * Restore the driver after a WarmBoot shutdown.
 *
 * StartIndex (input)
 *     First area index to restore.
 *
 * NItems (input)
 *     Number of areas to restore.
 *
 * Return: zero for success, nonzero for error return.
 */
int
da_macsec_warmboot_restore(unsigned int StartIndex, unsigned int NItems);

/*----------------------------------------------------------------------------
 * da_macsec_warmboot_uninit
 *
 * Uninitialize the WarmBoot subsystem. Free any used resources.
 *
 * Return: true for success, false for failure.
 */
bool
da_macsec_warmboot_uninit(void);


#endif /* DA_MACSEC_WARMBOOT_H */


/* end of file da_warmboot.h */
