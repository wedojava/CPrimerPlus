#include <stdio.h>

int main(void) {
    int age;
    printf("Please type an age: ");
    scanf("%d", &age);
    printf("%d years old is about %e seconds old.", age, (age * 3.156e7));
}