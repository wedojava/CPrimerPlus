#include <stdio.h>
#include <stdlib.h>

#define SIZE1 7
#define SIZE2 3

// prototype declarations
void copy_ptr(double *target2, double *source, int arr_len);
void copy_arr(double target1[], double source[], int arr_len);

int main(void) {
    double source[SIZE1] = {};
    double target[SIZE2] = {};
    // initialize source array
    for (int i = 0; i < SIZE1; ++i) {
            source[i] = rand() / (double)RAND_MAX;
    }

    // do it
    copy_arr(target, source + 2, SIZE2);

    // display the source array content
    for (int i = 0; i < SIZE1; ++i) {
        printf("%5.1f", source[i]);
    }
    putchar('\n');
    // display the target array content
    for (int i = 0; i < SIZE2; ++i) {
        printf("%5.1f", target[i]);
    }

    return 0;
}

void copy_arr(double target1[], double source[], int arr_len) {
    for (int i = 0; i < arr_len; ++i) {
        target1[i] = source[i];
    }
}
void copy_ptr(double *target2, double *source, int arr_len) {
    for (int i = 0; i < arr_len; ++i) {
        *(target2 + i) = *(source + i);
    }
}
