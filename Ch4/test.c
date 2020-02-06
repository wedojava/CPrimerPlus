#include <stdio.h>

int main(void) {
	char name[40] = "Andy";
	float cash = 123.54;
    printf("The %s family just may be $%.2f dollars richer!\n", name, cash);

    return 0;
} 