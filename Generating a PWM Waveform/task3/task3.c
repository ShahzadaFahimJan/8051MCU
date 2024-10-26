#include <reg51.h>
#include <stdio.h>
sbit MYBIT=P1^2;
sbit PIN = P2^3;
void start_timer( );
 void timer0() interrupt 1
 {
	 
	
	 if(PIN)
	 {
		 if(MYBIT)
		 {
		 //delay of 6ms
	 TH0=0xE8;
	 TL0=0x8F;
	 }
	 
	 else
	 {
		 //delay of ms
	 TH0=0xF0;
	 TL0=0x5F;
	 }
	 
MYBIT = ~MYBIT;
 }
	 else
	 {
		 if(MYBIT)
		 {
		 //delay of 1.2ms
	 TH0=0xFB;
	 TL0=0x4F;
	 }
	 
	 else
	 {
		 //delay of 1.8ms
	 TH0=0xF8;
	 TL0=0xF7;
	 }
	 
MYBIT = ~MYBIT;
 }
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

     