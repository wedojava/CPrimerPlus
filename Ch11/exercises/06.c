#include <stdio.h>
#include <string.h>
#define LIM 50
int is_within(char ch, const char* str);
char* get(char* st, int n);
char* get1(char* st, int n);

int main(void) {
    char str[LIM];
    char ch;
    printf("Enter a string to search:\n");
    get(str, LIM);
    while (str[0] != '\0') {
        printf("Enter a character to search for:\n");
        ch = getchar();
        if (ch != '\n') {
        }
    }

    return 0;
}

char* get(char* st, int n) {
    char* ret = fgets(st, n, stdin);
    while (*st != '\0') {
        if (*st == '\n') {
            *st = '\0';
            break;
        }
        st++;
    }
    return ret;
}

char* get1(char* st, int n) {
    char* ret_val;
    char* find;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find) {
            *find = '\0';
        } else {
            // double \n to quit.
            while (getchar() != '\n') {
                continue;
            }
        }
    }

    return ret_val;
}

int is_within(char ch, const char* str) {
    while (*str != '\0') {
        if (*str == ch) {
            return 1;
        }
        str++;
    }
    return 0;
}
