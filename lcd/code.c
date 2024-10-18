#include <reg51.h>

sbit rs = P3^0;
sbit rw = P3^1;
sbit en = P3^2;

void lcdString(char *s);
void delay(int n);
void lcdCmd(char c);
void lcdInit(void);
void lcdData(char d);

void main(void){
	lcdInit();
	lcdString("Hello");
	lcdCmd(0xC0);
	lcdString("World");
}

void delay(int n){
	while(n--);
}

void lcdCmd(char c){
	rw=0;
	delay(300);
	P2=c;
	delay(5);
	rs=0;
	en=1;
	en=0;
}

void lcdInit(void){
	P2=0;
	P3=0;
	lcdCmd(0x32);
	lcdCmd(0x0c);
	lcdCmd(0x06);
	lcdCmd(0x01);
	lcdCmd(0x82);
}

void lcdData(char d){
	rw=0;
	P2=d;
	delay(5);
	rs=1;
	en=1;
	en=0;
	delay(300);
}

void lcdString(char *c){
	while(*c)
		lcdData(*c++);
}