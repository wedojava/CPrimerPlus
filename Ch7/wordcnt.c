#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#ifndef STOP
#define STOP '|'
#endif

int main(void) {
    char c;               // get one char
    char prev;            // get one char before
    long n_chars = 0L;    // char count
    int n_lines = 0;      // line count
    int n_words = 0;      // word count
    int p_lines = 0;      // halfed line count
    bool inword = false;  // inword is true while c in word

    printf("Enter text to be analyzed (| to terminate):\n");
    prev = '\n';  // to identify a whole line

    while ((c = getchar()) != STOP) {
        n_chars++;  // char count
        if (c == '\n') {
            n_lines++;  // line count
        }
        if (!isspace(c) && !inword) {
            inword = true;  // start a new word
            n_words++;
        }
        if (isspace(c) && inword) {
            inword = false;  // at the end of the word
        }
        prev = c;  // save the value of c
    }

    if (prev != '\n') p_lines = 1;
    printf("characters = %ld, words = %d, lines = %d, ", n_chars, n_words,
           n_lines);
    printf("partial lines = %d\n", p_lines);

    return 0;
}