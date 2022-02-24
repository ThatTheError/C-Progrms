#include<stdio.h>
#include<stdlib.h>
void selection_sort(int *arr,int n)
{
	int i,j,temp,min;
	for(i=0;i<n-1;i++)	
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min]){	
				min=j;
			}
		}
		temp = arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
}
void printing(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
void main()
{
	int n,*arr,i,j,upper,lower,min,temp;
	printf("Enter size of the array\n");
	scanf("%d",&n);
	arr=(int *)malloc(sizeof(int)*n);
	printf("Enter lower limit\n");
	scanf("%d",&lower);
	printf("Enter upper limit\n");
	scanf("%d",&upper);
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%(upper-lower+1)+lower;
	}
	selection_sort(arr,n);
	printf("After sorting..\n");
	printing(arr,n);
}

