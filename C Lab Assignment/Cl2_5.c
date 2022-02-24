#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter your data");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	printf("your entered data is highercase alphabet");
	else if(ch>=97 && ch<=122)
	printf("your entered data is a lowercase alphabet");
	else if(ch>=48 && ch<=57)
	printf("your entered data is a number");
	else
	printf("your entered data is a special character");
	return 0;
}
