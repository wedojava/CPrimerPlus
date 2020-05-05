#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define COUNT 10
#define LIMIT 51

void sort_ASCII(char *strings[], int n);
void sort_length(char *strings[], int n);
int fwlen(char *string);
void sort_firstword_length(char *strings[], int n);
char *s_gets(char *st, int n);
void pr_menu(void);

int main(void) {
    char strings[COUNT][LIMIT];
    char *strptrs[COUNT];
    char *success;
    char ch;
    // initialize array of pointers
    for (int i = 0; i < COUNT; ++i) {
        strptrs[i] = strings[i];
    }

    printf("Enter up to 10 strings (EOF to stop): \n");

    // read up to 10 strings from input
    for (int i = 0; i < COUNT; ++i) {
        printf("%d: ", i + 1);
        success = s_gets(strings[i], LIMIT);
        if (!success) {
            break;
        }
    }
    printf("\n");
    pr_menu();
    while ((ch = getchar()) != 'q') {
        // discard rest of the line
        if (ch != '\n') {
            while (getchar() != '\n') {
                continue;
            }
        }

        // sort strings
        switch (ch) {
            case ('a'):
                sort_ASCII(strptrs, COUNT);
                break;
            case ('l'):
                sort_length(strptrs, COUNT);
                break;
            case ('f'):
                sort_firstword_length(strptrs, COUNT);
                break;
            case ('o'):
                break;
            default:
                printf("Invalid input. Try again.\n\n");
                pr_menu();
                continue;
        }

        puts("");
        for (int i = 0; i < COUNT; ++i) {
            puts(strptrs[i]);
        }
        puts("");
        pr_menu();
    }
    puts("BYE!");

    return 0;
}

char *s_gets(char *st, int n) {
    char *ret_val;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (*st != '\n' && *st != '\0') {
            st++;
        }
        if (*st == '\n') {
            *st = '\0';
        }
    }

    return ret_val;
}

void pr_menu() {
    puts("Choose a option:");
    puts("(o) Print strings in original order.");
    puts("(a) Print strings in ASCII collating sequence.");
    puts("(l) Print strings ordered by length.");
    puts("(f) Print strings ordered by length of the first word.");
    puts("(q) Quit.");
    puts("");
    puts("Enter a character: ");
}

void sort_ASCII(char *strings[], int n) {
    char *tmp;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(strings[i], strings[j]) > 0) {
                tmp = strings[i];
                strings[i] = strings[j];
                strings[j] = tmp;
            }
        }
    }
}

void sort_length(char *strings[], int n) {
    char *tmp;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (strlen(strings[i]) > strlen(strings[j])) {
                tmp = strings[i];
                strings[i] = strings[j];
                strings[j] = tmp;
            }
        }
    }
}

int fwlen(char *string) {
    int length = 0;
    while (isspace(*string)) {
        string++;
    }
    while (!isspace(*string)) {
        length++;
        string++;
    }
    return length;
}

void sort_firstword_length(char *strings[], int n) {
    char *tmp;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (fwlen(strings[i]) > fwlen(strings[j])) {
                tmp = strings[i];
                strings[i] = strings[j];
                strings[j] = tmp;
            }
        }
    }
}
