/*   Java program to print the following pattern

		*000*000*
		0*00*00*0
		00*0*0*00
		000***000          */

#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=5;j++)
		{
			if((i==j) || (j==5))
			{
				printf("*");
			}
			else
			{
				printf("0");
			}
		}
		for(k=4;k>=1;k--)
		{
			if(k==i)
			{
				printf("*");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
