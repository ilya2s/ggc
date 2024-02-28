#include <stdio.h>

#define TAX_RATE 0.05f

int main(void)
{
    float amount;

    printf("Enter an amount ($): ");
    scanf("%f", &amount);

    printf("With tax added: %.2f$\n", (amount + (amount * TAX_RATE)));

    return 0;
}