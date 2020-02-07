#include <stdio.h>

int main(void) {
    float speed, fsize;
    printf("Plese input download speed(Mb/s) and filesize(MB) respectively: ");
    scanf("%f %f", &speed, &fsize);
    printf("At %.1f megabits per second, a file of %.2f megabytes downloads in %.2f second.\n",
    		speed, fsize, fsize * 8 / speed);

    return 0;
}