/**
 * Modify Programming Project 6 from Chapter 3 so that the user may add,
 * subtract, multiply or divide two fractions
 * (by entering either +, -, * or / between the fractions).
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char input_line[100], operator;
    int num1, denom1, num2, denom2, res_num, res_denom;

    printf("Enter two fractions seperated by +, -, * or /: ");

    /*
     * sizeof(input_line) is 100 (100 bytes/800 bits <-> 1 byte/8 bits per char)
     *
     * fgets reads sizeof(input_line) - 1 = 99 chars from stdin and stores them
     * in input_line buffer
     *
     * fgets can return NULL if there is an error or an EOF BEFORE ANY CHAR IS
     * READ (try it with Ctrl + D)
     *
     * Any non zero value is always evaluated as TRUE, NULL and zero are
     * evaluate as FALSE
     *
     * NULL is pointer to the address 0x0 with special meaning in C and C++ as
     * 0x0 is a non valid memory address
     *
     * fgets will return pointer to the buffer containing the read string on
     * success
     *
     * The read string is NULL_TERMINATED (ends with '\0')
     *
     * REMEMBER that we are making the fgets read at the same time as evaluting
     * return value for errors
     *
     */
    if (!fgets(input_line, sizeof(input_line), stdin)) {
        fprintf(stderr, "Error reading input.\n");
        return EXIT_FAILURE;
    }

    /*
     * Interprets the data in input strign according to the format string
     *
     * basically like scanf but from provided buffer rather than stdin
     *
     * returns the number of items successfully matched and assigned.
     *
     * If input does not match format string, sscanf will return a different
     * number than the expected number of items
     */
    if (sscanf(input_line, "%d / %d %c %d / %d", &num1, &denom1,
               &operator, & num2, &denom2) != 5) {
        fprintf(stderr, "Invalid input format.\n");
        return EXIT_FAILURE;
    }

    if (denom1 == 0 || denom2 == 0) {
        fprintf(stderr, "Denominator cannot be zero.\n");
        return EXIT_FAILURE;
    }

    switch (operator) {
        case '+':
            res_num = num1 * denom2 + num2 * denom1;
            res_denom = denom1 * denom2;
            break;
        case '-':
            res_num = num1 * denom2 - num2 * denom1;
            res_denom = denom1 * denom2;
            break;
        case '*':
            res_num = num1 * num2;
            res_denom = denom1 * denom2;
            break;
        case '/':
            if (num2 == 0) {
                fprintf(stderr, "Cannot divide by zero.\n");
                return EXIT_FAILURE;
            }
            res_num = num1 * denom2;
            res_denom = denom1 * num2;
            break;
        default:
            fprintf(stderr, "Invaldid operator.\n");
            return EXIT_FAILURE;
    }

    if (res_denom == 1) {
        printf("The result is: %d\n", res_num);
    } else {
        printf("The result is: %d / %d\n", res_num, res_denom);
    }

    return 0;
}
