// c program to print the missing numbers in an array

#include<stdio.h>
int main()
{
	int s,a[s],i,j,f,l,c=1;
	printf("enter the size of the array");
	scanf("%d",&s);
	printf("enter the elements of the array");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}	
	f=a[0];
	printf("the missing numbers are\n");
	for(i=c++;i<s;i++)
	{
		if(f+1!=a[i])
		{
			while(f++<a[i]-1)
			{
				printf("%d ",f);
			}
		}
		else
		{
			f++;
		}
	}
	return 0;
}

