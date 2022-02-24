#include<stdio.h>
int main()
{
	int s=0,r,n,i;
	printf("enter a number");
	scanf("%d",&n);
	for(i=n;i>0;i=i/10)
	{
		r=i%10;
		s=s+r;
	}
	printf("sum of the digit using while loop %d",s);
}
