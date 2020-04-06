#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 5

// prototype declarations
void init_arr(int sizen, int sizem, double target[sizen][sizem]);
void copy_arr_d(int sizen, int sizem, double source[sizen][sizem], double target[sizen][sizem]);
void print_arr_d(int sizen, int sizem, double source[sizen][sizem]);

int main(void) {
    double source[N][M] = {};
    double target[N][M] = {};
    init_arr(N, M, source);
    printf("source:\n");
    print_arr_d(N, M, source);
    copy_arr_d(N, M, source, target);
    printf("target:\n");
    print_arr_d(N, M, target);
    return 0;
}

void init_arr(int sizen, int sizem, double target[sizen][sizem]) {
    for (int i = 0; i < sizen; ++i) {
        for (int j = 0; j < sizem; ++j) {
            target[i][j] = rand() / (double)RAND_MAX;
        }
    }
}

void print_arr_d(int sizen, int sizem, double source[sizen][sizem]) {
    for (int i = 0; i < sizen; ++i) {
        for (int j = 0; j < sizem; ++j) {
            printf("%5.1f", source[i][j]);
        }
        putchar('\n');
    }
}

void copy_arr_d(int sizen, int sizem, double source[sizen][sizem], double target[sizen][sizem])
{
    for (int i = 0; i < sizen; ++i) {
        for (int j = 0; j < sizem; ++j) {
            target[i][j] = source[i][j];
        }
    }
}
