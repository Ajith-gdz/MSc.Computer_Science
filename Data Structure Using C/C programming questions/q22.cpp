#include <stdio.h>
int main()
{
    int n, i, v;
    int a = 0, b = 0, c = 0;

    i = 1;

    printf("Enter the number of voters: ");
    scanf("%d", &n);

    while(i <= n)
    {
        printf("Enter 1, 2 or 3: ");
        scanf("%d", &v);

        switch(v)
        {
            case 1:
                a++;
                break;

            case 2:
                b++;
                break;

            case 3:
                c++;
                break;

            default:
                printf("Invalid Vote\n");
        }

        i++;
    }

    printf("Votes scored by Candidate 1: %d\n", a);
    printf("Votes scored by Candidate 2: %d\n", b);
    printf("Votes scored by Candidate 3: %d\n", c);

    return 0;
}


