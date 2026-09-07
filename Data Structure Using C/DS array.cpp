#include<stdio.h>
int main()
{
	int a[50],i,n;
	printf("enter the size of your array:");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("entered array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int a[50],i,n;
	printf("enter the size of your array:");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("4th and 5th position value elements are:%d %d",a[3],a[4]);
	return 0;
}

#include<stdio.h>
int main()
{
	int a[50],i,n,b=0;
	printf("enter the size of your array:");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=b+a[i];
	}
	printf("Sum of elements:%d",b);
	return 0;
}

#include<stdio.h>
int main()
{
	int a[50],i,n,b=0,c;
	printf("enter the size of your array:");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=b+a[i];
	}
	c=b/n;
	printf("Average of array elememts:%d",c);
	return 0;
}

#include<stdio.h>
int main()
{
	int a[50],i,n,b=0;
	printf("enter the size of your array:");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b=b+a[i];
		}		
	}
	printf("Sum of even numbers:%d",b);
	return 0;
}