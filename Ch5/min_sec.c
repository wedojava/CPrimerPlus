#include <stdio.h>

#ifndef SEC_PER_MIN
#define SEC_PER_MIN 60  // 1min = 60 sec
#endif

int main(void) {
	int sec, min, left;

	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf("%d", &sec);
	while(sec > 0) {
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d", &sec);
	}
	printf("Done!\n");

    return 0;
}