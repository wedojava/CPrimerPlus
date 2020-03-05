#include <stdio.h>

char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void) {
    int choice;

    while ((choice = get_choice()) != 'q') {
        switch (choice) {
            case 'a':
                printf("Buy low, sell high.\n");
                break;
            case 'b':
                putchar('\a'); /* ANSI */
                break;
            case 'c':
                count();
                break;
            default:
                printf("Program error!\n");
                break;
        }
    }

    return 0;
}

char get_choice(void) {
    int ch;
    printf("Enter the letter of your choice:\n");
    printf("a. advice       b. bell\n");
    printf("c. count        q. quit\n");
    ch = get_first();
    while ((ch < 'a' || ch > 'c') && ch != 'q') {
        printf("Please respond with a, b, c, or q.\n");
        ch = get_first();
    }
    return ch;
}

void count(void) {
    int n, i;
    printf("Count how far? Enter an integer: ");
    n = get_int();
    for (i = 1; i <= n; ++i) {
        printf("%d\n", i);
    }
    while (getchar() != '\n') {
        continue;
    }
}

char get_first(void) {
    int ch;
    do {
        ch = getchar();
    } while (ch == '\n' || ch == ' ' || ch == '\t' || ch == '\r');
    while (getchar() != '\n') {
        continue; /** 跳过剩下的内容 */
    }
    return ch;
}

int get_int(void) {
    int input;
    char ch;

    while (scanf("%d", &input) != 1) {
        while ((ch = getchar()) != '\n') {
            putchar(ch); /**  处理错误输出 */
        }
        printf(
            " is not an integer.\nPlease enter an "
            "integer value, such as 25, -178, or 3: ");
    }
    return input;
}
