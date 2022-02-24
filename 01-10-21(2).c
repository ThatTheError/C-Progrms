//		Exponential Search..

#include<stdio.h>
#include<stdlib.h>
int binary_search(int*,int,int,int);
void sort(int*,int);
int min(int,int);
void main()
{
	int *arr,i,x,n,ans;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	arr=(int *)malloc(sizeof(int)*n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element you want to search\n");
	scanf("%d",&x);
	sort(arr,n);
	while(i<n && arr[i]<=x)
	{
		i=i*2;
	}
	ans=binary_search(arr,i/2,min(i,n-1),x);
	printf("\nsearched element is at index no \"%d\" of the sorted array",ans);
}
int min(int i,int j)
{
	if(i<j)
		return(i);
	else
		return(j);
}
void sort(int *arr,int n)
{
	int i,j,min,min_ind,happen,temp;
	for(i=0;i<n-1;i++)
	{
		min=arr[i];
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<min){	
				min=arr[j];
				min_ind=j;
				happen = 1;
			}
		}
		if(happen==1){
			temp=arr[min_ind];
			arr[min_ind]=arr[i];
			arr[i]=temp;
		}
		happen =0;
	}
	printf("After sorting your array is..\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
int binary_search(int *arr,int low,int high,int x)
{
	int mid;
	mid=(low+high)/2;
	while(arr[mid]!=x)
	{
		if(arr[low]==x)
			return(low);
		else if(arr[high]==x)
			return(high);
		else
			mid=(low+high)/2;
		if(arr[mid]<x){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
}
