/**
 * @file activity2.h
 * @author Lavanya B S
 * @brief header file for activity2
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__
#include <avr/io.h>
/**
 * @brief potentiometer is used to show the readings of temperature sensor and ADC value is stored in RAM Table
 * 
 */

void Init_ADC();/**< Initialize all the Peripherals and pin configurations for ADC */
uint16_t Read_ADC(uint8_t ch);/**< Perform ADC conversion */


#endif  
