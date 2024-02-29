#include <stdio.h>

int main(void) {
    int m1, d1, y1, m2, d2, y2, scale;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m1, &d1, &y1);

    printf("Enter second date (mm/dd/yy): ");
    scanf("%2d/%2d/%2d", &m2, &d2, &y2);

    if (y1 > y2) scale = 1;
    else if (y2 > y1) scale = -1;
    else if (m1 > m2) scale = 1;
    else if (m2 > m1) scale = -1;
    else if (d1 > d2) scale = 1;
    else if (d2 > d1) scale = -1;
    else scale = 0;

    if (scale > 0)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
                m2, d2, y2, m1, d1, y1);
    else if (scale < 0)
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
                m1, d1, y1, m2, d2, y2);
    else
        printf("%.2d/%.2d/%.2d is equal to %.2d/%.2d/%.2d\n",
                m1, d1, y1, m2, d2, y2);

    return 0;
}
