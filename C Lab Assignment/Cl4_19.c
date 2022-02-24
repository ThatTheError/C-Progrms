#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter a number to check");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of the given number is %d",fact);
}
