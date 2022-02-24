#include<stdio.h>
#include<math.h>
int main()
{
	double x;
	int c,f;
	printf("enter a number :");
	scanf("%lf",&x);
	c=ceil(x);
	f=floor(x);
	printf("ceiling of the number %lf is = %d",x,c);
	printf("\nfloor of the number %lf is = %d",x,f);
	return 0;
}
