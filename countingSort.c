#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void countSort(int *arr,int n,int *rarr)
{
	int max,i,*carr;
	max = arr[0];
	for(i=1;i<n;i++){
		if(arr[i]>max)
			max = arr[i];
	}
	printf("%d",max);
	carr = (int *)calloc(sizeof(int),max+1);
	for(i=0;i<n;i++)
		carr[arr[i]]++;
	for(i=1;i<=max;i++)
		carr[i]+=carr[i-1];
	for(i=n-1;i>=0;i--){
		rarr[carr[arr[i]]]=arr[i];
		carr[arr[i]]--;
	}
}
int main() {
	int *a = NULL,*rarr = NULL; 
	int i, upper, lower, n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	a = (int*)calloc(sizeof(int),n);
	rarr = (int*)calloc(sizeof(int),n+1);	
	printf("Enter the lower limit\n");
	scanf("%d",&lower);
	printf("Enter the upper limit\n");
	scanf("%d",&upper);
	time_t start;
	srand(time(NULL));
	start = time(NULL);
	printf("Array Before Sorting...");
	for(i=0;i<n-1;i++){
		a[i] = rand()%(upper-lower+1)+lower;
		printf("%d ",a[i]);
	}
	countSort(a,n,rarr);
	puts("\nArray After Sort...\n");
	for(i=1;i<=n;i++)
		printf("%d ",rarr[i]);
	return 0;
}

