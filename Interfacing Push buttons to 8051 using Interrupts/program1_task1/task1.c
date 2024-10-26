#include<reg51.h>
#include<stdio.h>
sbit P_button = P2^0;
sbit P_LED = P2^1;
sbit I_button = P3^2;
sbit I_LED = P3^4;
int i=0;
void e_i_0() interrupt 0
{
	for(i = 0; i<100; i++);
	I_LED ^=1;
}

void main(){
P_button = 1;
I_button = 1;
	EX0=1;
	EA=1;
	//IT0=1;
	while(1)
	{
		if(P_button == 0)
		{
			P_LED = 1;
		}
		else
		{
			P_LED = 0;
		}
	}

}