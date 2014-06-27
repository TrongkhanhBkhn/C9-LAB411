/* 
 * File:   RFRouter.h
 * Author: Chu
 *
 * Created on June 15, 2014, 3:15 PM
 */

#ifndef RFROUTER_H
#define	RFROUTER_H


#include "CC1101/CC1101.h"
#include "Hardware/Generic.h"
#include "LCD/LCD.h"
#include "SPI/SPI.h"
#include "TIMER/TIMER.h"
#include "UART/UART.h"
#include "RFConfig.h"

BYTE chip_status_rx, chip_status_tx;
BYTE buffer[48];
BYTE  Ok;
BYTE a;


#define DEBUG_UART
void Timer_Isr(void);
void SendData(unsigned char data[], unsigned char addr,  unsigned char command);
void OSC_config(void);

#endif