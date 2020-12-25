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
#include <stdbool.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#include "display.h"
#include "sensors.h"

#include "ili9341.h"

int main()
{
	uint8_t humidity;
	int8_t temperature;
	uint16_t light_level;
	char output_str[32];
	uint16_t bg_color = BLACK;
	uint16_t fg_color = GREENYELLOW;

	DISPLAY_Init(0, BLACK);

	SENSORS_Init();

	while (1)
	{
		SENSORS_ReadTemperature(&temperature);
		SENSORS_ReadHumidity(&humidity);
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

		sprintf(output_str, "%d %%", humidity);
		DISPLAY_Text(20, 140, 8, output_str, fg_color, bg_color);
	}
}
