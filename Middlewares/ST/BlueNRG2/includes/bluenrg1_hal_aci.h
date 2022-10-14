

/**
  ******************************************************************************
  * @file    bluenrg1_hal_aci.h
  * @author  AMG - RF Application team
  * @version V1.0.0
  * @date    12 November 2018
  * @brief   Header file for external uC - BlueNRG-x in network coprocessor mode (hal_aci)
  *          Autogenerated files, do not edit!!
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT STMicroelectronics</center></h2>
  ******************************************************************************
  */
#ifndef _BLUENRG1_HAL_ACI_H_
#define _BLUENRG1_HAL_ACI_H_

#include "bluenrg1_types.h"

/** @addtogroup Middlewares
 *  @{
 */

/** @defgroup ST
 *  @{
 */
 
/** @defgroup SimpleBlueNRG_HCI
 *  @{
 */
 
/**
 *@addtogroup HAL HAL
 *@brief Hardware Abstraction Layer.
 *@{
 */

/**
 * @defgroup HAL_Functions HAL functions
 * @brief API for BlueNRG HAL layer.
 * @{
 */

/**
  * @brief This command returns the build number associated with the firmware version currently running
  * @param[out] Build_Number Build number of the firmware.
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_get_fw_build_number(uint16_t *Build_Number);
/**
  * @brief This commands return information regarding the version of the network coprocessor firmware and BTLE stack library associated. The information returned includes values that can be
retrieved with existing commands see @ref hci_read_local_version_information and @ref aci_hal_get_fw_build_number. The aim is to have a single command that returns all version information details
for a network coprocessor application (also known as DTM application)
  * @param[out] DTM_version_major Major version number of the DTM application part
  * @param[out] DTM_version_minor Minor version number of the DTM application part
  * @param[out] DTM_version_patch Patch version number of the DTM application part
  * @param[out] DTM_variant Transport layer mode (numbers not defined reserved for future use)
  * Values:
  - 0x01: UART
  - 0x02: SPI
  * @param[out] DTM_Build_Number Build number for DTM application part
  * @param[out] BTLE_Stack_version_major Major version number of BTLE stack
  * @param[out] BTLE_Stack_version_minor Minor version number of BTLE stack
  * @param[out] BTLE_Stack_version_patch Patch version number of BTLE stack
  * @param[out] BTLE_Stack_development Specific variant build
  * Values:
  - 0x00: Official release
  - 0x01: Internal development release
  * @param[out] BTLE_Stack_variant Bitmask of BLE stack v2.1 or later variants (modular configurations options and link layer only)
  * Flags:
  - 0x0001: CONTROLLER_PRIVACY_ENABLED
  - 0x0002: SECURE_CONNECTIONS_ENABLED
  - 0x0004: CONTROLLER_MASTER_ENABLED
  - 0x0008: CONTROLLER_DATA_LENGTH_EXTENSION_ENABLED
  - 0x0010: LINK LAYER ONLY
  * @param[out] BTLE_Stack_Build_Number Build number for BTLE stack
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_get_firmware_details(uint8_t *DTM_version_major,
                                        uint8_t *DTM_version_minor,
                                        uint8_t *DTM_version_patch,
                                        uint8_t *DTM_variant,
                                        uint16_t *DTM_Build_Number,
                                        uint8_t *BTLE_Stack_version_major,
                                        uint8_t *BTLE_Stack_version_minor,
                                        uint8_t *BTLE_Stack_version_patch,
                                        uint8_t *BTLE_Stack_development,
                                        uint16_t *BTLE_Stack_variant,
                                        uint16_t *BTLE_Stack_Build_Number);
/**
  * @brief This command writes a value to a low level configure data structure. It is useful to setup
directly some low level parameters for the system in the runtime.NOTE: This command shall not be called if a command different than Stack Init, HCI_RESET, ACI_HAL_WRITE_CONFIG_DATA or ACI_HAL_READ_CONFIG_DATA has already been called. 
  * @param Offset Offset of the element in the configuration data structure
which has to be written. The valid offsets are:

- 0x00: Bluetooth public address, Value length to be written: 6 bytes
- 0x06: DIV used to derive CSRK, Value length to be written: 2 bytes
- 0x08: Encryption root key used to derive LTK and CSRK, Value length to be written: 16 bytes
- 0x18: Identity root key used to derive LTK and CSRK, Value length to be written: 16 bytes
- 0x2C: Link layer without host (for certification purposes), Value length to be written: 1 byte
- 0x2E: If set, the stack uses this address as the static random address instead of the one stored in NVM.
- 0x2F: Disable watchdog (1=disable, 0=enable). Value length to be written: 1 byte
- 0xD0: Use debug key for Secure connection: 1 byte
- 0xD1: Set the maximum allowed parameter values for Data Length Extension: 8 bytes, 2 bytes for each of the following parameters:
        supportedMaxTxOctets, supportedMaxTxTime, supportedMaxRxOctets, supportedMaxRxTime, in little-endian order.
        (default 251,2120,251,2120).
  * Values:
  - 0x00: CONFIG_DATA_PUBADDR_OFFSET
  - 0x06: CONFIG_DATA_DIV_OFFSET
  - 0x08: CONFIG_DATA_ER_OFFSET
  - 0x18: CONFIG_DATA_IR_OFFSET
  - 0x2C: LL_WITHOUT_HOST
  - 0x2E: CONFIG_DATA_STATIC_RANDOM_ADDRESS
  - 0x2F: CONFIG_DATA_WATCHDOG_DISABLE
  - 0xD0: CONFIG_DATA_DEBUG_KEY
  - 0xD1: CONFIG_DATA_DLE
  * @param Length Length of data to be written
  * @param Value Data to be written
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_write_config_data(uint8_t Offset,
                                     uint8_t Length,
                                     uint8_t Value[]);
/**
  * @brief This command requests the value in the low level configure data structure.
The number of read bytes changes for different Offset. 
  * @param Offset Offset of the element in the configuration data structure
which has to be read. The valid offsets are:

* 0x00: Bluetooth public address, Value length returned: 6 bytes
* 0x06: DIV used to derive CSRK, Value length returned: 2 bytes
* 0x08: Encryption root key used to derive LTK and CSRK, Value length returned: 16 bytes
* 0x18: Identity root key used to derive LTK and CSRK, Value length returned: 16 bytes
* 0x2C: Link layer without host (for certification purposes), Value length returned: 1 byte
* 0x2F: Disable watchdog (1=disabled, 0=enable). Value length returned: 1 byte
* 0x80: The static random address stored in NVM. Value length returned: 6 bytes (read-only)
  * Values:
  - 0x00: CONFIG_DATA_PUBADDR_OFFSET
  - 0x06: CONFIG_DATA_DIV_OFFSET
  - 0x08: CONFIG_DATA_ER_OFFSET
  - 0x18: CONFIG_DATA_IR_OFFSET
  - 0x2C: LL_WITHOUT_HOST
  - 0x2F: CONFIG_DATA_WATCHDOG_DISABLE
  - 0x80: CONFIG_DATA_STORED_STATIC_RANDOM_ADDRESS
  * @param[out] Data_Length Length of Data in octets
  * @param[out] Data Data field associated with Offset parameter
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_read_config_data(uint8_t Offset,
                                    uint8_t *Data_Length,
                                    uint8_t Data[]);
/**
  * @brief This command sets the TX power level of the device. By controlling the
EN_HIGH_POWER and the PA_LEVEL, the combination of the 2 determines the output
power level (dBm). 
When the system starts up or reboots, the default TX power level will be used, which is the
maximum value of 8 dBm. Once this command is given, the output power will be changed
instantly, regardless if there is Bluetooth communication going on or not. For example, for
debugging purpose, the device can be set to advertise all the time. And use this
command to observe the signal strength changing.
The system will keep the last received TX power level from the command, i.e. the 2nd
command overwrites the previous TX power level. The new TX power level remains until
another Set TX Power command, or the system reboots.
  * @param En_High_Power Enable High Power mode
  * Values:
  - 0x01: High Power
  * @param PA_Level Power amplifier output level. Output power is indicative and it depends on the PCB layout and associated components
  * Values:
  - 0x00: -14 dBm (High Power)
  - 0x01: -11 dBm (High Power)
  - 0x02: -8 dBm (High Power)
  - 0x03: -5 dBm (High Power)
  - 0x04: -2 dBm (High Power)
  - 0x05: 2 dBm (High Power)
  - 0x06: 4 dBm (High Power)
  - 0x07: 8 dBm (High Power)
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_set_tx_power_level(uint8_t En_High_Power,
                                      uint8_t PA_Level);
/**
  * @brief This command returns the number of packets sent in Direct Test Mode.
When the Direct TX test is started, a 32-bit counter is used to count how many packets have been transmitted. 
This command can be used to check how many packets have been sent during the Direct TX test.
The counter starts from 0 and counts upwards. The counter can wrap and start from 0 again. 
The counter is not cleared until the next Direct TX test starts. 
  * @param[out] Number_Of_Packets Number of packets sent during the last Direct TX test.
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_le_tx_test_packet_number(uint32_t *Number_Of_Packets);
/**
  * @brief This command starts a carrier frequency, i.e. a tone, on a specific channel. The frequency
sine wave at the specific channel may be used for debugging purpose only. The channel ID
is a parameter from 0x00 to 0x27 for the 40 BLE channels, e.g. 0x00 for 2.402 GHz, 0x01
for 2.404 GHz etc.
This command should not be used when normal Bluetooth activities are ongoing.
The tone should be stopped by @ref aci_hal_tone_stop command.
  * @param RF_Channel BLE Channel ID, from 0x00 to 0x27 meaning (2.402 + 2*0xXX) GHz.
  * Values:
  - 0x00 ... 0x27
  * @param Offset Specify if the tone must be emitted with an offset from the channel center frequency.  If 0, the tone is emitted at the channel center frequency.
If 1 or 2, the device will continuously emit the tone at the center frequency plus or minus 250 kHz respectively.
  * Values:
  - 0x00: 0 kHz offset
  - 0x01: +250 kHz offset
  - 0x02: -250 kHz offset
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_tone_start(uint8_t RF_Channel,
                              uint8_t Offset);
/**
  * @brief This command is used to stop the previously started @ref aci_hal_tone_start command.
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_tone_stop(void);
/**
  * @brief This command returns the status of the 8 Bluetooth low energy links managed by the device
  * @param[out] Link_Status Array of link status (8 links). Each link status is 1 byte.
  * @param[out] Link_Connection_Handle Array of connection handles (2 bytes) for 8 links.
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_get_link_status(uint8_t Link_Status[8],
                                   uint16_t Link_Connection_Handle[16 / 2]);
/**
  * @brief This command set the bitmask associated to @ref aci_hal_end_of_radio_activity_event. 
Only the radio activities enabled in the mask will be reported to application by @ref aci_hal_end_of_radio_activity_event
  * @param Radio_Activity_Mask Bitmask of radio events
  * Flags:
  - 0x0001: Idle
  - 0x0002: Advertising
  - 0x0004: Connection event slave
  - 0x0008: Scanning
  - 0x0010: Connection request
  - 0x0020: Connection event master
  - 0x0040: TX test mode
  - 0x0080: RX test mode
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_set_radio_activity_mask(uint16_t Radio_Activity_Mask);
/**
  * @brief This command returns information about the Anchor Period to help application in selecting 
                      slot timings when operating in multi-link scenarios.
  * @param[out] Anchor_Period Current anchor period.
T = N * 0.625 ms.
  * @param[out] Max_Free_Slot Maximum available time that can be allocated for a new slot.
T = N * 0.625 ms.
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_get_anchor_period(uint32_t *Anchor_Period,
                                     uint32_t *Max_Free_Slot);
/**
  * @brief  
  * @param Event_Mask Mask to enable/disable generation of HAL events
  * Flags:
  - 0x00000000: No events specified (Default)
  - 0x00000001: ACI_HAL_SCAN_REQ_REPORT_EVENT
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_set_event_mask(uint32_t Event_Mask);
/**
  * @brief This command is only implemented together with the normal application. The updater does
not support this command. If this command is called, the system reboots and enters updater
mode.
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_updater_start(void);
/**
  * @brief This command reboots the system. This command does not set the BLUE flag, which must
be done by another command.
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_updater_reboot(void);
/**
  * @brief This command returns the version of the Updater.
  * @param[out] Version 
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_get_updater_version(uint8_t *Version);
/**
  * @brief Return the maximum buffer size. This value limits the size of the data blocks that could be
used on the command @ref aci_hal_updater_prog_data_blk.
  * @param[out] Buffer_Size 
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_get_updater_bufsize(uint8_t *Buffer_Size);
/**
  * @brief This command erases the BLUE flag in the Flash. After this operation, the updater cannot
jump to the firmware until the BLUE flag is set to a valid value with ACI_HAL_UPDATER_RESET_BLUE_FLAG.
This command is strongly recommended when the updater wants to upgrade the firmware
application.
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_updater_erase_blue_flag(void);
/**
  * @brief Reset the BLUE flag to its proper value. This command must be called when the firmware
upgrade is finished. So that after reboot, the update may jump to the firmware application.
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_updater_reset_blue_flag(void);
/**
  * @brief This command erases one sector of the Flash memory. One sector is 2 KB. After erasing,
the sector will be all 0xFF.
  * @param Address 
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_updater_erase_sector(uint32_t Address);
/**
  * @brief This command writes a block of data to the Flash, starting from the given base address.
  * @param Address 
  * @param Data_Length Length of Data in octets
  * @param Data 
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_updater_prog_data_blk(uint32_t Address,
                                         uint16_t Data_Length,
                                         uint8_t Data[]);
/**
  * @brief This command reads a block of data from the Flash, starting from the given base address.
For it is only allowed to read from the IFR flash. So the Base Address must be bigger than 0x10020000.
  * @param Address 
  * @param Data_Length 
  * @param[out] Data 
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_updater_read_data_blk(uint32_t Address,
                                         uint16_t Data_Length,
                                         uint8_t Data[]);
/**
  * @brief It calculates the CRC32 of one or more Flash sectors. One Flash sector is 2 KB
  * @param Address 
  * @param Num_Of_Sectors 
  * @param[out] crc 
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_updater_calc_crc(uint32_t Address,
                                    uint8_t Num_Of_Sectors,
                                    uint32_t *crc);
/**
  * @brief TBD
  * @param[out] HW_Version 
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_updater_hw_version(uint8_t *HW_Version);

/**
  * @brief This command is equivalent to the corresponding Bluetooth Low Energy standard command @HCI_LE_TRANSMITTER_TEST, the only difference is that user can specify the number of packets to be transmitted. The @HCI_COMMAND_COMPLETE_EVENT is generated when the number of packets have been sent.
  * @param TX_Frequency N = (F - 2402) / 2
                                Frequency Range : 2402 MHz to 2480 MHz
  * Values:
  - 0x00 ... 0x27
  * @param Length_Of_Test_Data Length in bytes of payload data in each packet.
    Supported ranges:
      - (0x00,0x25): BlueNRG-1 and BlueNRG-2 with BLE stack version < 2.1
      - (0x00,0xFF): BlueNRG-2 with BLE stack version >= 2.1 and extended packet length.
  * Values:
  - 0x00 ... 0xFF
  * @param Packet_Payload Type of packet payload.
  * Values:
  - 0x00: Pseudo-Random bit sequence 9
  - 0x01: Pattern of alternating bits '11110000'
  - 0x02: Pattern of alternating bits '10101010'
  - 0x03: Pseudo-Random bit sequence 15
  - 0x04: Pattern of All '1' bits
  - 0x05: Pattern of All '0' bits
  - 0x06: Pattern of alternating bits '00001111'
  - 0x07: Pattern of alternating bits '0101'
  * @param Number_Of_Packets Number of packets to be sent
  * @retval Value indicating success or error code.
*/
tBleStatus aci_hal_transmitter_test_packets(uint8_t TX_Frequency,
                                            uint8_t Length_Of_Test_Data,
                                            uint8_t Packet_Payload,
                                            uint16_t Number_Of_Packets);
/**
 * @}
 */
 
/**
 * @}
 */

/**
 * @}
 */

/**
 * @}
 */

#endif /* _BLUENRG1_HAL_ACI_H_ */