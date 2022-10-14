################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_core.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.c 

OBJS += \
./Middlewares/STM32_USB_Device_Library/Core/usbd_core.o \
./Middlewares/STM32_USB_Device_Library/Core/usbd_ctlreq.o \
./Middlewares/STM32_USB_Device_Library/Core/usbd_ioreq.o 

C_DEPS += \
./Middlewares/STM32_USB_Device_Library/Core/usbd_core.d \
./Middlewares/STM32_USB_Device_Library/Core/usbd_ctlreq.d \
./Middlewares/STM32_USB_Device_Library/Core/usbd_ioreq.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/STM32_USB_Device_Library/Core/usbd_core.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_core.c Middlewares/STM32_USB_Device_Library/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_USB_Device_Library/Core/usbd_core.c_includes.args"
Middlewares/STM32_USB_Device_Library/Core/usbd_ctlreq.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ctlreq.c Middlewares/STM32_USB_Device_Library/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_USB_Device_Library/Core/usbd_ctlreq.c_includes.args"
Middlewares/STM32_USB_Device_Library/Core/usbd_ioreq.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/STM32_USB_Device_Library/Core/Src/usbd_ioreq.c Middlewares/STM32_USB_Device_Library/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_USB_Device_Library/Core/usbd_ioreq.c_includes.args"

clean: clean-Middlewares-2f-STM32_USB_Device_Library-2f-Core

clean-Middlewares-2f-STM32_USB_Device_Library-2f-Core:
	-$(RM) ./Middlewares/STM32_USB_Device_Library/Core/usbd_core.d ./Middlewares/STM32_USB_Device_Library/Core/usbd_core.o ./Middlewares/STM32_USB_Device_Library/Core/usbd_core.su ./Middlewares/STM32_USB_Device_Library/Core/usbd_ctlreq.d ./Middlewares/STM32_USB_Device_Library/Core/usbd_ctlreq.o ./Middlewares/STM32_USB_Device_Library/Core/usbd_ctlreq.su ./Middlewares/STM32_USB_Device_Library/Core/usbd_ioreq.d ./Middlewares/STM32_USB_Device_Library/Core/usbd_ioreq.o ./Middlewares/STM32_USB_Device_Library/Core/usbd_ioreq.su

.PHONY: clean-Middlewares-2f-STM32_USB_Device_Library-2f-Core

