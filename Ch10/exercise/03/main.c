#include <stdio.h>

#define SIZE 5

int max(int n[]);

int main(void)
{
    int test[SIZE] = {2, 3, 55, 1, 0};
    if (55 == max(test)) {
        printf("Right, the max num of array is %d!", 55);
    } else {
        printf("Opps, bad!");
    }

    return 0;
}

int max(int n[])
{
    int m = 0;
    for (int i = 0; i < SIZE; ++i) {
        if (m < n[i]) {
            m = n[i];
        }
    }
    return m;
}
