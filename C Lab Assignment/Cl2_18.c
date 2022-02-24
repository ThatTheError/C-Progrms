#include<stdio.h>
int main()
{
	int a,b;
	char symbol;
	printf("enter the symbol of the operation you want to perform");
	scanf("%c",&symbol);
	printf("enter two number");
	scanf("%d%d",&a,&b);
	switch(symbol)
	{
		case '+' :
			printf("%d",a+b);
			break;
		case '*' :
			printf("%d",a*b);
			break;
		case '/' :
			printf("%d",a/b);
			break;
		case '-' :
			printf("%d",a-b);
			break;
		case '%' :
			printf("%d",a%b);
			break;
		default :
			printf("invalid symbol!");
			break;	
	}
	return 0;
}
