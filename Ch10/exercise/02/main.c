#include <stdio.h>

#define SIZE 5

// prototype declarations
void copy_arr(double target1[], double source[], int arr_len);
void copy_ptr(double *target2, double *source, int arr_len);
void copy_ptrs(double *target3, double *source_start, double *source_end);

int main(void) {
    double source[SIZE] = {2.1, 2.2, 2.3, 2.4, 2.5};
    double target1[SIZE];
    double target2[SIZE];
    double target3[SIZE];
    return 0;
}

void copy_arr(double target1[], double source[], int arr_len)
{
    for (int i = 0; i < arr_len; ++i) {
        target1[i] = source[i];
    }
}

void copy_ptr(double *target2, double*source, int arr_len)
{
    for (int i = 0; i < arr_len; ++i) {
        *(target2 + i) = *(source + i);
    }
}

void copy_ptrs(double *target3, double * source_start, double * source_end)
{
    for (double *ptr = source_start; ptr < source_end; ptr++, target3++) {
        *target3 = *ptr;
    }
}
