/**
 * Write a program that evaluates an expression:
 * Enter an expression: 1+2.5*3
 * Value of expression: 10.5
 *
 * The operands in the expression are floating-point numbers; the operators are
 * +, -, *, and /. The expression is evaluated from left to right (no operator
 * takes precedence over any other operator).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double evaluate(double operand1, double operand2, char operator) {
    switch (operator) {
        case '+': return operand1 + operand2; break;
        case '-': return operand1 - operand2; break;
        case '*': return operand1 * operand2; break;
        case '/': return operand1 / operand2; break;
        default:
            fprintf(stderr, "Unknown operator: %c\n", operator);
            exit(EXIT_FAILURE);
            break;
    }
}

int main(int argc, char *argv[]) {
    char input[100];
    double operand1, operand2, operand3, result;
    char operator1, operator2;

    printf("Enter an expression: ");

    if (!fgets(input, sizeof(input), stdin)) {
        fprintf(stderr, "Error reading input.\n");
        return EXIT_FAILURE;
    }

    input[strcspn(input, "\n")] = '\0';

    if (sscanf(input, "%lf %c %lf %c %lf", &operand1, &operator1, &operand2,
               &operator2, &operand3) != 5) {
        fprintf(stderr, "Invalid input format.\n");
        return EXIT_FAILURE;
    }

    result = evaluate(evaluate(operand1, operand2, operator1), operand3, operator2);

    printf("Value of expression: %.1lf\n", result);

    return 0;
}
