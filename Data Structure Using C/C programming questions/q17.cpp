#include <stdio.h>

int main() {
    int num, i,fact = 1; 
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error: Factorial of a negative number does not exist.\n");
    } 
    else {
        for (i = 1; i <= num; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", num, fact);
    }

    return 0;
}
