#include <stdbool.h>
#include <stdio.h>
#define LIMIT 51
char *s_gets(char *st, int n);
char *string_in(char *s1, char *s2);

int main(void) {
    char s1[LIMIT];
    char s2[LIMIT];
    printf("[!]Enter a string:\n");
    s_gets(s1, LIMIT);
    while (s2[0] != '\0') {
        printf("[?] Enter a string to test(empty line to quit):\n");
        s_gets(s2, LIMIT);
        char *a = string_in(s1, s2);
        if (a) {
            printf("[+] s2 is in s1\n");
        } else {
            printf("[-] s2 is NOT in s1\n");
        }
    }
    return 0;
}

char *string_in(char *s1, char *s2) {
    int i;
    while (*s1 != '\0') {
        i = 0;
        while (*(s1 + i) == *(s2 + i)) {
            i++;
            if (*(s2 + i) == '\0') {
                return s1;
            }
        }
        s1++;
    }
    return NULL;
}

char *s_gets(char *st, int n) {
    char *ret_val;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (*st != '\n' && *st != '\0') {
            st++;
        }
        if (*st == '\n') {
            *st = '\0';
        } else {
            // enter a empty new line will exit the method.
            while (*st != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}
