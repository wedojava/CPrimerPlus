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
    while ((ch = getchar()) != EOF && ch != '\0' && ch != '\n' && ch != '\t' &&
           n > 0) {
        *(str++) = ch;
        n--;
    }
    // for (int i = 0; i < n; ++i) {
    //     if ((ch = getchar()) == EOF || ch == '\0' || ch == '\t' || ch ==
    //     '\n') {
    //         break;
    //     }
    //     *(str++) = ch;
    // }

    return str;
}
