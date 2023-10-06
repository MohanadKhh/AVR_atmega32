################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../APP/main.c 

OBJS += \
./APP/main.o 

C_DEPS += \
./APP/main.d 


# Each subdirectory must supply rules for building sources it contributes
APP/%.o: ../APP/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -I"D:\Mohanad.Khh\NTI - AVR\Eclipse_projects\Traffic_Lights\MCAL\DIO" -I"D:\Mohanad.Khh\NTI - AVR\Eclipse_projects\Traffic_Lights\LIB" -I"D:\Mohanad.Khh\NTI - AVR\Eclipse_projects\Traffic_Lights\HAL\LED" -I"D:\Mohanad.Khh\NTI - AVR\Eclipse_projects\Traffic_Lights\HAL\SSD" -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


