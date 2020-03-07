#include <stdio.h>

void interchange(int* u, int* v);

int main(void) {
    int x = 5, y = 10;
    printf("Originaly x = %d and y = %d.\n", x, y);
    interchange(&x, &y);
    printf("Now x = %d and y = %d.\n", x, y);

    return 0;
}

void interchange(int* u, int* v) {
    int tmp;
    tmp = *u;
    *u = *v;
    *v = tmp;
}
