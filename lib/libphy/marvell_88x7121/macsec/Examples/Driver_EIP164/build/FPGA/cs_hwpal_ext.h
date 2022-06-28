/* cs_hwpal_ext.h
 *
 * Security-IP-164 (FPGA) PCI/OpenFirmware chip specific configuration
 * parameters
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

#ifndef CS_HWPAL_EXT_H_
#define CS_HWPAL_EXT_H_


/*----------------------------------------------------------------------------
 * Definitions and macros
 */

/* For obtaining the IRQ number */
#ifdef DRIVER_INTERRUPTS
#define HWPAL_INTERRUPTS
#endif

#if defined(ARCH_X86)||defined(ARCH_POWERPC)

/* FPGA board device ID. */
#define HWPAL_DEVICE_ID             0x6018

/* Xilinx PCI vendor ID */
#define HWPAL_VENDOR_ID             0x10EE

#define HWPAL_MAGIC_PCICONFIGSPACE  0xFF434647      /* 43 46 47 = C F G */
#define hw_a                        HWPAL_MAGIC_PCICONFIGSPACE

#define HWPAL_REMAP_ADDRESSES   ;

#define HWPAL_DEVICE_TO_FIND       "PCI.0" /* PCI Bar 0 */

/* definition of static resources inside the PCI device */
/* Refer to the data sheet of device for the correct values */
/*                   Name                 DevNr Start    Last     Flags (see below) */
#define HWPAL_PLATFORM_SPECIFIC_DEVICES \
    HWPAL_DEVICE_ADD("PCI_CONFIG_SPACE",  0,    hw_a,    hw_a+1024, 7),

#define HWPAL_PLATFORM_SPECIFIC_DEVICES_COUNT   1

#ifndef ARCH_ARM64
#define HWPAL_USE_MSI
#endif

#else

/* Disable PCI Configuration Space support support */
#define HWPAL_REMOVE_DEVICE_PCICONFIGSPACE

/* Device name in the Device Tree Structure */
#define HWPAL_PLATFORM_DEVICE_NAME  "security-ip-164"

/* Index of the IRQ in the "interrupts" property of the Open Firmware device */
/* tree entry. 0 is the first IRQ listed, 1 is the second IRQ listed, etc. */
#define HWPAL_PLATFORM_IRQ_IDX 0

#define HWPAL_REMAP_ADDRESSES   ;

#define HWPAL_PLATFORM_SPECIFIC_DEVICES
#define HWPAL_PLATFORM_SPECIFIC_DEVICES_COUNT   0

#endif

/* Optional devices in HWPAL_DEVICES, see below */
#define HWPAL_OPTIONAL_DEVICES_COUNT (HWPAL_PLATFORM_SPECIFIC_DEVICES_COUNT + 1)

#if HWPAL_OPTIONAL_DEVICES_COUNT != DRIVER_OPTIONAL_DEVICE_COUNT
#error "Optional devices configuration mismatch"
#endif

/* Definition of static resources (devices), */
/* refer to the data sheet of device for the correct values */

/* HWPAL_DEVICES static configuration example below lists devices for one port, */
/* namely port 0, using 2 EIP-164 and 2 EIP-163 devices. */

/* Marvell - add X7121M address mapping */
#if MZD_MACSEC_DEVICE_COUNT_4
#define HWPAL_DEVICES                                                       \
    /* Optional devices */                                                  \
                                                                            \
    /* Platform devices */                                                  \
    HWPAL_PLATFORM_SPECIFIC_DEVICES                                         \
                                                                            \
    /* Fields per device:     Name          DevNr  Start     End   Flags */ \
                                                                            \
    /* FPGA board control device */                                         \
    HWPAL_DEVICE_ADD("BOARD_CTRL",              0, 0x0A0000, 0x0A0fff, 7),  \
                                                                            \
    /* Mandatory devices */                                                 \
                                                                            \
    /* Port 0, egress and ingress data path */                              \
                                                                            \
    /* Fields per device: D-path DevNr Start     End      Flags         */  \
    HWPAL_DATAPATH_INGRESS(0,    0,    0x0080000, 0x00bffff,  7,  /* #1 X7121 device */ \
                                 0,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (1,    0,    0x0000000, 0x003ffff,  7,  \
                                 0,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(2,    1,    0x0080000, 0x00bffff,  7,  \
                                 1,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (3,    1,    0x0000000, 0x003ffff,  7,  \
                                 1,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(4,    2,    0x0080000, 0x00bffff,  7,  /* #2 X7121 device */ \
                                 2,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (5,    2,    0x0000000, 0x003ffff,  7,  \
                                 2,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(6,    3,    0x0080000, 0x00bffff,  7,  \
                                 3,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (7,    3,    0x0000000, 0x003ffff,  7,  \
                                 3,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(8,    4,    0x0080000, 0x00bffff,  7,  /* #3 X7121 device */ \
                                 4,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (9,    4,    0x0000000, 0x003ffff,  7,  \
                                 4,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(10,   5,    0x0080000, 0x00bffff,  7,  \
                                 5,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (11,   5,    0x0000000, 0x003ffff,  7,  \
                                 5,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(12,   6,    0x0080000, 0x00bffff,  7,  /* #4 X7121 device */ \
                                 6,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (13,   6,    0x0000000, 0x003ffff,  7,  \
                                 6,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(14,   7,    0x0080000, 0x00bffff,  7,  \
                                 7,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (15,   7,    0x0000000, 0x003ffff,  7,  \
                                 7,    0x0040000, 0x005ffff,  7)

#endif /* MZD_MACSEC_DEVICE_COUNT_4 */

#if MZD_MACSEC_DEVICE_COUNT_8
#define HWPAL_DEVICES                                                       \
    /* Optional devices */                                                  \
                                                                            \
    /* Platform devices */                                                  \
    HWPAL_PLATFORM_SPECIFIC_DEVICES                                         \
                                                                            \
    /* Fields per device:     Name          DevNr  Start     End   Flags */ \
                                                                            \
    /* FPGA board control device */                                         \
    HWPAL_DEVICE_ADD("BOARD_CTRL",              0, 0x0A0000, 0x0A0fff, 7),  \
                                                                            \
    /* Mandatory devices */                                                 \
                                                                            \
    /* Port 0, egress and ingress data path */                              \
                                                                            \
    /* Fields per device: D-path DevNr Start     End      Flags         */  \
    HWPAL_DATAPATH_INGRESS(0,    0,    0x0080000, 0x00bffff,  7,  /* #1 X7121 device */  \
                                 0,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (1,    0,    0x0000000, 0x003ffff,  7,  \
                                 0,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(2,    1,    0x0080000, 0x00bffff,  7,  \
                                 1,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (3,    1,    0x0000000, 0x003ffff,  7,  \
                                 1,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(4,    2,    0x0080000, 0x00bffff,  7,  /* #2 X7121 device */ \
                                 2,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (5,    2,    0x0000000, 0x003ffff,  7,  \
                                 2,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(6,    3,    0x0080000, 0x00bffff,  7,  \
                                 3,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (7,    3,    0x0000000, 0x003ffff,  7,  \
                                 3,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(8,    4,    0x0080000, 0x00bffff,  7,  /* #3 X7121 device */ \
                                 4,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (9,    4,    0x0000000, 0x003ffff,  7,  \
                                 4,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(10,   5,    0x0080000, 0x00bffff,  7,  \
                                 5,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (11,   5,    0x0000000, 0x003ffff,  7,  \
                                 5,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(12,   6,    0x0080000, 0x00bffff,  7,  /* #4 X7121 device */ \
                                 6,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (13,   6,    0x0000000, 0x003ffff,  7,  \
                                 6,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(14,   7,    0x0080000, 0x00bffff,  7,  \
                                 7,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (15,   7,    0x0000000, 0x003ffff,  7,  \
                                 7,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(16,   8,    0x0080000, 0x00bffff,  7,  /* #5 X7121 device */ \
                                 8,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (17,   8,    0x0000000, 0x003ffff,  7,  \
                                 8,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(18,   9,    0x0080000, 0x00bffff,  7,  \
                                 9,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (19,   9,    0x0000000, 0x003ffff,  7,  \
                                 9,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(20,   10,   0x0080000, 0x00bffff,  7,  /* #6 X7121 device */ \
                                 10,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (21,   10,   0x0000000, 0x003ffff,  7,  \
                                 10,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(22,   11,   0x0080000, 0x00bffff,  7,  \
                                 11,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (23,   11,   0x0000000, 0x003ffff,  7,  \
                                 11,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(24,   12,   0x0080000, 0x00bffff,  7,  /* #7 X7121 device */ \
                                 12,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (25,   12,   0x0000000, 0x003ffff,  7,  \
                                 12,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(26,   13,   0x0080000, 0x00bffff,  7,  \
                                 13,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (27,   13,   0x0000000, 0x003ffff,  7,  \
                                 13,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(28,   14,   0x0080000, 0x00bffff,  7,  /* #8 X7121 device */ \
                                 14,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (29,   14,   0x0000000, 0x003ffff,  7,  \
                                 14,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(30,   15,   0x0080000, 0x00bffff,  7,  \
                                 15,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (31,   15,   0x0000000, 0x003ffff,  7,  \
                                 15,   0x0040000, 0x005ffff,  7)
#endif /* MZD_MACSEC_DEVICE_COUNT_8 */

#if MZD_MACSEC_DEVICE_COUNT_24
#define HWPAL_DEVICES                                                       \
    /* Optional devices */                                                  \
                                                                            \
    /* Platform devices */                                                  \
    HWPAL_PLATFORM_SPECIFIC_DEVICES                                         \
                                                                            \
    /* Fields per device:     Name          DevNr  Start     End   Flags */ \
                                                                            \
    /* FPGA board control device */                                         \
    HWPAL_DEVICE_ADD("BOARD_CTRL",              0, 0x0A0000, 0x0A0fff, 7),  \
                                                                            \
    /* Mandatory devices */                                                 \
                                                                            \
    /* Port 0, egress and ingress data path */                              \
                                                                            \
    /* Fields per device: D-path DevNr Start     End      Flags         */  \
    HWPAL_DATAPATH_INGRESS(0,    0,    0x0080000, 0x00bffff,  7,  /* #1 X7121 device */ \
                                 0,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (1,    0,    0x0000000, 0x003ffff,  7,  \
                                 0,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(2,    1,    0x0080000, 0x00bffff,  7,  \
                                 1,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (3,    1,    0x0000000, 0x003ffff,  7,  \
                                 1,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(4,    2,    0x0080000, 0x00bffff,  7,  /* #2 X7121 device */ \
                                 2,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (5,    2,    0x0000000, 0x003ffff,  7,  \
                                 2,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(6,    3,    0x0080000, 0x00bffff,  7,  \
                                 3,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (7,    3,    0x0000000, 0x003ffff,  7,  \
                                 3,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(8,    4,    0x0080000, 0x00bffff,  7,  /* #3 X7121 device */ \
                                 4,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (9,    4,    0x0000000, 0x003ffff,  7,  \
                                 4,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(10,   5,    0x0080000, 0x00bffff,  7,  \
                                 5,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (11,   5,    0x0000000, 0x003ffff,  7,  \
                                 5,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(12,   6,    0x0080000, 0x00bffff,  7,  /* #4 X7121 device */ \
                                 6,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (13,   6,    0x0000000, 0x003ffff,  7,  \
                                 6,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(14,   7,    0x0080000, 0x00bffff,  7,  \
                                 7,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (15,   7,    0x0000000, 0x003ffff,  7,  \
                                 7,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(16,   8,    0x0080000, 0x00bffff,  7,  /* #5 X7121 device */ \
                                 8,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (17,   8,    0x0000000, 0x003ffff,  7,  \
                                 8,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(18,   9,    0x0080000, 0x00bffff,  7,  \
                                 9,    0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (19,   9,    0x0000000, 0x003ffff,  7,  \
                                 9,    0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(20,   10,   0x0080000, 0x00bffff,  7,  /* #6 X7121 device */ \
                                 10,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (21,   10,   0x0000000, 0x003ffff,  7,  \
                                 10,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(22,   11,   0x0080000, 0x00bffff,  7,  \
                                 11,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (23,   11,   0x0000000, 0x003ffff,  7,  \
                                 11,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(24,   12,   0x0080000, 0x00bffff,  7,  /* #7 X7121 device */ \
                                 12,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (25,   12,   0x0000000, 0x003ffff,  7,  \
                                 12,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(26,   13,   0x0080000, 0x00bffff,  7,  \
                                 13,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (27,   13,   0x0000000, 0x003ffff,  7,  \
                                 13,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(28,   14,   0x0080000, 0x00bffff,  7,  /* #8 X7121 device */ \
                                 14,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (29,   14,   0x0000000, 0x003ffff,  7,  \
                                 14,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(30,   15,   0x0080000, 0x00bffff,  7,  \
                                 15,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (31,   15,   0x0000000, 0x003ffff,  7,  \
                                 15,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(32,   16,   0x0080000, 0x00bffff,  7,  /* #9 X7121 device */ \
                                 16,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (33,   16,   0x0000000, 0x003ffff,  7,  \
                                 16,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(34,   17,   0x0080000, 0x00bffff,  7,  \
                                 17,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (35,   17,   0x0000000, 0x003ffff,  7,  \
                                 17,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(36,   18,   0x0080000, 0x00bffff,  7,  /* #10 X7121 device */ \
                                 18,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (37,   18,   0x0000000, 0x003ffff,  7,  \
                                 18,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(38,   19,   0x0080000, 0x00bffff,  7,  \
                                 19,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (39,   19,   0x0000000, 0x003ffff,  7,  \
                                 19,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(40,   20,   0x0080000, 0x00bffff,  7,  /* #11 X7121 device */ \
                                 20,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (41,   20,   0x0000000, 0x003ffff,  7,  \
                                 20,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(42,   21,   0x0080000, 0x00bffff,  7,  \
                                 21,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (43,   21,   0x0000000, 0x003ffff,  7,  \
                                 21,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(44,   22,   0x0080000, 0x00bffff,  7,  /* #12 X7121 device */ \
                                 22,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (45,   22,   0x0000000, 0x003ffff,  7,  \
                                 22,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(46,   23,   0x0080000, 0x00bffff,  7,  \
                                 23,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (47,   23,   0x0000000, 0x003ffff,  7,  \
                                 23,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(48,   24,   0x0080000, 0x00bffff,  7,  /* #13 X7121 device */ \
                                 24,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (49,   24,   0x0000000, 0x003ffff,  7,  \
                                 24,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(50,   25,   0x0080000, 0x00bffff,  7,  \
                                 25,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (51,   25,   0x0000000, 0x003ffff,  7,  \
                                 25,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(52,   26,   0x0080000, 0x00bffff,  7,  /* #14 X7121 device */ \
                                 26,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (53,   26,   0x0000000, 0x003ffff,  7,  \
                                 26,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(54,   27,   0x0080000, 0x00bffff,  7,  \
                                 27,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (55,   27,   0x0000000, 0x003ffff,  7,  \
                                 27,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(56,   28,   0x0080000, 0x00bffff,  7,  /* #15 X7121 device */ \
                                 28,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (57,   28,   0x0000000, 0x003ffff,  7,  \
                                 28,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(58,   29,   0x0080000, 0x00bffff,  7,  \
                                 29,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (59,   29,   0x0000000, 0x003ffff,  7,  \
                                 29,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(60,   30,   0x0080000, 0x00bffff,  7,  /* #16 X7121 device */ \
                                 30,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (61,   30,   0x0000000, 0x003ffff,  7,  \
                                 30,   0x0040000, 0x005ffff,  7), \
    HWPAL_DATAPATH_INGRESS(62,   31,   0x0080000, 0x00bffff,  7,  \
                                 31,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (63,   31,   0x0000000, 0x003ffff,  7,  \
                                 31,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(64,   32,   0x0080000, 0x00bffff,  7,  /* #17 X7121 device */  \
                                 32,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (65,   32,   0x0000000, 0x003ffff,  7,  \
                                 32,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(66,   33,   0x0080000, 0x00bffff,  7,  \
                                 33,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (67,   33,   0x0000000, 0x003ffff,  7,  \
                                 33,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(68,   34,   0x0080000, 0x00bffff,  7,  /* #18 X7121 device */ \
                                 34,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (69,   34,   0x0000000, 0x003ffff,  7,  \
                                 34,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(70,   35,   0x0080000, 0x00bffff,  7,  \
                                 35,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (71,   35,   0x0000000, 0x003ffff,  7,  \
                                 35,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(72,   36,   0x0080000, 0x00bffff,  7,  /* #19 X7121 device */ \
                                 36,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (73,   36,   0x0000000, 0x003ffff,  7,  \
                                 36,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(74,   37,   0x0080000, 0x00bffff,  7,  \
                                 37,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (75,   37,   0x0000000, 0x003ffff,  7,  \
                                 37,   0x0040000, 0x005ffff,  7), \
                                                                 \
    HWPAL_DATAPATH_INGRESS(76,   38,   0x0080000, 0x00bffff,  7,  /* #20 X7121 device */ \
                                 38,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (77,   38,   0x0000000, 0x003ffff,  7,  \
                                 38,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(78,   39,   0x0080000, 0x00bffff,  7,  \
                                 39,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (79,   39,   0x0000000, 0x003ffff,  7,  \
                                 39,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(80,   40,   0x0080000, 0x00bffff,  7,  /* #21 X7121 device */ \
                                 40,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (81,   40,   0x0000000, 0x003ffff,  7,  \
                                 40,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(82,   41,   0x0080000, 0x00bffff,  7,  \
                                 41,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (83,   41,   0x0000000, 0x003ffff,  7,  \
                                 41,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(84,   42,   0x0080000, 0x00bffff,  7,  /* #22 X7121 device */ \
                                 42,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (85,   42,   0x0000000, 0x003ffff,  7,  \
                                 42,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(86,   43,   0x0080000, 0x00bffff,  7,  \
                                 43,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (87,   43,   0x0000000, 0x003ffff,  7,  \
                                 43,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(88,   44,   0x0080000, 0x00bffff,  7,  /* #23 X7121 device */ \
                                 44,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (89,   44,   0x0000000, 0x003ffff,  7,  \
                                 44,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(90,   45,   0x0080000, 0x00bffff,  7,  \
                                 45,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (91,   45,   0x0000000, 0x003ffff,  7,  \
                                 45,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(92,   46,   0x0080000, 0x00bffff,  7,  /* #24 X7121 device */ \
                                 46,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (93,   46,   0x0000000, 0x003ffff,  7,  \
                                 46,   0x0040000, 0x005ffff,  7), \
                                                                  \
    HWPAL_DATAPATH_INGRESS(94,   47,   0x0080000, 0x00bffff,  7,  \
                                 47,   0x00c0000, 0x00dffff,  7), \
    HWPAL_DATAPATH_EGRESS (95,   47,   0x0000000, 0x003ffff,  7,  \
                                 47,   0x0040000, 0x005ffff,  7)
                                                                  
#endif /* MZD_MACSEC_DEVICE_COUNT_24 */

/* Note: EIP-164 register memory map size is 0xp0000 and end address 0xp0000-1 */
/*       where p = (MaxSA_Count >> 7), */
/*       EIP-163 register memory map size is 0xp0000 and end address 0xp0000-1 */
/*       where p = (MaxTCAMRules_Count >> 9), */
/*       see EIP-164 and EIP-163 Programmer Manuals for details */

/* Flags: */
/*   bit0 = Trace Device_Read32(), requires HWPAL_TRACE_DEVICE_READ */
/*   bit1 = Trace Device_Write32(), requires HWPAL_TRACE_DEVICE_WRITE */
/*   bit2 = Swap word endianness (requires HWPAL_DEVICE_ENABLE_SWAP) */


#endif /* CS_HWPAL_EXT_H_ */


/* end of file cs_hwpal_ext.h */
