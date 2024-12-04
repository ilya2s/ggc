/**
 * In the SCRABBLE Crossword Game, players form words using small tiles, each
 * containing a letter and a face value. The face value varies from one letter
 * to another, based on the letter's rarity. (Here are the face values:
 * 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 8: JX, 10: QZ.)
 * Write a program that computes the value of a word by summing the values of
 * its letters: Enter a word: pitfall Scrabble value: 12 Your program should
 * allow any mixture of lower-case and upper-case letters in the word.
 * Hint: Use the toupper library function.
 */
#include <ctype.h>
#include <stdio.h>

int mapping[26] = {
    // A  B  C  D  E  F  G  H  I  J  K  L  M
       1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3,
    // N  O  P  Q  R  S  T  U  V  W  X  Y  Z
       1, 1, 3, 10,1, 1, 1, 1, 4, 4, 8, 4, 10
};

int main(int argc, char *argv[]) {
    int c;
    int value = 0;

    printf("Enter a word: ");

    while ((c = getchar()) != '\n' && c != EOF) {
        if (isalpha((unsigned char) c)) {
            c = toupper((unsigned char) c);
        }
        value += mapping[c - 'A'];
    }

    printf("Scrabble value: %d\n", value);
    return 0;
}
