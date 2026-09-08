#include <stdio.h>

int main() {
    int n, i = 1, num, sum = 0;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum = sum + num;
        i++;
    }

    printf("Sum of given numbers = %d\n", sum);

    return 0;
}
