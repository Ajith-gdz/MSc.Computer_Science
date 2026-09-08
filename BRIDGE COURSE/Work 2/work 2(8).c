#include <stdio.h>

int main() {
    int num, i = 2, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        flag = 1;
    } else {
        while (i < num) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
            i++;
        }
    }

    if (flag == 0)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);

    return 0;
}
