#include<stdio.h>
int main()
{
	int a;
	printf("Age: \t");
	scanf("%d",&a);
	
	if(a<13){
		printf("\nChild");
	}
	else if(a<=18)
	{
	printf("\nteenager");
	}
	else{
			printf("\nAdult");
	}
}
