#include <stdio.h>

int main(void) {
    long upc;
    int last_digit, total, check;
    int first_sum = 0, second_sum = 0, mod = 0;

    printf("Enter the 12 digits of a UPC: ");
    scanf("%12ld", &upc);

    last_digit = upc % 10;
    upc /= 10;

    int c = 0;
    while (c < 11) {
        if (c < 0) last_digit = upc % 10;
        mod = upc % 10;

        if (c % 2 == 0) first_sum += mod;
        else second_sum += mod;

        upc /= 10;
        c++;
    }

    total = 3 * first_sum + second_sum;
    check = 9 - (total - 1) % 10;

    printf(last_digit == check ? "VALID\n" : "INVALID\n");
    return 0;
}
