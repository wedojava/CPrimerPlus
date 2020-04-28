#include <stdio.h>
#include <string.h>
char *findchar(const char *str, char key);

int main(void) {
    char *a = findchar("abcd efgh,test!", ' ');
    if (a) {
        printf("Find out charactor `%c` is after `%c`!\n", ' ', *(--a));
    }

    return 0;
}

char *findchar(const char *str, char key) {
    while (*str != key && *str != '\0') {
        str++;
    }
    if (*str == '\0') {
        return NULL;
    } else {
        return (char *)str;
    }
}
