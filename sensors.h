/**
 * @file sensors.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-12
 * 
 * @copyright Copyright (c) 2020
 * 
 */

typedef struct __sensors_data_t
{
    uint8_t humidity;
    int8_t temperature;
    uint16_t pressure;
    uint16_t altitude;
} sensors_data_t;

typedef enum __sensors_status
{
    SENSORS_STATUS_OK,
    SENSORS_INIT_FAILED,
    SENSORS_STATUS_DHT_HUMIDITY_ERROR,
    SENSORS_STATUS_DHT_TEMPERATURE_ERROR,
    SENSORS_STATUS_BMP280_TEMPERATURE_ERROR,
    SENSORS_STATUS_BMP280_PRESSURE_ERROR,    
    SENSORS_STATUS_BMP280_ALTITUDE_ERROR    
} sensors_status_t;

/**
 * @brief 
 * 
 * @return sensors_status_t 
 */
sensors_status_t SENSORS_Init();

/**
 * @brief 
 * 
 * @param humidity 
 * @return sensors_status_t 
 */
sensors_status_t SENSORS_ReadHumidity(uint8_t *humidity);

/**
 * @brief 
 * 
 * @param temperature 
 * @return sensors_status_t 
 */
sensors_status_t SENSORS_ReadTemperature(int8_t *temperature);

/**
 * @brief 
 * 
 * @param pressure 
 * @return sensors_status_t 
 */
sensors_status_t SENSORS_ReadPressure(uint16_t *pressure);

/**
 * @brief 
 * 
 * @param altitude 
 * @return sensors_status_t 
 */
sensors_status_t SENSORS_ReadAltitude(uint16_t *altitude);
