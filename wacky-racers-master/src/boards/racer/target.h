/** @file   target.h
    @author M. P. Hayes, UCECE
    @date   12 February 2018
    @brief
*/
#ifndef TARGET_H
#define TARGET_H

#include "mat91lib.h"

/* This is for the carhat (chart) board configured as a racer!  */

/* System clocks  */
#define F_XTAL 12.00e6
#define MCU_PLL_MUL 16
#define MCU_PLL_DIV 1

#define MCU_USB_DIV 2
/* 192 MHz  */
#define F_PLL (F_XTAL / MCU_PLL_DIV * MCU_PLL_MUL)
/* 96 MHz  */
#define F_CPU (F_PLL / 2)

/* TWI  */
#define TWI_TIMEOUT_US_DEFAULT 10000

/* USB  */
//#define USB_VBUS_PIO PA5_PIO
#define USB_CURRENT_MA 500

/* LEDs  */
<<<<<<< HEAD
#define LED_ERROR_PIO PB2_PIO
#define LED_STATUS_PIO PB3_PIO
=======
#define LED_ERROR_PIO PA20_PIO
#define LED_STATUS_PIO PA23_PIO
#define LED_ACTIVE 0
>>>>>>> bc6388ea4a0cb2763b8ced9985b775ebf201e179

/* General  */
#define APPENDAGE_PIO PA1_PIO
#define SERVO_PWM_PIO PA2_PIO

/* Button  */
#define BUTTON_PIO PA16_PIO

/* H-bridges   */
#define MOTOR_LEFT_PWM_PIO PA11_PIO
#define MOTOR_RIGHT_PWM_PIO PA7_PIO

/* Radio  */
#define RADIO_CS_PIO PA15_PIO
#define RADIO_CE_PIO PA18_PIO
#define RADIO_IRQ_PIO PA24_PIO

#define RADIO_POWER_ENABLE_PIO PA11_PIO

/* LED tape  */
#define LEDTAPE_PIO PA16_PIO

#endif /* TARGET_H  */
