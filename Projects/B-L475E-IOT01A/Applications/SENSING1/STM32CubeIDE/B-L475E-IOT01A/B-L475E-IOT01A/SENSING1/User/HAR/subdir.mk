################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_Postprocessing.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_Preprocessing.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_Processing.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_ProcessingTest.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_gmp.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_gmp_data.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_ign.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_ign_data.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_ign_wsdm.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_ign_wsdm_data.c 

OBJS += \
./SENSING1/User/HAR/har_Postprocessing.o \
./SENSING1/User/HAR/har_Preprocessing.o \
./SENSING1/User/HAR/har_Processing.o \
./SENSING1/User/HAR/har_ProcessingTest.o \
./SENSING1/User/HAR/har_gmp.o \
./SENSING1/User/HAR/har_gmp_data.o \
./SENSING1/User/HAR/har_ign.o \
./SENSING1/User/HAR/har_ign_data.o \
./SENSING1/User/HAR/har_ign_wsdm.o \
./SENSING1/User/HAR/har_ign_wsdm_data.o 

C_DEPS += \
./SENSING1/User/HAR/har_Postprocessing.d \
./SENSING1/User/HAR/har_Preprocessing.d \
./SENSING1/User/HAR/har_Processing.d \
./SENSING1/User/HAR/har_ProcessingTest.d \
./SENSING1/User/HAR/har_gmp.d \
./SENSING1/User/HAR/har_gmp_data.d \
./SENSING1/User/HAR/har_ign.d \
./SENSING1/User/HAR/har_ign_data.d \
./SENSING1/User/HAR/har_ign_wsdm.d \
./SENSING1/User/HAR/har_ign_wsdm_data.d 


# Each subdirectory must supply rules for building sources it contributes
SENSING1/User/HAR/har_Postprocessing.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_Postprocessing.c SENSING1/User/HAR/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/HAR/har_Postprocessing.c_includes.args"
SENSING1/User/HAR/har_Preprocessing.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_Preprocessing.c SENSING1/User/HAR/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/HAR/har_Preprocessing.c_includes.args"
SENSING1/User/HAR/har_Processing.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_Processing.c SENSING1/User/HAR/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/HAR/har_Processing.c_includes.args"
SENSING1/User/HAR/har_ProcessingTest.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_ProcessingTest.c SENSING1/User/HAR/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/HAR/har_ProcessingTest.c_includes.args"
SENSING1/User/HAR/har_gmp.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_gmp.c SENSING1/User/HAR/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/HAR/har_gmp.c_includes.args"
SENSING1/User/HAR/har_gmp_data.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_gmp_data.c SENSING1/User/HAR/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/HAR/har_gmp_data.c_includes.args"
SENSING1/User/HAR/har_ign.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_ign.c SENSING1/User/HAR/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/HAR/har_ign.c_includes.args"
SENSING1/User/HAR/har_ign_data.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_ign_data.c SENSING1/User/HAR/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/HAR/har_ign_data.c_includes.args"
SENSING1/User/HAR/har_ign_wsdm.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_ign_wsdm.c SENSING1/User/HAR/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/HAR/har_ign_wsdm.c_includes.args"
SENSING1/User/HAR/har_ign_wsdm_data.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Src/har_ign_wsdm_data.c SENSING1/User/HAR/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/HAR/har_ign_wsdm_data.c_includes.args"

clean: clean-SENSING1-2f-User-2f-HAR

clean-SENSING1-2f-User-2f-HAR:
	-$(RM) ./SENSING1/User/HAR/har_Postprocessing.d ./SENSING1/User/HAR/har_Postprocessing.o ./SENSING1/User/HAR/har_Postprocessing.su ./SENSING1/User/HAR/har_Preprocessing.d ./SENSING1/User/HAR/har_Preprocessing.o ./SENSING1/User/HAR/har_Preprocessing.su ./SENSING1/User/HAR/har_Processing.d ./SENSING1/User/HAR/har_Processing.o ./SENSING1/User/HAR/har_Processing.su ./SENSING1/User/HAR/har_ProcessingTest.d ./SENSING1/User/HAR/har_ProcessingTest.o ./SENSING1/User/HAR/har_ProcessingTest.su ./SENSING1/User/HAR/har_gmp.d ./SENSING1/User/HAR/har_gmp.o ./SENSING1/User/HAR/har_gmp.su ./SENSING1/User/HAR/har_gmp_data.d ./SENSING1/User/HAR/har_gmp_data.o ./SENSING1/User/HAR/har_gmp_data.su ./SENSING1/User/HAR/har_ign.d ./SENSING1/User/HAR/har_ign.o ./SENSING1/User/HAR/har_ign.su ./SENSING1/User/HAR/har_ign_data.d ./SENSING1/User/HAR/har_ign_data.o ./SENSING1/User/HAR/har_ign_data.su ./SENSING1/User/HAR/har_ign_wsdm.d ./SENSING1/User/HAR/har_ign_wsdm.o ./SENSING1/User/HAR/har_ign_wsdm.su ./SENSING1/User/HAR/har_ign_wsdm_data.d ./SENSING1/User/HAR/har_ign_wsdm_data.o ./SENSING1/User/HAR/har_ign_wsdm_data.su

.PHONY: clean-SENSING1-2f-User-2f-HAR

