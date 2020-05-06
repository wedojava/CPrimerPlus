#include <ctype.h>
#include <stdio.h>
int my_atoi(char *str);

int main(int argc, char *argv[]) {
    int input;
    if (argc != 2) {
        puts("Usage: <program_name> <arg1>");
        return 1;
    }
    input = my_atoi(argv[1]);
    printf("%d + 5 = %d\n", input, input + 5);
    printf("%d ÷ 2 = %d\n", input, input / 2);
    printf("%d %% 3 = %d\n", input, input % 3);

    return 0;
}

int my_atoi(char *str) {
    int total = 0;
    while (*str != 0) {
        if (!isdigit(*str)) {
            return 0;
        } else {
            total *= 10;
            total += *str - '0';
        }
        str++;
    }

    return total;
}
