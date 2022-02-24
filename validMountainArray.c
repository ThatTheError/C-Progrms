#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,*array,n,target;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	array = (int *)malloc(sizeof(int)*n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	if(n<3){
		printf("False\n");
		return ;
	} //0 3 2 1 0
	target=array[0],i=1;
	while(array[i]>target && i<n-1){target=array[i];i++;}
	target=array[i-1];
	for(j=i;j<n;j++){
		if(array[j]<target)
			target=array[j];
		else
			break;
	}
	if(j==n)
		printf("True\n");
	else
		printf("False\n");
	return 0;
}
