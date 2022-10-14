@echo off
set CUBE_PROG="C:\Program Files\STMicroelectronics\STM32Cube\STM32CubeProgrammer\bin\STM32_Programmer_CLI"
set NAMESENSING1=SENSING1
set BOOTLOADER="..\..\..\..\..\Utilities\BootLoader\STM32L476RG\BootLoaderL4.bin"
color 0F
echo                /******************************************/
echo                           Clean FP-AI-SENSING1
echo                /******************************************/
echo                              Full Chip Erase
echo                /******************************************/
%CUBE_PROG% -c port=swd mode=UR reset=HWrst -e all
echo                /******************************************/
echo                              Install BootLoader
echo                /******************************************/
%CUBE_PROG% -c port=swd mode=UR reset=HWrst -d %BOOTLOADER% 0x08000000 -v
echo                /******************************************/
echo                          Install FP-AI-SENSING1
echo                /******************************************/
%CUBE_PROG% -c port=swd mode=UR reset=HWrst -d %NAMESENSING1%.bin 0x08004000 -v
echo                /******************************************/
echo                      Dump FP-AI-SENSING1 + BootLoader
echo                /******************************************/
set offset_size=0x4000
for %%I in (%NAMESENSING1%.bin) do set application_size=%%~zI
echo %NAMESENSING1%.bin size is %application_size% bytes
set /a size=%offset_size%+%application_size%
echo Dumping %offset_size% + %application_size% = %size% bytes ...
echo ..........................
%CUBE_PROG% -c port=swd mode=UR reset=HWrst -u 0x08000000 %size% %NAMESENSING1%_BL.bin
echo                /******************************************/
echo                                 Reset STM32
echo                /******************************************/
%CUBE_PROG% -c port=swd mode=UR reset=HWrst -rst
if NOT "%1" == "SILENT" pause