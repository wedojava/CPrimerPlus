// Enter a string, please.
// qwertyuiop
// Your string twice (puts(), then fputs()):
// qwertyuiop
//
// qwertyuiop
// Enter another string, please.
// 123456789012345678901234567890
// Your string twice (puts(), then fputs()):
// 1234567890123
// 1234567890123Done.
//
// Press ENTER or type command to continue
#include <stdio.h>

#define STLEN 14

int main(void) {
    char words[STLEN];

    puts("Enter a string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");

    return 0;
}
