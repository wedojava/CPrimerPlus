#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        for (int i = 1; i < argc; ++i) {
            printf("%s", argv[argc - i]);
        }
    }
    return 0;
}
