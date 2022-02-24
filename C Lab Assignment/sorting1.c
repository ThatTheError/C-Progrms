// c program for selection sort..

#include<stdio.h>
int main()
{
	int a[10],i,j,in,min,temp;
	printf("enter 10 numbers..");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		min=a[i];
		for(j=i;j<10;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				in=j;
			}
		}
		temp=a[in];
		a[in]=a[i];
		a[i]=temp;	
	}
	printf("after sorting..");
	for(i=0;i<10;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
