#include <stdio.h>
#include <float.h>

int main(void) {
    double d1 = 1.0 / 3.0;
    float f1 = 1.0 / 3.0;

    printf("%%.6e--------------------------------------------------------\n");
    printf("FLT_DIG is %d `1.0/3.0` display in float is %.6f\n", FLT_DIG ,f1);
    printf("DBL_DIG is %d `1.0/3.0` display in float is %.6f\n", DBL_DIG, d1);
    printf("%%.12e--------------------------------------------------------\n");
    printf("FLT_DIG is %d `1.0/3.0` display in float is %.12f\n", FLT_DIG ,f1);
    printf("DBL_DIG is %d `1.0/3.0` display in float is %.12f\n", DBL_DIG, d1);
    printf("%%.16e--------------------------------------------------------\n");
    printf("FLT_DIG is %d `1.0/3.0` display in float is %.16f\n", FLT_DIG ,f1);
    printf("DBL_DIG is %d `1.0/3.0` display in float is %.16f\n", DBL_DIG, d1);

    return 0;
}

// %.6e--------------------------------------------------------
// FLT_DIG is 6 `1.0/3.0` display in float is 0.333333
// DBL_DIG is 15 `1.0/3.0` display in float is 0.333333
// %.12e--------------------------------------------------------
// FLT_DIG is 6 `1.0/3.0` display in float is 0.333333343267
// DBL_DIG is 15 `1.0/3.0` display in float is 0.333333333333
// %.16e--------------------------------------------------------
// FLT_DIG is 6 `1.0/3.0` display in float is 0.3333333432674408
// DBL_DIG is 15 `1.0/3.0` display in float is 0.3333333333333333