#include <stdio.h>
int main()
{
    int n, i, temp, sum, rem;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        temp = i;
        sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }

        if(i % sum == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}


