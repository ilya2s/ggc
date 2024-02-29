#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &n1, &n2);

    printf("You entered the number ");

    switch (n1) {
        case 9:
            printf("ninety");
            break;
        case 8:
            printf("eighty");
            break;
        case 7:
            printf("seventy");
            break;
        case 6:
            printf("sixty");
            break;
        case 5:
            printf("fifty");
            break;
        case 4:
            printf("fourty");
            break;
        case 3:
            printf("thirty");
            break;
        case 2:
            printf("twenty");
            break;
    }

    if (n1 != 1 && n2 != 0) printf("-");

    switch (n2) {
        case 9:
            printf("nine");
            break;
        case 8:
            printf(n1 == 1 ? "eigh" : "eight");
            break;
        case 7:
            printf("seven");
            break;
        case 6:
            printf("six");
            break;
        case 5:
            printf(n1 == 1 ? "fif" : "five");
            break;
        case 4:
            printf("four");
            break;
        case 3:
            printf(n1 == 1 ? "thir" : "three");
            break;
        case 2:
            printf(n1 == 1 ? "twelve" : "two");
            break;
        case 1:
            printf(n1 == 1 ? "eleven" : "one");
            break;
        case 0:
            printf(n1 == 1 ? "ten" : "");
    }

    if (n1 == 1 && n2 > 2) printf("teen\n");
    else printf("\n");

    return 0;
}
