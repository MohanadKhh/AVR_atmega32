/**********************************************************************/
/* Author               : 	Mohanad Khaled Hassan                     */
/* Origin Date          : 	05/10/2023                                */
/* Layer                : 	HAL Layer                 	   		      */
/* SWC                  : 	LED                      		          */
/* Version              : 	1.0.0                          			  */
/**********************************************************************/

#ifndef HAL_LED_LED_INTERFACE_H_
#define HAL_LED_LED_INTERFACE_H_

void LED_voidTurnOn (uint8 Copy_u8PortNum, uint8 Copy_u8PinNum);

void LED_voidTurnOff (uint8 Copy_u8PortNum, uint8 Copy_u8PinNum);

void LED_voidShifLeft (uint8 Copy_u8PortNum, uint8 Copy_u8Delayms);

void LED_voidShifRight (uint8 Copy_u8PortNum, uint8 Copy_u8Delayms);

void LED_voidShiftRightLeft (uint8 Copy_u8PortNum, uint8 Copy_u8Delayms);

void LED_voidShiftLeftRight (uint8 Copy_u8PortNum, uint8 Copy_u8Delayms);

void LED_voidFlash (uint8 Copy_u8PortNum, uint8 Copy_u8Delayms);

void LED_voidInOut (uint8 Copy_u8PortNum, uint8 Copy_u8Delayms);

#endif /* HAL_LED_LED_INTERFACE_H_ */
