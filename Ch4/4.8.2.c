#include <stdio.h>
#include <string.h>

int main(void) {
	char fname[40];
    char lname[40];

    printf("Please input your First Name: ");
    scanf("%s", fname);
    printf("Please input your Last Name: ");
    scanf("%s", lname);
    printf("Your Full Name is: %s %s\n", fname, lname);

    int f_length = strlen(fname);
    int l_length = strlen(lname);
	
    printf("Your Name: |\"%s %s\"|\n", fname, lname);
    printf("Your Name: |\"%20s %20s\"|\n", fname, lname);
    printf("Your Name: |\"%-20s %-20s\"|\n", fname, lname);
    printf("Your Name: |\"%*s %*s\"|\n", f_length+3, fname, l_length+3, lname);

    return 0;
}