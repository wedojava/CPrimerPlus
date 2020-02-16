#include <stdio.h>

#ifndef INTRO
#define INTRO "Enter two float number separate by space (q to quit): "
#endif

int main(void) {
    printf(INTRO);
    float a, b;
    while (scanf("%f %f", &a, &b) != 0){
	    printf("%f\n", (a - b) / (a * b));
	    printf(INTRO);	
    }
    printf("Exit\n");
    
    return 0;
}