#include<stdio.h>
int main()
{
	float n;
	printf("enter a number to check");
	scanf("%f",&n);
	while(n>2)
	{
		n=n/2;
	}
	if(n==2.0)
	printf("the entered number is power of 2");
	else
	printf("the number is not a power of 2");
}
