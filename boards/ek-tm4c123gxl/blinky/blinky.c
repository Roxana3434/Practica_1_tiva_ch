//*****************************************************************************
//
// blinky.c - Simple example to blink the on-board LED.
//
// Copyright (c) 2012-2014 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
// Texas Instruments (TI) is supplying this software for use solely and
// exclusively on TI's microcontroller products. The software is owned by
// TI and/or its suppliers, and is protected under applicable copyright
// laws. You may not combine this software with "viral" open-source
// software in order to form a larger program.
// 
// THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
// NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
// NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
// CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
// DAMAGES, FOR ANY REASON WHATSOEVER.
// 
// This is part of revision 2.1.0.12573 of the EK-TM4C123GXL Firmware Package.
//
//*****************************************************************************

#include <stdint.h>
#include  "../../../inc/tm4c123gh6pm.h"    

//*****************************************************************************
//
//! \addtogroup example_list
//! <h1>Blinky (blinky)</h1>
//!
//! A very simple example that blinks the on-board LED using direct register
//! access.
//
//*****************************************************************************

//*****************************************************************************
//
// Blink the on-board LED.
//
//*****************************************************************************
volatile int32_t valor; // variable global

int main(void)
{
    volatile uint32_t ui32Loop;
    valor = 33333; // cuentas correspondientes a 100ms   (66667 cuentas son para 1s)
    //
    // Enable the GPIO port that is used for the on-board LED.
    //
    SYSCTL_RCGC2_R = SYSCTL_RCGC2_GPIOF; // reloj

    //
    // Do a dummy read to insert a few cycles after enabling the peripheral.
    //
    ui32Loop = SYSCTL_RCGC2_R;

    //
    // Enable the GPIO pin for the LED (PR1).  Set the direction as output, and                  
    // enable the GPIO pin for digital function.
    //
    //
    GPIO_PORTF_DIR_R =  0x02 ; // configura la dirección del puerto F como salida en un pin especifico
    GPIO_PORTF_DEN_R =  0x02 ; // habiliata el pin digital especificado del puerto F

    //
    // Loop forever.
    //
    // aqui se pueden declarar variables 
    while(1)
    {
        //
        // Turn on the LED.
        //
        GPIO_PORTF_DATA_R |=  0x02; //encerder un bit

        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < valor; ui32Loop++)
        {
        }

        //
        // Turn off the LED.
        //
        GPIO_PORTF_DATA_R &= ~( 0x02 ); //apagar un bit 

        //
        // Delay for a bit.
        //
        for(ui32Loop = 0; ui32Loop < valor; ui32Loop++) 
        {
        }
    }
}
