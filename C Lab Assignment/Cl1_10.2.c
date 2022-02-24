#include<stdio.h>
int main()
{
	//without using third variable
	int a,b;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	printf("without using third variable....");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swapping the value of a is %d and b is %d",a,b);
	return 0;
}	
	
	
	
