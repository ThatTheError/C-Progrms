#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character :");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("opposite case of the character is %c",ch+32);
	}
	else
	{
		printf("opposite case of the character is %c",ch-32);
	}
	return 0;
}
