/**
 * ---------------------------------------------------------------------------
 * Copyright (c) 2026 Gregory Filatov
 * All rights reserved.
 *
 * \file   example_timer.h
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

#ifndef EXAMPLE_TIMER_H_
#define EXAMPLE_TIMER_H_

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "driverlib/debug.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom.h"
#include "driverlib/rom_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/timer.h"
#include "driverlib/systick.h"

// User-lib
#include "func_gpio.h"

// Main examples function
int example_timer_leds(void);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif


#endif /* EXAMPLE_TIMER_H_ */
