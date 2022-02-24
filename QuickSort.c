#include<stdio.h>
#include<stdlib.h>

void swap(int *array,int i,int j){
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
int partition(int *array,int left,int right){
	int pivot = array[right],i,j;
	i=left-1;
	for(j=left;j<right;j++){
		if(array[j]<=pivot){
			i++;
			swap(array,i,j);
		}
	}
	swap(array,i+1,right);
	return i+1;
}
quick_sort(int *array,int left,int right)
{
	int p;
	if(left < right){
		p = partition(array,left,right);
		//printf("%d",p);
		quick_sort(array,left,p-1);
		quick_sort(array,p+1,right);
	}
}
void printing(int *array,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}
void main()
{
	FILE *fptr;
	int up,low,n,i,l,*array;
	printf("Enter the size of the array");
	scanf("%d",&n);
	printf("Enter the lower limit");
	scanf("%d",&low);
	printf("Enter the upper limit");
	scanf("%d",&up);
	array = (int *)malloc(sizeof(int)*n);
	srand(time(NULL));
	fopen("file", "w");
	for(i=0;i<n;i++){
		array[i] = rand()%(up-low+1)+low;	
		putw(array[i], fptr);
	}
	fclose(fptr);
	printf("Array before sorting");
	printing(array,n);
	l =0;
	quick_sort(array,0,n-1);
	printf("After Sorting");
	printing(array,n);
}

