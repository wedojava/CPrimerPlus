#include <stdio.h>

int main(void) {
    int input;
    printf("Please input an ASCII number: ");
    scanf("%d", &input);
    printf("ASCII %d => %c", input, input);
}