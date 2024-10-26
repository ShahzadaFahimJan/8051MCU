#include<reg51.h>
int A;
void main(){
	while(1){
		A=0xFF;
		P1=A;
		P2=A;
		A=0x00;
		P1=A;
		P2=A;
	}
}
