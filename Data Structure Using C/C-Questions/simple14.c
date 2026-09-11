#include <stdio.h>

int main() {
    float km, mile;

    printf("Enter speed in km/h: ");
    scanf("%f", &km);

    mile = km * 0.621371;

    printf("Speed in miles per hour = %.2f", mile);

    return 0;
}
