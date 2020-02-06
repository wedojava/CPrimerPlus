#include <stdio.h>

int main(void) {
    printf("*%6.4d*\n", 123);
    printf("*%*o*\n", 10, '\077');
    printf("*%2c*\n", '\a');
    printf("*%+.2f*\n", 3333.13333333);
    printf("*%-7.5s*\n", "333.13333333");

    return 0;
}