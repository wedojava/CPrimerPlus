#include <stdio.h>
 
#define PRINCIPAL 100.0
#define RATE_DAPHNE 0.1
#define RATE_DEIRDRE 0.05
 
// gives the principal, the interest rate.
int main() {
    double Daphne = PRINCIPAL;
    double Deirdre = PRINCIPAL;
    int years = 0;
    while (Daphne >= Deirdre) {
        Daphne += RATE_DAPHNE * PRINCIPAL;
        Deirdre += Deirdre * RATE_DEIRDRE;
        years++;
    }
    printf("Daphone:$%.2lf \nDeirdre:$%.2lf \n", Daphne, Deirdre);
    printf("Investment values after %d years.", years);
    return 0;
}