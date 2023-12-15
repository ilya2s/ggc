#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
        // Dimensions in inches
        int width, height, depth;

        printf("Enter width of box: ");
        scanf("%d", &width);

        printf("Enter height of box: ");
        scanf("%d", &height);

        printf("Enter depth of box: ");
        scanf("%d", &depth);
 
        int volume = width * height * depth;
        int dim_weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND; // Dimentional weight constant

        puts("-------------------------");

        printf("Dimensions: %d\"x%d\"x%d\"\n", width, height, depth);
        printf("Volume (cubic inches): %d\n", volume);
        printf("Dimentional weight (pounds): %d\n", dim_weight);

        return 0;
}