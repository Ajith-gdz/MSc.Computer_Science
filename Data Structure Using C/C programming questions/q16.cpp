#include <stdio.h>
int main()
{
    int n, num, i = 1;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter the limit: ");
    scanf("%d", &n);

    while(i <= n)
    {
        printf("Enter number: ");
        scanf("%d", &num);

        if(num > 0)
        {
            positive++;
        }
        else if(num < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }

        i++;
    }

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);
    printf("Zero numbers = %d", zero);

    return 0;
}



