#include <ctype.h>
#include <stdio.h>
void map_identify();
void map_uppercase();
void map_lowercase();

int main(int argc, char *argv[]) {
    if (argc == 1) map_identify();
    if (argc > 2 || (argc == 2 && argv[1][0] != '-')) {
        printf("Usage: program_name [-p | -l | -u]\n");
        return 1;
    } else {
        switch (argv[1][1]) {
            case 'p':
                map_identify();
                break;
            case 'u':
                map_uppercase();
                break;
            case 'l':
                map_lowercase();
                break;
            default:
                printf("Usage: program_name [-p | -l | -u]\n");
                return 1;
        }
    }
    return 0;
}

void map_identify() {
    char ch;
    while ((ch = getchar()) != EOF) putchar(ch);
}

void map_uppercase() {
    char ch;
    while ((ch = getchar()) != EOF) {
        if (islower(ch)) ch = toupper(ch);
        putchar(ch);
    }
}

void map_lowercase() {
    char ch;
    while ((ch = getchar()) != EOF) {
        if (isupper(ch)) ch = tolower(ch);
        putchar(ch);
    }
}
