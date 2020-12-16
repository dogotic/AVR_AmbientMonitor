#include <stdio.h>
#include <stdbool.h>

#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#include "display.h"
#include "sensors.h"

int main()
{
	uint16_t bg_color = BLACK;
	uint16_t fg_color = YELLOW;
	bool is_daytime = true;

	DISPLAY_Init(2,bg_color);
	SENSORS_Init();

	DISPLAY_DrawHorizontalLine(0,70,240,fg_color);
	DISPLAY_DrawHorizontalLine(0,140,240,fg_color);
	DISPLAY_DrawHorizontalLine(0,210,240,fg_color);

	while (1)
	{
		int8_t temperature; 
		uint8_t humidity;
		uint16_t pressure;
		uint16_t altitude;
		char output_str[32];
		uint16_t light_level;
		
		SENSORS_ReadTemperature(&temperature);
		SENSORS_ReadHumidity(&humidity);
		SENSORS_ReadPressure(&pressure);
		SENSORS_ReadAltitude(&altitude);
		SENSORS_ReadLightLevel(&light_level);

		if (light_level <= 50)
		{
			if (!is_daytime)
			{
				bg_color = LIGHTGREY;
				fg_color = BLACK;
				DISPLAY_DrawHorizontalLine(0,70,240,fg_color);
				DISPLAY_DrawHorizontalLine(0,140,240,fg_color);
				DISPLAY_DrawHorizontalLine(0,210,240,fg_color);			
			}
		}
		else if(light_level >= 100)
		{
			if (is_daytime)
			{
				bg_color = BLACK;
				fg_color = YELLOW;			
				DISPLAY_DrawHorizontalLine(0,70,240,fg_color);
				DISPLAY_DrawHorizontalLine(0,140,240,fg_color);
				DISPLAY_DrawHorizontalLine(0,210,240,fg_color);			
			}
		}
		
		
		sprintf(output_str,"%d C",temperature);
		DISPLAY_Text(70,30,4,output_str,fg_color,bg_color);
		
		sprintf(output_str,"%d %%",humidity);
		DISPLAY_Text(70,100,4,output_str,fg_color,bg_color);

		sprintf(output_str,"%d hPa",pressure);
		DISPLAY_Text(30,170,4,output_str,fg_color,bg_color);
		
		sprintf(output_str,"%d ",light_level);
		DISPLAY_Text(30,240,4,output_str,fg_color,bg_color);
	}
}
