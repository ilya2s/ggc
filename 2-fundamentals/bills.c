#include <stdio.h>

int main(void) {
    int amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    if (amount < 0) {
        printf("Invalid amount\n");
        return 1;
    }

    int twenties = amount / 20;
    amount = amount % 20;

    int tens = amount / 10;
    amount = amount % 10;

    int fives = amount / 5;
    amount = amount % 5;


    printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n",
        twenties, tens, fives, amount);

    return 0;
}