/**
 * Write a program that translates an alphabetic phone number into numeric form:
 * Enter phone number: CALLATT 2255288 (In case you don't have a telephone
 * nearby, here are the letters on the keys: 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO,
 * 7=PRS, 8=TUV, 9=WXY.) If the original phone number contains nonalphabetic
 * characters (digits or punctuation, for example), leave them unchanged: Enter
 * phone number: 1-800-COL-LECT 1-800-265-5328 You may assums that any letteres
 * entered by the user are upper case.
 */
#include <ctype.h>
#include <stdio.h>

const char mapping[26] = {
    ['A' - 'A'] = '2', ['B' - 'A'] = '2', ['C' - 'A'] = '2',
    ['D' - 'A'] = '3', ['E' - 'A'] = '3', ['F' - 'A'] = '3',
    ['G' - 'A'] = '4', ['H' - 'A'] = '4', ['I' - 'A'] = '4',
    ['J' - 'A'] = '5', ['K' - 'A'] = '5', ['L' - 'A'] = '5',
    ['M' - 'A'] = '6', ['N' - 'A'] = '6', ['O' - 'A'] = '6',
    ['P' - 'A'] = '7', ['R' - 'A'] = '7', ['S' - 'A'] = '7',
    ['T' - 'A'] = '8', ['U' - 'A'] = '8', ['V' - 'A'] = '8',
    ['W' - 'A'] = '9', ['X' - 'A'] = '9', ['Y' - 'A'] = '9',
};

int main(int argc, char *argv[]) {
    int c;

    printf("Enter phone number: ");

    while((c = getchar()) != '\n' && c != EOF) {
        if (isalpha((unsigned char) c)) {
            c = toupper((unsigned char) c);
            putchar(mapping[c - 'A']);
        } else {
            putchar(c);
        }
    }
    printf("\n");
    return 0;
}
