#include<stdio.h>
int isneon(int i)
{
	int sum=0;
    int sq=i*i;
	while(sq!=0)
	{
		sum+=sq%10;
		sq=sq/10;
	}
	if(i==sum)
		return 1;
	else
		return 0;
}
int main()
	{
	int n;
	printf("Enter a no:");
	scanf("%d",&n);
	if(isneon(n))
	printf("%d is neon",n);
	else
	printf("%d is not neon",n);
	}
