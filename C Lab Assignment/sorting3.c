// c program for insertion sort..

#include<stdio.h>
int main()
{
	int n,a[n],i,j,k,temp;
	printf("enter the size of the array  ");
	scanf("%d",&n);
	printf("enter the elements of the array  ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	for(j=1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		for(k=1;k<=j;k++)
		{
			if(a[k]>a[j])
			{
				temp=a[k];
				a[k]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("after sorting..");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
