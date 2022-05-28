/* eip164_internal.h
 *
 * EIP-164 Global Control Driver Library Internal interface
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

#ifndef EIP164_INTERNAL_H_
#define EIP164_INTERNAL_H_

/*----------------------------------------------------------------------------
 * This module uses (requires) the following interface(s):
 */

/* Default configuration */
#include "c_eip164.h"

/* Driver Framework Device API */
#include "device_types.h"       /* Device_Handle_t */

/* EIP-164 Driver Library Types API */
#include "eip164_types.h"       /* EIP164_* types */


/*----------------------------------------------------------------------------
 * Definitions and macros
 */

typedef enum
{
    EIP164_HW_CONF_E,
    EIP164_HW_CONF_I,
    EIP164_HW_CONF_IE
} EIP164_HW_Conf_t;

/* I/O Area, used internally */
typedef struct
{
    Device_Handle_t                 Device;
    EIP164_Device_Mode_t            Mode;
    EIP164_HW_Conf_t                HWConf;
    unsigned int                    MaxSACount;
    unsigned int                    MaxChCount;
    unsigned int                    MaxSCCount;
    unsigned int                    MaxvPortCount;
    bool                            fExternalRxCAM;
    bool                            fReadPending;
    bool                            fRetireEnabled;
} EIP164_True_IOArea_t;

#define IOAREA_IN(_p)    ((const volatile EIP164_True_IOArea_t * const)_p)
#define IOAREA_INOUT(_p) ((volatile EIP164_True_IOArea_t * const)_p)

#ifdef EIP164_STRICT_ARGS
#define EIP164_CHECK_POINTER(_p) \
    if (NULL == (_p)) \
        return EIP164_ARGUMENT_ERROR;
#define EIP164_CHECK_INT_INRANGE(_i, _min, _max) \
    if ((_i) < (_min) || (_i) > (_max)) \
        return EIP164_ARGUMENT_ERROR;
#define EIP164_CHECK_INT_ATLEAST(_i, _min) \
    if ((_i) < (_min)) \
        return EIP164_ARGUMENT_ERROR;
#define EIP164_CHECK_INT_ATMOST(_i, _max) \
    if ((_i) > (_max)) \
        return EIP164_ARGUMENT_ERROR;
#else
/* EIP164_STRICT_ARGS undefined */
#define EIP164_CHECK_POINTER(_p)
#define EIP164_CHECK_INT_INRANGE(_i, _min, _max)
#define EIP164_CHECK_INT_ATLEAST(_i, _min)
#define EIP164_CHECK_INT_ATMOST(_i, _max)
#endif /*end of EIP164_STRICT_ARGS */

#define TEST_SIZEOF(type, size) \
    extern int size##_must_bigger[1 - 2*((int)(sizeof(type) > size))]

/* validate the size of the fake and real IOArea structures */
TEST_SIZEOF(EIP164_True_IOArea_t, EIP164_IOAREA_REQUIRED_SIZE);


#endif /* EIP164_INTERNAL_H_ */


/* end of file eip164_internal.h */
