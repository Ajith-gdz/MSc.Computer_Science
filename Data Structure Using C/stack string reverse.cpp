#include<stdio.h>
int main()
{
	char str[100];
	char stack[100];
	char top=-1;
	int i;

	printf("Enter a string:");
	scanf("%s",str);

	for(i=0;str[i]!='\0';i++)
		{
			top++;
			stack[top]=str[i];
		}

	printf("Reverse of the string:");
	while(top>=0)
		{
			printf("%c",stack[top]);
			top--;
		}

	return 0;

}

