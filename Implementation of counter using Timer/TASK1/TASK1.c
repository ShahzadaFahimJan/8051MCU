#include<reg51.h>
#include<stdio.h>
sbit I_P = P3^4;
void start_timer()
{
	TR0=1;
}
void init_timer()
{
	TMOD = 0x06; // Timer 0 8-bit auto reload mode
	TH0=0;
	I_P=1;
	
}
void main()
{
	start_timer();
	init_timer();
	while(1)
	{
		P1=TL0;
	}
}
