#include <stdio.h>

#ifndef ADJUST
#define ADJUST 7.31
#endif

int main(void) {
    const double SCALE = 0.333;
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (man's)    foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);

    return 0;
}

// Shoe size (man's)    foot length
//        9.0           10.31 inches