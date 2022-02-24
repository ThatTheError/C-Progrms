#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character to check");
	scanf("%c",&ch);
	((ch>=65 && ch<=90)?printf("uppercase"):printf("lowercase"));
	return 0;
}
