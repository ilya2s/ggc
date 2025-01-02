/**
 * Write a program that calculates the factorial of a positive integer:
 *
 * Enter a positive integer: 6
 * factorial of 6: 720
 *
 * (a) Use a [short] variable to store the value of the factorial. What is the
 * largest value of n for which the prgram correctly prints the factorial of n?
 * => 7
 *
 * (b) Repeat part (a), using an [int] variable instead.
 *
 * (c) Repeat part (a), using an [long] variable instead.
 *
 * (d) Repeat part (a), using an [long long] variable instead (If your compiler
 * supports the [long long] type).
 *
 * (e) Repeat part (a), using an [float] variable instead.
 *
 * (f) Repeat part (a), using an [double] variable instead.
 *
 * (h) Repeat part (a), using an [long double] variable instead.
 *
 * In cases (e)-(g), the program will display a close approximation of the
 * factoria, not necessarily the exact value.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

short calculate_factorial(const int n) {
    if (n == 0) {
        return 1;
    }
    return n * calculate_factorial(n - 1);
}

int main(int argc, char *argv[]) {
    char input[50];
    int number;
    short factorial;

    printf("Enter a positive integer: ");

    if (!fgets(input, sizeof(input), stdin)) {
        fprintf(stderr, "Error reading input.\n");
        return EXIT_FAILURE;
    }

    input[strcspn(input, "\n")] = '\0';

    if (sscanf(input, "%d", &number) != 1) {
        fprintf(stderr, "Invalid input format.\n");
        return EXIT_FAILURE;
    }

    factorial = calculate_factorial(number);

    printf("Factorial of %d: %hd\n", number, factorial);

    return 0;
}
