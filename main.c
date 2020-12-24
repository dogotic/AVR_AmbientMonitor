#include <stdio.h>
#include <stdbool.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#include "uart.h"
#include "display.h"
#include "sensors.h"

#include "ili9341gfx.h"
#include "ili9341.h"

static FILE mystdout = FDEV_SETUP_STREAM(USART_Transmit, NULL,
										 _FDEV_SETUP_WRITE);

int main()
{
	uint16_t bg_color = BLACK;
	uint16_t fg_color = GREENYELLOW;

	DISPLAY_Init(0,BLACK);


	USART_Init(9600);
	SENSORS_Init();
	stdout = &mystdout;

	printf("Starting Sensor Monitor\r\n");

	while (1)
	{
		uint8_t 	humidity;
		int8_t 		temperature;
		uint16_t 	light_level;
		char output_str[32];

		SENSORS_ReadTemperature(&temperature);
		SENSORS_ReadHumidity(&humidity);
		SENSORS_ReadLightLevel(&light_level);

		sprintf(output_str,"%d C",temperature);
		DISPLAY_Text(20,30,8,output_str,fg_color,bg_color);
		
		sprintf(output_str,"%d %%",humidity);
 		DISPLAY_Text(20,140,8,output_str,fg_color,bg_color);


		sprintf(output_str,"%d",light_level);
 		DISPLAY_Text(5,250,5,output_str,fg_color,bg_color);
	}
}
