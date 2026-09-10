#include<stdio.h>

int main()
{
	int n,s,steps;
	steps=0;
	printf("Enter the no:");
	scanf("%d",&n);
	printf("%d ",n);
	while(n!=1)
	{
		if(n%2==0)
		{
			n=n/2;
			printf("-> %d",n);
		}
		else
		{
			n=(3*n)+1;
			printf("-> %d",n);	
		}
		steps++;
	}
	printf("\nNo of steps:%d",steps);
}
	

