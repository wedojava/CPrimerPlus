#include <stdio.h>
#include <string.h>

int main(void) {
	char s[200];
    printf("Enter sth:\n");
    scanf("%s", s);
    for (int i = strlen(s); i >= 0; --i)
    {
    	printf("%c", s[i]);
    }
    return 0;
}