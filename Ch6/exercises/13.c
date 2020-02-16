#include <stdio.h>

int main(void) {
    int s[8], index;
    for (int i = 0; i <= 8; ++i)
    {
    	s[i] = 2 << i;
    }
    do{
    	printf("%d ", s[index]);
    	++index;
    }while(index < 8);

    return 0;
}