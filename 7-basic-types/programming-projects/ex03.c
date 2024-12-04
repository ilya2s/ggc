/**
 * Modify the sum2.c program of Section 7.1 to sum a series of double values.
 */
#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    double n, sum = 0;
    const double EPSILON = 1e-6;

    printf("This program sums a series of doubles.\n");
    printf("Enter doubles (0 to terminate): ");

    do {
        int result = scanf("%lf", &n);
        if (result != 1) {
            printf("Invalid input. Please enter a numeric value.\n");
            while(getchar() != '\n');
            n = 1;
            continue;
        }
        sum += n;
    } while (fabs(n) > EPSILON);
    printf("The sum is %.10f\n", sum);

    return 0;
}
