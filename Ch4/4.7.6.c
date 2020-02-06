#include <stdio.h>
#include <string.h>

int main(void) {
	int i = 12345;
    printf("*%d*\n", i);
    printf("*%4X*\n", 16);
    printf("*%10.3f*\n", 232.456);
    printf("*%12.2e*\n", 232.456);
    printf("*%-30s*\n", "232.456");

    return 0;
}