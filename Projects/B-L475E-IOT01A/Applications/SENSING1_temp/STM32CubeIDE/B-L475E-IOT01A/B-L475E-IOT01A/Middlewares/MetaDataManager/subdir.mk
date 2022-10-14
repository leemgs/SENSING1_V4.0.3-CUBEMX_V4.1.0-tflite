################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_MetaDataManager/MetaDataManager.c 

OBJS += \
./Middlewares/MetaDataManager/MetaDataManager.o 

C_DEPS += \
./Middlewares/MetaDataManager/MetaDataManager.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/MetaDataManager/MetaDataManager.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_MetaDataManager/MetaDataManager.c Middlewares/MetaDataManager/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/MetaDataManager/MetaDataManager.c_includes.args"

clean: clean-Middlewares-2f-MetaDataManager

clean-Middlewares-2f-MetaDataManager:
	-$(RM) ./Middlewares/MetaDataManager/MetaDataManager.d ./Middlewares/MetaDataManager/MetaDataManager.o ./Middlewares/MetaDataManager/MetaDataManager.su

.PHONY: clean-Middlewares-2f-MetaDataManager

