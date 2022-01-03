#include "reg51.h"

sbit LED1=P2^0;
sbit LED2=P2^1;
sbit LED3=P2^2;
sbit LED4=P2^3;
sbit LED5=P0^0;
sbit LED6=P0^1;
sbit LED7=P0^2;
sbit LED8=P0^3;

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int uint16;
typedef signed char sint16;

void delay_ms(uint16 ms)
{
 	unsigned char i;
		for(;ms>0;ms--)
		{
		for(i=250;i>0;i--);
		for(i=250;i>0;i--);
		}

}

void LED_clock()
{    
	P2=~0X1;
delay_ms(500);
	P2=~0X2;
delay_ms(1000);
	P2=~0X4;
	delay_ms(500);
	P2=~0X8;
delay_ms(500);
}
void LED_anticlock()
{
	P0=~0XE;
delay_ms(500);
	P0=~0XD;
delay_ms(500);	
	P0=~0XB;
delay_ms(500);
	P0=~0X7;
delay_ms(500);
}

int main()
{
while(1)
{
	LED_clock();
	
   // LED_anticlock();
	
}
}