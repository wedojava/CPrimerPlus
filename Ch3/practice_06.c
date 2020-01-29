#include <stdio.h>

int main(void) {
    float one = 3.0e-23;
    float knum = 9.5e2 / 3.0e-23;
    float num;
    printf("Please type a num of water krato: ");
    scanf("%f", &num);
    printf("%e", knum * num);
}