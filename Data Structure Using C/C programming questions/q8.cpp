#include<stdio.h>
int main(){
	int mk;
	printf("Enter the marks of the student:");
	scanf("%d",&mk);
	
	if(mk>=40){
		printf("Pass");
	}
	else{
		printf("Fail");
	}
}
