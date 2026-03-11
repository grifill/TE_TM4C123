/**
 * ---------------------------------------------------------------------------
 * Copyright (c) 2026 Gregory Filatov
 * All rights reserved.
 *
 * \file   example_uart.h
 * \author Gregory Filatov
 * \date   19 February 2026
 * \version 0.1.0
 *
 * \brief  Contains UART Examples for TM4C123GH6PZ chip
 *
 * Module: Simple examples
 *
 * Purpose: Examples, education
 *
 * Functionality:
 *     Environment
 * ---------------------------------------------------------------------------
 */

#ifndef EXAMPLE_UART_H_
#define EXAMPLE_UART_H_

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
#include "driverlib/uart.h"

/* ---------------------------------- Defines ---------------------------------------- */
/* ---------------------- Main examples functions prototypes ------------------------- */

///
/// \brief   UARTSendBuf
/// \details Function: Sends data buffer to UART
///
/// \param[in] pui8Buffer Is a pointer to the buffer being send
/// \param[in] ui32Count Is a number of bytes to send
///
/// \return None
///
static void UARTSendBuf(const uint8_t *pui8Buffer, uint32_t ui32Count);

///
/// \brief   example_uart_hello
/// \details Example: UART print message function
///
/// \return '0' - default retval for examples
///
int example_uart_hello(void);



//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif /* EXAMPLE_UART_H_ */
