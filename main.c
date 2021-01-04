/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-25
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#include "display.h"
#include "sensors.h"
#include "uart.h"

static FILE mystdout = FDEV_SETUP_STREAM(USART_Transmit, NULL,
										 _FDEV_SETUP_WRITE);

int main()
{
	uint8_t humidity;
	int8_t temperature;
	uint16_t light_level;
	float pressure;
	char output_str[32];
	uint16_t bg_color = BLACK;
	uint16_t fg_color = LIGHTGREY;

	DISPLAY_Init(0, BLACK);
	SENSORS_Init();
	USART_Init(9600);
	stdout = &mystdout;
	while (1)
	{
		SENSORS_ReadTemperature(&temperature);
		SENSORS_ReadHumidity(&humidity);
		SENSORS_ReadPressure(&pressure);

		SENSORS_ReadLightLevel(&light_level);

		if (light_level <= 300)
		{
			DISPLAY_InvertColors_OFF();
		}
		else
		{
			DISPLAY_InvertColors_ON();
		}

		sprintf(output_str, "%d C", temperature);
		DISPLAY_Text(20, 30, 8, output_str, fg_color, bg_color);
		DISPLAY_DrawHLine(0, 110, 240, fg_color);
		sprintf(output_str, "%d %%", humidity);
		DISPLAY_Text(20, 140, 8, output_str, fg_color, bg_color);
		DISPLAY_DrawHLine(0, 210, 240, fg_color);
		sprintf(output_str, "%dhPa", (uint16_t)pressure);
		DISPLAY_Text(10, 240, 8, output_str, fg_color, bg_color);
	}
}
