/**
 * @file display.h
 * @author your name (you@domain.com)
 * @brief higher level display handling
 * @version 0.1
 * @date 2020-12-12
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#define BLACK       0x0000      
#define NAVY        0x000F      
#define DARKGREEN   0x03E0      
#define DARKCYAN    0x03EF      
#define MAROON      0x7800      
#define PURPLE      0x780F      
#define OLIVE       0x7BE0      
#define LIGHTGREY   0xC618      
#define DARKGREY    0x7BEF      
#define BLUE        0x001F      
#define GREEN       0x07E0      
#define CYAN        0x07FF      
#define RED         0xF800     
#define MAGENTA     0xF81F      
#define YELLOW      0xFFE0      
#define WHITE       0xFFFF      
#define ORANGE      0xFD20      
#define GREENYELLOW 0xAFE5     
#define PINK        0xF81F

/**
 * @brief Initialize display with the given orientation
 *        and color 
 * 
 * @param orientation - orientation of the display
 * @param color - color of the display
 */
void DISPLAY_Init(uint8_t orientation, uint16_t color);

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
                  uint16_t bg_color);

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
                                uint16_t color);

#ifndef DISPLAY_H
#define DISPLAY_H

#endif // DISPLAY_H