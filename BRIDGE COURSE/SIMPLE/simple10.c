#include <stdio.h>

int main() {
    float P, R, T, SI;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &P, &R, &T);

    SI = (P * R * T) / 100;

    printf("Simple Interest = %.2f", SI);

    return 0;
}
