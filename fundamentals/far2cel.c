#include <stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)


int main(void)
{
    float fahrenheit, celcius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;
    
    printf("Celcius equivalent: %.1f\n", celcius);

    return 0;    
}