/**********************************************************************/
/* Author               : 	Mohanad Khaled Hassan                     */
/* Origin Date          : 	05/10/2023                                */
/* Layer                : 	HAL Layer                 	   		      */
/* SWC                  : 	LCD		 	                              */
/* Version              : 	1.0.0                          			  */
/**********************************************************************/


#include <avr/io.h>
#include <util/delay.h>

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"

#include "LED_interface.h"


void LED_voidTurnOn (uint8 Copy_u8PortNum, uint8 Copy_u8PinNum)
{
	DIO_voidSetPinDirection(Copy_u8PortNum, Copy_u8PinNum, DIO_u8OUTPUT);
	DIO_voidSetPinValue(Copy_u8PortNum, Copy_u8PinNum, DIO_u8HIGH);
}

void LED_voidTurnOff (uint8 Copy_u8PortNum, uint8 Copy_u8PinNum)
{
	DIO_voidSetPinDirection(Copy_u8PortNum, Copy_u8PinNum, DIO_u8OUTPUT);
	DIO_voidSetPinValue(Copy_u8PortNum, Copy_u8PinNum, DIO_u8LOW);
}

