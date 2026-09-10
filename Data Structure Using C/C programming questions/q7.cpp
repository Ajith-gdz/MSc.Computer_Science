#include<stdio.h>
int main(){
	int a;
	printf("Enter the attendance:");
	scanf("%d",&a);
	
	if(a>=75){
		printf("Elligible");	
	}
	else{
		printf(" Not Elligible");	
	}

}
