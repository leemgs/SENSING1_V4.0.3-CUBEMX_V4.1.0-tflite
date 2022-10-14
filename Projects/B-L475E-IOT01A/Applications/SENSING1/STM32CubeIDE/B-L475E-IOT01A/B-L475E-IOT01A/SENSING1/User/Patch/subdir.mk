################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Patch/usbd_audio_patch.c 

OBJS += \
./SENSING1/User/Patch/usbd_audio_patch.o 

C_DEPS += \
./SENSING1/User/Patch/usbd_audio_patch.d 


# Each subdirectory must supply rules for building sources it contributes
SENSING1/User/Patch/usbd_audio_patch.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Projects/B-L475E-IOT01A/Applications/SENSING1/Patch/usbd_audio_patch.c SENSING1/User/Patch/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"SENSING1/User/Patch/usbd_audio_patch.c_includes.args"

clean: clean-SENSING1-2f-User-2f-Patch

clean-SENSING1-2f-User-2f-Patch:
	-$(RM) ./SENSING1/User/Patch/usbd_audio_patch.d ./SENSING1/User/Patch/usbd_audio_patch.o ./SENSING1/User/Patch/usbd_audio_patch.su

.PHONY: clean-SENSING1-2f-User-2f-Patch

