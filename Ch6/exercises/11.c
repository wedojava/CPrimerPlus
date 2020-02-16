#include <stdio.h>

int main(void) {
    int s[9];
    printf("Please input ten integer numbers: \n");
    for (int i = 0; i < 8; ++i)
    {
    	scanf("%d", &s[i]);
    }
    for (int i = 7; i >= 0; --i)
    {
    	printf("%d ", s[i]);
    }

    return 0;
}