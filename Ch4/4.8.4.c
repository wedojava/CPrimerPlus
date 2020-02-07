#include <stdio.h>

int main(void) {
	float height;
	char name[40];
    printf("Please input your height(cm): ");
    scanf("%f", &height);
    printf("Please input your name: ");
    scanf("%s", name);
    printf("%s, you are %.3f meter height.\n", name, height / 100);

    return 0;
}