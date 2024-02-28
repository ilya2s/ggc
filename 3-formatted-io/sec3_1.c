#include <stdio.h>

int main(void)
{
    // Exercise 1
    printf("%6d,%4d\n", 86, 1040);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 83.192);
    printf("%-6.2g|\n", .0000009979);

    // Exercise 2
    float x = 1.23456789;

   printf("%-8.1e|\n", x);  // (a)
   printf("%10.6e\n", x);   // (b)
   printf("%-8.3f|\n", x);  // (c)
   printf("%6.0f\n", x);    // (d)

    return 0;
}