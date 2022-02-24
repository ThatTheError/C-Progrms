/*#include<stdio.h>
#include<stdlib.h>
void insertion_sort(float *,int);
void main()
{
	float *array;
	int n,i;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	array=(float *)malloc(sizeof(float)*n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++){
		scanf("%f",&array[i]);
	}
	insertion_sort(array,n);
	printf("After sorting the array is \n");
	for(i=0;i<n;i++){
		printf("%g ",array[i]);
	}
}
void insertion_sort(float *array,int n)
{
	int i,j;float key;
	for(i=1;i<n;i++)
	{
		j=i-1,key=array[i];
		while(j>=0 && key<array[j])
		{
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=key;
	}
}*/
#include<stdio.h>
#include<stdlib.h>
void selection_sort(float *,int n);
void main()
{
	float *array;
	int i,n;
	printf("Enter the size of the array");
	scanf("%d",&n);
	array=(float *)malloc(sizeof(float)*n);
	printf("Enter the elements of the array");
	for(i=0;i<n;i++)
	{
		scanf("%f",&array[i]);
	}
	selection_sort(array,n);
	printf("After sorting the array");
	for(i=0;i<n;i++)
	{
		printf("%g ",array[i]);
	}
}
void selection_sort(float *array,int n)
{
	int i,j,max,temp;
	for(i=n-1;i>0;i--)
	{
		max=i;
		for(j=i-1;j>=0;j--)
		{
			if(array[j]>array[max])
				max=j;
		}
		temp=array[i];
		array[i]=array[max];
		array[max]=temp;
	}
}






















