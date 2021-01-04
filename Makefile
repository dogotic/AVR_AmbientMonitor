TARGET=SensorMonitor

SRC=main.c 
SRC+=ILI9341/ili9341.c
SRC+=ILI9341/ili9341gfx.c
SRC+=DHT/dht.c
SRC+=DISPLAY/display.c
SRC+=SENSORS/sensors.c
SRC+=ADC/adc.c
SRC+=UART/uart.c
SRC+=BMP280/i2c.c
SRC+=BMP280/bme280.c

OBJ+=main.o
OBJ+=ili9341.o
OBJ+=ili9341gfx.o
OBJ+=dht.o
OBJ+=display.o
OBJ+=sensors.o
OBJ+=adc.o
OBJ+=uart.o
OBJ+=i2c.o
OBJ+=bme280.o

INC+=-IADC/
INC+=-IBMP280/
INC+=-IDHT/
INC+=-IDISPLAY/
INC+=-IILI9341/
INC+=-ISENSORS/
INC+=-IUART/

MCU=atmega328p
AVRDUDE_MCU=atmega328p
AVRDUDE_PROGRAMMER=arduino
PRINTF_LIB_FLOAT = -Wl,-u,vfprintf -lprintf_flt
MATH_LIB = -lm

CFLAGS=-Wall -Os -mmcu=$(MCU) -DUSE_LOGGING=1 -DF_CPU=8000000UL -std=gnu99
LDFLAGS = -Wl,-Map=$(TARGET).map,--cref
LDFLAGS += $(PRINTF_LIB_FLOAT) $(MATH_LIB)
AVRDUDE_FLAGS= -p$(AVRDUDE_MCU) -c $(AVRDUDE_PROGRAMMER) -P /dev/ttyS3 -b 57600

hex:
	avr-gcc -g -Os -mmcu=$(MCU) -c $(INC) $(SRC) $(INC) $(CFLAGS)
	avr-gcc -g -mmcu=$(MCU) $(LDFLAGS) -o $(TARGET).elf $(OBJ) 
	avr-objcopy -j .text -j .data -O ihex $(TARGET).elf $(TARGET).hex
	avr-size -C --mcu=${MCU} ${TARGET}.elf

clean:
	rm -rf *.o *.elf *.hex $(TARGET).map

program_flash:
	avrdude $(AVRDUDE_FLAGS) -U flash:w:$(TARGET).hex:i
#	putty -load AVR
