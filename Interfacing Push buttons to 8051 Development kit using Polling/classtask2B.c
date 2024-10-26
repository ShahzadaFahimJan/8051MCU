#include<reg51.h>
sbit led1=P1^1;
sbit switch1=P2^1;
void main(void)
{
	while(1)
	{
		if(switch1==0)
		{
			led1=1;
		}
		else
			{
			
			led1=0;
		}}}
