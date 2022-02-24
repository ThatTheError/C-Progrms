#include<stdio.h>
int main()
{
	long n,r,s;
	printf("enter a number");
	scanf("%ld",&n);
	while(n>9)          //4567
	{   
		s=0;
		while(n>0)
		{
			r=n%10;
			s=s+r;
			n=n/10;
		}
		n=s;
	}
	printf("%ld",n);
}
