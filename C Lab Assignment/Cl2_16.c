#include<stdio.h>
int main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	if(n%2==0 && n%3==0)
	{
		printf("the entered number is divisible by both 2 and 3");
	}
	else if(n%2==0 && n%3!=0)
	{
		printf("the entered number is divisible by 2 but not divisible by 3");
	}
	else if(n%3==0 && n%2!=0)
	{
		printf("the entered number is divisible by 3 but not divisible by 2");
	}
	else
	{
		printf("the entered number is neither divisible by 2 nor by 3");
	}
	return 0;
}
