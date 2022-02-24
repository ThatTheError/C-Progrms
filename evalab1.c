/* Write a program that accepts all elements of an integer array and finds out maximum and minimum
element of the array. */

#include<stdio.h>
int main()
{
	int a[10],i,max,min;
	printf("enter the elements..");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("maximun number is %d and minimum number is %d",max,min);
	return 0;
}
