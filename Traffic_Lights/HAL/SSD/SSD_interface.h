/**********************************************************************/
/* Author               : 	Mohanad Khaled Hassan                     */
/* Origin Date          : 	05/10/2023                                */
/* Layer                : 	HAL Layer                 	   		      */
/* SWC                  : 	Seven Segment                             */
/* Version              : 	1.0.0                          			  */
/**********************************************************************/

#ifndef HAL_SSD_SEVENSEGMENT_INTERFACE_H_
#define HAL_SSD_SEVENSEGMENT_INTERFACE_H_

void SSD_voidDecCount_0_9  (uint8 Copy_u8PortNum, uint8 Copy_u8StartNum, uint8 Copy_u8DelayMs);
void SSD_voidDecCount_0_99 (uint8 Copy_u8PortNum1, uint8 Copy_u8PortNum2, uint8 Copy_u8StartNum, uint8 Copy_u8DelayMs);
void SSD_voidIncCount_0_9  (uint8 Copy_u8PortNum, uint8 Copy_u8StartNum, uint8 Copy_u8DelayMs);
void SSD_voidIncCount_0_99 (uint8 Copy_u8PortNum1, uint8 Copy_u8PortNum2, uint8 Copy_u8StartNum, uint8 Copy_u8DelayMs);


#endif /* HAL_SSD_SEVENSEGMENT_INTERFACE_H_ */
