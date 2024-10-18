#include <reg51.h>
#include <math.h>

void delay(int);

void main(void) {
    float angle;
    int i;

    while (1) {
        for (i = 0; i < 360; i++) {
            angle = (float)i * 3.14159 / 180.0;
            P0 = (char)(128.0 + 127.0 * sin(angle));
            delay(100);
        }
    }
}

void delay(int n) {
    while (n--);
}
