#include <stdio.h>
int mystrlen(char * str);

int main(void)
{
    printf("strtest's length is %d.\n", mystrlen("strtest"));
    return 0;
}

int mystrlen(char * str)
{
    int c = 0;
    while (*str++ != '\0') {
        c++;
    }
    return c;
}
