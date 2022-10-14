################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/Third_Party/FatFs/src/option/syscall.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/Third_Party/FatFs/src/option/unicode.c 

OBJS += \
./Middlewares/FatFs/Options/syscall.o \
./Middlewares/FatFs/Options/unicode.o 

C_DEPS += \
./Middlewares/FatFs/Options/syscall.d \
./Middlewares/FatFs/Options/unicode.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/FatFs/Options/syscall.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/Third_Party/FatFs/src/option/syscall.c Middlewares/FatFs/Options/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/FatFs/Options/syscall.c_includes.args"
Middlewares/FatFs/Options/unicode.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/Third_Party/FatFs/src/option/unicode.c Middlewares/FatFs/Options/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/FatFs/Options/unicode.c_includes.args"

clean: clean-Middlewares-2f-FatFs-2f-Options

clean-Middlewares-2f-FatFs-2f-Options:
	-$(RM) ./Middlewares/FatFs/Options/syscall.d ./Middlewares/FatFs/Options/syscall.o ./Middlewares/FatFs/Options/syscall.su ./Middlewares/FatFs/Options/unicode.d ./Middlewares/FatFs/Options/unicode.o ./Middlewares/FatFs/Options/unicode.su

.PHONY: clean-Middlewares-2f-FatFs-2f-Options

