/* Write a program that accepts all elements of an integer array and finds out sum and average among the
values. */


#include<stdio.h>
int main()
{
	int ne,a[10],i,s=0;
	float avg;
	printf("enter the elements..");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	ne=i;
	for(i=0;i<10;i++)
	{
		s=s+a[i];
	}
	avg=s/ne;
	printf("the sum of elements is %d and average is %f",s,avg);
	return 0;
}
