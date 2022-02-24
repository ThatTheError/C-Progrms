#include<stdio.h>
int main()
{
	int i,n,j,fact=1,s=0;
	printf("enter the range i.e n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			fact=fact*j;	
		}
		s=s+fact;
		fact=1;
	}
	printf("the sum of factorial of the given range is %d",s);
}
