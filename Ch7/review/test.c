#include <stdio.h>

int main(void) {
	int i = 0;
	// while (i++ < 5) {
	// 	printf("%d\n", i);
	// }

	// case 1: i == 1 
	// case 2: i == 2 
	// case 3: i == 3 
	// case 4: i == 4 
	// case 5: i == 5 
	// while (i< 5) {
	// 	switch (++i) {

	// case 0: i == 1 
	// case 1: i == 2 
	// case 2: i == 3 
	// case 3: i == 4 
	// case 4: i == 5 
	while (i < 5) {
		switch (i++) {
			case 0: printf("case 0: i == %d ", i);
			break;
			case 1: printf("case 1: i == %d ", i);
			break;
			case 2: printf("case 2: i == %d ", i);
			break;
			case 3: printf("case 3: i == %d ", i);
			break;
			case 4: printf("case 4: i == %d ", i);
			break;
			case 5: printf("case 5: i == %d ", i);
			break;
		}
		printf("\n");
	}
	

    return 0;
}