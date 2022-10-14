################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/utils/ble_list.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/controller/bluenrg_gap_aci.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/controller/bluenrg_gatt_aci.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/controller/bluenrg_hal_aci.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/controller/bluenrg_l2cap_aci.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/controller/bluenrg_utils_small.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/hci_le.c \
C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/hci_tl_patterns/Basic/hci_tl.c 

OBJS += \
./Middlewares/STM32_BlueNRG/ble_list.o \
./Middlewares/STM32_BlueNRG/bluenrg_gap_aci.o \
./Middlewares/STM32_BlueNRG/bluenrg_gatt_aci.o \
./Middlewares/STM32_BlueNRG/bluenrg_hal_aci.o \
./Middlewares/STM32_BlueNRG/bluenrg_l2cap_aci.o \
./Middlewares/STM32_BlueNRG/bluenrg_utils_small.o \
./Middlewares/STM32_BlueNRG/hci_le.o \
./Middlewares/STM32_BlueNRG/hci_tl.o 

C_DEPS += \
./Middlewares/STM32_BlueNRG/ble_list.d \
./Middlewares/STM32_BlueNRG/bluenrg_gap_aci.d \
./Middlewares/STM32_BlueNRG/bluenrg_gatt_aci.d \
./Middlewares/STM32_BlueNRG/bluenrg_hal_aci.d \
./Middlewares/STM32_BlueNRG/bluenrg_l2cap_aci.d \
./Middlewares/STM32_BlueNRG/bluenrg_utils_small.d \
./Middlewares/STM32_BlueNRG/hci_le.d \
./Middlewares/STM32_BlueNRG/hci_tl.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/STM32_BlueNRG/ble_list.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/utils/ble_list.c Middlewares/STM32_BlueNRG/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_BlueNRG/ble_list.c_includes.args"
Middlewares/STM32_BlueNRG/bluenrg_gap_aci.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/controller/bluenrg_gap_aci.c Middlewares/STM32_BlueNRG/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_BlueNRG/bluenrg_gap_aci.c_includes.args"
Middlewares/STM32_BlueNRG/bluenrg_gatt_aci.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/controller/bluenrg_gatt_aci.c Middlewares/STM32_BlueNRG/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_BlueNRG/bluenrg_gatt_aci.c_includes.args"
Middlewares/STM32_BlueNRG/bluenrg_hal_aci.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/controller/bluenrg_hal_aci.c Middlewares/STM32_BlueNRG/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_BlueNRG/bluenrg_hal_aci.c_includes.args"
Middlewares/STM32_BlueNRG/bluenrg_l2cap_aci.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/controller/bluenrg_l2cap_aci.c Middlewares/STM32_BlueNRG/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_BlueNRG/bluenrg_l2cap_aci.c_includes.args"
Middlewares/STM32_BlueNRG/bluenrg_utils_small.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/controller/bluenrg_utils_small.c Middlewares/STM32_BlueNRG/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_BlueNRG/bluenrg_utils_small.c_includes.args"
Middlewares/STM32_BlueNRG/hci_le.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/hci_le.c Middlewares/STM32_BlueNRG/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_BlueNRG/hci_le.c_includes.args"
Middlewares/STM32_BlueNRG/hci_tl.o: C:/Users/invain/Desktop/e4ds-stm-cube-ai/quest01/en.fp-ai-sensing1/STM32CubeFunctionPack_SENSING1_V4.0.3/Middlewares/ST/BlueNRG-MS/hci/hci_tl_patterns/Basic/hci_tl.c Middlewares/STM32_BlueNRG/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=c99 -g3 -DSTM32L475xx -DUSE_HAL_DRIVER -DUSE_STM32L475E_IOT01 -DPRIORITY_RTOS -DARM_MATH_CM4 -D__FPU_PRESENT=1 -c -O2 -ffunction-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" @"Middlewares/STM32_BlueNRG/hci_tl.c_includes.args"

clean: clean-Middlewares-2f-STM32_BlueNRG

clean-Middlewares-2f-STM32_BlueNRG:
	-$(RM) ./Middlewares/STM32_BlueNRG/ble_list.d ./Middlewares/STM32_BlueNRG/ble_list.o ./Middlewares/STM32_BlueNRG/ble_list.su ./Middlewares/STM32_BlueNRG/bluenrg_gap_aci.d ./Middlewares/STM32_BlueNRG/bluenrg_gap_aci.o ./Middlewares/STM32_BlueNRG/bluenrg_gap_aci.su ./Middlewares/STM32_BlueNRG/bluenrg_gatt_aci.d ./Middlewares/STM32_BlueNRG/bluenrg_gatt_aci.o ./Middlewares/STM32_BlueNRG/bluenrg_gatt_aci.su ./Middlewares/STM32_BlueNRG/bluenrg_hal_aci.d ./Middlewares/STM32_BlueNRG/bluenrg_hal_aci.o ./Middlewares/STM32_BlueNRG/bluenrg_hal_aci.su ./Middlewares/STM32_BlueNRG/bluenrg_l2cap_aci.d ./Middlewares/STM32_BlueNRG/bluenrg_l2cap_aci.o ./Middlewares/STM32_BlueNRG/bluenrg_l2cap_aci.su ./Middlewares/STM32_BlueNRG/bluenrg_utils_small.d ./Middlewares/STM32_BlueNRG/bluenrg_utils_small.o ./Middlewares/STM32_BlueNRG/bluenrg_utils_small.su ./Middlewares/STM32_BlueNRG/hci_le.d ./Middlewares/STM32_BlueNRG/hci_le.o ./Middlewares/STM32_BlueNRG/hci_le.su ./Middlewares/STM32_BlueNRG/hci_tl.d ./Middlewares/STM32_BlueNRG/hci_tl.o ./Middlewares/STM32_BlueNRG/hci_tl.su

.PHONY: clean-Middlewares-2f-STM32_BlueNRG

