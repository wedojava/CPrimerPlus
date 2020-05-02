#include <stdio.h>
#include <string.h>
#define LIMIT 50
char* mystrncpy(char* s1, char* s2, int n);
char* s_gets(char* st, int n);
void clear_string(char* st, int n);

int main(int argc, char* argv[]) {
    // char s1[LIMIT] = "s1: hello guy! this is s1 string.";
    // char s2[LIMIT] = "12345ello guy! this is s2 string.";
    // mystrncpy(s1+9, s2, 5);
    // printf("%s\n", s1);

    char s1[LIMIT];
    char s2[LIMIT];
    int n;
    printf("Enter a string to copy: ");
    s_gets(s2, LIMIT);
    while (s2[0] != '\0') {
        printf("How many char do you wanna copy? (Maximum %d) ", LIMIT);
        scanf("%d", &n);
        while (getchar() != '\n') {
            continue;
        }
        if (n > LIMIT) {
            n = LIMIT;
        }
        printf("Original string is %s\n", s2);
        mystrncpy(s1, s2, n);
        printf("Copy: %s\n", s1);
        clear_string(s1, LIMIT);
        printf("Enter a string to copy(empty line to quit): ");
        s_gets(s2, LIMIT);
    }

    return 0;
}

char* mystrncpy(char* s1, char* s2, int n) {
    int i = 0;
    while (*(s2 + i) && i < n) {
        *(s1 + i) = *(s2 + i);
        i++;
    }

    return s1;
}

char* s_gets(char* st, int n) {
    char* ret_val;
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

void clear_string(char* st, int n) {
    for (int i = 0; i < n; ++i) {
        st[i] = '\0';
    }
}
