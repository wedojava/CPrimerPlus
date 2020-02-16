#include <stdio.h>

long compute(int a, int b);

int main(void) {
	int a, b, s;
    printf("Enter lower and upper integer limits (q to quit): ");
    s = scanf("%d %d", &a, &b);
    while(s && a <= b){
    	printf("The sums of the squares from %d to %d is %ld\n", a, b, compute(a, b));
    	printf("Enter next set of limits (q to quit): ");
    	s = scanf("%d %d", &a, &b);
    }

    return 0;
}

long compute(int a, int b) {
	long ret = 0;
	for (int i = a; i <= b; ++i) {
		ret += i * i;
	}
	return ret;
}