#include<stdio.h>
int main()
{
	int n, i = 1,count =0;
	printf("enter the limit:");
	scanf("%d",&n);
	while(i <=n){
		if(i % 3 == 0){
		printf("%d\t", i);
		count ++;
		}i++;
	}printf("\ncount is : %d ", count  );
	return 0;
}
