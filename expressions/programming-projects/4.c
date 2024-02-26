#include <math.h>
#include <stdio.h>

int main(void) {
    int input, mod;
    int output = 0;

    printf("Enter a number between 0 and 32765: ");
    scanf("%d", &input);

    int c = 0;
    while (input > 0) {
        output += (input % 8) * pow(10, c);
        input /= 8;
        c++;
    }

    printf("In octal, your number is: %.5d\n", output);

    return 0;
}
