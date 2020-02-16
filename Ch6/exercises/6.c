#include <stdio.h>

long square(int a);
long cube(int a);

int main(void) {
    printf("Please input integer range: ");
    int min, max;
    scanf("%d %d", &min, &max);
    for (int i = min; i <= max; ++i) {
    	printf("%5d %10ld %10ld\n", i, square(i), cube(i));
    }

    return 0;
}

long square(int a){
	return a * a;
}

long cube (int a){
	return a * a * a;
}