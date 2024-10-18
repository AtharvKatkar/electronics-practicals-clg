#include <reg51.h>

void delay(int);

void main(void){
	int i;
	
	while(1){
		for(i=0; i<255; i++)
			P0=i;
		for(i=255; i>0; i--)
			P0=i;
	}
}

void delay(int n){
	while(n--);
}