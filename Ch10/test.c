#include <stdio.h>
#define SIZE 5

int main(void) {
    int oxen[SIZE] = {5, 3, 2, 8};
    int yaks[SIZE];

    // yaks = oxen;
    yaks[SIZE] = oxen[SIZE];
    // yaks[SIZE] = {5, 3, 2, 8};
    return 0;
}
