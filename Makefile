BIN=SensorMonitor

SRC=main.c 
SRC+=ili9341.c
SRC+=ili9341gfx.c
SRC+=bmp280/bmp280.c
SRC+=DHT/dht.c
SRC+=i2chw/twimaster.c
SRC+=display.c
SRC+=sensors.c
SRC+=adc.c

OBJ+=main.o
OBJ+=ili9341.o
OBJ+=ili9341gfx.o
OBJ+=bmp280.o
OBJ+=dht.o
OBJ+=twimaster.o
OBJ+=display.o
OBJ+=sensors.o
OBJ+=adc.o

MCU=atmega328p
AVRDUDE_MCU=atmega328p
AVRDUDE_PROGRAMMER=arduino

CFLAGS=-Wall -Os -mmcu=$(MCU) -DUSE_LOGGING=1 -DF_CPU=8000000UL -std=gnu99
LDFLAGS=
AVRDUDE_FLAGS= -p$(AVRDUDE_MCU) -c $(AVRDUDE_PROGRAMMER) -P /dev/ttyS3 -b 57600

hex:
	avr-gcc -g -Os -mmcu=$(MCU) -c $(INC) $(SRC) $(CFLAGS)
	avr-gcc -g -mmcu=$(MCU) -o $(BIN).elf $(OBJ)
	avr-objcopy -j .text -j .data -O ihex $(BIN).elf $(BIN).hex

clean:
	rm -rf *.o *.elf *.hex

program_flash:
	avrdude $(AVRDUDE_FLAGS) -U flash:w:$(BIN).hex:i
