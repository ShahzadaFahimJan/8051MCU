
#include<reg51.h>
void delay(void);
void main(void)
{
P0=0x00;
for(;;)
{ delay();
	P0=0x40;
delay();
	P0=0xF9;
delay();
	P0=0x04;
delay();P0=0x08;
delay();
P0=0x10;//00010000
delay();
P0=0x20;//00100000
delay();
P0=0x40;
delay();P0=0x80;
delay();
}
}
void delay(void)
{
unsigned int y;
for(y=0;y<30000;y++);
	for(y=0;y<30000;y++);
	for(y=0;y<30000;y++);
	

}