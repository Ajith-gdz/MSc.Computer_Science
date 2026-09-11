#include <stdio.h>

int main() {
    float radius, area, perimeter;
    float pi = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    perimeter = 2 * pi * radius;

    printf("Area of the circle = %.2f\n", area);
    printf("Perimeter of the circle = %.2f\n", perimeter);

    return 0;
}
