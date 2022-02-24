#include<stdio.h>
//#include<conio.h>
int main()
{
	int x,a[5],k,i,j,temp;
	printf("enter the elemets of the array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("original array");
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
	printf("\nafter sorting");
	for(j=0;j<4;j++)
	{
		x=i;
		for(k=j+1;k<5;k++)
		{
			if(a[j]>a[k])
				temp=a[x];
				a[x]=a[k];
				a[k]=temp;
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
	
}
