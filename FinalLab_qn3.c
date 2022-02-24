//Insertion Sort - User Input Values

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,*arr,i,j,k,temp;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	arr=(int *)malloc(sizeof(int)*n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		j=i+1;
		for(k=j;k>0;k--){
			if(arr[k]<arr[k-1]){
				temp=arr[k];
				arr[k]=arr[k-1];
				arr[k-1]=temp;	
			}
		}
	}
	printf("After sorting..\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
