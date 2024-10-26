#include<reg51.h>
#include<stdio.h>
sbit pin = P3^0;
void start_timer0(){
TR0 = 1;	
}
void timer0() interrupt 1
{
//	int x;
//	x++;
//	if(x==4){
//		pin = ~pin;
//		x=0;	
//}
TH0 = 0xD8;
TL0 = 0xEF;	//10 ms delay
}
void start_timer(){
	TMOD = 0x01;
	IE=0x82;
}
void main(){
start_timer0();
start_timer();
while(1)
{
while(TF0==0);
pin = ~pin;
}		
}
	