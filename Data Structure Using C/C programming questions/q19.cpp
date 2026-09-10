#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("Enter a no:");
	scanf("%d",&num);
	
	while(num>0)
	{
		sum+=num%10;
		num=num/10;
	}
	printf("The sum of its digits is %d",sum);
	

}
