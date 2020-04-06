#include <stdio.h>

void Reverse(double target[], int size);

int main(void) { 
    double test1[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double test2[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10};

    Reverse(test1, 5);
    Reverse(test2, 10);

    for (int i = 0; i < 5; ++i) {
        printf("%5.1f", test1[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i) {
        printf("%5.1f", test2[i]);
    }
    return 0; 
}

void Reverse(double target[], int size) {
    double t = 0;
    for (int i = 0; i < size/2; ++i) {
        t = target[i];
        target[i] = target[size - 1 - i];
        target[size - 1 - i] = t;
    }
}
