#include<stdio.h>
int main()
{
	int eb;
	printf("Enter the units: \t");
	scanf("%d",&eb);
	
	if(eb<=100){
		eb=eb*5;
	}
	else if(eb<=500){
		eb=eb*8;
	}
	else{
		eb=eb*10;
	}
	printf("\n Total electricty bill: \t%d",eb);
}
