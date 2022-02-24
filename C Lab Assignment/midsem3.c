#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	int a,b,res;
	printf("enter the two operands..");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("enter the symbol of operation..");
	scanf("%c",&ch);
	if(ch=='*')
	{
		res=a*b;
	}
	else if(ch=='+')
	{
		res=a+b;
	}
	else if(ch=='-')
	{
		res=a-b;
	}
	else if(ch=='/')
	{
		res=a/b;
	}
	else if(ch=='%')
	{
		res=a%b;
	}
	else
	{
		printf("invalid operator..");
	}
	printf("the result is %d",res);
	return 0;
}
