/**
 * ---------------------------------------------------------------------------
 * Copyright (c) 2026 Gregory Filatov
 * All rights reserved.
 *
 * \file   example_systick.c
 * \author Gregory Filatov
 * \date   19 February 2026
 * \version 0.1.0
 *
 * \brief  Contains Systick Examples for TM4C123GH6PZ chip
 *
 * Module: Simple examples
 *
 * Purpose: Examples, education
 *
 * Functionality:
 *     Environment
 * ---------------------------------------------------------------------------
 */

#include "example_systick.h"

volatile uint32_t msTicks;

void SysTick_Handler(void) {

    // Increment every millisecond
    msTicks++;
}

void delay_ms(uint32_t ms) {

    uint32_t start = msTicks;
    while ((msTicks - start) < ms) {
    }
}

int example_systick_delay(void) {

    msTicks = 0;

    // Set the clocking to run directly from the crystal
    MAP_SysCtlClockSet(SYSCTL_SYSDIV_1 |
                       SYSCTL_USE_OSC |
                       SYSCTL_OSC_MAIN |
                       SYSCTL_XTAL_16MHZ);

    // Enable the peripherals used by this example
    // Enable the GPIO port that is used for the on-board LED
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOG);

    // Check if the peripheral access is enabled
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOG)) {
    }

    // Led Off
    GPIOPinTypeGPIOOutput(GPIO_PORTG_BASE, GPIO_PIN_7);
    GPIOPinWrite(GPIO_PORTG_BASE, GPIO_PIN_7, 0);

    // Set 1ms period
    SysTickPeriodSet(SysCtlClockGet() / 1000);

    // Set Register ISR
    SysTickIntRegister(SysTick_Handler);

    // Enable SysTick interrupt
    SysTickIntEnable();

    // Start SysTick
    SysTickEnable();

    while(1) {
        GPIOPinWrite(GPIO_PORTG_BASE, GPIO_PIN_7, GPIO_PIN_7);
        delay_ms(1000);
        GPIOPinWrite(GPIO_PORTG_BASE, GPIO_PIN_7, 0);
        delay_ms(1000);
    }

    return 0;
}
