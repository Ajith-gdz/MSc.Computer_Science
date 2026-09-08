#include <stdio.h>

int main()
{
    int secret = 25;
    int guess;
    int count = 0;

    do
    {
        printf("Guess the secret number between 20 and 30: ");
        scanf("%d", &guess);

        count++;

        if (guess < secret)
        {
            printf("Too Low! Try Again.\n");
        }
        else if (guess > secret)
        {
            printf("Too High! Try Again.\n");
        }

    } while (guess != secret);

    printf("Congratulations! You guessed the secret number.\n");
    printf("Number of attempts = %d\n", count);

    return 0;
}
