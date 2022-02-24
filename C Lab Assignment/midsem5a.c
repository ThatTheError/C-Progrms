#include<stdio.h>
int fact(int);
int main()
{
	int n,res;
	printf("enter a number");
	scanf("%d",&n);
	res=fact(n);
	printf("the factorial os the given no is %d",res);
	return 0;
}
int fact(int n)
{
	int f=1;
	while(n>0)
	{
		f=f*fact(n-1);
	}
	return(f);
	/*if(n<=1)
	{
		return n;
	}
	else
	{
		return(n*fact(n-1));
	}*/
}
