#include <stdio.h>

#define PI 3.1416
#define FACTOR ((4.0f / 3.0f) * PI)

int main(void)
{
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    float volume = FACTOR * (radius * radius * radius);

    printf("Volume: %.2f\n", volume);

    return 0;
}