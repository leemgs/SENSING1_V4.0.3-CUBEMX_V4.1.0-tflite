################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/STM32CubeIDE/startup_stm32l475xx.s 

C_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/syscalls.c 

OBJS += \
./SENSING1/SW4STM32/startup_stm32l475xx.o \
./SENSING1/SW4STM32/syscalls.o 

S_DEPS += \
./SENSING1/SW4STM32/startup_stm32l475xx.d 

C_DEPS += \
./SENSING1/SW4STM32/syscalls.d 


# Each subdirectory must supply rules for building sources it contributes
SENSING1/SW4STM32/startup_stm32l475xx.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/STM32CubeIDE/startup_stm32l475xx.s SENSING1/SW4STM32/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -c -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"
SENSING1/SW4STM32/syscalls.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/syscalls.c SENSING1/SW4STM32/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/SW4STM32/syscalls.c_includes.args"

clean: clean-SENSING1-2f-SW4STM32

clean-SENSING1-2f-SW4STM32:
	-$(RM) ./SENSING1/SW4STM32/startup_stm32l475xx.d ./SENSING1/SW4STM32/startup_stm32l475xx.o ./SENSING1/SW4STM32/syscalls.d ./SENSING1/SW4STM32/syscalls.o ./SENSING1/SW4STM32/syscalls.su

.PHONY: clean-SENSING1-2f-SW4STM32

