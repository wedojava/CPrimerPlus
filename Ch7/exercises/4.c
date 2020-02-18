#include <stdio.h>

int main(void) {
    // method 1
    char ch, r[100];
    int count = 0, i = 0;
    while ((ch = getchar()) != '#') {
        if (ch == '.') {
            r[i] = '!';
            ++i;
            ++count;
        } else if (ch == '!') {
            r[i] = r[i + 1] = '!';
            ++i;
            ++i;
            ++count;
        } else {
            r[i] = ch;
            ++i;
        }
    }
    printf("Replace %d times\n", count);
    printf("Result: \n%s\n", r);

    /** method 2
    char ch;
    int count = 0;
    while ((ch = getchar()) != '#'){
        if(ch == '.'){
            ch = '!';
            count++;
        } else if (ch == '!'){
            printf("%c");
            count++;
        }
        printf("%c",ch);
    }
    printf("Number:%d",count);
    return 0;
    */

    return 0;
}