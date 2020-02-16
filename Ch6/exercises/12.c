#include <stdio.h>

int main(void) {
    printf("Please input the times (q to quit): ");
    int n = 0;
    float ret1 = 0, ret2 = 0;
    while (scanf("%d", &n)){
    	for (int i = 1; i <= n; ++i)
	    {
	    	ret1 += 1.0 / i;
	    }
	    for (int i = 1; i <= n; ++i)
	    {
	    	if (i % 2)
	    	{
	    		ret2 += 1.0 / i;
	    	} else {
	    		ret2 -= 1.0 / i;
	    	}
	    }
	    // printf("if n == 4 ret1 return %f\n", 1.0 + 1.0 / 2.0 + 1.0 / 3.0 + 1.0 / 4.0);  //  if n = 4
	    printf("ret1 %f\n", ret1);
	    // printf("if n == 4 ret2 return %f\n", 1.0 - 1.0 / 2.0 + 1.0 / 3.0 - 1.0 / 4.0);  //  if n = 4
	    printf("ret2 %f\n", ret2);
    	printf("Please input the next times (q to quit): ");
    }
    

    return 0;
}