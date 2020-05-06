// Compile: gcc -o 14.c 14.out -lm
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void pr_usage();

int main(int argc, char *argv[]) {
    double b;
    long p;
    char *end;
    if (argc != 3) {
        pr_usage();
        return 1;
    }
    end = argv[1];
    while (*end != '\0') {
        end++;
    }
    b = strtod(argv[1], &end);
    if (*end) {
        pr_usage();
        return 1;
    }

    end = argv[2];
    while (*end != '\0') {
        end++;
    }
    if (*end) {
        pr_usage();
        return 1;
    }
    p = strtol(argv[2], &end, 10);

    printf("%f ^ %ld = %f\n", b, p, pow(b, p));

    return 0;
}

void pr_usage() {
    puts("Usage: <program_name> <arg1 base:double> <arg2 power:int>");
}
