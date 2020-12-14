#include <stdio.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#include "display.h"
#include "sensors.h"

int main()
{
	DISPLAY_Init(2,BLACK);
	SENSORS_Init();

	// enable IRQs
	sei();	

	DISPLAY_DrawHorizontalLine(0,70,240,YELLOW);
	DISPLAY_DrawHorizontalLine(0,140,240,YELLOW);
	DISPLAY_DrawHorizontalLine(0,210,240,YELLOW);

	while (1)
	{
		int8_t temperature; 
		uint8_t humidity;
		uint16_t pressure;
		uint16_t altitude;
		char output_str[32];
		
		SENSORS_ReadTemperature(&temperature);
		SENSORS_ReadHumidity(&humidity);
		SENSORS_ReadPressure(&pressure);
		SENSORS_ReadAltitude(&altitude);
		
		sprintf(output_str,"%d C",temperature);
		DISPLAY_Text(70,30,4,output_str,YELLOW,BLACK);
		
		sprintf(output_str,"%d %%",humidity);
		DISPLAY_Text(70,100,4,output_str,YELLOW,BLACK);

		sprintf(output_str,"%d hPa",pressure);
		DISPLAY_Text(30,170,4,output_str,YELLOW,BLACK);
		
		_delay_ms(1000);
	}
}
