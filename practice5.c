#include<stdio.h>
int main()
{
	int a[10],n,i,j;
	printf("enter the elements of the array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the no");
	scanf("%d",&n);
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]+a[j]==n)
				printf("\nthe paired no is %d and %d",a[i],a[j]);
		}
	}
	return 0;
}
