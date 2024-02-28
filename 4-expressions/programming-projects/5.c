#include <stdio.h>

int main(void) {
    int upc, total, mod;
    int first_sum = 0, second_sum = 0;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%11d", &upc);

    int c = 0;
    while (c < 11) {
        mod = upc % 10;

        if (c % 2 == 0) first_sum += mod;
        else second_sum += mod;


        upc /= 10;
        c++;
    }
    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - (total - 1) % 10);

    return 0;
}
