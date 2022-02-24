#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void countSort(int *arr,int n,int place)
{
	int *barr;
	barr = (int *)calloc(sizeof(int),n+1);
	int max=9,i,*carr;
	carr = (int *)calloc(sizeof(int),max+1);
	for(i=0;i<n;i++)
		carr[(arr[i]/place)%10]++;
	for(i=1;i<=max;i++)
		carr[i]+=carr[i-1];
	for(i=n-1;i>=0;i--){
		
		barr[carr[(arr[i]/place)%10]] = arr[i];
		carr[(arr[i]/place)%10]--;
	}
	for(i=n;i>0;i--){
		arr[i-1]=barr[i];
	}
}
void radixSort(int *arr,int n)
{
	int max,i;
	for(i=1;i<n;i++){
		if(arr[i]>max)
			max = arr[i];
	}
	for(i=1;max/i>0;i=i*10)
	{
		countSort(arr,n,i);
	}
}
int main() {
	int *a = NULL; 
	int i, upper, lower, n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	a = (int*)calloc(sizeof(int),n);	
	printf("Enter the lower limit\n");
	scanf("%d",&lower);
	printf("Enter the upper limit\n");
	scanf("%d",&upper);
	time_t start;
	srand(time(NULL));
	start = time(NULL);
	printf("Array Before Sorting...");
	for(i=0;i<n;i++){
		a[i] = rand()%(upper-lower+1)+lower;
		printf("%d ",a[i]);
	}
	radixSort(a,n);
	puts("\nArray After Sort...\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}












/*
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void countSort(int *arr,int n,int j)
{
	int *barr;
	int mod = pow(10,j);
	barr = (int *)calloc(sizeof(int),n+1);
	int max=9,i,*carr;
	carr = (int *)calloc(sizeof(int),max+1);
	for(i=0;i<n;i++)
		carr[arr[i]%mod]++;
	for(i=1;i<=max;i++)
		carr[i]+=carr[i-1];
	for(i=n-1;i>=0;i--){
		
		barr[carr[arr[i]%mod]] = arr[i];
		carr[arr[i]%mod]--;
	}
	for(i=n;i>0;i--){
		arr[i-1]=barr[i];
	}
}
void radixSort(int *arr,int n)
{
	int max,i,dc=0;
	for(i=1;i<n;i++){
		if(arr[i]>max)
			max = arr[i];
	}
	while(max>0){
		dc++;
		max=max/10;
	}
	for(i=1;i<=dc;i++)
	{
		countSort(arr,n,i);
	}
}
int main() {
	int *a = NULL; 
	int i, upper, lower, n;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	a = (int*)calloc(sizeof(int),n);	
	printf("Enter the lower limit\n");
	scanf("%d",&lower);
	printf("Enter the upper limit\n");
	scanf("%d",&upper);
	time_t start;
	srand(time(NULL));
	start = time(NULL);
	printf("Array Before Sorting...");
	for(i=0;i<n;i++){
		a[i] = rand()%(upper-lower+1)+lower;
		printf("%d ",a[i]);
	}
	radixSort(a,n);
	puts("\nArray After Sort...\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
}*/

