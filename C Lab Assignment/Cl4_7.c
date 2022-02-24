#include<stdio.h>
int main()
{
	int a=1,b=2,c=1,x=a+b-1;
	while(c<=20)
	{
		printf("%d,",a);
		a=b;
		b=x;
		x=a+b-1;
		c++;
	}
}
