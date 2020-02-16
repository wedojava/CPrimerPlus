#include <stdio.h>

int main(void) {
    double totle = 1000000;
    double get = 100000;
    double rate = 0.08;
    int years = 0;
    while (totle > 0){
    	totle = totle + totle * rate - get;
    	++years;
    }
    printf("%d\n", years);
    return 0;
}