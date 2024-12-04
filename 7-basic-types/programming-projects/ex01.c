/**
 * The square2.c program of Section 6.3 will fail (usually by printing strange
 * answers) if i * i exceeds the maximum int value. Run the program and
 * determine the smallest value of n that causes failure. Try changing the type
 * of i to short and running the program again. (Don't forget to update the
 * conversion specifications in the call of printf!) Then try long. From these
 * experiments, what can you conclude about the number of bits used to store
 * integer types on your machine?
 *
 * Solution
 *
 * Smallest value of n that causes failure while i is of type:
 *  - int: 46341 (32-bits)
 *  - short: 182 (16-bits)
 *  - long:  3,037,000,500 (64-bits)
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");

    // %d for integer
    // %hd for short integer
    // %ld for long integer
    scanf("%d", &n);

    // Change the value of i to a higher number for long to not wait too long :P
    for (i = 1; i <= n; i++)
        printf("%20d%20d\n", i, i * i);

    return 0;
}
