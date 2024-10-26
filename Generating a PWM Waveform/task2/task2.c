#include <reg51.h>
#include <stdio.h>
sbit MYBIT=P1^2;

void start_timer( );
 void timer0() interrupt 1
 {
	 
	
	 if(MYBIT)
	 {
		 //delay of 600 micro second or 1.2ms
	 TH0=0xFd;
	 TL0=0xA7;
	 }
	 
	 else
	 {
		 //delay of 400 microsecond
	 TH0=0xFE;
	 TL0=0x6F;
	 }
MYBIT = ~MYBIT;
	 
 }
 void init()
 {
	 TR0=1;
 }
void main(void)
	
{
	init();
	start_timer();
   while(1)
 {
 }
}
 void start_timer()
	 
 {
	   TMOD = 0x01;
	   IE=0x82;
 }

     