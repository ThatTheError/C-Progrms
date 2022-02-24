#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void selection_sort(int *array,int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++){
		min = i;
		for(j=i+1;j<n;j++){
			if(array[min]>array[j])
				min = j;
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
}
int binary_search(int *array,int ele,int n)
{
	int l=0,u=n,mid;
	while(l<=u)
	{
		mid =(l+u)/2;
		if(array[mid] == ele)
			return(mid);
		else if(array[mid] > ele)
			u = mid-1;
		else
			l = mid+1;
	}	
	return(-1);
}
int linear_search(int *array,int ele,int n)
{
	int i;
	for(i=0;i<n;i++){
		if(array[i] == ele)
			return(i);
	}
	return(-1);
}
void main()
{
	time_t begin, end;
	int n,*array,l,u,i,ele,x;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	array = (int *)malloc(sizeof(int)*n);
	printf("Enter the lower limit\n");
	scanf("%d",&l);
	printf("Enter the upper limit\n");
	scanf("%d",&u);
	srand(time(NULL));
	for(i=0;i<n;i++){
		array[i] = rand()%(u-l+1)+l;
		printf("%d ",array[i]);
	}
	printf("\nEnter the element you want to search\n");
	scanf("%d",&ele);
	printf("\nLINEAR SEARCH\n");
	begin = time(NULL);
	x = linear_search(array,ele,n);
	end = time(NULL);
	if(x>0)
		printf("Entered Number is present in index %d",x);
	else
		printf("Entered element is not present\n");
	printf("\nTime taken for Linear Search = %ld, start = %ld, end =  %ld",end-begin, begin, end);
	selection_sort(array,n);
	printf("\nAfter Sorting\n");
	for(i=0;i<n;i++){
		printf("%d ",array[i]);
	}
	printf("\nBINARY SEARCH\n");
	begin = time(NULL);
	x = binary_search(array,ele,n);
	if(x>0)
		printf("Entered Number is present in index %d",x);
	else
		printf("Entered element is not present\n");
	end = time(NULL);
	printf("\nTime taken for Binary Search = %ld, start = %ld, end =  %ld",end-begin, begin, end);
}
																																						
