#include <stdio.h>
#include <stdbool.h>

int main(void) {
    char ch;
    int count = 0;
    bool inword = false;
    printf("Enter anything exit via `#`:\n");
    while ((ch = getchar()) != '#') {
        if (ch == 'e' && !inword) {
            inword = true;
        }
        if (ch == 'i' && inword) {
            ++count;
            inword = false;
        }
    }
    printf("%d\n", count );
        

    return 0;
}
