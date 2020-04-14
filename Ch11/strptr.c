#include <stdio.h>

int main(void) {
    printf("%s, %p, %c\n", "We", "are", *"space farers"); // We, 0x109f3dfa9, s

    return 0;
}
