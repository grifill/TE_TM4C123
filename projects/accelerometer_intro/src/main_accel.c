/**
 * ---------------------------------------------------------------------------
 * Copyright (c) 2026 Gregory Filatov
 * All rights reserved.
 *
 * \file   main_combine.c
 * \author Gregory Filatov
 * \date   19 February 2026
 * \version 0.1.0
 *
 * \brief  Contains main (combine) function (examples TM4C123GH6PZ chip)
 *
 * Module: Combine function
 *
 * Purpose: Example, education
 *
 * Functionality:
 *     Environment
 * ---------------------------------------------------------------------------
 */
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

// Examples - List
#include "example_gpio.h"
#include "example_systick.h"
#include "example_timer.h"
#include "example_uart.h"

int main(void) {

    int err = 0;

    err += example_gpio_leds(16);
    err += example_uart_hello();

    while(1) {
    }

    //return 0;
}

//*****************************************************************************
// The error routine that is called if the driver library encounters an error.
//*****************************************************************************
#ifdef DEBUG
void
__error__(char *pcFilename, uint32_t ui32Line) {
}
#endif
