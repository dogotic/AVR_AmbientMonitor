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