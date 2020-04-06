#include <stdio.h>

#define SIZE 5

double MaxMinDiff(double target[]);

int main(void) {
    double test[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printf("%f\n", MaxMinDiff(test));
    return 0;
}

double MaxMinDiff(double target[]) {
    double max = 0;
    double min = 65535;
    for (int i = 0; i < SIZE; ++i) {
        if (max < target[i]) {
            max = target[i];
        }
        if (min > target[i]) {
            min = target[i];
        }
    }
    return max - min;
}
