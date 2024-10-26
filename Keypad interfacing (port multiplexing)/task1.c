#include <reg51.h>
#include <stdio.h>
sbit C0=P2^6;
sbit C1=P2^5;
sbit C2=P2^4;
sbit R0=P2^0;
sbit R1=P2^1;
sbit R2=P2^2;
sbit R3=P2^3;
sbit led0=P1^0;
sbit led1=P1^1;
sbit led2=P1^2;
sbit led3=P1^3;
sbit led4=P1^4;
sbit led5=P1^5;
sbit led6=P1^6;
sbit led7=P1^7;
sbit seg0=P3^0;
sbit seg1=P3^1;
sbit seg2=P3^2;
sbit seg3=P3^3;
sbit seg4=P3^4;
sbit seg5=P3^5;
sbit seg6=P3^6;
sbit seg7=P3^7;
void seg(int n);
void main(void)
 {     
    P1=0;
 
    
   R1=R2=1;
    R0=0;  
	if(C0==0)
	{
	   led0=1;
	   seg(0xF9);
	}
	
	if(C1==0){
	   led1=1;
	   seg(0xA4);
	   
	}
	if(C2==0){
	   led2=1;
	   seg(0xB0);
	}
R0=R2=1;
R1=0;

	if(C0==0)
	{
	   led3=1;
	   seg(0x99);
	}
	
	 if(C1==0){
	   led4=1;
	    seg(0x92);
	}
	if(C2==0){
	   led5=1;
	   seg(0x82);
	
	}
	R0=R1=1;
R2=0;
	if(C0==0)
	{
	   led6=1;
	   seg(0xF8);
	}
	
	if(C1==0){
	   led7=1;
	   seg(0x80);
	}
	if(C2==0){
	   led0=1;
	   seg(0x90);
	}
    	
 }
 void seg(int n){
    P3=0x00;
    P3=n;
    
 }
