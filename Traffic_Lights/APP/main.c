/**********************************************************************/
/* Author               : 	Mohanad Khaled Hassan                     */
/* Origin Date          : 	05/10/2023                                */
/* Layer                : 	APP Layer                 	   		      */
/* SWC                  : 	Traffic Lights application     		      */
/* Version              : 	1.0.0                          			  */
/**********************************************************************/
#include <avr/io.h>
#include <util/delay.h>

#include "STD_TYPES.h"

#include "DIO_interface.h"

#include "SSD_interface.h"
#include "LED_interface.h"

int main(void){
	while(1){
		/*			Green  --->   60 second 		*/
		LED_voidTurnOn (DIO_u8PORTD,DIO_u8PIN2);
		SSD_voidDecCount_0_99 (DIO_u8PORTA, DIO_u8PORTC, 60, 500);

		/*			Yellow  --->   15 second 		*/
		LED_voidTurnOff (DIO_u8PORTD,DIO_u8PIN2);
		LED_voidTurnOn (DIO_u8PORTD, DIO_u8PIN1);
		SSD_voidDecCount_0_99(DIO_u8PORTA, DIO_u8PORTC, 15, 500);

		/*			Red  --->   60 second 		*/
		LED_voidTurnOff (DIO_u8PORTD, DIO_u8PIN1);
		LED_voidTurnOn (DIO_u8PORTD, DIO_u8PIN0);
		SSD_voidDecCount_0_99(DIO_u8PORTA, DIO_u8PORTC, 60, 500);

		/*			Yellow  --->   15 second 		*/
		LED_voidTurnOff (DIO_u8PORTD, DIO_u8PIN0);
		LED_voidTurnOn (DIO_u8PORTD, DIO_u8PIN1);
		SSD_voidDecCount_0_99(DIO_u8PORTA, DIO_u8PORTC, 15, 500);

		LED_voidTurnOff (DIO_u8PORTD, DIO_u8PIN1);
	}
}
