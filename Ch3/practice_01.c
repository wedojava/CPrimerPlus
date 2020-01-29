#include <stdio.h>

int main(void) {
    int uimax = 655350;
    float fmax = 3.4e38;
    float fmin = -3.4e38;

    printf("overflow int: %d\n", uimax * 10000);
    printf("overflow float: %f\n", fmax * 10);
    printf("underflow float: %f\n", fmin * 10);
}