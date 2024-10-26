#include<reg51.h>
void delay(void);
void main(void)
{
P0=0x00;
for(;;)
{ 
	P0 = 0x40;
	delay();
	P0 = 0xF9;
	delay();
	P0 = 0x24;
	delay();
	P0 = 0xB0; // 1011 0000
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