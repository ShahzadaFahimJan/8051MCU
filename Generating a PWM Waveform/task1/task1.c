#include <reg51.h>
#include <stdio.h>
sbit MYBIT=P1^2;
void start_timer( );
 void timer0() interrupt 1
 {
	 if(MYBIT)
	 {
		 // if the signal is low 1200 micro second
	 TH0=0xFB;
	 TL0=0x4F;
	 } 
	 else
	 {
		 //if the signal is high 800 micro second
	 TH0=0xFC;
	 TL0=0xDF;
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

     