#include <reg51.h>
#include <stdio.h>
#include<string.h>
void init();
unsigned int i;
char str[100];
void getbuf(char *str);
void showbuff(char dataa);
void main(void)
{
init();
getbuf("wellcome to lab");
while (1);
}
void init()
{
TMOD=0x20;
TH1=0xFD;
SCON=0x50;
TR1=1;

}
void getbuf(char *str)
{
for(i=0; i<strlen(str);i++)
{
showbuff(str[i]);
}
}
void showbuff(char dataa)
{
SBUF=dataa;
while(TI==0);
TI=0;
}