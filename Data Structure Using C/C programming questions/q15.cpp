#include <stdio.h>
int main()
{
    int n, num, max = 0, i = 1;

    printf("Enter the limit: ");
    scanf("%d", &n);

    while(i <= n)
    {
        printf("Enter number: ");
        scanf("%d", &num);

        if(num > max)
        {
            max = num;
        }

        i++;
    }

    printf("Largest number = %d", max);

    return 0;
}
