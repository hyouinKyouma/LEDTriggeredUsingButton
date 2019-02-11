/*
 * LED_BUTTON.c
 *
 * Created: 2/2/2018 11:02:53 AM
 *  Author: ADITYA
 */ 


#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#include <atmega/button.h>

const int delay=1000;

void func1()
{
	
	
		PC3ON;
		PC4ON;
		PC5ON;
		PC6ON;
		PC7ON;
		_delay_ms(delay);
		PC3OFF;
		PC4OFF;
		PC5OFF;
		PC6OFF;
		PC7OFF;
		_delay_ms(delay);
	
}
void func2()
{
	
	
		PC3ON;
		PC4OFF;
		PC5ON;
		PC6OFF;
		PC7ON;
		_delay_ms(delay);
		PC3OFF;
		PC4ON;
		PC5OFF;
		PC6ON;
		PC7OFF;
		_delay_ms(delay);
	
}
void func3()
{
	
	
		PC3ON;
		PC4OFF;
		PC5OFF;
		PC6OFF;
		PC7OFF;
		_delay_ms(delay);
		PC3OFF;
		PC4ON;
		PC5OFF;
		PC6OFF;
		PC7OFF;
		_delay_ms(delay);
		PC3OFF;
		PC4OFF;
		PC5ON;
		PC6OFF;
		PC7OFF;
		_delay_ms(delay);
		PC3OFF;
		PC4OFF;
		PC5OFF;
		PC6ON;
		PC7OFF;
		_delay_ms(delay);
		PC3OFF;
		PC4OFF;
		PC5OFF;
		PC6OFF;
		PC7ON;
		_delay_ms(delay);
	
}
int main(void)
{	
	DDRA=0xf8;
	PORTA|=(1<<PC0)|(1<<PC2)|(1<<PC1);
	while(1)
	{
		if (bta1)
			func1();
		else if(bta2)
			func2();
		else if(bta3)
			func3();
		else
		{
			PC3OFF;
			PC4OFF;
			PC5OFF;
			PC6OFF;
			PC7OFF;
		}
			
	}
	
}