#include <stdio.h>

int main(void) {
    int f = 5;
    for (int i = 1; f < 150; ++i)
    {
    	f = (f - i) * 2;
    	printf("%d weeks ago, %i fridents left.\n", i, f);
    }

    return 0;
}