#include <stdio.h>

#define BASIC_WAGE 10.0
#define MAGNIFICATION 1.5
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25

int main(void) {
    int hours = 0;
    float wage = 0;
    float tax = TAX_RATE1;
    printf("Please input how many hours you worked this week(q to quit):\n");
    while (scanf("%d", &hours) != 0) {
        if (hours <= 40) {
            wage = hours * BASIC_WAGE;
        } else {
            wage = 40 * BASIC_WAGE + (hours - 40) * MAGNIFICATION * BASIC_WAGE;
        }
        if (wage <= 300) {
            tax = wage * TAX_RATE1;
        } else if (wage <= 450) {
            tax = 300 * TAX_RATE1 + (wage - 300) * TAX_RATE2;
        } else {
            tax = 300 * TAX_RATE1 + 150 * TAX_RATE2 + (wage - 300 - 150) * TAX_RATE3;
        }
        printf("Whole wage: %.2f, taxs: %.2f, Real wage: %.2f\n", wage, tax, wage-tax);
    }

    return 0;
}
