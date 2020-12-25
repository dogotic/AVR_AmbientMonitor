/**
 * @file adc.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-25
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#ifndef ADC_H
#define ADC_H

/**
 * @brief 
 * 
 */
void ADC_Init(void);

/**
 * @brief 
 * 
 * @param channel 
 * @return uint16_t 
 */
uint16_t ADC_Read( uint8_t channel);

#endif // ADC_H