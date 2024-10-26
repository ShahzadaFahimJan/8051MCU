#include<reg51.h>

unsigned int i, j;

void delay(int time){
	unsigned int k, l;
	for(k = 0; k < time; k++)
		for(l = 0; l < 1225; l++);
}

void main(void){
	while(1) {
		// Loop 0 - 4
		for(i = 0; i <= 9; i++) {
			P1 = i;
			delay(100);
			
		}
	}
}
