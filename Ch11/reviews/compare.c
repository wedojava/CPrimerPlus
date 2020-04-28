#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define ANSWER "GRANT"
#define SIZE 40
char* s_gets(char* st, int n);
void ToUpper(char* str);

int main(void) {
    char try
        [SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    ToUpper(try);
    while (strcmp(try, ANSWER) != 0) {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
        ToUpper(try);
    }
    puts("That's right!");

    return 0;
}

char* s_gets(char* st, int n) {
    char* ret_val;
    char* find;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n');
        if (find) {
            *find = '\0';
        } else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }

    return ret_val;
}

void ToUpper(char* str) {
    while (*str != '\0') {
        *str = toupper(*str);
        str++;
    }
}
