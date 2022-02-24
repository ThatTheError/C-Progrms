#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter your data");
	scanf("%d",&ch);
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		printf("your entered data is a character");
	}
	else if(ch>=30 && ch<=39)
	{
		printf("uour entered data is a number");
	}
	else
	{
		printf("your entered data is a special character");
	}
	return 0;
}
