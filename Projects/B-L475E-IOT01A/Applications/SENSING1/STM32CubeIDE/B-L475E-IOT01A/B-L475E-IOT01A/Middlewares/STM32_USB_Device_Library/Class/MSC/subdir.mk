################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Src/usbd_msc.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Src/usbd_msc_bot.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Src/usbd_msc_data.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Src/usbd_msc_scsi.c 

OBJS += \
./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc.o \
./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_bot.o \
./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_data.o \
./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_scsi.o 

C_DEPS += \
./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc.d \
./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_bot.d \
./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_data.d \
./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_scsi.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Src/usbd_msc.c Middlewares/STM32_USB_Device_Library/Class/MSC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc.c_includes.args"
Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_bot.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Src/usbd_msc_bot.c Middlewares/STM32_USB_Device_Library/Class/MSC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_bot.c_includes.args"
Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_data.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Src/usbd_msc_data.c Middlewares/STM32_USB_Device_Library/Class/MSC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_data.c_includes.args"
Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_scsi.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Class/MSC/Src/usbd_msc_scsi.c Middlewares/STM32_USB_Device_Library/Class/MSC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -Os -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_scsi.c_includes.args"

clean: clean-Middlewares-2f-STM32_USB_Device_Library-2f-Class-2f-MSC

clean-Middlewares-2f-STM32_USB_Device_Library-2f-Class-2f-MSC:
	-$(RM) ./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc.d ./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc.o ./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc.su ./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_bot.d ./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_bot.o ./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_bot.su ./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_data.d ./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_data.o ./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_data.su ./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_scsi.d ./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_scsi.o ./Middlewares/STM32_USB_Device_Library/Class/MSC/usbd_msc_scsi.su

.PHONY: clean-Middlewares-2f-STM32_USB_Device_Library-2f-Class-2f-MSC

