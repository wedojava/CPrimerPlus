#include <stdio.h>

int main(void) {
    int a, b, c;
    a = -33;
    b = 13;

	printf("Test for %%:\n");
    printf("%d\n", a % b);
    // -33 - (-33/13) * 13 = -33 - (-2) * 13 = -33 +26 = 7
    printf("%d\n", a - (a / b)*b);

	// 
    printf("Test for b++ increament after used:\n");

	// 当 a = 4, b = 3
	a = 4;
    b = 3;
    printf(" - test1:\n");
    // 先计算 c = a*b, 然后 b++
    c = a*b++; // 所有现在 c = 12
    // 此时b = 4, 所以下面的打印是 16
    printf("%d\n", a*b++);  // 16, then b = 5
    printf("%d\n", c);  // 12
    printf("%d\n", b);  // 5


    a = 4;
    b = 3;
    printf(" - test2:\n");
    // 先打印出 a*b 的值， 然后 b++
    printf("%d\n", a*b++);  // 12, then b = 4
    // 此时 b=4, a*b = 4*4 = 16
    c = a*b++;  // c = 16, then b = 5
    printf("%d\n", c);  // 16
    printf("%d\n", b);  // 5

    printf("Test for ++b increament before used:\n");

	// 当 a = 4, b = 3
	a = 4;
    b = 3;
    printf(" - test1:\n");
    // 先计算 ++b, 然后 c = a*b
    c = a*++b; // 所有现在 c = 16
    printf("%d\n", a*++b);  // 20, then b = 5
    printf("%d\n", c);  // 16
    printf("%d\n", b);  // 5


    a = 4;
    b = 3;
    printf(" - test2:\n");
    // 先打 ++b 然后 c = a*b
    printf("%d\n", a*++b);  // b = 4, then 16
    c = a*++b;  // b = 5, then c = 4 * 5
    printf("%d\n", c);  // 20
    printf("%d\n", b);  // 5

    return 0;
}