#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter the first and second angles: ");
    scanf("%f %f", &angle1, &angle2);

    angle3 = 180 - (angle1 + angle2);

    printf("The third angle of the triangle = %.2f degrees\n", angle3);

    return 0;
}
