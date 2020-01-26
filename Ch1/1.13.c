#include <stdio.h>

int main(void){
    float inch, cm;
    inch = cm = 0.0;
    printf("Please input a inch number: ");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("%.3f inch convert to cm is: %.3f", inch, cm);

    return 0;
}