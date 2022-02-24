#include<stdio.h>
int main()
{
	float n,frpart;
	int intpart;
	printf("enter your number");
	scanf("%f",&n);
	intpart=n;
	frpart=n-intpart;
	printf("%d\n%g",intpart,frpart);
	return 0;
}
