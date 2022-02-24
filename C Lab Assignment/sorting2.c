// c program for bubble sort

#include<stdio.h>
int main()
{
	int a[10],i,j,k,temp;
	printf("enter 10 numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			k=j+1;
			if(a[j]>a[k])
			{
				temp=a[j];
				a[j]=a[k];
				a[k]=temp;
			}
		}
	}
	printf("after sorting ..");
	for(i=0;i<10;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
