#include <stdio.h>

int main(void) {
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);  // ch = C, i = 67, fl = 67.00
    ch = ch + 1;
    i = fl + 2 * ch;
    fl = 2.0 * ch + i;
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);  // ch = D, i = 203, fl = 339.00
    ch = 1107;
    printf("Now ch = %c\n", ch);  // Now ch = S 1107 % 256 = 83 ==> S
    ch = 80.89;
    printf("Now ch = %c\n", ch);  // Now ch = P

    return 0;
}