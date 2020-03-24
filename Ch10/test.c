#include <stdio.h>
#define SIZE 5

int main(void) {
    int oxen[SIZE] = {5, 3, 2, 8};
    int yaks[SIZE];

    // yaks = oxen;
    yaks[SIZE] = oxen[SIZE];
    // yaks[SIZE] = {5, 3, 2, 8};

    // page 316-3
    int ref[] = {8, 4, 0, 2};
    int* ptr;
    int index;
    for (index = 0, ptr = ref; index < 4; ++index, ptr++) {
        printf("%d %d\n", ref[index], *ptr);
        printf("%p %p\n", ref+1, ref++);
    }

    return 0;
}
