#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, largest, smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    largest = n1 > n2 ? n1 : n2;    // largest = max(n1, n2)
    smallest = n1 < n2 ? n1 : n2;   // smallest = min(n1, n2)

    // compare with n3
    if (n3 > largest) largest = n3;
    if (n3 < smallest) smallest = n3;

    // compare with n4
    if (n4 > largest) largest = n4;
    if (n4 < smallest) smallest = n4;

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
