#include <stdio.h>

int main() {
    float L, B, P;

    printf("Enter length and breadth: ");
    scanf("%f %f", &L, &B);

    P = 2 * (L + B);

    printf("Perimeter = %.2f", P);

    return 0;
}

