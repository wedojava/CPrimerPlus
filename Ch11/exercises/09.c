#include <stdio.h>
#define LIMIT 20
void reverse(char *st);
char *s_gets(char *st, int n);

int main(void) {
    char str[LIMIT];
    printf("Enter a string: ");
    s_gets(str, LIMIT);
    while (str[0] != '\0') {
        reverse(str);
        printf("%s is the reversed string!\n", str);
        printf("\nEnter a string again to reverse(empty line to quit):\n");
        s_gets(str, LIMIT);
    }
    return 0;
}

void reverse(char *st) {
    char *end;
    char tmp;
    end = st;
    // Get the end ptr of the string.
    // if a string's actual length is 10 then it used 11 bytes, because of '\0'
    while (*(end + 1) != '\0') {
        end++;
    }

    while (st < end) {
        tmp = *st;
        *st = *end;
        *end = tmp;
        st++;
        end--;
    }
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
