#include <stdio.h>

#ifndef INTRO
#define INTRO "Enter two float number separate by space (q to quit): "
#endif

float compute(float a, float b);

int main(void) {
    printf(INTRO);
    float a, b;
    while (scanf("%f %f", &a, &b) != 0){
	    printf("%f\n", compute(a, b));
	    printf(INTRO);
    }
    printf("Exit\n");
    
    return 0;
}

float compute(float a, float b){
	return (a - b) / (a * b);
}