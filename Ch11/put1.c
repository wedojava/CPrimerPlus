#include <stdio.h>
void put1(const char* string);

int main(void) {
    put1("0987654321poiuytrewqlkjhgfdsamnbvcxz';/.,");
    return 0;
}

void put1(const char* string) {
    while (*string != '\0') {
        putchar(*string++);
    }
}
