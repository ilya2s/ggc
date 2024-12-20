#include <stdio.h>

int main(int argc, char *argv[]) {
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'E';
    char first_name[] = "Ilyass";
    char last_name[] = "El Ouazzani";

    first_name[6] = '@';

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %.2f awesome super powers.\n", super_power);
    printf("I have an initial: %c.\n", initial);
    printf("I have a first name: %s.\n", first_name);
    printf("I have a last name: %s.\n", last_name);
    printf("My whole name is %s %c. %s.\n", first_name, initial, last_name);

    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %.1f.\n", bugs, bug_rate);

    long universe_of_defects = 18446744073709551615Lu;
    printf("The entire universe has: %14lu bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate; // int * double -> double
    printf("You are expected to have: %9.2f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %.4e portion of the universe.\n", part_of_universe);

    // Demo for something weird
    char nul_byte = '\0';
    printf("\n>>> Nul byte: %s\n\n", nul_byte);

    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n", care_percentage);

    return 0;
}
