// Write a program that generated the first 20 Fibonacci numbers and store them into an array of size 20.

#include<stdio.h>
int main()
{
	int i,arr[20],a=0,b=1,c=a+b,co=0;
	while(co<20)
	{
		arr[co]=a;
		a=b;
		b=c;
		c=a+b;
		co++;
	}
	printf("the first 20 fibbonasi numbers are..\n");
	for(i=0;i<20;i++)
	{
		printf("\t%d",arr[i]);
	}
	return 0;
}
