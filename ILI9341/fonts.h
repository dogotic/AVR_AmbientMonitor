#ifndef FONTS_H
#define FONTS_H

/**
 * @brief BANSCHRIFT REGULAR FONT 
 * 
 */

const uint8_t digits[10][184] PROGMEM =
{
        {0x00, 0xFC, 0x07, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0xE0, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0xFF, 0x01, 0xF8, 0xFF, 0xFF, 0x03, 0xF8, 0x0F, 0xFC, 0x03, 0xF8, 0x03, 0xF8, 0x07, 0xFC, 0x01, 0xF0, 0x07, 0xFC, 0x01, 0xE0, 0x07, 0xFC, 0x00, 0xE0, 0x07, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x0F, 0xFC, 0x00, 0xE0, 0x07, 0xFC, 0x01, 0xF0, 0x07, 0xFC, 0x03, 0xF0, 0x07, 0xF8, 0x07, 0xF8, 0x07, 0xF8, 0xFF, 0xFF, 0x03, 0xF0, 0xFF, 0xFF, 0x03, 0xF0, 0xFF, 0xFF, 0x01, 0xE0, 0xFF, 0xFF, 0x00, 0x80, 0xFF, 0x7F, 0x00, 0x00, 0xFE, 0x1F, 0x00}, // Code for char num 48
        {0xC0, 0x3F, 0x00, 0x00, 0xE0, 0x3F, 0x00, 0x00, 0xF8, 0x3f, 0x00, 0x00, 0xFC, 0x3f, 0x00, 0x00, 0xFF, 0x3f, 0x00, 0x00, 0xFF, 0x3f, 0x00, 0x00, 0x3F, 0x3f, 0x00, 0x00, 0x0F, 0x3f, 0x00, 0x00, 0x07, 0x3f, 0x00, 0x00, 0x01, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00}, // Code for char num 49
        {0x00, 0xFC, 0x03, 0x00, 0x80, 0xFF, 0x1F, 0x00, 0xC0, 0xFF, 0x3F, 0x00, 0xE0, 0xFF, 0x7F, 0x00, 0xF0, 0xFF, 0xFF, 0x00, 0xF8, 0xFF, 0xFF, 0x01, 0xFC, 0x07, 0xFF, 0x01, 0xFC, 0x01, 0xFC, 0x03, 0xFE, 0x00, 0xF8, 0x03, 0xFE, 0x00, 0xF8, 0x03, 0x7E, 0x00, 0xF0, 0x03, 0x7E, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0xE0, 0x1F, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0xF8, 0x07, 0x00, 0x00, 0xF8, 0x07, 0x00, 0x00, 0xFC, 0x03, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x80, 0x7F, 0x00, 0x00, 0xC0, 0x3F, 0x00, 0x00, 0xE0, 0x1F, 0x00, 0x00, 0xE0, 0x1F, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0xF8, 0x07, 0x00, 0x00, 0xFC, 0x03, 0x00, 0x00, 0xFC, 0x03, 0x00, 0x00, 0xFE, 0xFF, 0xFF, 0x07, 0xFE, 0xFF, 0xFF, 0x07, 0xFE, 0xFF, 0xFF, 0x07, 0xFE, 0xFF, 0xFF, 0x07, 0xFE, 0xFF, 0xFF, 0x07, 0xFE, 0xFF, 0xFF, 0x07}, // Code for char num 50
        {0x00, 0xFC, 0x01, 0x00, 0x80, 0xFF, 0x0F, 0x00, 0xC0, 0xFF, 0x3F, 0x00, 0xE0, 0xFF, 0x7F, 0x00, 0xF0, 0xFF, 0xFF, 0x00, 0xF8, 0xFF, 0xFF, 0x00, 0xFC, 0x07, 0xFF, 0x01, 0xFC, 0x01, 0xFC, 0x01, 0xFE, 0x00, 0xFC, 0x01, 0xFE, 0x00, 0xF8, 0x03, 0x7E, 0x00, 0xF8, 0x03, 0x7E, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0xFE, 0x00, 0x00, 0xF8, 0x7F, 0x00, 0x00, 0xF8, 0x3F, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0x00, 0xF8, 0x0F, 0x00, 0x00, 0xF8, 0x3F, 0x00, 0x00, 0xF8, 0x7F, 0x00, 0x00, 0x80, 0xFF, 0x00, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xF0, 0x03, 0x3F, 0x00, 0xF0, 0x03, 0x7F, 0x00, 0xF0, 0x03, 0x7F, 0x00, 0xF8, 0x03, 0xFE, 0x00, 0xFC, 0x03, 0xFE, 0x01, 0xFE, 0x03, 0xFC, 0xFF, 0xFF, 0x01, 0xFC, 0xFF, 0xFF, 0x00, 0xF8, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0x7F, 0x00, 0xC0, 0xFF, 0x1F, 0x00, 0x00, 0xFF, 0x07, 0x00}, // Code for char num 51
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x1F, 0x00, 0x00, 0xC0, 0x1F, 0x00, 0x00, 0xC0, 0x0F, 0x00, 0x00, 0xE0, 0x0F, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x07, 0x80, 0x3F, 0xE0, 0x07, 0x80, 0x1F, 0xE0, 0x07, 0xC0, 0x1F, 0xE0, 0x07, 0xC0, 0x0F, 0xE0, 0x07, 0xE0, 0x0F, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xF0, 0x07, 0xE0, 0x07, 0xF0, 0x07, 0xE0, 0x07, 0xF8, 0x03, 0xE0, 0x07, 0xF8, 0x03, 0xE0, 0x07, 0xFC, 0x01, 0xE0, 0x07, 0xFC, 0x01, 0xE0, 0x07, 0xFC, 0x00, 0xE0, 0x07, 0xFE, 0xFF, 0xFF, 0x3F, 0xFE, 0xFF, 0xFF, 0x3F, 0xFE, 0xFF, 0xFF, 0x3F, 0xFE, 0xFF, 0xFF, 0x3F, 0xFE, 0xFF, 0xFF, 0x3F, 0xFE, 0xFF, 0xFF, 0x3F, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07}, // Code for char num 52
        {0x00, 0x00, 0x00, 0x00, 0xF8, 0xFF, 0xFF, 0x03, 0xF8, 0xFF, 0xFF, 0x03, 0xF8, 0xFF, 0xFF, 0x03, 0xF8, 0xFF, 0xFF, 0x03, 0xF8, 0xFF, 0xFF, 0x03, 0xF8, 0xFF, 0xFF, 0x03, 0xF8, 0x01, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xF8, 0xF9, 0x07, 0x00, 0xF8, 0xFD, 0x3F, 0x00, 0xF8, 0xFF, 0x7F, 0x00, 0xF8, 0xFF, 0xFF, 0x00, 0xF8, 0xFF, 0xFF, 0x01, 0xF8, 0xFF, 0xFF, 0x01, 0xF8, 0x0F, 0xFE, 0x03, 0xF8, 0x03, 0xF8, 0x03, 0xF8, 0x01, 0xF8, 0x07, 0xF8, 0x01, 0xF0, 0x07, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xE0, 0x07, 0xFC, 0x00, 0xF0, 0x07, 0xFC, 0x00, 0xF0, 0x07, 0xFC, 0x01, 0xF0, 0x07, 0xF8, 0x03, 0xF8, 0x03, 0xF8, 0x07, 0xFC, 0x03, 0xF8, 0xFF, 0xFF, 0x01, 0xF0, 0xFF, 0xFF, 0x01, 0xE0, 0xFF, 0xFF, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0x80, 0xFF, 0x3F, 0x00, 0x00, 0xFE, 0x0F, 0x00}, // Code for char num 53
        {0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x0F, 0x00, 0x00, 0xE0, 0x0F, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0xC0, 0x1F, 0x00, 0x00, 0xC0, 0x1F, 0x00, 0x00, 0xE0, 0x0F, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xF0, 0xF7, 0x07, 0x00, 0xF0, 0xFF, 0x1F, 0x00, 0xF8, 0xFF, 0x3F, 0x00, 0xF8, 0xFF, 0x7F, 0x00, 0xFC, 0xFF, 0xFF, 0x00, 0xFC, 0xFF, 0xFF, 0x00, 0xFC, 0x07, 0xFF, 0x01, 0xFC, 0x01, 0xFE, 0x01, 0xFE, 0x00, 0xFC, 0x03, 0xFE, 0x00, 0xF8, 0x03, 0xFE, 0x00, 0xF8, 0x03, 0x7E, 0x00, 0xF8, 0x03, 0x7E, 0x00, 0xF0, 0x03, 0x7E, 0x00, 0xF0, 0x03, 0x7E, 0x00, 0xF0, 0x03, 0x7E, 0x00, 0xF0, 0x03, 0x7E, 0x00, 0xF8, 0x03, 0xFE, 0x00, 0xF8, 0x03, 0xFE, 0x00, 0xF8, 0x03, 0xFC, 0x01, 0xFC, 0x01, 0xFC, 0x03, 0xFE, 0x01, 0xFC, 0xFF, 0xFF, 0x00, 0xF8, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0x7F, 0x00, 0xE0, 0xFF, 0x3F, 0x00, 0xC0, 0xFF, 0x1F, 0x00, 0x00, 0xFF, 0x07, 0x00}, // Code for char num 54
        {0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0x01, 0x7F, 0x00, 0xFC, 0x01, 0x7F, 0x00, 0xFC, 0x00, 0x7F, 0x00, 0xFC, 0x00, 0x7F, 0x00, 0xFE, 0x00, 0x7F, 0x00, 0xFE, 0x00, 0x7F, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x1F, 0x00, 0x00, 0xC0, 0x1F, 0x00, 0x00, 0xC0, 0x1F, 0x00, 0x00, 0xC0, 0x0F, 0x00, 0x00, 0xE0, 0x0F, 0x00, 0x00, 0xE0, 0x0F, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00}, // Code for char num 55
        {0x00, 0xF8, 0x07, 0x00, 0x00, 0xFF, 0x3F, 0x00, 0x80, 0xFF, 0x7F, 0x00, 0xC0, 0xFF, 0xFF, 0x00, 0xE0, 0xFF, 0xFF, 0x01, 0xF0, 0xFF, 0xFF, 0x03, 0xF8, 0x1F, 0xFE, 0x07, 0xF8, 0x07, 0xF8, 0x07, 0xF8, 0x03, 0xF0, 0x07, 0xFC, 0x01, 0xE0, 0x0F, 0xFC, 0x01, 0xE0, 0x0F, 0xFC, 0x01, 0xE0, 0x0F, 0xFC, 0x01, 0xE0, 0x0F, 0xFC, 0x01, 0xE0, 0x0F, 0xFC, 0x01, 0xE0, 0x0F, 0xFC, 0x01, 0xE0, 0x0F, 0xF8, 0x01, 0xE0, 0x07, 0xF8, 0x03, 0xF0, 0x07, 0xF0, 0x07, 0xF8, 0x03, 0xF0, 0x1F, 0xFE, 0x03, 0xE0, 0xFF, 0xFF, 0x01, 0xC0, 0xFF, 0xFF, 0x00, 0x80, 0xFF, 0x7F, 0x00, 0xC0, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0xFF, 0x01, 0xF0, 0xFF, 0xFF, 0x03, 0xF8, 0x0F, 0xFC, 0x07, 0xFC, 0x03, 0xF0, 0x07, 0xFC, 0x01, 0xE0, 0x0F, 0xFC, 0x00, 0xC0, 0x0F, 0xFE, 0x00, 0xC0, 0x1F, 0xFE, 0x00, 0xC0, 0x1F, 0xFE, 0x00, 0xC0, 0x1F, 0xFE, 0x00, 0xC0, 0x1F, 0xFE, 0x00, 0xC0, 0x1F, 0xFE, 0x00, 0xC0, 0x1F, 0xFE, 0x00, 0xC0, 0x1F, 0xFC, 0x01, 0xE0, 0x0F, 0xFC, 0x03, 0xF0, 0x0F, 0xFC, 0x07, 0xF8, 0x0F, 0xF8, 0xFF, 0xFF, 0x07, 0xF0, 0xFF, 0xFF, 0x03, 0xF0, 0xFF, 0xFF, 0x03, 0xC0, 0xFF, 0xFF, 0x00, 0x80, 0xFF, 0x7F, 0x00, 0x00, 0xFE, 0x1F, 0x00}, // Code for char num 56
        {0x00, 0xFC, 0x01, 0x00, 0x80, 0xFF, 0x0F, 0x00, 0xE0, 0xFF, 0x1F, 0x00, 0xF0, 0xFF, 0x7F, 0x00, 0xF8, 0xFF, 0x7F, 0x00, 0xF8, 0xFF, 0xFF, 0x00, 0xFC, 0x07, 0xFF, 0x01, 0xFC, 0x01, 0xFE, 0x01, 0xFE, 0x01, 0xFC, 0x01, 0xFE, 0x00, 0xF8, 0x03, 0xFE, 0x00, 0xF8, 0x03, 0x7E, 0x00, 0xF0, 0x03, 0x7E, 0x00, 0xF0, 0x03, 0x7E, 0x00, 0xF0, 0x03, 0x7E, 0x00, 0xF0, 0x03, 0x7E, 0x00, 0xF0, 0x03, 0x7E, 0x00, 0xF8, 0x03, 0xFE, 0x00, 0xF8, 0x03, 0xFE, 0x00, 0xF8, 0x03, 0xFC, 0x01, 0xFC, 0x01, 0xFC, 0x03, 0xFE, 0x01, 0xFC, 0xDF, 0xFF, 0x01, 0xF8, 0xFF, 0xFF, 0x01, 0xF0, 0xFF, 0xFF, 0x00, 0xF0, 0xFF, 0xFF, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0x80, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x1F, 0x00, 0x00, 0xC0, 0x1F, 0x00, 0x00, 0xC0, 0x0F, 0x00, 0x00, 0xE0, 0x0F, 0x00, 0x00, 0xE0, 0x07, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0xF0, 0x03, 0x00, 0x00, 0xF8, 0x03, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x1F, 0x00, 0x00}  // Code for char num 57
};

const uint8_t letters[][184] PROGMEM = 
{
        {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // Code for Space
        {0x00,0xE0,0x0F,0x00,0x00,0xFC,0x7F,0x00,0x00,0xFF,0xFF,0x01,0xC0,0xFF,0xFF,0x03,0xE0,0xFF,0xFF,0x07,0xF0,0xFF,0xFF,0x0F,0xF0,0x7F,0xFC,0x1F,0xF8,0x0F,0xE0,0x3F,0xFC,0x07,0xC0,0x3F,0xFC,0x03,0x80,0x7F,0xFC,0x01,0x00,0x7F,0xFE,0x00,0x00,0xFE,0xFE,0x00,0x00,0xFE,0xFE,0x00,0x00,0xFC,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0xFE,0x00,0x00,0xFE,0xFE,0x00,0x00,0xFE,0xFE,0x01,0x00,0x7E,0xFC,0x01,0x00,0x7F,0xFC,0x03,0x80,0x7F,0xF8,0x07,0xC0,0x3F,0xF8,0x1F,0xF0,0x3F,0xF0,0xFF,0xFF,0x1F,0xE0,0xFF,0xFF,0x0F,0xC0,0xFF,0xFF,0x07,0x80,0xFF,0xFF,0x03,0x00,0xFF,0xFF,0x00,0x00,0xF8,0x3F,0x00}, // Code for C
        {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x03,0x00,0x1F,0xFC,0x07,0x80,0x0F,0xFC,0x0F,0x80,0x07,0xFE,0x1F,0xC0,0x07,0x3E,0x1F,0xC0,0x03,0x1E,0x1E,0xE0,0x03,0x1E,0x1E,0xE0,0x01,0x1E,0x1E,0xF0,0x01,0x1E,0x1E,0xF0,0x00,0x1E,0x1E,0xF8,0x00,0x1E,0x1E,0x7C,0x00,0x1E,0x1F,0x7C,0x00,0xFE,0x1F,0x3E,0x00,0xFE,0x0F,0x1E,0x00,0xFC,0x0F,0x1F,0x00,0xF8,0x07,0x0F,0x00,0x00,0x80,0x0F,0x00,0x00,0x80,0x07,0x00,0x00,0xC0,0x07,0x00,0x00,0xC0,0x03,0x00,0x00,0xE0,0x03,0x00,0x00,0xF0,0x01,0x00,0x00,0xF0,0x81,0x1F,0x00,0xF8,0xE0,0x3F,0x00,0x78,0xF0,0x7F,0x00,0x7C,0xF0,0x7F,0x00,0x3C,0xF8,0xF8,0x00,0x3E,0xF8,0xF8,0x00,0x1E,0xF8,0xF8,0x00,0x1F,0xF8,0xF8,0x00,0x0F,0xF8,0xF8,0x80,0x0F,0xF8,0xF8,0x80,0x07,0xF8,0xF8,0xC0,0x07,0xF8,0xF8,0xE0,0x03,0xF0,0x7F,0xE0,0x01,0xF0,0x7F,0xF0,0x01,0xE0,0x3F,0xF0,0x00,0xC0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, // Code for %
        {0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0xF0,0x03,0x00,0x3F,0xFC,0x1F,0x00,0x3F,0xFE,0x3F,0x00,0x3F,0xFF,0x7F,0x00,0xBF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0x00,0xFF,0x83,0xFF,0x01,0xFF,0x00,0xFE,0x01,0x7F,0x00,0xFC,0x03,0x7F,0x00,0xF8,0x03,0x7F,0x00,0xF8,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03,0x3F,0x00,0xF0,0x03}, // Code for char num 104
        {0xFF,0xFF,0x7F,0x00,0xFF,0xFF,0xFF,0x01,0xFF,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0x07,0xFF,0xFF,0xFF,0x0F,0xFF,0xFF,0xFF,0x1F,0x3F,0x00,0xE0,0x1F,0x3F,0x00,0xC0,0x3F,0x3F,0x00,0x80,0x3F,0x3F,0x00,0x00,0x3F,0x3F,0x00,0x00,0x7F,0x3F,0x00,0x00,0x7F,0x3F,0x00,0x00,0x7F,0x3F,0x00,0x00,0x7F,0x3F,0x00,0x00,0x7F,0x3F,0x00,0x00,0x7F,0x3F,0x00,0x00,0x7F,0x3F,0x00,0x00,0x3F,0x3F,0x00,0x80,0x3F,0x3F,0x00,0xC0,0x3F,0x3F,0x00,0xE0,0x1F,0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,0x0F,0xFF,0xFF,0xFF,0x07,0xFF,0xFF,0xFF,0x03,0xFF,0xFF,0xFF,0x01,0xFF,0xFF,0x7F,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00} // Code for char num 80
};

#endif // FONTS_H