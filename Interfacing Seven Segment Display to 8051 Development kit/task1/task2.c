
#include<reg51.h>
void delay(void);
void main(void)
{
P0=0x00;
for(;;)
{ 
	//P0 = 0x01; //0000 0001 
	//P0=0x02;//0000 0010
	//P0= 0x04; //0000 0100
	P0= 0xF9;  //1111 1001 // 1
	
	//delay();

}
}
void delay(void)
{
unsigned int y;
for(y=0;y<30000;y++);

}