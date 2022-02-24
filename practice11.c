/*  Write a program in C to return the largest span found in the leftmost and 
	rightmost appearances of same value(values are inclusive) in a given array.  */
	
#include<stdio.h>
int main()
{
	int a[10],span=0,sp,i,j;
	printf("enter the elements of the array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
				sp=j-i+1;
		}
		if(sp>span)
			span=sp;
	}
	printf("the element with largest span is %d",span);
	return 0;
}
