#include <stdio.h>
#include <math.h>

int main()
{
int num, temp, digit, digits = 0;
int sum = 0;

printf("Enter a number: ");
scanf("%d", &num);

temp = num;

// Count the number of digits using do...while
do
{
digits++;
temp = temp / 10;
} while (temp != 0);

temp = num;

// Calculate the sum of each digit raised to the power of digits
do
{
digit = temp % 10;
sum += pow(digit, digits);
temp = temp / 10;
} while (temp != 0);

if (sum == num)
printf("%d is an Armstrong number.\n", num);
else
printf("%d is not an Armstrong number.\n", num);

return 0;
}
