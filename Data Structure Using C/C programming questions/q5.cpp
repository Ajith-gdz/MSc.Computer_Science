#include<stdio.h>
int main()
{
	int num,number,c=0;
	printf("enter a number:\t");
	scanf("%d",&number);
	num=number;
	while(num!=0){
		num=num/10;
		c++;
		
	}
	printf("\nTotal no of digits in %d is %d",number,c);
}

