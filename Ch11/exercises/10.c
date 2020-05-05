#include <stdio.h>
#define LIMIT 20
void strtrim(char *str);
char *s_gets(char *st, int n);

int main(void) {
    char str[LIMIT];
    printf("Enter a string:\n");
    s_gets(str, LIMIT);
    while (str[0] != '\0') {
        strtrim(str);
        printf("Your enter string space trimed: %s\n", str);
        printf("Enter a string again(empty line to quit)\n");
        s_gets(str, LIMIT);
    }
    return 0;
}

void strtrim(char *str) {
    unsigned long space = 0;
    while (*str != '\n') {
        if (*str == ' ') {
            space++;
        } else {
            *(str - space) = *str;
        }
        if (*str == '\0') {
            break;
        }
        str++;
    }
}

char *s_gets(char *st, int n) {
    char *ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (*st != '\n' && *st != '\0') {
            st++;
        }
        if (*st == '\n') {
            *st = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }

    return ret_val;
}
