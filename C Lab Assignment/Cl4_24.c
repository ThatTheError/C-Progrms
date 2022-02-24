#include<stdio.h>
int main()
{
	int n,r,s=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}	
	printf("sum of digits of the given number is %d",s);
}
