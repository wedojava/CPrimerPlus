/** compute factor number, show days of months. */
#include <stdio.h>

int main(void)
{
    const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;
    printf("%lu\n", sizeof days[0]);
    // sizeof days == 48, sizeof days[0] == 4, sizeof days[1] == 4
    // p44: 目前个人计算机一般是 32 位, 因此用 32 位存储一个 int 值, 所以 sizeof days[0] == 4
    for (index = 0; index < sizeof days / sizeof days[0]; ++index) {
        printf("Month %2d has %d days.\n", index + 1, days[index]);
    }

    return 0;
}
