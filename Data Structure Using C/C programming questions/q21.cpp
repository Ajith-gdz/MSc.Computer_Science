#include<stdio.h>
int sod(int a)
{
	int sum=0;
	while(a!=0)
	{
		sum+=a%10;
		a=a/10;
	}
	return sum;
}
int main()
{
	int n,s;
	printf("Enter the number:");
	scanf("%d",&n);
	s=sod(n);
	printf("\nValue of the sum of digits is %d",s);
	if(s>9)
	{
		printf("\nValue of the sum of digits is %d",sod(s));
	}
	else
	{
		printf("sum:%d",s);
	}
}
