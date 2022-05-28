/* intdispatch.h
 *
 * This API enables callers to register interest in one or more interrupts.
 * The Interrupt Dispatcher SW module handles the top-level interrupt
 * controller, decodes the interrupts and dispatches these to the interested
 * parties.
 */

/*****************************************************************************
* Copyright (c) 2009-2021 by Rambus, Inc. and/or its subsidiaries.
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

#ifndef INCLUDE_GUARD_INTDISPATCH_H
#define INCLUDE_GUARD_INTDISPATCH_H

/*----------------------------------------------------------------------------
 * IntDispatch_Callback_t
 *
 * This is the prototype of the callback function that can be registered via
 * this API. The callback is invoked to indicate an interrupt was detected
 * and should be serviced.
 */
typedef void (* IntDispatch_Callback_t)(void * Arg_p);


/*----------------------------------------------------------------------------
 * IntDispatch_Handle_t
 *
 * This handle is used in the API to refer to a hooked interrupt. The handle
 * can be used to unhook the interrupt and to mask and unmask the interrupt.
 */
typedef int IntDispatch_Handle_t;


/*----------------------------------------------------------------------------
 * IntDispatch_Initialize
 *
 * This function must be called by every user of this API prior to using
 * any of the other functions. This allows the implementation to perform
 * first-time initialization actions, which typically means telling the OS
 * about the interrupt(s) we want to service.
 *
 * Return Value
 *      0    Success
 *     <0    Error code
 */
int
IntDispatch_Initialize(void);


/*----------------------------------------------------------------------------
 * IntDispatch_Hook
 *
 * This function registers a callback function that can service an interrupt.
 * The callback function will be invoked when the interrupt has been decoded.
 * A handle is returned that can be used to mask and unmask the interrupt (to
 * create a critical section) and to unhook the interrupt. The interrupt is
 * left masked by this function.
 *
 * szIntName_p
 *     Zero-terminated name that describes the interrupt to be hooked.
 *
 * Arg_p (input)
 *     Opaque pointer that will be passed to the callback function.
 *
 * Handle_p (output)
 *     Pointer to the memory location that will be written with the handle
 *     that must be used to mask, unmask or unhook an interrupt.
 *
 * Return Value
 *      0    Success
 *     <0    Error code. Specifically:
 *     -1    Bad parameter
 *     -2    No interrupt with that name
 *     -3    Interrupt is already hooked
 */
int
IntDispatch_Hook(
        const char * const szIntName_p,
        IntDispatch_Callback_t CBFunc,
        void * Arg_p,
        IntDispatch_Handle_t * const Handle_p);


/*----------------------------------------------------------------------------
 * IntDispatch_Unhook
 *
 * This function unhooks an interrupt. When this function returns, the
 * previously registered callback function will not be invoked anymore.
 * The interrupt source will be masked in the process.
 *
 * Return Value
 *     0    Success
 *     <0   Error code, specifically:
 *     -1   Bad parameter
 */
int
IntDispatch_Unhook(
        const IntDispatch_Handle_t Handle);


/*----------------------------------------------------------------------------
 * IntDispatch_Mask
 *
 * This function masks the interrupt source related to the handle, which
 * prevents the callback function from being invoked after the next interrupt
 * event. Masking the interrupt source does not necessarily immediately suspend
 * the interrupt context that could have been scheduled to run before
 * this function was called.
 * Interrupt masking is not "stackable", so multiple calls to this
 * function serve no purpose.
 * If an interrupt configured for edge-detection occurred during the masking
 * period, this event is remembered and the callback will be invoked
 * immediately when Unmask is called.
 *
 * Return Value
 *     0    Success
 *     <0   Error code, specifically:
 *     -1   Bad parameter
 */
int
IntDispatch_Mask(
        const IntDispatch_Handle_t Handle);


/*----------------------------------------------------------------------------
 * IntDispatch_Context_Mask
 *
 * This function masks the interrupt context related to the handle, which
 * prevents the callback function from being invoked after this function
 * returns.
 *
 * Return Value
 *     0    Success
 *     <0   Error code, specifically:
 *     -1   Bad parameter
 */
int
IntDispatch_Context_Mask(
        const IntDispatch_Handle_t Handle);


/*----------------------------------------------------------------------------
 * IntDispatch_Unmask
 *
 * This function unmasks the interrupt source related to the handle, which
 * allows the callback function to be invoked again after the next interrupt
 * event. Interrupt masking is not "stackable", so the first call to Unmask
 * enables the callback.
 * If an interrupt configured for edge-detection occurred during the masking
 * period, this event was remembered and the callback will be invoked during
 * this function call, or shortly after this function returns.
 * Use IntDispatch_EdgeReset to forget such old events.
 *
 * Return Value
 *     0    Success
 *     <0   Error code, specifically:
 *     -1   Bad parameter
 */
int
IntDispatch_Unmask(
        const IntDispatch_Handle_t Handle);


/*----------------------------------------------------------------------------
 * IntDispatch_Context_Unmask
 *
 * This function unmasks the interrupt source related to the handle, which
 * allows the callback function to be invoked again after this
 * function returns.
 *
 * Return Value
 *     0    Success
 *     <0   Error code, specifically:
 *     -1   Bad parameter
 */
int
IntDispatch_Context_Unmask(
        const IntDispatch_Handle_t Handle);


/*----------------------------------------------------------------------------
 * IntDispatch_EdgeReset
 *
 * This function can be used to state of for interrupts configured for edge-
 * detection. This is also done automatically before dispatching an interrupt
 * (invoke the callback function). This function can be used to clear the
 * history built up during a masking period - see IntDispatch_Mask/Unmask.
 *
 * Return Value
 *     0    Success
 *     <0   Error code, specifically:
 *     -1   Bad parameter
 */
int
IntDispatch_EdgeReset(
        const IntDispatch_Handle_t Handle);

#endif /* Include Guard */

/* end of file intdispatch.h */
