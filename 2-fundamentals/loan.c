#include <stdio.h>

int main(void)
{
    double amount, rate, payment;

    printf("Enter amount of loan: ");
    scanf("%lf", &amount);
    
    printf("Enter interest rate: ");
    scanf("%lf", &rate);

    printf("Enter monthly payment: ");
    scanf("%lf", &payment);

    for (int i = 0; i < 3; i++) {
        amount = (amount - payment) + (amount * rate / 12 / 100);

        printf("Balance remaining after payment #%d: $%.2f\n", i + 1, amount);
    }

    return 0;
}