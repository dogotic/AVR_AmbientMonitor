#ifndef SENSORS_H
#define SENSORS_H

/**
 * @file sensors.h
 * @defgroup sensor_reading_library  Sensor Reading Library
 * @author your name (you@domain.com)
 * @brief Access to DHT22 (humidity and temperature) sensor 
 *        and BMP280 (pressure and temperature) sensor
 * @version 0.1
 * @date 2020-12-12
 * @copyright Copyright (c) 2020 MIT License
 * 
 */

/**
 * @brief Structure representing measured sensor values
 */
typedef struct __sensors_data_t
{
    uint8_t humidity;   /**< humidity measured from DHT22 */
    int8_t temperature; /**< temperature measured from either DHT22 or BMP280 */
    uint16_t pressure;  /**< pressure measured from BMP280 */
    uint16_t altitude;  /**< altitude calculated from pressure measured with BMP280 */
} sensors_data_t;

/**
 * @brief Sensor status enums 
 */
typedef enum __sensors_status
{
    SENSORS_STATUS_OK,                          /**< Sensor status is OK */
    SENSORS_INIT_FAILED,                        /**< Sensor initialization failed */
    SENSORS_STATUS_DHT_HUMIDITY_ERROR,          /**< Humidity reading from DHT22 failed - Currently not used */
    SENSORS_STATUS_DHT_TEMPERATURE_ERROR,       /**< Temperature reading from DHT22 failed - Currently not used */
    SENSORS_STATUS_BMP280_TEMPERATURE_ERROR,    /**< Temperature reading from BMP280 failed - Currently not used */
    SENSORS_STATUS_BMP280_PRESSURE_ERROR,       /**< Pressure reading from BMP280 failed - Currently not used */
    SENSORS_STATUS_BMP280_ALTITUDE_ERROR        /**< Altitude calculation failed - Currently not used */
} sensors_status_t;

/**
 * @brief initialization of BMP280 and DHT sensor
 * 
 * @return sensors_status_t - status of reading
 *                          - SENSORS_STATUS_OK if initialization was OK
 *                          - SENSORS_INIT_FAILED if initialization failed
 * 
 */
sensors_status_t SENSORS_Init();

/**
 * @brief Reading humidity from DHT22
 * 
 * @param humidity - measured humiditiy
 * @return sensors_status_t - status of reading
 *                          - SENSORS_STATUS_OK if reading was ok
 *                          - Currently no other error is reported
 * 
 */
sensors_status_t SENSORS_ReadHumidity(uint8_t *humidity);

/**
 * @brief Function that reads temperature from the sensors. If
 *        Reading from DHT22 fails, temperature is read from BMP280
 * 
 * @param temperature - measured temperature
 * @return sensors_status_t - status of reading
 *                           - SENSORS_STATUS_OK if reading was ok
 *                           - Currently no other error is reported
 */
sensors_status_t SENSORS_ReadTemperature(int8_t *temperature);

/**
 * @brief Function that reads pressure from BMP280
 * 
 * @param pressure - measured pressure
 * @return sensors_status_t - status of reading
 *                          - SENSORS_STATUS_OK if reading was ok
 *                          - Currently no other error is reported
 */
sensors_status_t SENSORS_ReadPressure(uint16_t *pressure);

/**
 * @brief Function that returns calculated altitude from BMP280
 * 
 * @param altitude - measured altitude
 * @return sensors_status_t - status of reading
 *                          - SENSORS_STATUS_OK if reading was ok
 *                          - Currently no other error is reported
 */
sensors_status_t SENSORS_ReadAltitude(uint16_t *altitude);

#endif