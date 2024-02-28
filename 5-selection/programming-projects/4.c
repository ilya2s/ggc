#include <stdio.h>

int main(void) {
    double speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%lf", &speed);

    if (speed < 1.0f)
        printf("Calm\n");
    else if (speed < 4.0f)
        printf("Light air\n");
    else if (speed < 28.0f)
        printf("Breeze\n");
    else if (speed < 48.0f)
        printf("Gale\n");
    else if (speed < 64.0f)
        printf("Storm\n");
    else printf("Hurricane\n");

    return 0;
}
