#include<stdio.h>
int main()
{
	//with using third variable
	int a,b,c;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("after swapping the value of a is %d and value of b is %d",a,b);
	return 0;
}
