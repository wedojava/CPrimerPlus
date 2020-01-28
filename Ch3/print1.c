#include <stdio.h>

int main(){
    int ten = 10;
    int two = 2;
    printf("Doing it right:");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("%d minus %d is %d\n", ten);  // 因为没有给出具体值,将打印出内存中的任意值
}