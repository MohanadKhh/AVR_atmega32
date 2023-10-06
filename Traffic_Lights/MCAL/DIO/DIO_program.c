/*****************************************************************************/
/* Author       	: 	Fahd Badi                                            */
/* Origin Date  	: 	05/10/2023                                           */
/* Layer    	    : 	MCAL Layer	                                         */
/* SWC	            : 	DIO		                                             */
/* Version      	: 	1.0.0                                                */
/*****************************************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "DIO_config.h"
#include "DIO_private.h"


void DIO_voidSetPinDirection(uint8 Copy_u8PortNum, uint8 Copy_u8PinNum, uint8 Copy_u8Direction)
{
	if(DIO_u8OUTPUT == Copy_u8Direction)
	{
		switch(Copy_u8PortNum)
		{
			case DIO_u8PORTA:  SET_BIT(DDRA, Copy_u8PinNum);  break;
			case DIO_u8PORTB:  SET_BIT(DDRB, Copy_u8PinNum);  break;
			case DIO_u8PORTC:  SET_BIT(DDRC, Copy_u8PinNum);  break;
			case DIO_u8PORTD:  SET_BIT(DDRD, Copy_u8PinNum);  break;
			default:   /* return error */                     break;
		}
	}
	else if(DIO_u8INPUT == Copy_u8Direction)
	{
		switch(Copy_u8PortNum)
		{
			case DIO_u8PORTA:  CLR_BIT(DDRA, Copy_u8PinNum);  break;
			case DIO_u8PORTB:  CLR_BIT(DDRB, Copy_u8PinNum);  break;
			case DIO_u8PORTC:  CLR_BIT(DDRC, Copy_u8PinNum);  break;
			case DIO_u8PORTD:  CLR_BIT(DDRD, Copy_u8PinNum);  break;
			default:   /* return error */                     break;
		}
	}
	else
	{
		/* return error */
	}
}


void DIO_voidSetPinValue(uint8 Copy_u8PortNum, uint8 Copy_u8PinNum, uint8 Copy_u8Value)
{
	if(DIO_u8HIGH == Copy_u8Value)
	{
		switch(Copy_u8PortNum)
		{
			case DIO_u8PORTA:  SET_BIT(PORTA, Copy_u8PinNum);  break;
			case DIO_u8PORTB:  SET_BIT(PORTB, Copy_u8PinNum);  break;
			case DIO_u8PORTC:  SET_BIT(PORTC, Copy_u8PinNum);  break;
			case DIO_u8PORTD:  SET_BIT(PORTD, Copy_u8PinNum);  break;
			default:   /* return error */                     break;
		}
	}
	else if(DIO_u8LOW == Copy_u8Value)
	{
		switch(Copy_u8PortNum)
		{
			case DIO_u8PORTA:  CLR_BIT(PORTA, Copy_u8PinNum);  break;
			case DIO_u8PORTB:  CLR_BIT(PORTB, Copy_u8PinNum);  break;
			case DIO_u8PORTC:  CLR_BIT(PORTC, Copy_u8PinNum);  break;
			case DIO_u8PORTD:  CLR_BIT(PORTD, Copy_u8PinNum);  break;
			default:   /* return error */                     break;
		}
	}
	else
	{
		/* return error */
	}

}


uint8 DIO_u8GetPinValue(uint8 Copy_u8PortNum, uint8 Copy_u8PinNum)
{
	uint8 Local_u8Result = 0;

	switch(Copy_u8PortNum)
	{
		case DIO_u8PORTA: Local_u8Result = GET_BIT(PINA, Copy_u8PinNum);  break;
		case DIO_u8PORTB: Local_u8Result = GET_BIT(PINB, Copy_u8PinNum);  break;
		case DIO_u8PORTC: Local_u8Result = GET_BIT(PINC, Copy_u8PinNum);  break;
		case DIO_u8PORTD: Local_u8Result = GET_BIT(PIND, Copy_u8PinNum);  break;
		default:   /* return error */                                     break;
	}

	return Local_u8Result;

}


void DIO_voidSetPortDirection(uint8 Copy_u8PortNum, uint8 Copy_u8Direction)
{
	if(DIO_u8OUTPUT == Copy_u8Direction)
	{
		switch(Copy_u8PortNum)
		{
			case DIO_u8PORTA:  DDRA = 0XFF;  break;
			case DIO_u8PORTB:  DDRB = 0XFF;  break;
			case DIO_u8PORTC:  DDRC = 0XFF;  break;
			case DIO_u8PORTD:  DDRD = 0XFF;  break;
			default:   /* return error */    break;
		}
	}
	else if(DIO_u8INPUT == Copy_u8Direction)
	{
		switch(Copy_u8PortNum)
		{
		case DIO_u8PORTA:  DDRA = 0X00;  break;
		case DIO_u8PORTB:  DDRB = 0X00;  break;
		case DIO_u8PORTC:  DDRC = 0X00;  break;
		case DIO_u8PORTD:  DDRD = 0X00;  break;
		default:   /* return error */    break;
		}
	}
	else
	{
		/*		return error		*/
	}
}


void DIO_voidSetPortValue(uint8 Copy_u8PortNum, uint8 Copy_u8Value)
{
	switch(Copy_u8PortNum)
	{
		case DIO_u8PORTA:  PORTA = Copy_u8Value;  break;
		case DIO_u8PORTB:  PORTB = Copy_u8Value;  break;
		case DIO_u8PORTC:  PORTC = Copy_u8Value;  break;
		case DIO_u8PORTD:  PORTD = Copy_u8Value;  break;
		default:   /* return error */     break;
	}
}


void DIO_voidTogglePin(uint8 Copy_u8PortNum, uint8 Copy_u8PinNum)
{
	switch(Copy_u8PortNum)
	{
		case DIO_u8PORTA:  TOG_BIT(PORTA, Copy_u8PinNum);  break;
		case DIO_u8PORTB:  TOG_BIT(PORTB, Copy_u8PinNum);  break;
		case DIO_u8PORTC:  TOG_BIT(PORTC, Copy_u8PinNum);  break;
		case DIO_u8PORTD:  TOG_BIT(PORTD, Copy_u8PinNum);  break;
		default:   /*		return error		*/  	   break;
	}
}
