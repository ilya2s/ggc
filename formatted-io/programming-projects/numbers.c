#include <stdio.h>

#define SIZE 16

int main(void)
{
    int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15;

    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &n0, &n1, &n2, 
            &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10,
            &n11, &n12, &n13, &n14, &n15);

    printf("%3d %3d %3d %3d\n"
            "%3d %3d %3d %3d\n"
            "%3d %3d %3d %3d\n"
            "%3d %3d %3d %3d\n",
            n0, n1, n2, n3,
            n4, n5, n6, n7,
            n8, n9, n10, n11,
            n12, n13, n14, n15);

    printf("Row sums: %d %d %d %d\n", (n0 + n1 + n2 + n3), (n4 + n5 + n6 +n7),
            (n8 + n9 + n10 + n11), (n12 + n13 + n14 + n15));
    printf("Column sums: %d %d %d %d\n", (n0 + n4 + n8 + n12),
            (n1 + n5 + n9 +n13), (n2 + n6 + n10 + n14), (n3 + n7 + n11 + n15));
    printf("Diagonal sums: %d %d\n", (n0 + n5 + n10 + n15),
            (n3 + n6 + n9 + n12));

            return 0;
}
