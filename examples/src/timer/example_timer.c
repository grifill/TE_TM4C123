/**
 * ---------------------------------------------------------------------------
 * Copyright (c) 2026 Gregory Filatov
 * All rights reserved.
 *
 * \file   example_timer.c
 * \author Gregory Filatov
 * \date   19 February 2026
 * \version 0.1.0
 *
 * \brief  Contains Timer Examples for TM4C123GH6PZ chip
 *
 * Module: Simple examples
 *
 * Purpose: Examples, education
 *
 * Functionality:
 *     Environment
 * ---------------------------------------------------------------------------
 */
#include "example_timer.h"

int example_timer_leds(void) {

    // Set the clocking to run directly from the crystal
    MAP_SysCtlClockSet(SYSCTL_SYSDIV_1 |
                       SYSCTL_USE_OSC |
                       SYSCTL_OSC_MAIN |
                       SYSCTL_XTAL_16MHZ);

    return 0;
}
