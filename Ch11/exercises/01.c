#include <stdio.h>
char* get_in(char* str, int n);

int main(void) {
    char strin[20] = {0};
    printf("For get string from stdin test, enter sth:\n");
    get_in(strin, 10);
    printf("your input string is below:\n");
    puts(strin);

    return 0;
}

char* get_in(char* str, int n) {
    char ch;
    for (int i = 0; i < n; ++i) {
        if ((ch = getchar()) == EOF) {
            break;
        }
        *(str++) = ch;
        // OR blow line is ok.
        // *(str + i) = ch;
        // *(++str) = ch; But, this line cannot work, because it start at str[1]
    }

    return str;
}
