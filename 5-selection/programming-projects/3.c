#include <stdio.h>

int main(void) {
    int shares;
    double rival_commission, commission, price, value;

    printf("Enter the number of shares: ");
    scanf("%d", &shares);

    printf("Enter the price per share: ");
    scanf("%lf", &price);

    value = shares * price;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (shares < 2000)
        rival_commission = 33.00f + .03f * shares;
    else
        rival_commission = 33.00f + .02f * shares;

    commission = (commission < 39.0f) ? 39.0f : commission;

    printf("\nTrade value: $%.2lf\n", value);
    printf("| Commission | Rival commission |\n"
           "|------------|------------------|\n");
    printf("| $%9.2lf | $%15.2lf |\n", commission, rival_commission);

    return 0;
}
