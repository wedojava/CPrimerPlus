#include <stdio.h>

int main(void) {
    double d1[8], d2[8];
    for (int i = 0; i < 8; ++i)
    {
    	printf("Enter number for d1:\n");
    	scanf("%lf", &d1[i]);
    }
    for (int j = 0; j < 8; ++j)
    {
    	for (int i = 0; i <= j; ++i)
    	{
    		d2[j] += d1[i];
    	}
    }
    for (int i = 0; i < 8; ++i)
    {
    	printf("%.2f ", d2[i]);
    }

    return 0;
}