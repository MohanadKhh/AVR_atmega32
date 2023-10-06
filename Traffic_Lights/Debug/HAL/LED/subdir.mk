################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/LED/LED_prgram.c 

OBJS += \
./HAL/LED/LED_prgram.o 

C_DEPS += \
./HAL/LED/LED_prgram.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/LED/%.o: ../HAL/LED/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\Mohanad.Khh\NTI - AVR\Eclipse_projects\Traffic_Lights\MCAL\DIO" -I"D:\Mohanad.Khh\NTI - AVR\Eclipse_projects\Traffic_Lights\LIB" -I"D:\Mohanad.Khh\NTI - AVR\Eclipse_projects\Traffic_Lights\HAL\LED" -I"D:\Mohanad.Khh\NTI - AVR\Eclipse_projects\Traffic_Lights\HAL\SSD" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


