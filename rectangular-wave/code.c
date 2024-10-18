#include <reg51.h>

void delay(int);

void main(void){
	while(1){
		P0=0;
		delay(1000);
		P0=255;
		delay(2000);
	}
}

void delay(int n){
	while(n--);
}