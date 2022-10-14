################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/asc.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/asc_data.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/asc_featurescaler.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/asc_postprocessing.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/asc_processing.c 

OBJS += \
./SENSING1/User/ASC/asc.o \
./SENSING1/User/ASC/asc_data.o \
./SENSING1/User/ASC/asc_featurescaler.o \
./SENSING1/User/ASC/asc_postprocessing.o \
./SENSING1/User/ASC/asc_processing.o 

C_DEPS += \
./SENSING1/User/ASC/asc.d \
./SENSING1/User/ASC/asc_data.d \
./SENSING1/User/ASC/asc_featurescaler.d \
./SENSING1/User/ASC/asc_postprocessing.d \
./SENSING1/User/ASC/asc_processing.d 


# Each subdirectory must supply rules for building sources it contributes
SENSING1/User/ASC/asc.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/asc.c SENSING1/User/ASC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/ASC/asc.c_includes.args"
SENSING1/User/ASC/asc_data.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/asc_data.c SENSING1/User/ASC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/ASC/asc_data.c_includes.args"
SENSING1/User/ASC/asc_featurescaler.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/asc_featurescaler.c SENSING1/User/ASC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/ASC/asc_featurescaler.c_includes.args"
SENSING1/User/ASC/asc_postprocessing.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/asc_postprocessing.c SENSING1/User/ASC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/ASC/asc_postprocessing.c_includes.args"
SENSING1/User/ASC/asc_processing.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/asc_processing.c SENSING1/User/ASC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/ASC/asc_processing.c_includes.args"

clean: clean-SENSING1-2f-User-2f-ASC

clean-SENSING1-2f-User-2f-ASC:
	-$(RM) ./SENSING1/User/ASC/asc.d ./SENSING1/User/ASC/asc.o ./SENSING1/User/ASC/asc.su ./SENSING1/User/ASC/asc_data.d ./SENSING1/User/ASC/asc_data.o ./SENSING1/User/ASC/asc_data.su ./SENSING1/User/ASC/asc_featurescaler.d ./SENSING1/User/ASC/asc_featurescaler.o ./SENSING1/User/ASC/asc_featurescaler.su ./SENSING1/User/ASC/asc_postprocessing.d ./SENSING1/User/ASC/asc_postprocessing.o ./SENSING1/User/ASC/asc_postprocessing.su ./SENSING1/User/ASC/asc_processing.d ./SENSING1/User/ASC/asc_processing.o ./SENSING1/User/ASC/asc_processing.su

.PHONY: clean-SENSING1-2f-User-2f-ASC

