#include <stdio.h>

int main(void) {
    // char c[27] = "abcdefghijklmnopqrstuvwxyz";
    // printf("%s\n", c);

    char c[27] = "";  // have to init there.
    for (int i = 0; i < 26; ++i)
    {
    	c[i] += 'a' + i;
    }
    for (int j = 0; j < 26; ++j)
    {
    	printf("%c", c[j]);
    }

    return 0;
}