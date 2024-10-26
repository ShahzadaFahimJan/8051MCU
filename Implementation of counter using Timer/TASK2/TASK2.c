#include<reg51.h>

unsigned int i, j;

void delay(int time){
	unsigned int k, l;
	for(k = 0; k < 125; k++)
		for(l = 0; l < time; l++);
}

void main(void){
	while(1) {
		// Loop 0 - 9
		for(i = 0; i <= 9; i++) {
			P1 = i;
			// Loop 0 - 9
			for(j = 0; j <= 9; j++) {
				P2 = j;
				delay(100);
			}
		}
	}
}
