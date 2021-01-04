# AVR_AmbientMonitor

Device for monitoring temperature, humidity and barometric pressure. 
Microcontroller used is ATMEGA328p
Compiler is AVR-GCC and firmware is developed using pure AVR-GCC (no arduino stuff)

## External Software used
- DHT library - https://github.com/Jacajack/avr-dhtxx
- ILI9341 library - https://gist.github.com/postmodern/ed6e670999f456ad9f13
- BME280/BMP280 library - https://github.com/Sylaina/bme280


## TO DO LIST
- [ ] Add documentation in Doxygen format
- [ ] Add System Block Schematic for HW and SW
- [ ] Add Timer ISR to read LDR value and switch Color 
