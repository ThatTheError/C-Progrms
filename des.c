#include<stdio.h>
int main()
{
	int i,j,k,c=0;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(j=0;j<c;j++)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
		c+=2;
	}
}
