#include<stdio.h>
//#include<conio.h>
int main()
{
	float n;
	int num;
	printf("enter the number to check");
	scanf("%f",&n);
	if(n>0)
	{
		num=n+0.5;
		printf("%d",num);
	}
	else
	{
		num=n-0.5;
		printf("%d",num);
	}
	return 0;
}
