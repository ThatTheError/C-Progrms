/* 		Write a program in C to rearrange an array 
	in such an order that– smallest, largest, 2nd smallest, 2nd largest and on.  */

#include<stdio.h>
int main()
{
	int a[100],b[100],i,j,temp,l,h,s;
	printf("enter the size of the array");
	scanf("%d",&s);
	printf("enter the elements of the array");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s-1;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	l=0,h=s-1;
	for(i=1;i<=s;i++)
	{
		if(i%2!=0)
		{
			b[i-1]=a[l];
			l++;
		}
		else
		{
			b[i-1]=a[h];
			h--;
		}
	}
	printf("after operation array..");
	for(i=0;i<s;i++)
		printf("%d ",b[i]);
	return 0;
}
