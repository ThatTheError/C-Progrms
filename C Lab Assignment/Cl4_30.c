#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i+1;j++)
		{
			if(j==1)
			printf("+");
			else
			printf("-+");
		}
		printf("\n");
		for(k=1;k<=i+1;k++)
		{
			if(i>5)
			break;
			else
			printf("| ");
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
