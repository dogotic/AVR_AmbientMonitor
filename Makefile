BIN=SensorMonitor

SRC=main.c 
SRC+=ili9341.c
SRC+=ili9341gfx.c
SRC+=DHT/dht.c
SRC+=display.c
SRC+=sensors.c
SRC+=adc.c
SRC+=uart.c

OBJ+=main.o
OBJ+=ili9341.o
OBJ+=ili9341gfx.o
OBJ+=dht.o
OBJ+=display.o
OBJ+=sensors.o
OBJ+=adc.o
OBJ+=uart.o

MCU=atmega328p
AVRDUDE_MCU=atmega328p
AVRDUDE_PROGRAMMER=arduino

CFLAGS=-Wall -Os -mmcu=$(MCU) -DUSE_LOGGING=1 -DF_CPU=8000000UL -std=gnu99
LDFLAGS=
AVRDUDE_FLAGS= -p$(AVRDUDE_MCU) -c $(AVRDUDE_PROGRAMMER) -P COM3 -b 57600

hex:
	avr-gcc -g -Os -mmcu=$(MCU) -c $(INC) $(SRC) $(CFLAGS)
	avr-gcc -g -mmcu=$(MCU) -o $(BIN).elf $(OBJ)
	avr-objcopy -j .text -j .data -O ihex $(BIN).elf $(BIN).hex

clean:
	rm -rf *.o *.elf *.hex

program_flash:
	avrdude $(AVRDUDE_FLAGS) -U flash:w:$(BIN).hex:i
	putty -load AVR
