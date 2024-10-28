/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "BF405"
#define USBD_PRODUCT_STRING "BETAFPVF405"

#define LED0 PB5

#define BEEPER PB4
#define BEEPER_INVERTED

// *************** SPI **********************
#define USE_SPI
#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN PA5
#define SPI1_MISO_PIN PA7
#define SPI1_MOSI_PIN PA6

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN PB13
#define SPI2_MISO_PIN PB15
#define SPI2_MOSI_PIN PB14

#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN PC10
#define SPI3_MISO_PIN PC12
#define SPI3_MOSI_PIN PC11

// *************** SPI Gyro & ACC **********************

#define USE_IMU_ICM42605
#define ICM42605_CS_PIN PA4
#define ICM42605_SPI_BUS BUS_SPI1
#define IMU_ICM42605_ALIGN CW270_DEG

// *************** Baro *****************************

#define USE_BARO
#define USE_BARO_BMP280
#define USE_BARO_SPI_BMP280
#define BMP280_SPI_BUS BUS_SPI3
#define BMP280_CS_PIN PB3

// *************** SPI OSD *****************************
// #define USE_MAX7456
// #define MAX7456_CS_PIN PA15
// #define MAX7456_SPI_BUS BUS_SPI3

// *************** SPI FLASH **************************
// #define USE_FLASHFS
// #define USE_FLASH_M25P16
// #define M25P16_SPI_BUS BUS_SPI2
// #define M25P16_CS_PIN PB12
// #define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// *************** UART *****************************
#define USE_VCP

#define USE_UART3
#define UART3_RX_PIN PB11
#define UART3_TX_PIN PB10

#define USE_UART4
#define UART4_RX_PIN PA1
#define UART4_TX_PIN PA0

#define USE_UART5
#define UART5_RX_PIN PD2
#define UART5_TX_PIN PD2

#define USE_UART6
#define UART6_RX_PIN PC7
#define UART6_TX_PIN PC6

#define SERIAL_PORT_COUNT 5

#define DEFAULT_RX_TYPE RX_TYPE_SERIAL
#define SERIALRX_PROVIDER SERIALRX_CRSF
#define SERIALRX_UART SERIAL_PORT_USART3

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE ADC1
#define ADC_CHANNEL_1_PIN PC2
#define ADC_CHANNEL_2_PIN PC1
#define ADC_CHANNEL_3_PIN PC0

#define VBAT_ADC_CHANNEL ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL ADC_CHN_2
#define RSSI_ADC_CHANNEL ADC_CHN_3

#define VBAT_SCALE_DEFAULT 1100

// *************** LED2812 ************************
#define USE_LED_STRIP
#define WS2811_PIN PB6

// ***************  OTHERS *************************
#define DEFAULT_FEATURES                                                    \
    (FEATURE_TX_PROF_SEL | FEATURE_OSD | FEATURE_VBAT | FEATURE_TELEMETRY | \
     FEATURE_BLACKBOX)

#define USE_DSHOT
#define USE_ESC_SENSOR
#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
#define TARGET_IO_PORTD 0xffff
#define TARGET_IO_PORTE 0xffff
#define TARGET_IO_PORTF 0xffff

#define MAX_PWM_OUTPUT_PORTS 6
