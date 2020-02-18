#include <stdio.h>
#include <string.h>

int main(void) {
    char ch;
    char s[255] = { 0 };
    int count = 0;
    for (int i = 0; (ch = getchar()) != '#'; ++i) {
    	s[i] = ch;
    }
    for (int i = 0; i < strlen(s) - 1; i++) {
    	if (i % 8 == 0)
    		putchar('\n');
    	printf(" %5d ", s[i]);
    }

    return 0;
}