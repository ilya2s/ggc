/**
 * Write a program that counts the number of vowels (a, e, i, o, and u) in a
 * sentence.
 */
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_SIZE 100

int mapping[26] = {
    // A  B  C  D  E  F  G  H  I  J  K  L  M
       1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0,
    // N  O  P  Q  R  S  T  U  V  W  X  Y  Z
       0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0
};

int main(int argc, char **argv) {
    int c, i, vowels;
    char input[INPUT_SIZE];

    printf("Enter a sentence: ");

    if (!fgets(input, sizeof(input), stdin)) {
        fprintf(stderr, "Error while reading input.\n");
        return EXIT_FAILURE;
    }

    input[strcspn(input, "\n")] = '\0';

    vowels = 0;
    i = 0;
    while((c = input[i]) && input[i++] != '\0') {
        if (isalpha((unsigned char) c)) {
            c = toupper((unsigned char) c);
            vowels += mapping[c - 'A'];
        }
    }

    printf("Your sentence contains %d vowels.\n", vowels);

    return 0;
}
