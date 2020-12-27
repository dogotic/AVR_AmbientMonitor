#include <avr/io.h>
#include <avr/pgmspace.h>
#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

#include "ili9341.h"
#include "ili9341gfx.h"

#include "fonts.h"

volatile uint16_t cursor_x;
volatile uint16_t cursor_y;
volatile uint16_t textcolour;
volatile uint16_t textbgcolour;
volatile uint8_t textsize;
uint16_t vsetx,vsety,vactualx,vactualy,isetx,isety,iactualx,iactualy;


int16_t ili9341_putchar_printf(char var)//this function will be called whenever printf is used
{
	ili9341_write(var);
	return 0;
}

void backuplocationvset(void)//backing up vset data start location to print next vset data in exact location
{
	vsetx=cursor_x;
	vsety=cursor_y;
}

void backuplocationvactual(void)//backing up vactual data start location to print next vactual data in exact location
{
	vactualx=cursor_x;
	vactualy=cursor_y;
}

void backuplocationiset(void)//backing up iset data start location to print next iset data in exact location
{
	isetx=cursor_x;
	isety=cursor_y;
}

void backuplocationiactual(void)//backing up iactual data start location to print next iactual data in exact location
{
	iactualx=cursor_x;
	iactualy=cursor_y;
}

extern uint16_t LCD_W,LCD_H;

void ili9341_drawchar(int16_t x, int16_t y, unsigned char c,uint16_t color, uint16_t bg, uint8_t size) //draw a char like a,b or 1,2
{
    int i;
    int j;
    int k;
	int y_offset = 0;
	int x_offset = 0;
	uint8_t data = 0;

    for (i=0; i<184; i+=4)
    {
        for (k=0; k<4; k++)
        {
            for (j=0; j<8; j++)
            {	if ((c >= '0') && (c<='9'))
				{
					data = pgm_read_byte(&digits[c-48][i+k]);
				}
				else
				{
					if (c == ' ')
						data = pgm_read_byte(&letters[0][i+k]);
					else if (c == 'C')
						data = pgm_read_byte(&letters[1][i+k]);					
					else if (c == '%')
						data = pgm_read_byte(&letters[2][i+k]);										
				}
				
                if (data & (1 << j))
                {
                    // printf("#");
					ili9341_drawpixel(x+x_offset,y+y_offset,color);
                }
                else
                {
                    // printf(" ");
					ili9341_drawpixel(x+x_offset,y+y_offset,bg);					
                }
				x_offset++;
            }
        }
		x_offset = 0;
        y_offset++;
    }
}

void ili9341_setcursor(uint16_t x,uint16_t y)//set cursor at desired location to print data
{
	cursor_x=x;
	cursor_y=y;
}

void ili9341_settextcolour(uint16_t x,uint16_t y)//set text colour and text background colour
{
	textcolour=x;
	textbgcolour=y;
}

void ili9341_settextsize(uint8_t s)
{
	if(s>8) return;
	textsize=(s>0) ? s: 1;//this operation means if s0 greater than 0,then s=s,else s=1
}

void ili9341_write(uint8_t c)//write a character at setted coordinates after setting location and colour
{
	if (c == '\n')
	{
		cursor_y += textsize*8;
		cursor_x  = 0;
	}
	else if (c == '\r')
	{
		// skip em
	}
	else
	{
		ili9341_drawchar(cursor_x, cursor_y, c, textcolour, textbgcolour, textsize);
		cursor_x += textsize*6;
	}
}
