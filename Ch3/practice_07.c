#include <stdio.h>

int main(void) {
    float h;
    printf("Input your height in inc: ");
    scanf("%f", &h);
    printf("Your height in cm is: %fcm.", h * 2.54);
}