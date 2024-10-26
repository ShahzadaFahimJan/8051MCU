#include<reg51.h>
#include<stdio.h>
void delay(int time)
{
	int k,l;
	for(k=0; k<time; k++)
for(l=0; l<1225; l++);
}
void main()
{
	int i,j;
	while(1)
	{
		for(i=0; i<=9; i++)
		{
		P1=i;
		for(j=0; j<=9; j++)
			{
		P1=j;
				delay(100);
			}
		
		}
	}
}
