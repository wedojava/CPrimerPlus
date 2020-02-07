#include <stdio.h>
#include <string.h>

int main(void) {
    char fname[40], lname[40];
    int fnamelen, lnamelen;

    printf("Please input your First name: ");
    scanf("%s", fname);
    printf("And your Last name: ");
    scanf("%s", lname);

    fnamelen = strlen(fname);
    lnamelen = strlen(lname);

    printf("%s %s\n%*d %*d\n", fname, lname, fnamelen, fnamelen, lnamelen, lnamelen);
    printf("%s %s\n%-*d %-*d\n", fname, lname, fnamelen, fnamelen, lnamelen, lnamelen);

    return 0;
}