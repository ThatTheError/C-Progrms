/* Write a program that accepts all elements of an integer array and finds out mean and standard deviation
of the array. */

#include<stdio.h>
#include<math.h>
int main()
{
	int a[10],i,s=0,n;
	float mean,sd;
	printf("enter the elements..");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	n=i;
	for(i=0;i<10;i++)
		s=s+a[i];
	mean=s/n;
	s=0;
	for(i=0;i<10;i++)
	{
		s=s+pow((a[i]-mean),2);
	}
	sd=sqrt((s/n-1));
	printf("mean is = %f and standard deviation = %f",mean,sd);
	return 0;
}
