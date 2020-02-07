#include <stdio.h>

int main(void) {
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.le %.le %.le %.le\n", n1, n2, n3, n4);  // 3e+000 3e+000 1e-314 6e-315
    // printf("%.le %.le %e %.le\n", n1, n2, n3, n4);  // 3e+000 3e+000 9.881313e-315 6e-315
    // printf("%.le %.le %g %.le\n", n1, n2, n3, n4);  // 3e+000 3e+000 9.88131e-315 6e-315
    // printf("%ld %ld\n", n3, n4);  // 2000000000 1234567890
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);  // 0 0 2000000000 1234567890

    return 0;
}
