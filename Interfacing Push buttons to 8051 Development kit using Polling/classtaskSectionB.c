#include<reg51.h>
sbit Mybit =P2^1;
void main(void)
{
	unsigned int i;
	for(i=0; i<=500; i++)
	{
		Mybit =0;
		for(i=0; i<10000; i++);
		for(i=0; i<10000; i++);
		for(i=0; i<10000; i++);
		Mybit =1;
	}
}