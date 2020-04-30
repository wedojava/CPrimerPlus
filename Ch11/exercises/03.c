#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#define SIZE 81
char *s_getw(char *str);

int main(void) {
    char a[81] = "Hi there, ";
    printf("Enter your nickname:\n");
    s_getw(a + 10);
    puts(a);

    return 0;
}

char *s_getw(char *str) {
    char ch;
    int i = 0;
    bool inword = false;
    // ch is space and in word => go out, it's the last char of word
    // ch is space and not in word => skip it, out of the point.
    // ch is not space and in word => great, do the action.
    // ch is not space and not in word => can be ommit.
    while ((ch = getchar()) != EOF && ch != '\n') {
        if (isspace(ch)) {
            if (inword) {
                inword = false;
                break;
            } else {
                inword = false;
                continue;
            }
        } else {
            inword = true;
            if (inword) {
                *(str + i) = ch;
                i++;
            } else {
                continue;
            }
        }
    }

    return str;
}

