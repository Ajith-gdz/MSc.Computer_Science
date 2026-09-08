#include <stdio.h>

int main()
{
    float num1, num2, result = 0, memory = 0;
    char op;
    int choice;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;

        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else
            {
                printf("Division by zero is not possible.\n");
                return 0;
            }
            printf("Result = %.2f\n", result);
            break;

        case '%':
            result = (int)num1 % (int)num2;
            printf("Result = %.0f\n", result);
            break;

        default:
            printf("Invalid operator!\n");
            return 0;
    }

    printf("\nMemory Options\n");
    printf("1. MS (Memory Store)\n");
    printf("2. MR (Memory Recall)\n");
    printf("3. MS+ (Add Result to Memory)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            memory = result;
            printf("Memory Stored = %.2f\n", memory);
            break;

        case 2:
            printf("Memory Value = %.2f\n", memory);
            break;

        case 3:
            memory = memory + result;
            printf("Updated Memory = %.2f\n", memory);
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
