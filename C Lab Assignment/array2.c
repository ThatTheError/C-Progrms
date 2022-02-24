// program to left shift the elemets of the array
#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7},i,j,temp;
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<=i+1;j++)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	printf("after left shifting the array..");
	for(i=0;i<=6;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
