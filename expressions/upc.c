#include <stdio.h>

int main (void) {
    int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, first_sum,
        second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &d);   // We us %1d to read only one digit

    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i6, &i7, &i8, &i9, &i10);

    first_sum = d + i2 + i4 + i6 + i8 + i10;
    printf("first_sum: %d\n", first_sum);

    second_sum = i1 + i3 + i5 + i7 + i9;
    printf("second_sum: %d\n", second_sum);

    total = 3 * first_sum + second_sum;

    printf("Check digit: %d\n", 9 - (total - 1) % 10);
    return 0;
}
