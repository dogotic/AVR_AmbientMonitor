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

/**
 * @brief Initialize display with the given orientation
 *        and color 
 * 
 * @param orientation - orientation of the display
 * @param color - color of the display
 */
void DISPLAY_Init(uint8_t orientation, uint16_t color)
{
	ili9341_init(); //initial driver setup to drive ili9341
	ili9341_clear(color); //fill screen with black colour
	ili9341_setRotation(orientation); //rotate screen

    // set backlight on
    ili9341_backlight_on();
}

/**
 * @brief 
 * 
 * @param x 
 * @param y 
 * @param text_size 
 * @param text 
 * @param bg_color 
 * @param fg_color 
 */
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

    while(*text)
    {
        ili9341_putchar_printf(*text);
        text++;
    }
}

/**
 * @brief 
 * 
 * @param x 
 * @param y 
 * @param length 
 * @param color 
 */
void DISPLAY_DrawHorizontalLine(uint16_t x, 
                                uint16_t y,
                                uint16_t length, 
                                uint16_t color)
{
    ili9341_drawhline(x,y,length,color);
}