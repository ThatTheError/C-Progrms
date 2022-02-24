/*	Next greater element in an array
		Input: nums = [1,2,1]
		Output: [2,-1,2]				*/
		
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *array,i,j,*b,n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	array=(int *)malloc(sizeof(int)*n);
	b=(int *)malloc(sizeof(int)*n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		j=(i+1)%n;
		while(j!=i)
		{
			if(array[j]>array[i])
				break;
			j=(j+1)%n;
		}
		if(j!=i)
			b[i]=array[j];
		else
			b[i]=-1;
	}
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}
