#include<stdio.h>
int main()
{
	int price,quantity,total;
	printf("Enter the price of notebook:");
	scanf("%d",&price);
	printf("Enter the quantity purchased:");
	scanf("%d",&quantity);
	total=price*quantity;
	printf("Total bill amount is:%d",total);
	return 0;
}
