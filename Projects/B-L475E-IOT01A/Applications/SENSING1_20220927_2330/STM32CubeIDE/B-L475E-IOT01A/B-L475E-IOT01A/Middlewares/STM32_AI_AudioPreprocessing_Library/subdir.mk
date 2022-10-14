################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/common_tables.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/dct.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/feature_extraction.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/mel_filterbank.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/window.c 

OBJS += \
./Middlewares/STM32_AI_AudioPreprocessing_Library/common_tables.o \
./Middlewares/STM32_AI_AudioPreprocessing_Library/dct.o \
./Middlewares/STM32_AI_AudioPreprocessing_Library/feature_extraction.o \
./Middlewares/STM32_AI_AudioPreprocessing_Library/mel_filterbank.o \
./Middlewares/STM32_AI_AudioPreprocessing_Library/window.o 

C_DEPS += \
./Middlewares/STM32_AI_AudioPreprocessing_Library/common_tables.d \
./Middlewares/STM32_AI_AudioPreprocessing_Library/dct.d \
./Middlewares/STM32_AI_AudioPreprocessing_Library/feature_extraction.d \
./Middlewares/STM32_AI_AudioPreprocessing_Library/mel_filterbank.d \
./Middlewares/STM32_AI_AudioPreprocessing_Library/window.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/STM32_AI_AudioPreprocessing_Library/common_tables.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/common_tables.c Middlewares/STM32_AI_AudioPreprocessing_Library/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_AI_AudioPreprocessing_Library/common_tables.c_includes.args"
Middlewares/STM32_AI_AudioPreprocessing_Library/dct.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/dct.c Middlewares/STM32_AI_AudioPreprocessing_Library/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_AI_AudioPreprocessing_Library/dct.c_includes.args"
Middlewares/STM32_AI_AudioPreprocessing_Library/feature_extraction.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/feature_extraction.c Middlewares/STM32_AI_AudioPreprocessing_Library/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_AI_AudioPreprocessing_Library/feature_extraction.c_includes.args"
Middlewares/STM32_AI_AudioPreprocessing_Library/mel_filterbank.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/mel_filterbank.c Middlewares/STM32_AI_AudioPreprocessing_Library/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_AI_AudioPreprocessing_Library/mel_filterbank.c_includes.args"
Middlewares/STM32_AI_AudioPreprocessing_Library/window.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_AI_AudioPreprocessing_Library/Src/window.c Middlewares/STM32_AI_AudioPreprocessing_Library/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_AI_AudioPreprocessing_Library/window.c_includes.args"

clean: clean-Middlewares-2f-STM32_AI_AudioPreprocessing_Library

clean-Middlewares-2f-STM32_AI_AudioPreprocessing_Library:
	-$(RM) ./Middlewares/STM32_AI_AudioPreprocessing_Library/common_tables.d ./Middlewares/STM32_AI_AudioPreprocessing_Library/common_tables.o ./Middlewares/STM32_AI_AudioPreprocessing_Library/common_tables.su ./Middlewares/STM32_AI_AudioPreprocessing_Library/dct.d ./Middlewares/STM32_AI_AudioPreprocessing_Library/dct.o ./Middlewares/STM32_AI_AudioPreprocessing_Library/dct.su ./Middlewares/STM32_AI_AudioPreprocessing_Library/feature_extraction.d ./Middlewares/STM32_AI_AudioPreprocessing_Library/feature_extraction.o ./Middlewares/STM32_AI_AudioPreprocessing_Library/feature_extraction.su ./Middlewares/STM32_AI_AudioPreprocessing_Library/mel_filterbank.d ./Middlewares/STM32_AI_AudioPreprocessing_Library/mel_filterbank.o ./Middlewares/STM32_AI_AudioPreprocessing_Library/mel_filterbank.su ./Middlewares/STM32_AI_AudioPreprocessing_Library/window.d ./Middlewares/STM32_AI_AudioPreprocessing_Library/window.o ./Middlewares/STM32_AI_AudioPreprocessing_Library/window.su

.PHONY: clean-Middlewares-2f-STM32_AI_AudioPreprocessing_Library

