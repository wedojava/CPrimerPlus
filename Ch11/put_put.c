#include <stdio.h>
void put1(const char* string);
int put2(const char* string);

int main(void) {
    put1("0987654321poiuytrewqlkjhgfdsamnbvcxz';/.,");
    int i = put2("0987654321poiuytrewqlkjhgfdsamnbvcxz';/.,");
    printf("%d\n", i);

    return 0;
}

void put1(const char* string) {
    while (*string != '\0') {
        putchar(*string++);
    }
}

int put2(const char* string) {
    int count = 0;
    while (*string) {
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return (count);
}
