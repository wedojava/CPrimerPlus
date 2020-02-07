#include <stdio.h>

#ifndef G2L
#define G2L 3.785
#endif
#ifndef M2KM
#define M2KM 1.609
#endif

int main(void) {
	float mileage, gas;
    printf("Please input mileage(Mile) and your gas(Gallon) consumed in road trip respectively: ");
    scanf("%f %f", &mileage, &gas);
    printf("Your mileage is %f Km, and your gas consumed is %f L.\n", mileage * M2KM, gas * G2L);
    printf("Your Fuel consumption is %.3f L/100km or %.3f gallon/100mile.\n",
    		(gas * G2L) / (mileage * M2KM * 100), gas / (mileage * 100));
    
    printf("Please input mileage(Km) and your gas(Liter) consumed in road trip respectively: ");
    scanf("%f %f", &mileage, &gas);
    printf("Your Fuel consumption is %.3f L/100km.\n", gas / (mileage * 100));

    return 0;
}