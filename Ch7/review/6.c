#include <stdio.h>

int main(void) {
    int i = 0;
    while (i < 3) {
    	switch (i++) {  // 这里！！！！！
    	    // 先计算 switch(i)，然后再计算 i++！！！！！
    	    // 就是这么离奇！！！
    		case 0: printf("fat ");
    		case 1: printf("hat ");
    		case 2: printf("cat ");
    		default: printf("Oh no!");
    	}
    	putchar('\n');
    }

    return 0;
}