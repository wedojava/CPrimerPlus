#include <stdio.h>
#include <stdlib.h>

#define ROW 5
#define COL 3

// prototype declarations
void copy_ptr(double *target2, double *source, int arr_len);
void copy_arr(double target1[], double source[], int arr_len);

int main(void) {
    double source[ROW][COL] = {};
    double target[ROW][COL] = {};
    // initialize source array
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j) {
            source[i][j] = rand() / (double)RAND_MAX;
        }
    }
    for (int i = 0; i < ROW; ++i) {
        // copy_ptr(target[i], source[i], COL);
        copy_arr(target[i], source[i], COL);
    }

    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COL; ++j) {
            printf("%5.1f", target[i][j]);
        }
        putchar('\n');
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
