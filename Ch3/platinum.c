#include <stdio.h>

int main(void){
    float weight, value;

    printf("Are you worth your weight in platinum");
    printf("Let's check it out.\n");
    printf("Please input your weight in pounds: ");

    scanf("%f", &weight);
    value = 1700.0 * weight * 144.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}