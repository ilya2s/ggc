#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define NUM_FLIGHTS 8

const int departures[NUM_FLIGHTS] = {480, 583, 679, 767, 840, 945, 1140, 1305};
const int arrivals[NUM_FLIGHTS] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

int main(int argc, char *argv[]) {
    char input_value[100];
    char am_pm[3];
    int hours, minutes, time;
    printf("Enter a 12-hour time: ");

    if (!fgets(input_value, sizeof(input_value), stdin)) {
        fprintf(stderr, "Error reading input\n");
        return EXIT_FAILURE;
    }

    if (sscanf(input_value, "%d : %d %2s", &hours, &minutes, am_pm) != 3) {
        fprintf(stderr, "Invalid input format\n");
        return EXIT_FAILURE;
    }

    if (strcmp(am_pm, "PM")) {
        if (hours < 12) {
            hours += 12;
        }
    } else if (strcmp(am_pm, "AM")) {
        if (hours == 12) {
            hours -= 12;
        }
    }

    /* Time input expressed in minutes since midnight */
    time = (60 * hours) + minutes;

    printf("%d : %d %s\n", hours, minutes, am_pm);
    printf("Time (expressed in minutes since midnight): %d\n", time);

    return 0;
}
