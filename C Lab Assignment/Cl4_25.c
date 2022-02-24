#include<stdio.h>
int main()
{
	int n,r,l=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r>l)
		l=r;
		n=n/10;
	}	
	printf("the largest digit of the given number is %d",l);
}
