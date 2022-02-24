/*  Given array contains N elements, from 0 to N – 1. 
	All elements within the range may not be present in the array. 
	There will be -1 if an element within the range is not present in the array.  */

#include<stdio.h>
int main()
{
	int a[100],b[100],c=0,i,j,s;
	printf("enter the size of the array");
	scanf("%d",&s);
	printf("enter the elements of the array");
	for(i=0;i<s;i++)
		scanf("%d",&a[i]);
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			if(a[j]==i)
				c++;
		}
		if(c>0)
			b[i]=i;
		else
			b[i]=-1;
		c=0;
	}
	printf("after operation the array..");
	for(i=0;i<10;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
