#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("enter a number to check");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==2)
	printf("the entered number is a prime number");
	else
	printf("the entere number is not a prime number");
}
