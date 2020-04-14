// Press ENTER or type command to continue
// Enter strings (empty line to quit):
// 12345678901234567890
// 12345678901234567890
//
// Done.
//
// Press ENTER or type command to continue
#include <stdio.h>

#define STLEN 10

int main(void) {
    char words[STLEN];

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n') {
        fputs(words, stdout);
    }
    puts("Done.");

    return 0;
}
