#include <stdio.h>

#ifndef PAGES
#define PAGES 959
#endif

int main(int argc, char const *argv[])
{
	printf("*%d*\n", PAGES);		// *959*
	printf("*%2d*\n", PAGES);		// *959*
	printf("*%10d*\n", PAGES);		// *       959*
	printf("*%-10d*\n", PAGES);		// *959       *
	
	return 0;
}