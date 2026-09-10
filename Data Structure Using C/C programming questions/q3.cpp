#include<stdio.h>
int main()
{
	int side,area,perimeter;
	printf("Enter the side of square:");
	scanf("%d",&side);
	area=side*side;
	printf("The area of square is:%d\n",area);
	perimeter=4*side;
	printf("The perimeter of square is:%d",perimeter);
	return 0;
}
