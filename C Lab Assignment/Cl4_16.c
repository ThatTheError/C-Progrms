#include<stdio.h>
int main()
{
	int n,bin=0,r,i=1,x;
	printf("enter the decimal number");
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		r=n%2;
		bin=bin+r*i;
		n=n/2;
		i=i*10;
	}
	printf(" binary of the number %d is %d",x,bin);
	printf("\n  octal of the number %d is %o",x,x);
	printf("\n   hexa of the number %d is %x",x,x);
}
