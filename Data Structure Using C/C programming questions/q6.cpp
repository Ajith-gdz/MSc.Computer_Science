#include<stdio.h>
int main()
{
	int temp;
	printf("Enter the temperature of patient:");
	scanf("%d",&temp);
	if(temp>100)
	{
		printf("Patient has Fever");
	}
	else
	{
		printf("Patient is Normal");
	}
	return 0;
}
