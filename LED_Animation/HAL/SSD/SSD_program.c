/**********************************************************************/
/* Author               : 	Mohanad Khaled Hassan                     */
/* Origin Date          : 	05/10/2023                                */
/* Layer                : 	HAL Layer                 	   		      */
/* SWC                  : 	Seven Segment                             */
/* Version              : 	1.0.0                          			  */
/**********************************************************************/


#include <avr/io.h>
#include <util/delay.h>

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "DIO_interface.h"

#include "SSD_interface.h"




uint8 SSD_Arr[10] = {
        0b00111111, // 0
        0b00000110, // 1
        0b01011011, // 2
        0b01001111, // 3
        0b01100110, // 4
        0b01101101, // 5
        0b01111101, // 6
        0b00000111, // 7
        0b01111111, // 8
        0b01101111  // 9
    };

void SSD_voidDecCount_0_9 (uint8 Copy_u8PortNum, uint8 Copy_u8StartNum, uint8 Copy_u8DelayMs)
{
	DIO_voidSetPortDirection(Copy_u8PortNum, DIO_u8OUTPUT);
	uint8 i = 0;

	for(i = Copy_u8StartNum ; i > 0 ; i--){
		DIO_voidSetPortValue(Copy_u8PortNum, SSD_Arr[i]);
		_delay_ms(Copy_u8DelayMs);
	}
}

void SSD_voidDecCount_0_99 (uint8 Copy_u8PortNum1, uint8 Copy_u8PortNum2, uint8 Copy_u8StartNum, uint8 Copy_u8DelayMs)
{
	DIO_voidSetPortDirection(Copy_u8PortNum1, DIO_u8OUTPUT);
	DIO_voidSetPortDirection(Copy_u8PortNum2, DIO_u8OUTPUT);
	uint8 i = 0;

	for(i = Copy_u8StartNum ; i > 0 ; i--){
		uint8 Local_u8DigitTens = i/10;
		uint8 Local_u8DigitOnes = i%10;

		DIO_voidSetPortValue(Copy_u8PortNum1, SSD_Arr[Local_u8DigitTens]);
		DIO_voidSetPortValue(Copy_u8PortNum2, SSD_Arr[Local_u8DigitOnes]);

		_delay_ms(Copy_u8DelayMs);
	}
}

void SSD_voidIncCount_0_9 (uint8 Copy_u8PortNum, uint8 Copy_u8StartNum, uint8 Copy_u8DelayMs)
{
	DIO_voidSetPortDirection(Copy_u8PortNum, DIO_u8OUTPUT);
	uint8 i = 0;

	for(i = 0 ; i <= Copy_u8StartNum ; i++){
		DIO_voidSetPortValue(Copy_u8PortNum, SSD_Arr[i]);
		_delay_ms(Copy_u8DelayMs);
	}
}

void SSD_voidIncCount_0_99 (uint8 Copy_u8PortNum1, uint8 Copy_u8PortNum2, uint8 Copy_u8StartNum, uint8 Copy_u8DelayMs)
{
	DIO_voidSetPortDirection(Copy_u8PortNum1, DIO_u8OUTPUT);
	DIO_voidSetPortDirection(Copy_u8PortNum2, DIO_u8OUTPUT);
	uint8 i = 0;

	for(i = 0 ; i <= Copy_u8StartNum ; i++){
		uint8 Local_u8DigitTens = i/10;
		uint8 Local_u8DigitOnes = i%10;

		DIO_voidSetPortValue(Copy_u8PortNum1, SSD_Arr[Local_u8DigitTens]);
		DIO_voidSetPortValue(Copy_u8PortNum2, SSD_Arr[Local_u8DigitOnes]);

		_delay_ms(Copy_u8DelayMs);
	}
}
