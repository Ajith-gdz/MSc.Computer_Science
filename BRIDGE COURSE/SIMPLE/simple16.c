#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    printf("Enter the first and second angles: ");
    scanf("%d %d", &angle1, &angle2);

    angle3 = 180 - (angle1 + angle2);

    printf("The third angle of the triangle is %d degrees\n", angle3);

    return 0;
}
