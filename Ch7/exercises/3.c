#include <stdio.h>
#include <string.h>

int main(void) {
    int odd[100], even[100], input, o_count, e_count;
    input = o_count = e_count = 0;
    double o_sum, e_sum;
    o_sum = e_sum = 0;

    for (int i = 0; (scanf("%d", &input)) == 1 && input != 0; i++) {
        if (input % 2 != 0) {
            odd[o_count] = input;
            o_sum += input;
            ++o_count;
        } else {
            even[e_count] = input;
            e_sum += input;
            ++e_count;
        }
    }
    printf("You input %d odd numbers. The averange is %.2f.\n", o_count,
           o_sum / o_count);
    printf("You input %d even numbers. The averange is %.2f.\n", e_count,
           e_sum / e_count);

    return 0;
}