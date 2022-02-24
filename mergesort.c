#include<stdio.h>
#include<stdlib.h>
int c=0,*a2;
void mergesort(int[], int, int);
void merge(int[], int, int, int);
void main() {
	int n,*a,i,upper,lower,min,temp;
	printf("Enter size of the array\n");
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	a2=(int *)malloc(sizeof(int)*n);
	printf("Enter lower limit\n");
	scanf("%d",&lower);
	printf("Enter upper limit\n");
	scanf("%d",&upper);
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		a[i]=rand()%(upper-lower+1)+lower;
		printf("%d ",a[i]);
	}
  	mergesort(a ,0, n);
  	printf("\n");
  	for (i = 0; i < n; i++) {
  		printf("%d, ", a2[i]);
  	}
}	
void mergesort(int a[], int lb, int ub) {
	int mid;
 	if (lb < ub) {
 		mid = (lb + ub) / 2;
 	   	mergesort(a,lb, mid);
 	   	mergesort(a,mid + 1, ub);
 	   	merge(a, lb, mid, ub);
 	}
}	
void merge(int a[],int lb, int mid, int ub) {
	int n,i=lb,j=mid+1;
	if((mid-lb)>(ub-mid))
		n = mid-lb;
	else
		n = ub-mid;
	while(c<n){
		if(a[i]<a[j]){
			a2[c]=a[i];
			i++;
		}
		else
		{
			a2[c]=a[j];
			j++;
		}
		//printf("%d ",a2[c]);
		c++;
	}		
	for(i=n;i<ub;i++)
		a2[i]=a[i];						
}	
