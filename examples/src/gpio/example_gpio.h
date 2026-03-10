/**
 * ---------------------------------------------------------------------------
 * Copyright (c) 2026 Gregory Filatov
 * All rights reserved.
 *
 * \file   example_gpio.h
 * \author Gregory Filatov
 * \date   19 February 2026
 * \version 0.1.0
 *
 * \brief  Contains GPIO Examples for TM4C123GH6PZ chip
 *
 * Module: Simple examples
 *
 * Purpose: Examples, education
 *
 * Functionality:
 *     Environment
 * ---------------------------------------------------------------------------
 */

#ifndef EXAMPLE_GPIO_H_
#define EXAMPLE_GPIO_H_

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

/* --------------------------------- Includes ---------------------------------------- */
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

/* ---------------------------------- Defines ---------------------------------------- */

#define DELAY_CYCLE  (100000)

/* ---------------------- Main examples functions prototypes ------------------------- */

///
/// \brief   example_gpio_leds
/// \details Example: GPIO pins output function (LED)
///
/// \param[in] wCycle Is number of iterations
///
/// \return '0' - default retval for examples
///
int example_gpio_leds(uint32_t wCycle);



//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif


#endif /* EXAMPLE_GPIO_H_ */
