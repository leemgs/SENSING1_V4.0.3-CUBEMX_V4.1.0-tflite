#!/bin/bash

######## Modify this Section:
# 1) Set the Installation path for STM32CubeProgrammer
# example:
# CubeProg="/c/Program Files/STMicroelectronics/STM32Cube/STM32CubeProgrammer/bin/STM32_Programmer_CLI"
CubeProg="STM32_Programmer_CLI"

## Run section

echo "/******************************************/"
echo "           Clean FP-AI-SENSING1"
echo "/******************************************/"
echo "              Full Chip Erase"
echo "/******************************************/"
${CubeProg} -c port=swd mode=UR reset=HWrst -e all
echo "/******************************************/"
echo "              Install BootLoader"
echo "/******************************************/"
${CubeProg} -c port=swd mode=UR reset=HWrst -d ../../../../../Utilities/BootLoader/STM32L4R9ZI/BootLoaderL4R9.bin 0x08000000 -v
echo "/******************************************/"
echo "          Install FP-AI-SENSING1"
echo "/******************************************/"
${CubeProg} -c port=swd mode=UR reset=HWrst -d ./SENSING1.bin 0x08004000 -v
echo "/******************************************/"
echo "      Dump FP-AI-SENSING1 + BootLoader"
echo "/******************************************/"
SizeBinBL=`ls -l ./SENSING1.bin | awk '{print $6+0x4000};'`
${CubeProg} -c port=swd mode=UR reset=HWrst -u 0x08000000 ${SizeBinBL} ./SENSING1_BL.bin
echo "/******************************************/"
echo "                Reset STM32"
echo "/******************************************/"
${CubeProg} -c port=swd mode=UR reset=HWrst -rst
