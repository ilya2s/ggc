/**
 * Write a program that takes a first name and last name entered by the user and
 * displays the last name, a comma, and the first initial, followed by a period
*/
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char input[100];
    char first_name_buffer[50], last_name_buffer[50];
    char *first_name;
    char *last_name;

    printf("Enter a first and last name: ");

    if (!fgets(input, sizeof(input), stdin)) {
        fprintf(stderr, "Error reading input.\n");
        return EXIT_FAILURE;
    }

    input[strcspn(input, "\n")] = '\0';

    if (sscanf(input, "%49s %49s", first_name_buffer, last_name_buffer) != 2) {
        fprintf(stderr, "Invalid input format.\n");
        return EXIT_FAILURE;
    }

    first_name = malloc(strlen(first_name_buffer) + 1);
    last_name = malloc(strlen(last_name_buffer) + 1);
    
    if (first_name == NULL || last_name == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        free(first_name);
        free(last_name);
        return EXIT_FAILURE;
    }

    strcpy(first_name, first_name_buffer);
    strcpy(last_name, last_name_buffer);

    printf("%s, %c.\n", first_name, toupper(last_name[0]));

    free(first_name);
    free(last_name);

    return 0;
}
