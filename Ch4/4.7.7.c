#include <stdio.h>

int main(void) {
    unsigned long ul1 = 1234567890;
    printf("*%15lu*\n", ul1);
    printf("*%#4x*\n", 0x8a);
    printf("*%-12.2E*\n", 0.0233);
    printf("*%+10.3f*\n", 232.346);
    printf("*%8.8s*\n", "1234567890");

    return 0;
}