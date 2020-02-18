#include <stdio.h>

int main(void) {
    char ch;
    int count;
    while ((ch = getchar()) != '#') {
        switch (ch) {
            case '.':
                printf("!");
                ++count;
                break;
            case '!':
                printf("!!");
                ++count;
                break;
            default:
                putchar(ch);
        }
    }
    printf("\nReplaced %d times!\n", count);

    return 0;
}