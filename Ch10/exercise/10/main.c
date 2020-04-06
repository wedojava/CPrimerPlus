#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

// prototype declarations
void init_arr(double arr[], int size);
void pr_arr(double arr[], int size);
void sum_arr(double arr1[], double arr2[], double sum[], int size);

int main(void)
{
    double a[SIZE], b[SIZE], sum[SIZE];
    init_arr(a, SIZE);
    init_arr(b, SIZE);
    printf("array a:\n");
    pr_arr(a, SIZE);
    printf("array b:\n");
    pr_arr(b, SIZE);
    sum_arr(a, b, sum, SIZE);
    printf("sum of a and b is:\n");
    pr_arr(sum, SIZE);
    return 0;
}

void init_arr(double arr[], int size)
{
    for (int i = 0; i < size; ++i) {
            arr[i] = rand() / (double)RAND_MAX;
    }
}

void pr_arr(double arr[], int size)
{
    for (int i = 0; i < size; ++i) {
        printf("%5.2f", arr[i]);
    }
    putchar('\n');
}

void sum_arr(double arr1[], double arr2[], double sum[], int size)
{
    for (int i = 0; i < size; ++i) {
        sum[i] = arr1[i] + arr2[i];
    }
}
