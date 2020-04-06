// Enter set of 5 doubles: 1.1 2.2 3.3 4.4 5.5
// Enter set of 5 doubles: 0.1 0.2 0.3 0.4 0.5
// Enter set of 5 doubles: 11.1 22.2 33.3 44.4 55.5
// Data is:
//   1.100000  2.200000  3.300000  4.400000  5.500000
//   0.100000  0.200000  0.300000  0.400000  0.500000
//  11.100000 22.200000 33.300000 44.400000 55.500000
// Average every row is:
// row 1's average: 3.300000
// row 2's average: 0.300000
// row 3's average: 33.300000
// Average of all double is: 12.300000
// The max num of the arr is: 55.500000
//
// Press ENTER or type command to continue


#include <stdio.h>
#include <stdlib.h>

#define COL 5
#define ROW 3

void init_arr(int row, int col, double target[row][col]);
void pr_arr(int row, int col, double target[row][col]);
double av_arr(int num, double target[num]);
double av_all(int row, int col, double target[row][col]);
double max_num(int row, int col, double target[row][col]);

int main(void) {
    double data[ROW][COL];
    init_arr(ROW, COL, data);
    for (int i = 0; i < ROW; ++i) {
        printf("Enter set of %d doubles: ", COL);
        for (int j = 0; j < COL; ++j) {
            scanf("%lf", data[i] + j);
        }
    }
    printf("Data is:\n");
    pr_arr(ROW, COL, data);
    printf("Average every row is:\n");
    for (int i = 0; i < ROW; ++i) {
        printf("row %d's average: %lf\n", i + 1, av_arr(COL, data[i]));
    }
    printf("Average of all double is: %lf\n", av_all(ROW, COL, data));
    printf("The max num of the arr is: %lf\n", max_num(ROW, COL, data));

    return 0;
}

void init_arr(int row, int col, double target[row][col]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            target[i][j] = rand() / (double)RAND_MAX;
        }
    }
}

void pr_arr(int row, int col, double target[row][col]) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%10lf", target[i][j]);
        }
        putchar('\n');
    }
}

double av_arr(int num, double target[num]) {
    double sum = 0;
    for (int i = 0; i < num; ++i) {
        sum += target[i];
    }
    return sum / num;
}

double av_all(int row, int col, double target[row][col]) {
    double sum = 0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            sum += target[i][j];
        }
    }
    return sum / (row * col);
}

double max_num(int row, int col, double target[row][col])
{
    double max = 0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            if (max < target[i][j]) {
                max = target[i][j];
            }
        }
    }
    return max;
}
