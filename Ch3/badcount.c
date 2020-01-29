#include <stdio.h>

int main(void) {
    int n = 4;
    int m = 5;
    float f = 7.0f;
    float g = 8.0f;

    printf("参数多一个: %d\n", n, m);
    printf("参数少两个: %d %d %d\n", n);
    printf("类型不匹配: %d %d\n", f, g);
}