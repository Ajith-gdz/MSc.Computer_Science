#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\n----- Bitwise Operations Menu -----\n");
    printf("1. Bitwise AND (&)\n");
    printf("2. Bitwise OR (|)\n");
    printf("3. Bitwise XOR (^)\n");
    printf("4. Bitwise NOT (~) of first number\n");
    printf("5. Left Shift (<<)\n");
    printf("6. Right Shift (>>)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Bitwise AND = %d\n", a & b);
            break;

        case 2:
            printf("Bitwise OR = %d\n", a | b);
            break;

        case 3:
            printf("Bitwise XOR = %d\n", a ^ b);
            break;

        case 4:
            printf("Bitwise NOT of %d = %d\n", a, ~a);
            break;

        case 5:
            printf("%d << %d = %d\n", a, b, a << b);
            break;

        case 6:
            printf("%d >> %d = %d\n", a, b, a >> b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
