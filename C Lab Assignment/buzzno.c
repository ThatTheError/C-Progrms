#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n%
	7==0 || n%10==7)
		printf("the entered number is a buzz number");
	else
		printf("entered number is not a buzz number");
	return 0;
}
