#include <stdio.h>

int main(void)
{
    int item_number, purchase_month, purchase_day, purchase_year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit prince: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &purchase_month, &purchase_day, &purchase_year);

    printf("Item\tUnit\t\tPurchase\n"
            "\tPrice\t\tDate\n%-d\t$%7.2f\t%.2d/%.2d/%d\n",
            item_number, unit_price,
            purchase_month, purchase_day, purchase_year);
    return 0;
}
