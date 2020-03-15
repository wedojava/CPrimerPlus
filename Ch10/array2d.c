// Output:
// || row 0: sum = 20
// || row 1: sum = 24
// || row 2: sum = 36
// || col 0: sum = 17
// || col 1: sum = 19
// || col 2: sum = 21
// || col 3: sum = 23
// || Sum of all elements = 80

#include <stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int [][COLS], int);  // implicit declaration is invalid in C99
int sum2d(int(*ar)[COLS], int rows);
int main(void)
{
    int junk[ROWS][COLS] = {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6}
    };

    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    printf("Sum of all elements = %d\n", sum2d(junk, ROWS));
    return 0;
}

void sum_rows(int ar[][COLS], int rows)
{
    int r, c, tot;
    for (r = 0; r < rows; ++r) {
        tot = 0;
        for (c = 0; c < COLS; ++c) {
            tot += ar[r][c];
        }
        printf("row %d: sum = %d\n", r, tot);
    }
}

void sum_cols(int ar[][COLS], int rows)
{
    int r, c, tot;
    for (c = 0; c < COLS; ++c) {
        tot = 0;
        for (r = 0; r < rows; ++r) {
            tot += ar[r][c];
        }
        printf("col %d: sum = %d\n", c, tot);
    }
}

int sum2d(int ar[][COLS], int rows)
{
    int r, c, tot = 0;
    for (r = 0; r < rows; ++r) {
        for (c = 0; c < COLS; ++c) {
            tot += ar[r][c];
        }
    }
    return tot;
}
