#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#define LIMIT 51

int main(void) {
    char ch;
    bool inword;
    int w, up_c, low_c, punct, d;
    w = up_c = low_c = punct = d = 0;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            if (!inword) {
                inword = true;
                w++;
            }
            if (isupper(ch)) {
                up_c++;
            }
            if (islower(ch)) {
                low_c++;
            }
        } else if (isdigit(ch)) {
            d++;
            inword = false;
        } else if (ispunct(ch)) {
            punct++;
            if (ch != '-' && ch != '\'') {
                inword = false;
            }
        } else if (isspace(ch)) {
            inword = false;
        }
    }
    printf("Number of %s: %d\n", "lowercase letters", low_c);
    printf("Number of %s: %d\n", "uppercase letters", up_c);
    printf("Number of %s: %d\n", "punctuation characters", punct);
    printf("Number of %s: %d\n", "digits", d);
    printf("Number of %s: %d\n", "words", w);

    return 0;
}
