# AVR_AmbientMonitor

Device for monitoring temperature, humidity and barometric pressure. 
Microcontroller used is ATMEGA328p
Compiler is AVR-GCC and firmware is developed using pure AVR-GCC (no arduino stuff)

## External Software used
- DHT library - https://github.com/Jacajack/avr-dhtxx/blob/master/src/dhtxx.c
- ILI9341 library - https://github.com/Yenya/avr-bmp280


## TO DO LIST
- [ ] Implement own I2C library and use bosch BMP280 library
- [ ] Implement better fonts for ILI9341, this now looks crappy
