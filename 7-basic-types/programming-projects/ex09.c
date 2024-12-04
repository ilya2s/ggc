/**
 * Write a program that asks the user for a 12-hour time, then displays the time
 * in 24-hour form.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char input[100], am_pm[3];
    int hours, minutes;
    printf("Enter a 12-hour time: ");

    if (!fgets(input, sizeof(input), stdin)) {
        fprintf(stderr, "Error while reading input.\n");
        return EXIT_FAILURE;
    }

    if (sscanf(input, "%d : %d %2s", &hours, &minutes, am_pm) != 3) {
        fprintf(stderr, "Invalid input format.\n");
        return EXIT_FAILURE;
    }

    if (strcmp(am_pm, "AM") == 0 && hours == 12) {
        hours = 0;
    } else if (strcmp(am_pm, "PM") == 0 && hours != 12) {
        hours += 12;
    }

    printf("Equivalent 24-hour time: %.02d:%.02d\n", hours, minutes);

    return 0;
}
