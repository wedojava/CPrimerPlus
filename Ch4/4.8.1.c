#include <stdio.h>

int main(void) {
    char fname[40];
    char lname[40];

    printf("Please input your First Name: ");
    scanf("%s", fname);
    printf("Please input your Last Name: ");
    scanf("%s", lname);
    printf("Your Full Name is: %s %s\n", fname, lname);

    return 0;
}