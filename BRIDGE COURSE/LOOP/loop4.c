#include <stdio.h>

int main() {
    int a, b, diff, i = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (i <= 1) {
        diff = a - b;
        i++;
    }

    printf("Difference = %d\n", diff);

    return 0;
}
