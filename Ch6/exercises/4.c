#include <stdio.h>

int main(void) {
	char c = 'A';
    for (int i = 0; i < 6; ++i)
    {
    	c += i;
    	for (int j = 0; j < i + 1; ++j) {
    		printf("%c", c + j);
    	}
    	printf("\n");
    }

    return 0;
}