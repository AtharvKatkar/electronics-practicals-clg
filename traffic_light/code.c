#include <reg51.h>

void delay(int);

void main(void){
	while(1){
		P2=0xDB;
		P1=0xDE;
		delay(1000);
		P2=0xDD;
		P1=0xDE;
		delay(1000);
		P2=0xF6;
		P1=0xDE;
		delay(1000);
		P2=0xEE;
		P1=0xDE;
		delay(1000);
		P2=0xDE;
		P1=0xDD;
		delay(1000);
		P2=0xDE;
		P1=0xF6;
		delay(1000);
		P2=0xDE;
		P1=0xEE;
		delay(1000);
	}
}

void delay(int n){
	while(n--);
}