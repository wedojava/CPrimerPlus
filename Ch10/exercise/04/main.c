#include <stdio.h>

#define SIZE 5

int maxIndex(double target[]);

int main(void) {
    double a[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    printf("最大数的下标是: %d", maxIndex(a));
    return 0;
}

int maxIndex(double target[]) {
    int k = 0;
    int v = 0;
    for (int i = 0; i < SIZE; ++i) {
        if (target[i] > v) {
            v = target[i];
            k = i;
        }
    }
    return k;
}
