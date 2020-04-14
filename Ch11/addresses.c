
// || address of "I'm special": 0x1039aaf2c
// ||               address ar: 0x7ffeec254c98
// ||               address pt: 0x1039aaf2c
// ||           address of MSG: 0x1039aaf2c
// || address of "I'm special": 0x1039aaf2c
#include <stdio.h>

#define MSG "I'm special"

int main(void)
{
    char ar[] = MSG;
    const char *pt = MSG;
    printf("address of \"I'm special\": %p \n", "I'm special");
    printf("              address ar: %p \n", ar);
    printf("              address pt: %p \n", pt);
    printf("          address of MSG: %p \n", MSG);
    printf("address of \"I'm special\": %p \n", "I'm special");

    printf("-----------------------------------------\n");
    char *p1 = "Klingon";
    // p1[0] = 'F';
    printf("Klingon");
    printf(": Beware the %ss\n", "Klingon");

    return 0;
}
