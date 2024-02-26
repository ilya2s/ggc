#include <stdio.h>

int main(void)
{
    long ean;
    int total, mod;
    int first_sum = 0, second_sum = 0;
    
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%12ld", &ean);

    int c = 0;
    while(c < 12)
    {
        mod = ean % 10;

        if (c % 2 == 0) first_sum += mod;
        else second_sum += mod; 

        ean /= 10;
        c++;
    }
    total = first_sum * 3 + second_sum;

    printf("Check digit: %d\n", 9 - (total - 1) % 10);

    return 0;
}
