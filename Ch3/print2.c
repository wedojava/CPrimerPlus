#include <stdio.h>

int main(void){
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;

    printf("un = %u and not %d\n", un, un);
    printf("end = %hd and %d\n", end, end);
    printf("big =  %ld and not %hd\n", big, big);
    printf("verybig = %lld and not %ld\n", verybig, verybig);
    printf("Hello!\007\n");

    return 0;
}

// OUT:
//un = 3000000000 and not -1294967296  // 无符号的3000000000和有符号的-1294967296在内存中的表示完全相同
//end = 200 and 200
//big =  65537 and not 1  // 只显示了存储在后16位的值
//verybig = 12345678908642 and not 1942899938  // 只显示了存储在后32位的值
