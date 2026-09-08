#include <stdio.h>

int main() {
    float centigrade, fahrenheit;

    printf("Enter temperature in Centigrade: ");
    scanf("%f", &centigrade);

    fahrenheit = (centigrade * 9 / 5) + 32;

    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}
