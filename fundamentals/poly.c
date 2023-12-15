#include <stdio.h>

int power(int a, int b);

int main(void)
{
    int x;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    int poly = ((((((((3 * x + 2) * x) - 5) * x) - 1) * x) + 7) * x) - 6;

    printf("%d\n", poly);

    return 0;
}
