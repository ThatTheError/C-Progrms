#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter your data");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	printf("your entered data is highercase alphabet");
	else if(ch>='a' && ch<='z')
	printf("your entered data is a lowercase alphabet");
	else if(ch>='0' && ch<='9')
	printf("your entered data is a number");
	else
	printf("your entered data is a special character");
	return 0;
}
