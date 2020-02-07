#include <stdio.h>

int main(void) {
    float f;
    printf("Input a float number: ");
    scanf("%f", &f);
    printf("The input is %.1f or %.1e.\n", f, f);
    printf("The input is %+.3f or %.3E.\n", f, f);

    return 0;
} 