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

#include "i2chw/i2cmaster.h"
#include "bmp280/bmp280.h"
#include "DHT/dht.h"

#include "sensors.h"

sensors_status_t SENSORS_Init()
{
    int retval = 0;

    retval = bmp280_init();
    if (retval == 1)
    {
        return SENSORS_STATUS_OK;
    }
    else
    {
        return SENSORS_INIT_FAILED;
    }
    
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
    dhtxxconvert( DHTXX_DHT22, &PORTD, &DDRD, &PIND, ( 1 << 7 ) );
    _delay_ms( 1000 );

    //Read data from sensor to variables `temp` and `humid` (`ec` is exit code)
    ec = dhtxxread( DHTXX_DHT22, &PORTD, &DDRD, &PIND, ( 1 << 7 ), &temp, &humid );

    // if DHT22 reading fails, try to read from BMP280
    if (ec != DHTXX_ERROR_OK)
    {
        bmp280_measure();

        *temperature = bmp280_gettemperature() / 100;
    }
    else
    {
        temp /= 10;
        *temperature = temp;
    }

    return SENSORS_STATUS_OK;
}

sensors_status_t SENSORS_ReadPressure(uint16_t *pressure)
{
    int temperature,altitude;    
    
    bmp280_measure();

    temperature = bmp280_gettemperature() / 100;
    *pressure = bmp280_getpressure() / 100;
    altitude = bmp280_getaltitude();
    
    // prevent compiler warning
    altitude = altitude;
    temperature = temperature;

    return SENSORS_STATUS_OK;

}

sensors_status_t SENSORS_ReadAltitude(uint16_t *altitude)
{
    int pressure,temperature;    
    
    bmp280_measure();

    temperature = bmp280_gettemperature() / 100;
    pressure = bmp280_getpressure() / 100;
    *altitude = bmp280_getaltitude();

    // prevent compiler warning
    temperature = temperature;
    pressure = pressure;

    return SENSORS_STATUS_OK;
}
