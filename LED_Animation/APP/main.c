/**********************************************************************/
/* Author               : 	Mohanad Khaled Hassan                     */
/* Origin Date          : 	05/10/2023                                */
/* Layer                : 	APP Layer                 	   		      */
/* SWC                  : 	LED_Animation                             */
/* Version              : 	1.0.0                          			  */
/**********************************************************************/

#include "STD_TYPES.h"

#include "DIO_interface.h"

#include "../HAL/LED/LED_interface.h"

int main(void){
	while(1){

		for(uint8 i = 0 ; i<4 ; i++){
			LED_voidShiftRightLeft (DIO_u8PORTB, 200);
		}

		for(uint8 i = 0 ; i<4 ; i++){
			LED_voidInOut (DIO_u8PORTB, 200);
		}

		for(uint8 i = 0 ; i<8 ; i++){
			LED_voidFlash (DIO_u8PORTB, 500);
		}
	}
}
