/**
 * Write a program that uses Newton's method to compute the square root of a
 * positive floating-point number:
 *
 * Enter a positive number: 3
 * Square root: 1.73205
 *
 * Let x be the number entered by the user. Newton's method requires an inital
 * guess y for the square root of x (we'll use y = 1). Successive guesses are
 * found by computing the average of y and x/y.
 *
 * Note that the value of y gets progressively closer to the true square root of
 * x. For greater accuracy, your program should use variables of type double
 * rather than float. Have the program terminate when the absolute value of the
 * difference between the old value of y and the new value of y is less than the
 * product of .00001 and y.
 */
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

double calculate_square_root(const double x) {
    double y = 1;
    double division = 0;
    double average = 0;

    do {
        division = x / y;
        average = (y + division) / 2;
    } while (fabs(y - average) > (0.00001 * y) && (y = average));

    return y;
}

int main(int argc, char *argv[]) {
    char input[50];
    int number;
    double square_root;

    printf("Enter a positive number: ");

    if(!fgets(input, sizeof(input), stdin)) {
        fprintf(stderr, "Error reading input.\n");
        return EXIT_FAILURE;
    }

    input[strcspn(input, "\n")] = '\0';

    if (sscanf(input, "%d", &number) != 1) {
        fprintf(stderr, "Invalid input format.\n");
        return EXIT_FAILURE;
    }

    square_root = calculate_square_root(number);

    printf("Square root: %.5f\n", square_root);

    return 0;
}
