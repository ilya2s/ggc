#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    printf("%d%d%d\n", n % 10, n / 10 % 10, n / 100);
}
