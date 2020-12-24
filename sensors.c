/**
 * @file sensors.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-12
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <avr/io.h>
#include <util/delay.h>

#include "DHT/dht.h"
#include "adc.h"

#include "sensors.h"

sensors_status_t SENSORS_Init()
{
    ADC_Init();

    return SENSORS_STATUS_OK;
}


sensors_status_t SENSORS_ReadHumidity(uint8_t *humidity)
{
    int temp, humid;
    int ec;
    //Request DHT sensor to give it time to prepare data
    dhtxxconvert( DHTXX_DHT22, &PORTD, &DDRD, &PIND, ( 1 << PD3 ) );
    _delay_ms( 1000 );

    //Read data from sensor to variables `temp` and `humid` (`ec` is exit code)
    ec = dhtxxread( DHTXX_DHT22, &PORTD, &DDRD, &PIND, ( 1 << PD3 ), &temp, &humid );
    
    if (ec != DHTXX_ERROR_OK)
    {
        return SENSORS_STATUS_DHT_HUMIDITY_ERROR;
    }
    else
    {
        humid /= 10;
        *humidity = humid;
    }

    return SENSORS_STATUS_OK;
}

sensors_status_t SENSORS_ReadTemperature(int8_t *temperature)
{
    int temp, humid;
    int ec;
    //Request DHT sensor to give it time to prepare data
    dhtxxconvert( DHTXX_DHT22, &PORTD, &DDRD, &PIND, ( 1 << PD3 ) );
    _delay_ms( 1000 );

    //Read data from sensor to variables `temp` and `humid` (`ec` is exit code)
    ec = dhtxxread( DHTXX_DHT22, &PORTD, &DDRD, &PIND, ( 1 << PD3 ), &temp, &humid );
    
    if (ec != DHTXX_ERROR_OK)
    {
        return SENSORS_STATUS_DHT_HUMIDITY_ERROR;
    }
    else
    {
        *temperature = (temp / 10);
    }

    return SENSORS_STATUS_OK;
}

sensors_status_t SENSORS_ReadPressure(uint16_t *pressure)
{
    return SENSORS_STATUS_OK;

}

sensors_status_t SENSORS_ReadAltitude(uint16_t *altitude)
{
    return SENSORS_STATUS_OK;
}

sensors_status_t SENSORS_ReadLightLevel(uint16_t *light_level)
{
    uint16_t adc_level;

    adc_level = ADC_Read(1);

    *light_level = adc_level;

    return SENSORS_STATUS_OK;
}
