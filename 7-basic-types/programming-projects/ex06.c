/**
 * Write a program that prints the values of sizeof(int), sizeof(short),
 * sizeof(long), sizeof(float), sizeof(double) and sizeof(long double).
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("%10zu %10zu %10zu %10zu %10zu %10zu\n",
            (unsigned long)sizeof(int), (unsigned long)sizeof(short),
            (unsigned long)sizeof(long), (unsigned long)sizeof(float),
            (unsigned long)sizeof(double), (unsigned long)sizeof(long double));
    return 0;
}
