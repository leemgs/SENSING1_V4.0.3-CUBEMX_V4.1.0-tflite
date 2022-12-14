/**
 ******************************************************************************
 * @file    console.c
 * @author  Central LAB
 * @version V4.0.0
 * @date    30-Oct-2019
 * @brief   This file provides implementation of standard input/output
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2018 STMicroelectronics</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

#include <stdio.h>
#include <stdlib.h>

#include "bsp.h"
#include "TargetFeatures.h"
#include "cmsis_os.h"

#if SENSING1_USE_PRINTF

extern osSemaphoreId semRxChar;
extern osSemaphoreId semUart;

#if SENSING1_USE_USB_CDC
#include "usbd_cdc_interface.h"
#endif /* SENSING1_USE_USB_CDC */

#ifndef STM32_SENSORTILE
/** @brief Asks user to input an integer number and returns its value
 * @param message A message to be prompted on the console when asking value
 * @retval The integer acquired from console
 */
int cuiGetInteger(const char* message)
{
  int ret, value;
  char buf[32];
  do{
    printf(message);
    fflush(stdout);
    ret = scanf("%u", &value);
    if(ret != 1){
      /* In case of non-matching characters, eat stdin as IAR and
       * TrueStudio won't flush it as Keil does */
      scanf("%s", buf);
      SENSING1_PRINTF("\r\nPlease insert a valid integer number\r\n");
    }
  }while(ret != 1);

  return value;
}

/** @brief Sends a character to serial port
 * @param ch Character to send
 * @retval Character sent
 */
int uartSendChar(int ch)
{
  if (semUart != NULL) {
    if (osSemaphoreWait(semUart, osWaitForever) != osOK)
    {
      while(1);
    }
    if (HAL_UART_Transmit(&UartHandle, (uint8_t *)&ch, 1, HAL_MAX_DELAY) != HAL_OK)
    {
      while(1);
    }
    osSemaphoreRelease(semUart);
  }
  else
  {
    /* Scheduler hasn't started yet, concurrency is not an issue */
    HAL_UART_Transmit(&UartHandle,(uint8_t *)&ch, 1, HAL_MAX_DELAY);
  }
  return ch;
}

/** @brief Receives a character from serial port
 * @param None
 * @retval Character received
 */
int uartReceiveChar(void)
{
  uint8_t ch;
  HAL_UART_Receive(&UartHandle, &ch, 1, HAL_MAX_DELAY);

  /* Echo character back to console */
  HAL_UART_Transmit(&UartHandle, &ch, 1, HAL_MAX_DELAY);

  /* And cope with Windows */
  if(ch == '\r'){
    uint8_t ret = '\n';
    HAL_UART_Transmit(&UartHandle, &ret, 1, HAL_MAX_DELAY);
  }

  return ch;
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  if (semRxChar) {
    osSemaphoreRelease(semRxChar);
  }
}

void uartSendBuf(uint8_t *data, uint32_t length)
{
  if (semUart != NULL)
  {
    if (osSemaphoreWait(semUart, osWaitForever) != osOK)
    {
      while (1);
    }

    if (HAL_UART_Transmit(&UartHandle, data, length, HAL_MAX_DELAY) != HAL_OK)
    {
      while (1);
    }
    osSemaphoreRelease(semUart);
  }
  else
  {
    /* Scheduler hasn't started yet, concurrency is not an issue */
    HAL_UART_Transmit(&UartHandle, data, length, HAL_MAX_DELAY);
  }
}
#endif /* STM32_SENSORTILE */

#if defined (__IAR_SYSTEMS_ICC__)

size_t __write(int Handle, const unsigned char * Buf, size_t Bufsize);
size_t __read(int Handle, unsigned char *Buf, size_t Bufsize);

/** @brief IAR specific low level standard input
 * @param Handle IAR internal handle
 * @param Buf Buffer where to store characters read from stdin
 * @param Bufsize Number of characters to read
 * @retval Number of characters read
 */
size_t __read(int Handle, unsigned char *Buf, size_t Bufsize)
{
  if (Handle != 0){
    return -1;
  }

#if SENSING1_USE_USB_CDC
#else
  for(int i = 0; i < Bufsize; i++)
  {
    Buf[i] = uartReceiveChar();
  }
#endif /* SENSING1_USE_USB_CDC */

  return Bufsize;
}

/** @brief IAR specific low level standard output
 * @param Handle IAR internal handle
 * @param Buf Buffer containing characters to be written to stdout
 * @param Bufsize Number of characters to write
 * @retval Number of characters write
 */
size_t __write(int Handle, const unsigned char * Buf, size_t Bufsize)
{
  /* Check for the command to flush all handles */
  if (Handle == -1)
  {
    return 0;
  }

  /* Only write to stdout and stderr, otherwise return failure */
  if (Handle != 1 && Handle != 2){
    return -1;
  }

  if (Bufsize == 0)
  {
    return 0;
  }

#if SENSING1_USE_USB_CDC
  while (CDC_Itf_Transmit((uint8_t *)Buf, Bufsize) != USBD_OK);
   /* Transmit zero-length packet to complete transfer */
  while(CDC_Itf_Transmit((uint8_t *)Buf, 0) != USBD_OK);
#else
  uartSendBuf((uint8_t *)Buf, Bufsize);
#endif /* SENSING1_USE_USB_CDC */

  return Bufsize;
}

#elif defined (__CC_ARM)

/**
 * @brief fputc call for standard output implementation
 * @param ch Character to print
 * @param f File pointer
 * @retval Character printed
 */
int fputc(int ch, FILE *f)
{
#if SENSING1_USE_USB_CDC
  while (CDC_Itf_Transmit((uint8_t *)&ch, 1) != USBD_OK);
   /* Transmit zero-length packet to complete transfer */
  while(CDC_Itf_Transmit((uint8_t *)&ch, 0) != USBD_OK);
#else
  uartSendBuf((uint8_t *)&ch, 1);
#endif /* SENSING1_USE_USB_CDC */

  return ch;
}

/** @brief fgetc call for standard input implementation
 * @param f File pointer
 * @retval Character acquired from standard input
 */
int fgetc(FILE *f)
{
#if SENSING1_USE_USB_CDC
  return -1;
#else
  return uartReceiveChar();
#endif /* SENSING1_USE_USB_CDC */
}

#elif defined (__GNUC__)

/** @brief putchar call for standard output implementation
 * @param ch Character to print
 * @retval Character printed
 */
int __io_putchar(int ch)
{
  while (CDC_Itf_Transmit((uint8_t *)&ch, 1) != USBD_OK);
   /* Transmit zero-length packet to complete transfer */
  while(CDC_Itf_Transmit((uint8_t *)&ch, 0) != USBD_OK);
  return ch;
}

/** @brief getchar call for standard input implementation
 * @param None
 * @retval Character acquired from standard input
 */
int __io_getchar(void)
{
  return -1;
}

#else
#error "Toolchain not supported"
#endif

#endif /* SENSING1_USE_PRINTF */

/******************* (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
