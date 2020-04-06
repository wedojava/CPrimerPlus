#include <stdio.h>
#include <stdlib.h>

#define COL 5
#define ROW 3

// prototype declarations
void init_arr(int row, int col, int target[row][col]);
void pr_arr(int row, int col, int target[row][col]);
void double_arr(int row, int col, int target[row][col]);

int main(void) {
    int a[ROW][COL] = {0};
    init_arr(ROW, COL, a);
    pr_arr(ROW, COL, a);
    for (int i = 0; i < 50; ++i) {
        putchar('-');
    }
    putchar('\n');
    double_arr(ROW, COL, a);
    pr_arr(ROW, COL, a);

    return 0;
}

void init_arr(int row, int col, int target[row][col]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            target[i][j] = rand();
        }
    }
}

void pr_arr(int row, int col, int target[row][col]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%15d", target[i][j]);
        }
        putchar('\n');
    }
}

void double_arr(int row, int col, int target[row][col]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            target[i][j] *= 2;
        }
    }
}
