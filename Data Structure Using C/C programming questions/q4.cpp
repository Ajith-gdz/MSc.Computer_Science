#include<stdio.h>
int main()
{
	float s,da,hra,g;
	printf("Enter the basic salary:\t");
	scanf("%f",&s);
	
	da=0.1*s;
	printf("\nDA:\t %f",da);
	hra=0.15*s;
	printf("\nHRA:\t %f",hra);
	g=s+da+hra;
	printf("\nGross salary:\t %f",g);
}
