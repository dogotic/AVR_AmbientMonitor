#ifndef DISPLAY_H
#define DISPLAY_H

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

#define BLACK       0x0000      /**< BLACK          */
#define NAVY        0x000F      /**< NAVY           */
#define DARKGREEN   0x03E0      /**< DARK GREEN     */
#define DARKCYAN    0x03EF      /**< DARK CYAN      */
#define MAROON      0x7800      /**< MAROON         */
#define PURPLE      0x780F      /**< PURPLE         */
#define OLIVE       0x7BE0      /**< OLIVE          */
#define LIGHTGREY   0xC618      /**< LIGHT GREY     */
#define DARKGREY    0x7BEF      /**< DARK GREY      */
#define BLUE        0x001F      /**< BLUE           */
#define GREEN       0x07E0      /**< GREEN          */
#define CYAN        0x07FF      /**< CYAN           */
#define RED         0xF800      /**< RED            */
#define MAGENTA     0xF81F      /**< MAGENTA        */
#define YELLOW      0xFFE0      /**< YELLOW         */
#define WHITE       0xFFFF      /**< WHITE          */
#define ORANGE      0xFD20      /**< ORANGE         */
#define GREENYELLOW 0xAFE5      /**< GREEN YELLOW   */
#define PINK        0xF81F      /**< PINK           */

/**
 * @brief Initialize display with the given orientation
 *        and color 
 * 
 * @param orientation - orientation of the display
 * @param color - color of the display
 */
void DISPLAY_Init(uint8_t orientation, uint16_t color);

/**
 * @brief Function that displays Text 
 * 
 * @param x - x coordinate 
 * @param y - y coordinate 
 * @param text_size  - size of text
 * @param text - text to be displayed
 * @param bg_color - background color
 * @param fg_color - foreground color
 */
void DISPLAY_Text(uint16_t x, 
                  uint16_t y, 
                  uint8_t text_size, 
                  const char *text,
                  uint16_t fg_color,
                  uint16_t bg_color);

/**
 * @brief Function that draws a horizontal line
 * 
 * @param x - x coordinate of the starting point 
 * @param y - y coordinate of the starting point
 * @param length - length of the line
 * @param color - color of the line
 */
void DISPLAY_DrawHorizontalLine(uint16_t x, 
                                uint16_t y,
                                uint16_t length, 
                                uint16_t color);

#endif // DISPLAY_H