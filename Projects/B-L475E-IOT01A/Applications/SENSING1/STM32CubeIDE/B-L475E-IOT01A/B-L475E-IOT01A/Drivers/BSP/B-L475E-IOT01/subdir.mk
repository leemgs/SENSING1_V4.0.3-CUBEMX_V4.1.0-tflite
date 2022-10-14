################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_audio.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_bus.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_env_sensors.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_motion_sensors.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_qspi.c 

OBJS += \
./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01.o \
./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_audio.o \
./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_bus.o \
./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_env_sensors.o \
./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_motion_sensors.o \
./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_qspi.o 

C_DEPS += \
./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01.d \
./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_audio.d \
./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_bus.d \
./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_env_sensors.d \
./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_motion_sensors.d \
./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_qspi.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01.c Drivers/BSP/B-L475E-IOT01/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01.c_includes.args"
Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_audio.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_audio.c Drivers/BSP/B-L475E-IOT01/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_audio.c_includes.args"
Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_bus.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_bus.c Drivers/BSP/B-L475E-IOT01/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_bus.c_includes.args"
Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_env_sensors.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_env_sensors.c Drivers/BSP/B-L475E-IOT01/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_env_sensors.c_includes.args"
Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_motion_sensors.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_motion_sensors.c Drivers/BSP/B-L475E-IOT01/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_motion_sensors.c_includes.args"
Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_qspi.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_qspi.c Drivers/BSP/B-L475E-IOT01/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_qspi.c_includes.args"

clean: clean-Drivers-2f-BSP-2f-B-2d-L475E-2d-IOT01

clean-Drivers-2f-BSP-2f-B-2d-L475E-2d-IOT01:
	-$(RM) ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01.d ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01.o ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01.su ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_audio.d ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_audio.o ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_audio.su ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_bus.d ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_bus.o ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_bus.su ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_env_sensors.d ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_env_sensors.o ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_env_sensors.su ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_motion_sensors.d ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_motion_sensors.o ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_motion_sensors.su ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_qspi.d ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_qspi.o ./Drivers/BSP/B-L475E-IOT01/stm32l475e_iot01_qspi.su

.PHONY: clean-Drivers-2f-BSP-2f-B-2d-L475E-2d-IOT01

