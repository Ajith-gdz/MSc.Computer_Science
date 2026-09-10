#include<stdio.h>
int main()
{
	const int pin=1234;
	int attempt=0,usr,success=0;
	
	while(attempt<3){
	printf("enter the pin:");
	
	
	if(scanf("%d", &usr)!=1)
	{
		printf("Invalid input");
		while(getchar() !='\n');
		attempt++;
		continue;
	}
	
	if(usr==pin){
		success=1;
		break;
	}
	else{
	
		printf("Incorrect pin\n");
			attempt++;
	}
}
if(success)
{

	printf("success\n");
}
else
{
	printf("account locked\n");
}


}


