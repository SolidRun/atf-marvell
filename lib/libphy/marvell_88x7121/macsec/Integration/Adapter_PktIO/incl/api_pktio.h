/* api_pktio.h
 *
 * Packet I/O API
 */

/*****************************************************************************
* Copyright (c) 2015-2021 by Rambus, Inc. and/or its subsidiaries.
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

#ifndef API_PKTIO_H_
#define API_PKTIO_H_

/*----------------------------------------------------------------------------
 * This module implements (provides) the following interface(s):
 */



/*----------------------------------------------------------------------------
 * This module uses (requires) the following interface(s):
 */


/*----------------------------------------------------------------------------
 * Definitions and macros
 */

/* Bit masks for packet and classification status */
#define PKTIO_PACKET_PKT_ERROR      0x01
#define PKTIO_PACKET_CRC_ERROR      0x02
#define PKTIO_PACKET_LP_IDLE        0x04
#define PKTIO_PACKET_SA_HIT         0x08  /* SA in use */
#define PKTIO_PACKET_RULE_HIT       0x10  /* TCAM rule hit (=vPort found) */
#define PKTIO_PACKET_CLASS_DROP     0x20  /* drop by classifier */
#define PKTIO_PACKET_SC_HIT         0x40  /* SC found */
#define PKTIO_PACKET_EG_HDR         0x80  /* Egress header present */
#define PKTIO_PACKET_CTRL_PKT       0x100 /* Control packet identifier */
#define PKTIO_PACKET_VPORT_VALID    0x200 /* vPort valid */
#define PKTIO_PACKET_EOMPLS_TYPE    0x400 /* EoMPLS type packet */
#define PKTIO_PACKET_PBB_TYPE       0x800 /* PBB type packet */

/* Mask to identify if packet is dropped */
#define PKTIO_PACKET_DROPPED_MASK   (PKTIO_PACKET_PKT_ERROR + \
                                     PKTIO_PACKET_CRC_ERROR)

/* Packet processing direction, egress or ingress */
typedef enum
{
    PKTIO_PACKET_DIRECTION_EGRESS,
    PKTIO_PACKET_DIRECTION_INGRESS
} PktIO_Packet_Direction_t;

/* Packet status (used for Put function) */
typedef struct
{
    unsigned int vPort;                 /* virtual port number */

    unsigned int SecTAGOffset;          /* SecTAG offset */
    unsigned int MACSAOffset;           /* MAC SA offset */

    /* See bit masks for packet and classification status above */
    unsigned int PacketStatusMask;

} PktIO_Packet_Status_In_t;

/* Packet status (used for Get function) */
typedef struct
{
    unsigned int vPort;                 /* virtual port number */

    /* Output debug status, used only for output packet */
    unsigned int SAIndex;               /* pkt_tx_sa_index */
    unsigned int SCIndex;               /* pkt_tx_sc_index */
    unsigned int RuleIndex;             /* pkt_tx_rule_index */

    /* See bit masks for packet and classification status above */
    unsigned int PacketStatusMask;

} PktIO_Packet_Status_Out_t;


/*----------------------------------------------------------------------------
 * Local variables
 */


/*----------------------------------------------------------------------------
 * PktIO_Init
 *
 * Initializes the Packet I/O driver
 *
 * Return value:
 *     0 : success
 *    <0 : failure
 */
int
PktIO_Init(void);


/*----------------------------------------------------------------------------
 * PktIO_Packet_Put
 *
 * Submits a packet to the engine.
 *
 * Packet_p (input)
 *      Pointer to a buffer containing packet data.
 *
 * PacketByteCount (input)
 *      Packet length in bytes.
 *
 * PktStatus_p (input)
 *      Packet status associated with the passed packet.
 *
 * ChannelID (input)
 *      Channel identifier for the packet.
 *
 * Direction (input)
 *      Packet processing direction, see PktIO_Packet_Direction_t.
 *
 * Return value:
 *     0 : success
 *    <0 : failure
 */
int
PktIO_Packet_Put(
        const unsigned char * Packet_p,
        const unsigned int PacketByteCount,
        const PktIO_Packet_Status_In_t * const PktStatus_p,
        unsigned int ChannelID,
        PktIO_Packet_Direction_t Direction);


/*----------------------------------------------------------------------------
 * PktIO_Packet_Get
 *
 * Retrieves a packet from the engine. Returns packet byte count set to 0
 * when no packet is retrieved.
 *
 * Packet_pp (output)
 *      Pointer to a memory location where the packet data will be stored.
 *
 * PacketByteCount_p (output)
 *      Pointer to a memory location where the packet length in bytes
 *      will be stored.
 *
 * PktStatus_p (output)
 *      Pointer to a memory location where the packet status will be stored.
 *
 * ChannelID (input)
 *      Channel identifier for the packet.
 *
 * Direction (input)
 *      Packet processing direction, see PktIO_Packet_Direction_t.
 *
 * Return value:
 *     0 : success
 *    <0 : failure
 */
int
PktIO_Packet_Get(
        unsigned char * Packet_pp,
        unsigned int * const PacketByteCount_p,
        PktIO_Packet_Status_Out_t * const PktStatus_p,
        unsigned int ChannelID,
        PktIO_Packet_Direction_t Direction);


#endif /* API_PKTIO_H_ */


/* end of file api_pktio.h */
