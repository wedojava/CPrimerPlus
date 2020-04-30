#include <stdio.h>
char* my_strchr(char* str, char ch);

int main(void) {
    char* a = my_strchr("abcdefghigklmnopqrstuvwxyz", 'a');
    if (a) {
        printf("`a` was found out and `%c` is the after char.\n", *(a + 1));
    } else {
        printf("there is no `a` in the string.\n");
    }
    return 0;
}

char* my_strchr(char* str, char ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return str;
        }
        str++;
    }

    return NULL;
}
