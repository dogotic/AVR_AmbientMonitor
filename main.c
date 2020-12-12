#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#include "ili9341.h"
#include "ili9341gfx.h"

#include "i2chw/i2cmaster.h"
#include "bmp280/bmp280.h"
#include "DHT/dht.h"

static FILE mydata = FDEV_SETUP_STREAM(ili9341_putchar_printf, NULL, _FDEV_SETUP_WRITE);

int main()
{
	stdout = & mydata;

	bmp280_init();

	// enable IRQs
	sei();	

	ili9341_init(); //initial driver setup to drive ili9341
	ili9341_clear(BLACK); //fill screen with black colour
	ili9341_setRotation(2); //rotate screen
	ili9341_setcursor(4,20);
	ili9341_settextcolour(YELLOW,BLACK);
	ili9341_settextsize(4);
	ili9341_drawhline(0,70,240,YELLOW);
	ili9341_drawhline(0,140,240,YELLOW);
	ili9341_drawhline(0,210,240,YELLOW);

	while (1)
	{
        	int temp, humid;
		int pressure,temperature,altitude;
		int ec;

		bmp280_measure();

		temperature = bmp280_gettemperature() / 100;
		pressure = bmp280_getpressure() / 100;
		altitude = bmp280_getaltitude();

		//Request DHT sensor to give it time to prepare data
		dhtxxconvert( DHTXX_DHT22, &PORTD, &DDRD, &PIND, ( 1 << 7 ) );
		_delay_ms( 1000 );

		//Read data from sensor to variables `temp` and `humid` (`ec` is exit code)
		ec = dhtxxread( DHTXX_DHT22, &PORTD, &DDRD, &PIND, ( 1 << 7 ), &temp, &humid );
		
		if (ec != DHTXX_ERROR_OK)
		{
			temp = temperature;
			humid = 0;
		}
		else
		{
			temp /= 10;
			humid /= 10;
		}
		uint8_t offset = 30;
		ili9341_setcursor(70,offset);
		printf("%d C",temp);

		offset += 70;
		ili9341_setcursor(70,offset);	
		printf("%d %%",humid);
		
		offset += 70;		
		ili9341_setcursor(30,offset);	
		printf("%d hPa",pressure);		
		
		offset += 70;		
		ili9341_setcursor(60,offset);	
		printf("%d m",altitude);
		
		_delay_ms(1000);
	}
}
