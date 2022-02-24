#include<stdio.h>
int main()
{
	int n,x,r,rev=0;
	printf("enter a number");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==x)
		printf("entered number is pallindrome..");
	else
		printf("entered number is not pallindrome..");
	return 0;
}
