/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : LED_RED.h
**     Project     : HMI
**     Processor   : MKL46Z256VMC4
**     Component   : LED
**     Version     : Component 01.074, Driver 01.00, CPU db: 3.00.000
**     Repository  : mcuoneclipse
**     Compiler    : GNU C Compiler
**     Date/Time   : 2017-07-20, 13:18, # CodeGen: 4
**     Abstract    :
**          This component implements a universal driver for a single LED.
**     Settings    :
**          Component name                                 : LED_RED
**          SDK                                            : MCUC1
**          Turned On with initialization                  : no
**          HW Interface                                   : 
**            Anode on port side, HIGH is ON               : no
**            On/Off                                       : Enabled
**              Pin                                        : LEDpin
**            PWM                                          : Disabled
**          Shell                                          : Disabled
**     Contents    :
**         On         - void LED_RED_On(void);
**         Off        - void LED_RED_Off(void);
**         Neg        - void LED_RED_Neg(void);
**         Get        - uint8_t LED_RED_Get(void);
**         Put        - void LED_RED_Put(uint8_t val);
**         SetRatio16 - void LED_RED_SetRatio16(uint16_t ratio);
**         Deinit     - void LED_RED_Deinit(void);
**         Init       - void LED_RED_Init(void);
**
**     * Copyright (c) 2013-2017, Erich Styger
**      * Web:         https://mcuoneclipse.com
**      * SourceForge: https://sourceforge.net/projects/mcuoneclipse
**      * Git:         https://github.com/ErichStyger/McuOnEclipse_PEx
**      * All rights reserved.
**      *
**      * Redistribution and use in source and binary forms, with or without modification,
**      * are permitted provided that the following conditions are met:
**      *
**      * - Redistributions of source code must retain the above copyright notice, this list
**      *   of conditions and the following disclaimer.
**      *
**      * - Redistributions in binary form must reproduce the above copyright notice, this
**      *   list of conditions and the following disclaimer in the documentation and/or
**      *   other materials provided with the distribution.
**      *
**      * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**      * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**      * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**      * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**      * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**      * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**      * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**      * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**      * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**      * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file LED_RED.h
** @version 01.00
** @brief
**          This component implements a universal driver for a single LED.
*/         
/*!
**  @addtogroup LED_RED_module LED_RED module documentation
**  @{
*/         

#ifndef __LED_RED_H
#define __LED_RED_H

/* MODULE LED_RED. */
#include "MCUC1.h" /* SDK and API used */
#include "LED_REDconfig.h" /* configuration */

/* Include inherited components */
#include "MCUC1.h"
#include "LEDpin1.h"

#define LED_RED_ClrVal()    LEDpin1_ClrVal() /* put the pin on low level */
#define LED_RED_SetVal()    LEDpin1_SetVal() /* put the pin on high level */
#define LED_RED_SetInput()  LEDpin1_SetInput() /* use the pin as input pin */
#define LED_RED_SetOutput() LEDpin1_SetOutput() /* use the pin as output pin */

#define LED_RED_PARSE_COMMAND_ENABLED  0 /* set to 1 if method ParseCommand() is present, 0 otherwise */


#define LED_RED_On() LEDpin1_ClrVal()
/*
** ===================================================================
**     Method      :  LED_RED_On (component LED)
**     Description :
**         This turns the LED on.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LED_RED_Off() LEDpin1_SetVal()
/*
** ===================================================================
**     Method      :  LED_RED_Off (component LED)
**     Description :
**         This turns the LED off.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LED_RED_Neg() LEDpin1_NegVal()
/*
** ===================================================================
**     Method      :  LED_RED_Neg (component LED)
**     Description :
**         This negates/toggles the LED
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LED_RED_Get() (!(LEDpin1_GetVal()))
/*
** ===================================================================
**     Method      :  LED_RED_Get (component LED)
**     Description :
**         This returns logical 1 in case the LED is on, 0 otherwise.
**     Parameters  : None
**     Returns     :
**         ---             - Status of the LED (on or off)
** ===================================================================
*/

void LED_RED_Init(void);
/*
** ===================================================================
**     Method      :  LED_RED_Init (component LED)
**     Description :
**         Performs the LED driver initialization.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define LED_RED_Put(val)  ((val) ? LED_RED_On() : LED_RED_Off())
/*
** ===================================================================
**     Method      :  LED_RED_Put (component LED)
**     Description :
**         Turns the LED on or off.
**     Parameters  :
**         NAME            - DESCRIPTION
**         val             - value to define if the LED has to be on or
**                           off.
**     Returns     : Nothing
** ===================================================================
*/

void LED_RED_Deinit(void);
/*
** ===================================================================
**     Method      :  LED_RED_Deinit (component LED)
**     Description :
**         Deinitializes the driver
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void LED_RED_SetRatio16(uint16_t ratio);
/*
** ===================================================================
**     Method      :  LED_RED_SetRatio16 (component LED)
**     Description :
**         Method to specify the duty cycle. If using a PWM pin, this
**         means the duty cycle is set. For On/off pins, values smaller
**         0x7FFF means off, while values greater means on.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ratio           - Ratio value, where 0 means 'off' and
**                           0xffff means 'on'
**     Returns     : Nothing
** ===================================================================
*/

/* END LED_RED. */

#endif
/* ifndef __LED_RED_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
