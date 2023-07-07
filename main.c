#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    double length;

    // «читуЇмо координати початку та к≥нц€ вектора
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    // ќбчислюЇмо довжину вектора
    length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // ¬иводимо довжину вектора з точн≥стю до шести знак≥в п≥сл€ коми
    printf("%.6f\n", length);

    return 0;
}
