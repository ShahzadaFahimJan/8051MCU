#include <reg51.h>
#include <stdio.h>
sbit led1=P1^0;
sbit led2=P1^1;
sbit led3=P1^2;
sbit led4=P1^3;
sbit switch1 =P2^1;
sbit switch2=P2^2;
void main(void)
 { 
   while (1)
   {
      if(switch1==1 & switch2==1)
      {
	// P1=0x00;
	 led1=1;//p0.0
	 led2=0;
	 led3=0;
	 led4=0;
      }
     // P1=0x01;
     else if(switch1==1 & switch2==0)
      {
	// P1=0x01;
	 led1=0;
	 led2=1;//p0.1
	 led3=0;
	 led4=0;
      } 
      
       else if(switch1==0 & switch2==1)
      {
	 led1=0;
	 led2=0;
	 led3=1;//p0.2
	 led4=0;
	 
      }
      else
      {
	// P1=0x01;
	 led1=0;
	 led2=0;
	 led3=0;
	 led4=1;//p0.3
      }
      }
   }
