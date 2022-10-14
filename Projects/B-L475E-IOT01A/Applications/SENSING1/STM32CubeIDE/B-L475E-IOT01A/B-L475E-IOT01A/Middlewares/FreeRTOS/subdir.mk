################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/Third_Party/FreeRTOS/Source/list.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/Third_Party/FreeRTOS/Source/queue.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/Third_Party/FreeRTOS/Source/tasks.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/Third_Party/FreeRTOS/Source/timers.c 

OBJS += \
./Middlewares/FreeRTOS/list.o \
./Middlewares/FreeRTOS/queue.o \
./Middlewares/FreeRTOS/tasks.o \
./Middlewares/FreeRTOS/timers.o 

C_DEPS += \
./Middlewares/FreeRTOS/list.d \
./Middlewares/FreeRTOS/queue.d \
./Middlewares/FreeRTOS/tasks.d \
./Middlewares/FreeRTOS/timers.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/FreeRTOS/list.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/Third_Party/FreeRTOS/Source/list.c Middlewares/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/FreeRTOS/list.c_includes.args"
Middlewares/FreeRTOS/queue.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/Third_Party/FreeRTOS/Source/queue.c Middlewares/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/FreeRTOS/queue.c_includes.args"
Middlewares/FreeRTOS/tasks.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/Third_Party/FreeRTOS/Source/tasks.c Middlewares/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/FreeRTOS/tasks.c_includes.args"
Middlewares/FreeRTOS/timers.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/Third_Party/FreeRTOS/Source/timers.c Middlewares/FreeRTOS/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/FreeRTOS/timers.c_includes.args"

clean: clean-Middlewares-2f-FreeRTOS

clean-Middlewares-2f-FreeRTOS:
	-$(RM) ./Middlewares/FreeRTOS/list.d ./Middlewares/FreeRTOS/list.o ./Middlewares/FreeRTOS/list.su ./Middlewares/FreeRTOS/queue.d ./Middlewares/FreeRTOS/queue.o ./Middlewares/FreeRTOS/queue.su ./Middlewares/FreeRTOS/tasks.d ./Middlewares/FreeRTOS/tasks.o ./Middlewares/FreeRTOS/tasks.su ./Middlewares/FreeRTOS/timers.d ./Middlewares/FreeRTOS/timers.o ./Middlewares/FreeRTOS/timers.su

.PHONY: clean-Middlewares-2f-FreeRTOS

