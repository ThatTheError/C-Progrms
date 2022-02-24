#include<stdio.h>
int main()
{
	int s,a[100],n,j,i,temp;
	printf("enter the size of the array");
	scanf("%d",&s);
	printf("enter the elements of the array in assending order");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("enter the no you want to insert");
	scanf("%d",&n);
	i=0;
	while(a[i]<n)
	{
		i++;
	}
	a[s+1]=0;
	for(j=s+1;j>i;j--)
	{
		temp=a[j];
		a[j]=a[j-1];
		a[j-1]=temp;
	}
	a[i]=n;
	printf("after inserting the element the array..");
	for(i=0;i<s+1;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
