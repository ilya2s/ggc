#include <stdio.h>

int main(void) {
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if (grade > 100 || grade < 0) {
        printf("Error: Invalid numerical grade\n");
        return 1;
    }

    grade /= 10;

    printf("Letter grade: ");
    switch (grade) {
        case 10: case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
            break;
    }
    printf("\n");

    return 0;
}
