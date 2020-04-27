#include <stdio.h>
#include <string.h>
#define SIZE 80
char *s_gets(char *st, int n);

int main(void)
{
    char s[SIZE] = {0};
    puts("Enter sth:");
    if (s_gets(s, SIZE)) {
        puts("You enter a string below:");
        puts(s);
    } else {
        puts("End of file encountered!");
    }

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    ret_val = fgets(st, n, stdin);
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
