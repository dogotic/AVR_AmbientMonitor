/**
 * @file display.c
 * @author your name (you@domain.com)
 * @brief higher level display handling
 * @version 0.1
 * @date 2020-12-12
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdint.h>

#include <avr/io.h>

#include "ili9341.h"
#include "ili9341gfx.h"
#include "display.h"

void DISPLAY_Init(uint8_t orientation, uint16_t color)
{
	ili9341_init(); //initial driver setup to drive ili9341
	ili9341_setRotation(orientation); //rotate screen
	ili9341_clear(color); //fill screen with black colour
}

void DISPLAY_Text(uint16_t x, 
                  uint16_t y, 
                  uint8_t text_size, 
                  const char *text,
                  uint16_t fg_color,
                  uint16_t bg_color)
{
	ili9341_setcursor(x,y);
	ili9341_settextcolour(fg_color,bg_color);
	ili9341_settextsize(text_size);
    ili9341_backlight_on();

    while(*text)
    {
        ili9341_putchar_printf(*text);
        text++;
    }
}

void DISPLAY_DrawHorizontalLine(uint16_t x, 
                                uint16_t y,
                                uint16_t length, 
                                uint16_t color)
{
    ili9341_drawhline(x,y,length,color);
}

void DISPLAY_InvertColors_ON(void)
{
    ili9341_inverse_display(1);
}

void DISPLAY_InvertColors_OFF(void)
{
    ili9341_inverse_display(0);				
}