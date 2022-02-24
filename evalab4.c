// Write a program that accepts two integer arrays, add them and store them in a third array. 

#include<stdio.h>
int main()
{
	int a[10],i,b[10],c[10];
	printf("enter the elements for 1st array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements of the 2nd array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<10;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("after add two array the 3rd array is..");
	for(i=0;i<10;i++)
	{
		printf("\t%d",c[i]);
	}
	return 0;
}
