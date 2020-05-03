#include <stdio.h>
#define LIMIT 51
char *s_gets(char *st, int n);
char *string_in(char *s1, char *s2);

int main(void) {
    char s1[LIMIT];
    char s2[LIMIT];
    printf("Enter a string:\n");
    s_gets(s1, LIMIT);
    printf("Enter a string again:\n");
    s_gets(s2, LIMIT);
    char *a = string_in(s1, s2);
    if (a) {
        printf("s2 is in s1\n");
    }
    return 0;
}

char *string_in(char *s1, char *s2) {
    char *ret_val;
    while (*s1 != *s2) {  // Find out the start of s2 in s1
        s1++;
    }
    if (*s1 == *s2) {
        ret_val = s1;  // Save the index address in s1
    }
    while (*s1 == *s2) {  // If the same after first match
        s1++;
        s2++;
    }
    if (*s2 ==
        '\0') {  // If compare until the end of s2, *s1 == *s2 means matched.
        return ret_val;
    }
    ret_val = NULL;

    return ret_val;
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
            while (*st != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}
