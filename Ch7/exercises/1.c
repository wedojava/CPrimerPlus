#include <stdio.h>

int main(void) {
    char ch;
    int space, n, others;
    space = n = others = 0;
    printf("Enter anything exit via `#`:\n");
    while ((ch = getchar()) != '#') {
    	switch (ch) {
    		case ' ': ++space;
    		break;
    		case '\n': ++n;
    		break;
    		default: ++others;
    		break;
    	}
    }
    printf(" - Space: %d\n - `\\n`: %d\n - Other chars: %d", space, n, others);

    return 0;
}