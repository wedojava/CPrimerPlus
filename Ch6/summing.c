#include <stdio.h>

int main(void) {
    long num, sum;
    int status = 1;

    // Method 1
    // printf("Please enter an integer to be summed ");
    // printf("(q to quit): ");
    // status = scanf("%ld", &num);
    // sum = 0L;
    // while(status == 1) {
    // 	sum += num;
    // 	printf("Please enter next integer (q to quit): ");
    // 	status = scanf("%ld", &num);
    // }
    // printf("Those integers sum to %ld.\n", sum);

    // Method 2
    // num = sum = 0L;
    // for (printf("Please enter an integer to be summed (q to quit): "); status == 1;
    // 	printf("Please enter next integer (q to quit): ")){
    // 	status = scanf("%ld", &num);
    // 	sum += num;
    // }
    // printf("Those integers sum to %ld.\n", sum);

    // Method 3
    for (num = sum = 0L; status == 1; status = scanf("%ld", &num)){
    	printf("Please enter an integer to be summed (q to quit): ");
    	sum += num; 
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}