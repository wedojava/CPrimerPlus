#include <stdio.h>

int main(void) {
    float n;
    printf("Input the number how many cups of water: ");
    scanf("%f", &n);
    printf("It is %.2f pint\n", n / 2.0);
    printf("It is %.2f ounce\n", n * 8);
    printf("It is %.2f soupspoon\n", n * 8 * 2);
    printf("It is %.2f teaspoon\n", n * 8 * 2 * 3);

    return 0;
}