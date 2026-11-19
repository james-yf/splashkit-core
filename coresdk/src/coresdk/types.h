//
// TODO: This file needs to be deprecated -- all types should be placed in their
//       respective header file
//

/**
 * @header    types
 * @brief SplashKit Types simplifies data type creation and management for streamlined programming.
 * @attribute group types
 */

#ifndef types_hpp
#define types_hpp

#include <cstdint>
#include <string>
#include <vector>
#include <cstdint>

using std::string;
using std::vector;

#include "color.h"
#include "images.h"
#include "drawing_options.h"
#include "vector_2d.h"
#include "circle_geometry.h"
#include "triangle_geometry.h"
#include "rectangle_geometry.h"
#include "quad_geometry.h"
#include "line_geometry.h"
#include "animations.h"
#include "text.h"
#include "point_geometry.h"
#include "interface.h"
#include "web_server.h"

namespace splashkit_lib
{
    /**
     * Raspberry Pi GPIO Board Pin Descriptions:
     *
     * @constant PIN_1    3.3V Power Supply
     * @constant PIN_2    5V Power Supply
     * @constant PIN_3    GPIO 2 / SDA (I2C)
     * @constant PIN_4    5V Power Supply
     * @constant PIN_5    GPIO 3 / SCL (I2C)
     * @constant PIN_6    Ground
     * @constant PIN_7    GPIO 4 / GPCLK0
     * @constant PIN_8    GPIO 14 / TXD (UART)
     * @constant PIN_9    Ground
     * @constant PIN_10   GPIO 15 / RXD (UART)
     * @constant PIN_11   GPIO 17
     * @constant PIN_12   GPIO 18 / PCM_CLK
     * @constant PIN_13   GPIO 27
     * @constant PIN_14   Ground
     * @constant PIN_15   GPIO 22
     * @constant PIN_16   GPIO 23
     * @constant PIN_17   3.3V Power Supply
     * @constant PIN_18   GPIO 24
     * @constant PIN_19   GPIO 10 / MOSI (SPI)
     * @constant PIN_20   Ground
     * @constant PIN_21   GPIO 9 / MISO (SPI)
     * @constant PIN_22   GPIO 25
     * @constant PIN_23   GPIO 11 / SCLK (SPI)
     * @constant PIN_24   GPIO 8 / CE0 (SPI)
     * @constant PIN_25   Ground
     * @constant PIN_26   GPIO 7 / CE1 (SPI)
     * @constant PIN_27   ID_SD (I2C ID EEPROM)
     * @constant PIN_28   ID_SC (I2C ID EEPROM)
     * @constant PIN_29   GPIO 5
     * @constant PIN_30   Ground
     * @constant PIN_31   GPIO 6
     * @constant PIN_32   GPIO 12 / PWM0
     * @constant PIN_33   GPIO 13
     * @constant PIN_34   Ground
     * @constant PIN_35   GPIO 19 / MISO (PCM)
     * @constant PIN_36   GPIO 16 / CE0 (PCM_FS)
     * @constant PIN_37   GPIO 26
     * @constant PIN_38   GPIO 20 / MOSI (PCM_DIN)
     * @constant PIN_39   Ground
     * @constant PIN_40   GPIO 21 / SCLK (PCM_DOUT)
     */
    enum gpio_pin
    {
        PIN_1 = 1,
        PIN_2 = 2,
        PIN_3 = 3,
        PIN_4 = 4,
        PIN_5 = 5,
        PIN_6 = 6,
        PIN_7 = 7,
        PIN_8 = 8,
        PIN_9 = 9,
        PIN_10 = 10,
        PIN_11 = 11,
        PIN_12 = 12,
        PIN_13 = 13,
        PIN_14 = 14,
        PIN_15 = 15,
        PIN_16 = 16,
        PIN_17 = 17,
        PIN_18 = 18,
        PIN_19 = 19,
        PIN_20 = 20,
        PIN_21 = 21,
        PIN_22 = 22,
        PIN_23 = 23,
        PIN_24 = 24,
        PIN_25 = 25,
        PIN_26 = 26,
        PIN_27 = 27,
        PIN_28 = 28,
        PIN_29 = 29,
        PIN_30 = 30,
        PIN_31 = 31,
        PIN_32 = 32,
        PIN_33 = 33,
        PIN_34 = 34,
        PIN_35 = 35,
        PIN_36 = 36,
        PIN_37 = 37,
        PIN_38 = 38,
        PIN_39 = 39,
        PIN_40 = 40,
    };

    /**
     * GPIO Pin Modes:
     *
     * @constant GPIO_INPUT   Input mode.
     * @constant GPIO_OUTPUT  Output mode.
     * @constant GPIO_ALT0    Alternate function mode 0.
     * @constant GPIO_ALT1    Alternate function mode 1.
     * @constant GPIO_ALT2    Alternate function mode 2.
     * @constant GPIO_ALT3    Alternate function mode 3.
     * @constant GPIO_ALT4    Alternate function mode 4.
     * @constant GPIO_ALT5    Alternate function mode 5.
     * @constant GPIO_DEFAULT_MODE  Default mode.
     */
    enum gpio_pin_mode
    {
        GPIO_INPUT = 0,
        GPIO_OUTPUT = 1,
        GPIO_ALT0 = 4,
        GPIO_ALT1 = 5,
        GPIO_ALT2 = 6,
        GPIO_ALT3 = 7,
        GPIO_ALT4 = 3,
        GPIO_ALT5 = 2,
        GPIO_DEFAULT_MODE = -1,
    };

    /**
     * GPIO Pin Values:
     *
     * @constant GPIO_DEFAULT_VALUE  Default value, indicates error.
     * @constant GPIO_LOW   Logic low (0).
     * @constant GPIO_HIGH  Logic high (1).
     */
    enum gpio_pin_value
    {
        GPIO_DEFAULT_VALUE = -1,
        GPIO_LOW = 0,
        GPIO_HIGH = 1
    };

    /**
     * GPIO Pull-up/Pull-down Configurations:
     *
     * @constant PUD_OFF   No pull-up or pull-down resistor.
     * @constant PUD_DOWN  Enable pull-down resistor.
     * @constant PUD_UP    Enable pull-up resistor.
     */
    enum pull_up_down
    {
        PUD_OFF = 0,
        PUD_DOWN = 1,
        PUD_UP = 2
    };

    /**
     * ADC Pins:
     *
     * @constant ADC_PIN_0  Analog Input Channel 0
     * @constant ADC_PIN_1  Analog Input Channel 1
     * @constant ADC_PIN_2  Analog Input Channel 2
     * @constant ADC_PIN_3  Analog Input Channel 3
     * @constant ADC_PIN_4  Analog Input Channel 4 (only available for ADS7830)
     * @constant ADC_PIN_5  Analog Input Channel 5 (only available for ADS7830)
     * @constant ADC_PIN_6  Analog Input Channel 6 (only available for ADS7830)
     * @constant ADC_PIN_7  Analog Input Channel 7 (only available for ADS7830)
     */
    enum adc_pin
    {
        ADC_PIN_0 = 0,
        ADC_PIN_1 = 1,
        ADC_PIN_2 = 2,
        ADC_PIN_3 = 3,
        ADC_PIN_4 = 4,
        ADC_PIN_5 = 5,
        ADC_PIN_6 = 6,
        ADC_PIN_7 = 7,
        // ADC_SDA = 8,
        // ADC_SCL = 9,
        // ADC_VREF = 10,
        // ADC_COM = 12,
        // ADC_AD0 = 13,
        // ADC_AD1 = 14,
    };

    /**
     * Motor Movement Directions:
     * @constant MOTOR_FORWARD  Motor moves forward.
     * @constant MOTOR_BACKWARD Motor moves backward.
     *  
     * */
      enum motor_direction {
        MOTOR_FORWARD,
        MOTOR_BACKWARD
    };

    /**
     * ADC Type:
     *
     * @constant ADS7830  8-Bit, 8-Channel Sampling A/D Converter with I2C Interface
     * @constant PCF8591  8-Bit, 4-Channel Sampling A/D Converter with I2C Interface
     */
    enum adc_type
    {
        ADS7830 = 0,
        PCF8591 = 1,
    };

    /**
     * Motor Driver Types:
     * @constant L298N  Dual H-Bridge Motor Driver
     */

    enum motor_driver_type
    {
        L298N = 0,
        // L293D = 1,
        // TB6612FNG = 2,
        // DRV8835 = 3,
        // DRV8834 = 4,
        // DRV8825 = 5,
        // A4988 = 6,
    };
}
#endif /* types_hpp */
