#include <stdio.h>

int main(void) {
	char c;
    printf("Please input a character: ");
    scanf("%c", &c);
    int count = (c - 'A') + 1;

    for (int i = 0; i < count; ++i)
    {
    	for (int j1 = 1; j1 < count - i; ++j1)
    	{
    		printf(" ");
    	}
    	for (int j2 = 0; j2 < i + 1; ++j2)
    	{
    		printf("%c", 'A' + j2);
    	}
    	for (int j3 = i; j3 > 0; --j3) {
    		printf("%c", 'A' + j3 - 1);
    	}
    	printf("\n");
    }

    return 0;
}