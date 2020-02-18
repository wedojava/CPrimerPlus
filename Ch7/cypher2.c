#include <ctype.h>
#include <stdio.h>

int main(void) {
    char ch;

    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            putchar(ch + 1);
        } else {
            putchar(ch);
        }
    }
    putchar(ch); // this ch explicitly is '\n'

    return 0;
}