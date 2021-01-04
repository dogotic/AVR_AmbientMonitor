TARGET=SensorMonitor

SRC=main.c 
SRC+=ili9341.c
SRC+=ili9341gfx.c
SRC+=DHT/dht.c
SRC+=display.c
SRC+=sensors.c
SRC+=adc.c
SRC+=uart.c
SRC+=i2c.c
SRC+=bme280.c

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
	avr-gcc -g -Os -mmcu=$(MCU) -c $(INC) $(SRC) $(CFLAGS)
	avr-gcc -g -mmcu=$(MCU) $(LDFLAGS) -o $(TARGET).elf $(OBJ) 
	avr-objcopy -j .text -j .data -O ihex $(TARGET).elf $(TARGET).hex
	avr-size -C --mcu=${MCU} ${TARGET}.elf

clean:
	rm -rf *.o *.elf *.hex

program_flash:
	avrdude $(AVRDUDE_FLAGS) -U flash:w:$(TARGET).hex:i
#	putty -load AVR
