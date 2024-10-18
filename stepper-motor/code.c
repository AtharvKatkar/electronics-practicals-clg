#include <reg51.h>

void delay(int);

void main(void){
	while(1){
		P1=0x05;
		delay(2000);
		P1=0x06;
		delay(2000);
		P1=0x0A;
		delay(2000);
		P1=0x09;
		delay(2000);
	}
}

void delay(int n){
	while(n--);
}