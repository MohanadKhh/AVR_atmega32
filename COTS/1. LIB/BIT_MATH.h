/**********************************************************/
/* Author               : Mohanad Khaled Hassan           */
/* Origin Date          : 05/10/2023                      */
/* Layer                : MCAL Layer                      */
/* SWC                  : DIO                             */
/* Version              : 1.0.0                           */
/**********************************************************/


#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(REG, BIT)          REG |=  (1 << (BIT))
#define CLR_BIT(REG, BIT)          REG &= ~(1 << (BIT))
#define TOG_BIT(REG, BIT)          REG ^=  (1 << (BIT)) 
#define GET_BIT(REG, BIT)          ((REG >> BIT) & 1  )


#endif 
