/**********************************************************************/
/* Author               : 	Mohanad Khaled Hassan                     */
/* Origin Date          : 	05/10/2023                                */
/* Layer                : 	HAL Layer                 	   		      */
/* SWC                  : 	LCD		 	                              */
/* Version              : 	1.0.0                          			  */
/**********************************************************************/


#include <avr/io.h>
#include <util/delay.h>

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "../../MCAL/DIO/DIO_interface.h"

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

void LED_voidShifLeft (uint8 Copy_u8PortNum, uint8 Copy_u8Delayms)
{
	DIO_voidSetPortDirection(Copy_u8PortNum, DIO_u8OUTPUT);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN0, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN1, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN2, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN3, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN4, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN5, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN6, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN7, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);
}

void LED_voidShifRight (uint8 Copy_u8PortNum, uint8 Copy_u8Delayms)
{
	DIO_voidSetPortDirection(Copy_u8PortNum, DIO_u8OUTPUT);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN7, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN6, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN5, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN4, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN3, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN2, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN1, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN0, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);
}

void LED_voidShiftRightLeft (uint8 Copy_u8PortNum, uint8 Copy_u8Delayms)
{
	DIO_voidSetPortDirection(Copy_u8PortNum, DIO_u8OUTPUT);

	/*     	Shift Right		*/

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN7, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN6, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN5, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN4, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN3, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN2, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN1, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN0, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);


	/*     	Shift Left		*/

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN1, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN2, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN3, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN4, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN5, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN6, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN7, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms/2);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);
}

void LED_voidShiftLeftRight (uint8 Copy_u8PortNum, uint8 Copy_u8Delayms)
{
	DIO_voidSetPortDirection(Copy_u8PortNum, DIO_u8OUTPUT);

	/*     	Shift Left		*/

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN0, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN1, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN2, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN3, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN4, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN5, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN6, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN7, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);


	/*     	Shift Right		*/

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN6, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN5, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN4, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN3, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN2, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN1, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);

	DIO_voidSetPinValue(Copy_u8PortNum, DIO_u8PIN0, DIO_u8HIGH);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0x00);
}

void LED_voidFlash (uint8 Copy_u8PortNum, uint8 Copy_u8Delayms)
{
	DIO_voidSetPortDirection(Copy_u8PortNum, DIO_u8OUTPUT);
	DIO_voidSetPortValue(Copy_u8PortNum, 0XFF);
	_delay_ms(Copy_u8Delayms);
	DIO_voidSetPortValue(Copy_u8PortNum, 0X00);
	_delay_ms(Copy_u8Delayms);
}

void LED_voidInOut (uint8 Copy_u8PortNum, uint8 Copy_u8Delayms)
{
	DIO_voidSetPortDirection(Copy_u8PortNum, DIO_u8OUTPUT);

	DIO_voidSetPortValue(Copy_u8PortNum, 0X18);
	_delay_ms(Copy_u8Delayms);

	DIO_voidSetPortValue(Copy_u8PortNum, 0X3C);
	_delay_ms(Copy_u8Delayms);

	DIO_voidSetPortValue(Copy_u8PortNum, 0X7E);
	_delay_ms(Copy_u8Delayms);

	DIO_voidSetPortValue(Copy_u8PortNum, 0XFF);
	_delay_ms(Copy_u8Delayms);

	DIO_voidSetPortValue(Copy_u8PortNum, 0X7E);
	_delay_ms(Copy_u8Delayms);

	DIO_voidSetPortValue(Copy_u8PortNum, 0X3C);
	_delay_ms(Copy_u8Delayms);

	DIO_voidSetPortValue(Copy_u8PortNum, 0X18);
	_delay_ms(Copy_u8Delayms);

	DIO_voidSetPortValue(Copy_u8PortNum, 0X00);
	_delay_ms(Copy_u8Delayms);

	DIO_voidSetPortValue(Copy_u8PortNum, DIO_u8LOW);
}
