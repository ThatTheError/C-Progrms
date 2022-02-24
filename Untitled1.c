#include<stdio.h>
#include<stdlib.h>
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
void binary_search(int *array,int ele,int n)
{
	int l=0,u=n,mid;
	while(l<=u){
		mid = l+u/2;
		if(array[mid] == ele){
			printf("Element is present in the array");
			break;
		}
		else if(array[mid]>ele)
			u = mid-1;
		else
			l = mid+1;
	}
}
void main()
{
	int n,*array,l,u,i,ele;
	printf("Enter the size of the array");
	scanf("%d",&n);
	array = (int *)malloc(sizeof(int)*n);
	printf("Enter the lower limit");
	scanf("%d",&l);
	printf("Enter the upper limit");
	scanf("%d",&u);
	srand(time(NULL));
	for(i=0;i<n;i++)
		array[i] = rand()%(u-l+1)+l;
	selection_sort(array,n);
	printf("Enter the element you want to search");
	scanf("%d",&ele);
	binary_search(array,ele,n);
}
