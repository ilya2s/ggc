/**
 * Modify the square2.c program of Section 6.3 so that it pauses after every 24
 * squares and displays the following message: Press Enter to continue... After
 * displaying the message, the program should use getchar to read a character.
 * getchar won't allow the program to continue until the user pressed the Enter
 * key.
 */
#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    char c;

    printf("This program prints a table of squares.\n");
    printf("Enter the number of entries in table: ");

    scanf("%d", &n);
    getchar();  // consume leftover '\n' in input buffer.

    for (int i = 1; i <= n; i++) {
        printf("%20d%20d\n", i, i * i);

        if (i % 24 == 0) {
            printf("Press Enter to continue...");
            getchar();
        }
    }

    return 0;
}
