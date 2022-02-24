#include<stdio.h>
int main()
{
	int a1[5],a2[5],a3[10],c=0,temp,i,j;
	printf("enter the elements of 1st array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("enter the elements of 2nd array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a2[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a1[j]>a1[i])
			{
				temp=a1[j];
				a1[j]=a1[i];
				a1[i]=temp;
			}
			if(a2[j]>a2[i])
			{
				temp=a2[j];
				a2[j]=a2[i];
				a2[i]=temp;
			}
		}
		if(a1[i]>a2[i])
		{
			a3[c++]=a1[i];
			a3[c++]=a2[i];
		}
		else
		{
			a3[c++]=a2[i];
			a3[c++]=a1[i];
		}
	}
	printf("after mergin the two array in assending order the array...");
	for(i=0;i<10;i++)
	{
		printf("\t%d",a3[i]);
	}
	return 0;
}
